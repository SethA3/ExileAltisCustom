waitUntil{!isNull (findDisplay 46)};
sleep 10;
playsound "intro";
_role1 = "BitCoinGamerz.com";
_role1names = ["Exile Altis by You"];
_role2 = "Custom Scripts";
_role2names = ["Virtual Garage","Towing and Sling","Custom Traders","AI Missions","Capture Points","XM8 Deploy Bike","XM8 Recipies"];
_role3 = "Rules";
_role3names = ["Toxicity wont be tolerated, play Respectfully, Responsibly and Fair"];
_role4 = "Website";
_role4names = ["www.YourWebsite.com"];
_role5 = "Teamspeak";
_role5names = ["TBD"];
_role6 = "Server Hosting";
_role6names = ["Quality Server Hosting At Quality Pricing"];
_role7 = "Play Fair And Enjoy";
_role7names = ["Join us on the forums or Teamspeak! Check your XM8 Info app for more details"];
_role8 = "Stat Sync";
_role8names = ["You Stats Sync Between our Exile Servers!"]
_onScreenTime = 8;
{
	sleep 2;
	_memberFunction = _x select 0;
	_memberNames = _x select 1;
	_finalText = format ["<t size='0.75' color='#35D4FC' align='right' font='OrbitronMedium'>%1<br /></t>", _memberFunction];
	_finalText = _finalText + "<t size='0.50' color='#FFFFFF' align='right' font='OrbitronLight'>";
	{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
	_finalText = _finalText + "</t>";
	_onScreenTime + (((count _memberNames) - 1) * 0.5);
	[
		_finalText,
		[safezoneX + safezoneW - 0.8,0.50],
		[safezoneY + safezoneH - 0.8,0.7],
		_onScreenTime,
		0.5
	] spawn BIS_fnc_dynamicText;
	sleep (_onScreenTime);
} forEach [
	[_role1, _role1names],
	[_role2, _role2names],
	[_role3, _role3names],
	[_role4, _role4names],
	[_role5, _role5names],
	[_role6, _role6names],
	[_role7, _role7names],
	[_role8, _role8names]
];
