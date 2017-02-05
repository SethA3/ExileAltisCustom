_XG_KillConfig = 1;
_XG_colorVictim = "#34D4FC";
_XG_ColorKiller = "#34D4FC";
_XG_ColorVW = "#34D4FC";
_XG_ColorText = "#FFFFFF";
params[["_PV",""],["_type",""],["_killer",objNull],["_victim",objNull],"_message"];
_vehicle = vehicle _killer;
switch (_PV) do
{
	case "Vehicle":
	{
		switch (_XG_KillConfig) do
		{
			case 1:
			{
				_display = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "icon");
				_message = format["<t color='%4'>%1</t> <t color='%7'>killed</t> <t color='%5'>%2</t> <t color='%7'>with</t> <img image='%3' color='%6' size='2'/>",(name _killer),(name _victim),_display,_XG_colorKiller,_XG_ColorVictim,_XG_ColorVW,_XG_ColorText];
			};
		};
	};
	case "Player":
	{
		switch (_XG_KillConfig) do
		{
			case 1:
			{
				switch (_type) do
				{
					case "Weapon":
					{
						_display = getText(configFile >> "CfgWeapons" >> (currentWeapon _killer) >> "picture");
						_message = format["<t color='%4'>%1</t> <t color='%7'>killed</t> <t color='%6'>%2</t> <t color='%7'>with</t> <img image='%3' size='2'/> <t color='%7'>from</t> <t color='%5'>[%8m]</t>",(name _killer),(name _victim),_display,_XG_colorKiller,_XG_ColorVW,_XG_ColorVictim,_XG_ColorText,round((position _killer) distance (position _victim))];
					};
					case "NoWeapon":
					{
						_message = format["<t color='%3'>%1</t> <t color='%5'>killed</t> <t color='%4'>%2</t> <t color='%5'>without a gun!</5>",(name _killer),(name _victim),_XG_ColorKiller,_XG_colorVictim,_XG_ColorText];
					};
				};
			};
		};
	};
	case "Exile":
	{
		switch(_type) do
		{
			case "Unknown":
			{
				_message = format["<t color='%2'>%1</t> <t color='%3'>died for an unknown reason</t>",(name _victim),_XG_colorVictim,_XG_ColorText];
			};
			case "Suicide":
			{
				_message = format["<t color='%2'>%1</t> <t color='%3'>commited suicide</t>",(name _victim),_XG_colorVictim,_XG_ColorText];
			};
			case "Roulette":
			{
				_message = format["<t color='%2'>%1</t> <t color='%3'>died while playing Russian Roulette</t>",(name _victim),_XG_colorVictim,_XG_ColorText]
			};
			case "Crashed":
			{
				_message = format["<t color='%2'>%1</t> <t color='%3'>crashed to death</t>",(name _victim),_XG_colorVictim,_XG_ColorText];
			};
			case "NPC":
			{
				_message = format["<t color='%2'>%1</t> <t color='%3'>was killed by an NPC</t>",(name _victim),_XG_colorVictim,_XG_ColorText];
			};
			case "TK":
			{
				_message = format["<t color='%5'>%4</t> <t color='%3'>team-killed</t> <t color='%2'>%1</t>",(name _victim),_XG_colorVictim,_XG_ColorText,(name _killer),_XG_ColorKiller];
			};
		};
	};
};
_rscLayer = "KillMessages" call BIS_fnc_rscLayer;
_rscLayer cutRsc ["KillMessages", "PLAIN", 0, false];
_display = uiNamespace getVariable ["KillMessages",displayNull];
(_display displayCtrl 1000) ctrlSetStructuredText parseText _message;