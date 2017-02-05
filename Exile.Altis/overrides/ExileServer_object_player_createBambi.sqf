/**
 * ExileServer_object_player_createBambi
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_requestingPlayer","_spawnLocationMarkerName","_bambiPlayer","_accountData","_direction","_position","_spawnAreaPosition","_spawnAreaRadius","_clanID","_clanData","_clanGroup","_player","_devFriendlyMode","_devs","_parachuteNetID","_spawnType","_parachuteObject"];
_sessionID = _this select 0;
_requestingPlayer = _this select 1;
_spawnLocationMarkerName = _this select 2;
_bambiPlayer = _this select 3;
_accountData = _this select 4;
_direction = random 360;
if ((count ExileSpawnZoneMarkerPositions) isEqualTo 0) then 
{
	_position = call ExileClient_util_world_findCoastPosition;
	if ((toLower worldName) isEqualTo "namalsk") then 
	{
		while {(_position distance2D [76.4239, 107.141, 0]) < 100} do 
		{
			_position = call ExileClient_util_world_findCoastPosition;
		};
	};
}
else 
{
	_spawnAreaPosition = getMarkerPos _spawnLocationMarkerName;
	_spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
	_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
	while {surfaceIsWater _position} do 
	{
		_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
	};
};
_name = name _requestingPlayer;
_clanID = (_accountData select 3);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
	_clanID = -1;
	_clanData = [];
}
else
{
	_clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
	if(isNull (_clanData select 5))then
	{
		_clanGroup = createGroup independent;
		_clanData set [5,_clanGroup];
		_clanGroup setGroupIdGlobal [_clanData select 0];
		missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
	}
	else
	{
		_clanGroup = (_clanData select 5);
	};
	[_player] joinSilent _clanGroup;
};
_bambiPlayer setPosATL [_position select 0,_position select 1,0];
_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true]; 
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0]; 
_bambiPlayer setVariable ["ExileName", _name]; 
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer]; 
_bambiPlayer setVariable ["ExileIsBambi", true];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];
_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
	_devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
	{
		if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith 
		{
			if((name _requestingPlayer) isEqualTo (_x select 1))then
			{
				_bambiPlayer setVariable ["ExileMoney", 500000, true];
				_bambiPlayer setVariable ["ExileScore", 100000];
			};
		};
	}
	forEach _devs;
};
_parachuteNetID = "";
if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteSpawning")) isEqualTo 1) then
{
	_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")]; 
	if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "haloJump")) isEqualTo 1) then
	{
		_bambiPlayer addBackpackGlobal "B_Parachute";
		_bambiPlayer setPosATL _position;
		_spawnType = 2;
	}
	else 
	{
		_parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
		_parachuteObject setDir _direction;
		_parachuteObject setPosATL _position;
		_parachuteObject enableSimulationGlobal true;
		_parachuteNetID = netId _parachuteObject;
		_spawnType = 1;
	};
}
else
{
	_spawnType = 0;
};

//set VIP status
if ((_accountData select 5) == 1) then 
{
	_bambiPlayer setVariable ["isVIP", true, true];
}
else
{
	_bambiPlayer setVariable ["isVIP", false, true];
};

if (_bambiPlayer getVariable["isVIP",false] && !(profileNamespace getVariable ["rgs_sfk",false])) then
{
	_score = (_accountData select 0);
	if(_score > 4999 && _score < 15000) then {   // TIER 1
		clearWeaponCargo _bambiPlayer; // clears items
		clearMagazineCargo _bambiPlayer; // clears items
		systemChat "5 - 15k Respect Loadout Attached!";
		_bambiPlayer forceAddUniform "U_B_CombatUniform_mcam"; // adds uniforms
		_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
		_bambiPlayer addVest "V_PlateCarrier1_blk";
		_bambiPlayer addWeapon "CUP_smg_MP5SD6";
		_bambiPlayer addMagazines ["CUP_30Rnd_9x19_MP5", 3];
		_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
		_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];			
		_bambiPlayer addWeapon "Exile_Item_XM8";
		_bambiPlayer addWeapon "ItemCompass";
		_bambiPlayer addWeapon "ItemMap";
		_bambiPlayer addWeapon "ItemRadio";
		_bambiPlayer addItemToVest "Exile_Item_EMRE";
		_bambiPlayer addItemToVest "Exile_Item_EnergyDrink";
		_bambiPlayer addItemToUniform "Exile_Item_Bandage";
	} else {
		if(_score > 14999 && _score < 30000) then { // TIER 2
			clearWeaponCargo _bambiPlayer;
			clearMagazineCargo _bambiPlayer;
			systemChat "15 - 30k Respect Loadout Attached!";
			_bambiPlayer forceAddUniform "U_O_OfficerUniform_ocamo"; // adds uniforms
			_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
			_bambiPlayer addVest "V_Chestrig_blk";
			_bambiPlayer addWeapon "CUP_arifle_M4A1_black";
			_bambiPlayer addPrimaryWeaponItem "optic_ACO_grn_smg";			
			_bambiPlayer addMagazines ["CUP_30Rnd_556x45_Stanag", 4];
			_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
			_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];				
			_bambiPlayer addWeapon "Exile_Item_XM8";
			_bambiPlayer addWeapon "ItemCompass";
			_bambiPlayer addWeapon "ItemMap";
			_bambiPlayer addWeapon "ItemRadio";
			_bambiPlayer addItemToVest "Exile_Item_EMRE";
			_bambiPlayer addItemToVest "Exile_Item_EnergyDrink";
			_bambiPlayer addItemToVest "Exile_Item_Vishpirin";
			_bambiPlayer addItemToUniform "Exile_Item_Bandage";
		} else {
			if(_score > 29999 && _score < 45000) then { // TIER 3
				clearWeaponCargo _bambiPlayer;
				clearMagazineCargo _bambiPlayer;
				systemChat "30 - 45k Respect Loadout Attached!";
				_bambiPlayer forceAddUniform "U_B_CTRG_1"; // adds uniforms
				_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
				_bambiPlayer addVest "V_PlateCarrierH_CTRG";
				_bambiPlayer addWeapon "CUP_arifle_AKM";
				_bambiPlayer addPrimaryWeaponItem "CUP_optic_Kobra";	
				_bambiPlayer addMagazines ["CUP_30Rnd_762x39_AK47_M", 4];
				_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
				_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];					
				_bambiPlayer addWeapon "Exile_Item_XM8";
				_bambiPlayer addWeapon "ItemCompass";
				_bambiPlayer addWeapon "ItemMap";
				_bambiPlayer addWeapon "ItemRadio";
				_bambiPlayer addItemToVest "Exile_Item_EMRE";
				_bambiPlayer addItemToVest "Exile_Item_EnergyDrink";
				_bambiPlayer addItemToVest "Exile_Item_InstaDoc";
				_bambiPlayer addItemToUniform "Exile_Item_Bandage";
			} else {
				if(_score > 44999 && _score < 60000) then { // TIER 4
					clearWeaponCargo _bambiPlayer;
					clearMagazineCargo _bambiPlayer;
					systemChat "45 - 60k Respect Loadout Attached!";
					_bambiPlayer forceAddUniform "U_B_T_Soldier_SL_F"; // adds uniforms
					_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
					_bambiPlayer addVest "V_PlateCarrierSpec_blk";
					_bambiPlayer addBackpack "B_AssaultPack_tna_F";
					_bambiPlayer addWeapon "CUP_arifle_FNFAL_railed";
					_bambiPlayer addPrimaryWeaponItem "optic_Arco_blk_F";
					_bambiPlayer addMagazines ["CUP_20Rnd_762x51_FNFAL_M", 4];
					_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
					_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 4];						
					_bambiPlayer addWeapon "Exile_Item_XM8";
					_bambiPlayer addWeapon "ItemCompass";
					_bambiPlayer addWeapon "ItemMap";
					_bambiPlayer addWeapon "ItemRadio";
					_bambiPlayer addWeapon "ItemGPS";
					_bambiPlayer addWeapon "Binocular";
					_bambiPlayer addItemToUniform "Exile_Item_Bandage";
					_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
					_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
					_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
					_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
					_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
				} else {
					if(_score > 59999 && _score < 85000) then { // TIER 5
						clearWeaponCargo _bambiPlayer;
						clearMagazineCargo _bambiPlayer;
						systemChat "60 - 85k Respect Loadout Attached!";
						_bambiPlayer forceAddUniform "Exile_Uniform_Woodland"; // adds uniforms
						_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
						_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
						_bambiPlayer addBackpack "B_FieldPack_ghex_F";
						_bambiPlayer addWeapon "CUP_srifle_CZ750";
						_bambiPlayer addPrimaryWeaponItem "optic_SOS";
						_bambiPlayer addMagazines ["CUP_10Rnd_762x51_CZ750", 5];
						_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
						_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];							
						_bambiPlayer addWeapon "Exile_Item_XM8";
						_bambiPlayer addWeapon "ItemCompass";
						_bambiPlayer addWeapon "ItemMap";
						_bambiPlayer addWeapon "ItemRadio";
						_bambiPlayer addWeapon "ItemGPS";
						_bambiPlayer addWeapon "Binocular";
						_bambiPlayer addItemToUniform "Exile_Item_Bandage";
						_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
						_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
						_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
						_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
						_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
						_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
					} else {
						if(_score > 84999 && _score < 100000) then { // TIER 6
							clearWeaponCargo _bambiPlayer;
							clearMagazineCargo _bambiPlayer;
							systemChat "85 - 100k Respect Loadout Attached!";
							_bambiPlayer forceAddUniform "Exile_Uniform_Woodland"; // adds uniforms
							_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
							_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
							_bambiPlayer addBackpack "B_ViperHarness_blk_F";
							_bambiPlayer addWeapon "CUP_arifle_Mk20";
							_bambiPlayer addMagazines ["CUP_20Rnd_762x51_B_SCAR", 5];
							_bambiPlayer addPrimaryWeaponItem "CUP_optic_SB_11_4X20_PM";		
							_bambiPlayer addPrimaryWeaponItem "CUP_muzzle_snds_SCAR_H";						
							_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
							_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];								
							_bambiPlayer addWeapon "Exile_Item_XM8";
							_bambiPlayer addWeapon "ItemCompass";
							_bambiPlayer addWeapon "ItemMap";
							_bambiPlayer addWeapon "ItemRadio";
							_bambiPlayer addWeapon "ItemGPS";
							_bambiPlayer addWeapon "Binocular";
							_bambiPlayer addItemToUniform "Exile_Item_Bandage";
							_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
							_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
							_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
							_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
							_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
							_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
						} else {
							if(_score > 99999 && _score < 115000) then { // TIER 7
								clearWeaponCargo _bambiPlayer;
								clearMagazineCargo _bambiPlayer;
								systemChat "100 - 115k Respect Loadout Attached!";
								_bambiPlayer forceAddUniform "U_O_GhillieSuit"; // adds uniforms
								_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
								_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
								_bambiPlayer addBackpack "B_Carryall_ghex_F";
								_bambiPlayer addWeapon "srifle_DMR_02_sniper_F";
								_bambiPlayer addMagazines ["10Rnd_338_Mag", 5];
								_bambiPlayer addPrimaryWeaponItem "Optic_AMS_snd";		
								_bambiPlayer addPrimaryWeaponItem "muzzle_snds_338_sand";		
								_bambiPlayer addPrimaryWeaponItem "bipod_01_F_snd";									
								_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
								_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];								
								_bambiPlayer addWeapon "Exile_Item_XM8";
								_bambiPlayer addWeapon "ItemCompass";
								_bambiPlayer addWeapon "ItemMap";
								_bambiPlayer addWeapon "ItemRadio";
								_bambiPlayer addWeapon "ItemGPS";
								_bambiPlayer addWeapon "Rangefinder";
								_bambiPlayer addItemToUniform "Exile_Item_Bandage";
								_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
								_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
								_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
								_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
								_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
								_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
							} else {
								if(_score > 114999 && _score < 140000) then { // TIER 8
									clearWeaponCargo _bambiPlayer;
									clearMagazineCargo _bambiPlayer;
									systemChat "115 - 140k Respect Loadout Attached!";
									_bambiPlayer forceAddUniform "U_B_FullGhillie_ard"; // adds uniforms
									_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
									_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
									_bambiPlayer addBackpack "B_Bergen_hex_F";
									_bambiPlayer addWeapon "srifle_DMR_05_blk_F";
									_bambiPlayer addMagazines ["10Rnd_93x64_DMR_05_Mag", 5];
									_bambiPlayer addPrimaryWeaponItem "optic_DMS";		
									_bambiPlayer addPrimaryWeaponItem "muzzle_snds_93mmg";		
									_bambiPlayer addPrimaryWeaponItem "bipod_01_F_blk";										
									_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
									_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];								
									_bambiPlayer addWeapon "Exile_Item_XM8";
									_bambiPlayer addWeapon "ItemCompass";
									_bambiPlayer addWeapon "ItemMap";
									_bambiPlayer addWeapon "ItemRadio";
									_bambiPlayer addWeapon "ItemGPS";
									_bambiPlayer addWeapon "Rangefinder";
									_bambiPlayer addItemToUniform "Exile_Item_Bandage";
									_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
									_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
									_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
									_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
									_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
									_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
									_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
									} else {
										if(_score > 139999 && _score < 165000) then { // TIER 9
										clearWeaponCargo _bambiPlayer;
										clearMagazineCargo _bambiPlayer;
										systemChat "140 - 165k Respect Loadout Attached!";
										_bambiPlayer forceAddUniform "U_B_FullGhillie_ard"; // adds uniforms
										_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
										_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
										_bambiPlayer addBackpack "B_Bergen_hex_F";
										_bambiPlayer addWeapon "srifle_GM6_F";
										_bambiPlayer addMagazines ["5Rnd_127x108_Mag", 5];
										_bambiPlayer addPrimaryWeaponItem "optic_LRPS";																									
										_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
										_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];
										_bambiPlayer addWeapon "Exile_Item_XM8";
										_bambiPlayer addWeapon "ItemCompass";
										_bambiPlayer addWeapon "ItemMap";
										_bambiPlayer addWeapon "ItemRadio";
										_bambiPlayer addWeapon "ItemGPS";
										_bambiPlayer addWeapon "Laserdesignator";
										_bambiPlayer addItemToUniform "Exile_Item_Bandage";
										_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
										_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
										_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";	
										_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
										_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";						
										_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
										_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
									} else {
										if(_score > 164999) then { // TIER 10
											clearWeaponCargo _bambiPlayer;
											clearMagazineCargo _bambiPlayer;
											systemChat "165k+ Respect Loadout Attached!";
											_bambiPlayer forceAddUniform "U_B_FullGhillie_ard"; // adds uniforms
											_bambiPlayer addHeadgear "H_HelmetB_snakeskin"; 
											_bambiPlayer addVest "V_PlateCarrierGL_tna_F";
											_bambiPlayer addBackpack "B_Bergen_hex_F";
											_bambiPlayer addWeapon "CUP_srifle_M107_Base";
											_bambiPlayer addMagazines ["CUP_10Rnd_127x99_M107", 5];
											_bambiPlayer addPrimaryWeaponItem "optic_LRPS";																							
											_bambiPlayer addWeapon "hgun_Pistol_heavy_01_F";
											_bambiPlayer addMagazines ["11Rnd_45ACP_Mag", 3];
											_bambiPlayer addMagazines ["CUP_HandGrenade_M67", 3];															
											_bambiPlayer addWeapon "Exile_Item_XM8";
											_bambiPlayer addWeapon "ItemCompass";
											_bambiPlayer addWeapon "ItemMap";
											_bambiPlayer addWeapon "ItemRadio";
											_bambiPlayer addWeapon "ItemGPS";
											_bambiPlayer addWeapon "Laserdesignator";
											_bambiPlayer addItemToUniform "Exile_Item_Bandage";
											_bambiPlayer addItemToBackpack "Exile_Item_EMRE";
											_bambiPlayer addItemToBackpack "Exile_Item_EnergyDrink";
											_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";	
											_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";
											_bambiPlayer addItemToBackpack "Exile_Item_InstaDoc";					
											_bambiPlayer addItemToBackpack "Exile_Item_Vishpirin";
											_bambiPlayer addItemToBackpack "Exile_Item_DuctTape";
										};
									};
								};
							};
						};									
					};
				};
			};
		};
	};
};

_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
[
	_sessionID, 
	"createPlayerResponse", 
	[
		_bambiPlayer, 
		_parachuteNetID, 
		str (_accountData select 0),
		(_accountData select 1),
		(_accountData select 2),
		100,
		100,
		0,
		(getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60, 
		_clanData,
		_spawnType
	]
] 
call ExileServer_system_network_send_to;
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;
true