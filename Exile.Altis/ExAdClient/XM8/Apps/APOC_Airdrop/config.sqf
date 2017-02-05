scriptName "config.sqf";
/*--------------------------------------------------------------------
// ******************************************************************************************
// * This script is licensed under the GNU Lesser GPL v3.
// ******************************************************************************************
	file: config.sqf
	======
	Author: Bill Springer <Apoc@MayhemServers.com>
	Description: XM8 App config for ExAd APOC Airdrop Port
--------------------------------------------------------------------*/
#include "functions.sqf"; //Dialog functions for the client

/* ************************************ */

APOC_AA_AdvancedBanking = false;		// Advanced Banking support. Change false to true if you run Advanced Banking on your server.  Not sure of 0.9.8 compatability.
APOC_AA_UseExileLockerFunds = true;	//Removes funds from player's locker stash instead of their hand
APOC_AA_DamageOnWhenLanded = true;		//Turn object allowDamage back on when object is on ground, instead of when in 'chute

APOC_AA_coolDownTime = 60; //Expressed in sec

APOC_AA_Drops =[
/*
	["Category Name",
		[
			["Text displayed to player",	"Name of vehicle or drop box",	cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
		] //If something breaks with your list of drops, you've likely messed up the nested arrays.
	]
*/

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
	["Vehicles",
		[
			["Quadbike", 		"C_Quadbike_01_red_F", 							1200, 	"vehicle",1000],
			["Kart", 		    "Exile_Car_Kart_Yellow", 			        	1500, 	"vehicle",1000],
			["Golf Hello Kitty","CUP_C_Golf4_kitty_Civ",						4500, 	"vehicle",1000],
			["Offroad",			"B_GEN_Offroad_01_gen_F",						5500, 	"vehicle",1000],
			["Strider", 		"Exile_Car_Strider", 							55000, 	"vehicle",1000],
			["Little Bird", 	"Exile_Chopper_Hummingbird_Civillian_Shadow", 	7000, 	"vehicle",1000]
		]
	],

	["Weapons",
		[
			["SURVIVAL PACK", 		"airdrop_SURVIVAL_PACK", 		8000, "supply",1000],
			["ASSAULT PACK", 		"airdrop_ASSAULT_PACK", 		10000, "supply",1000],
			["MARKSMEN", 		    "airdrop_MARKSMEN", 		    15000, "supply",1000],
			["HEAVY SNIPER PACK",   "airdrop_HEAVY_SNIPER_PACK", 	25000, "supply",1000]
		]
	],

	["Supplies",
		[
			["Field Support Box",   "airdrop_SUPPORT",			    5000, "supply"]
		]
	]
];

APOC_AA_Drop_Contents =[
	["airdrop_SURVIVAL_PACK",  //Name of the drop
		[
		// Item type, Item class(es), # of items, # of magazines per weapon
		// Valid item types: wep, itm, or bac.
			["wep", ["CUP_srifle_LeeEnfield_rail"],		1, 4],
			["itm", ["optic_ACO_grn_smg"],                 1],
			["itm", ["CUP_U_I_GUE_Anorak_01"],             1],
			["itm", ["CUP_V_BAF_Osprey_Mk2_DDPM_Empty"],   1],
			["itm", ["CUP_bipod_VLTOR_Modpod"],            1],
			["itm", ["Binocular"],                         1],
			["bac", ["CUP_B_ACRScout_m95"],                1]
		]
	],

	["airdrop_ASSAULT_PACK",
		[
			["wep", ["arifle_MX_SW_Black_F"],	        1, 4],
			["wep", ["hgun_Pistol_heavy_01_MRD_F"],		1, 3],
			["itm", ["Exile_Uniform_Woodland"],            1],
			["itm", ["V_PlateCarrier_Kerry"],              1],
			["bac", ["B_Kitbag_rgr"],                      1],
			["itm", ["CUP_H_USArmy_Helmet_M1_m81"],        1],
			["itm", ["NVGoggles_INDEP"],                   1],
			["itm", ["optic_Hamr"],                        1],
			["itm", ["acc_pointer_IR"],                    1],
			["itm", ["muzzle_snds_H"],                     1],
			["itm", ["CUP_bipod_Harris_1A2_L"],            1],
			["itm", ["Binocular"],                         1],
			["itm", ["Exile_Item_Vishpirin"],              2],
			["itm", ["Exile_Item_EMRE"],                   2],
			["itm", ["Exile_Item_EnergyDrink"],            1]
		]
	],
	
	["airdrop_MARKSMEN",
		[
			["wep", ["CUP_srifle_M110"],	            1, 6],
			["wep", ["hgun_Pistol_heavy_01_MRD_F"],		1, 3],
			["itm", ["CUP_optic_SB_11_4x20_PM"],           1],
			["itm", ["acc_pointer_IR"],                    1],
			["itm", ["CUP_muzzle_snds_M110"],              1],
			["itm", ["CUP_bipod_VLTOR_Modpod"],            1],
			["itm", ["U_BG_leader"],                       1],
			["itm", ["V_PlateCarrierH_CTRG"],              1],
			["bac", ["CUP_B_ACRPara_m95"],                 1],
			["itm", ["H_Shemag_olive"],                    1],
			["itm", ["NVGoggles_INDEP"],                   1],
			["itm", ["Exile_Item_Magazine01"],             3],
			["itm", ["Exile_Item_Vishpirin"],              2],
			["itm", ["Exile_Item_EMRE"],                   2],
			["itm", ["Exile_Item_EnergyDrink"],            3],
			["itm", ["Rangefinder"],                       1]
		]
	],

	["airdrop_HEAVY_SNIPER_PACK",
		[
			["wep", ["srifle_LRR_camo_F"],	            1, 5],
			["itm", ["optic_SOS"],		           		   1],
			["itm", ["U_I_GhillieSuit"],                   1],
			["itm", ["CUP_V_BAF_Osprey_Mk2_DDPM_Scout"],   1],
			["itm", ["CUP_NVG_HMNVS"],                     1],
			["bac", ["CUP_B_ACRPara_m95"],                 1],
			["itm", ["H_Shemag_olive"],                    1],
			["itm", ["NVGoggles_INDEP"],                   1],
			["itm", ["Exile_Item_Magazine01"],             3],
			["itm", ["Exile_Item_Vishpirin"],              2],
			["itm", ["Exile_Item_EMRE"],                   2],
			["itm", ["Exile_Item_EnergyDrink"],            3],
			["itm", ["Rangefinder"],                       1]
		]
	],
	
	["airdrop_SUPPORT",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_EnergyDrink","Exile_Item_Bandage"],     5],
			["itm", ["Exile_Item_InstaDoc","Exile_Item_DuctTape","Exile_Item_Magazine03"], 3],
			["bac", ["CUP_B_GER_Pack_Tropentarn"],                                         1]
		]
	]

];