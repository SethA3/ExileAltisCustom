///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};

[] execVM "addons\welcome\welcome.sqf";
[] execVM "Custom\KillMessages.sqf";

///////////////////////////////////////////////////////////////////////////
// Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 45.4546;
_workBench setPosATL [14587.8, 16758.7, 0.0938587];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 131.818;
_cashDesk setPosATL [14589.8, 16778.2, -0.0701294];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 208.182;    
_chair setPosATL [14568.1, 16764.3, 0.084837];

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [14571.5, 16759.1, 0.126438],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Specops Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [14566.3, 16773.2, 0.126438],
    140
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Office Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [14599.6, 16774.6, 5.12644],
    220
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14608.4, 16901.3, 0],
    270
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [14596.5, 16752.9, 0.12644],
    133
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [14635, 16790.3, 0],
    156.294
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [14603.7, 16877.3, 0.00143433],
    90
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 355.455;
_carWreck setPosATL [14605.6, 16877.3, 0.0208359];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [14617.2, 16888.4, 0],
    269.96
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
    "",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [14564.9,16923.4,0.00146294],
    323.53
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [14626.3,16834.6,4.72644],
    326.455
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 03
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [14577.1,16793.1,3.75118],
    313.349
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [2950.52,18195.3,4.93399],
    179.092
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Boat Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2914.35,18192.9,8.51858],
    88.3346
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [2980.19,18146.2,1.06391],
    222.352
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 130.966;    
_carWreck setPosATL [2978.76,18144.5,1.13293];

///////////////////////////////////////////////////////////////////////////
// Western Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [2984.05,18133.4,0.00107765],
    29.3856
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Fast Food Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2979.87,18184.9,2.55185],
    89.2952
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Equipment Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2980.7,18192.9,2.49853],
    130.535
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Armory Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2986.43,18178.5,1.66267],
    296.855
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [2993.2,18167,0.353821],
    109.888
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 222.727;
_cashDesk setPosATL [23353.1, 24168, 0.16585];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Boat Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [23296.6,24189.8,5.61213],
    96
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [23385.6,24191.6,0.00136566],
    123
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 47.2728;    
_carWreck setPosATL [23387.3, 24190.3, 0.05];

///////////////////////////////////////////////////////////////////////////
// Eastern Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 279.545;
_workBench setPosATL [23371.6, 24188, 0.89873];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [23379.9, 24169.3, 0.199955],
    206
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 12.7272;
_chair setPosATL [23379.6, 24169.3, 4.56662];

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [23336.6,24214.4,0.00115061],
    346
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Russian Roulette
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_RussianRoulette",
    "",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14622.6, 16820.1, 0.126],
    187.428
]
call ExileClient_object_trader_create;

// 14 NPCs
private _npcs = [
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_09", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [9151.18, 21637.5, 14.8528], [0.769756, 0.638338, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_20", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [9148.68, 21642.2, 14.8558], [0.798561, 0.601913, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_idle1"], "Exile_Trader_Vehicle", "WhiteHead_16", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16804.7, 13615.1, 9.73148], [-0.225563, -0.974229, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_12", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Aviator",[],["","","","","",""]], [16732.1, 13412.3, 1.64854], [-0.610607, 0.791934, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_idle1"], "Exile_Trader_VehicleCustoms", "WhiteHead_19", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16798.2, 13611.1, 9.16119], [-0.272918, -0.962037, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubStandingUA_idle1"], "Exile_Trader_Equipment", "WhiteHead_12", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16771.6, 13634.4, 10.4172], [0.378245, -0.925706, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1"], "Exile_Trader_Food", "WhiteHead_05", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16765.7, 13631.3, 10.4168], [0.549387, -0.835568, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle1"], "Exile_Trader_Hardware", "WhiteHead_18", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16758.3, 13626.7, 10.417], [0.552868, -0.833269, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_idle1"], "Exile_Trader_Office", "WhiteHead_02", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16759.6, 13617.4, 10.4198], [0.870854, 0.491542, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubStandingUA_idle1"], "Exile_Trader_Armory", "GreekHead_A3_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16781.8, 13630.3, 10.4206], [-0.647335, -0.762205, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubStandingUA_idle1"], "Exile_Trader_SpecialOperations", "WhiteHead_10", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16785.4, 13624.5, 10.4208], [-0.852403, -0.522885, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "AfricanHead_03", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Clear",[],["","","","","",""]], [16810.5, 13605.1, 7.99593], [-0.335257, -0.942127, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUA_idle1"], "Exile_Trader_Aircraft", "GreekHead_A3_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16688.1, 13610, 14.0473], [-0.702315, -0.711867, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "GreekHead_A3_07", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["Exile_Vest_Snow",[]],[],"Exile_Headgear_SantaHat","G_Aviator",[],["","","","","",""]], [16771.5, 13590, 8.61222], [0.983311, -0.181931, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;