class CfgClans
{
	registrationFee = 20000;
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";
	maximumIcons = 20;
	maximumIconText = 50;
	maximumPolys = 10;
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = "";
	returnedItems[] = {};
	components[] = {};
	tools[] = {};
	requiredInteractionModelGroup = "";
	requiresOcean = 0;
	requiresFire = 0;
	requiresConcreteMixer = 0;
};
class CfgCraftingRecipes
{

#include "addons\EBM\recipes.hpp"

	class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Big Momma)";
		pictureItem = "Exile_Item_BreachingCharge_BigMomma";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_BigMomma"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] =
		{
			{3, "Exile_Item_BreachingCharge_Metal"},
			{1, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exile_Item_ZipTie"}
		};
		category = "Explosives";
	};
	class BreachingChargeMetal: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Metal)";
		pictureItem = "Exile_Item_BreachingCharge_Metal";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_Metal"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] =
		{
			{1, "Exile_Item_DuctTape"},
			{1, "SatchelCharge_Remote_Mag"}
		};
		category = "Explosives";
	};
	class BreachingChargeWood: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Wood)";
		pictureItem = "Exile_Item_BreachingCharge_Wood";
		returnedItems[] =
		{
			{1, "Exile_Item_BreachingCharge_Wood"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		components[] =
		{
			{1, "Exile_Item_DuctTape"},
			{1, "DemoCharge_Remote_Mag"}
		};
		category = "Explosives";
	};
	class CookBBQSandwich: Exile_AbstractCraftingRecipe
	{
		name = "Cook BBQ Sandwich";
		pictureItem = "Exile_Item_BBQSandwich_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_BBQSandwich_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_BBQSandwich"}
		};
		category = "Consumables";
	};
	class CookCat: Exile_AbstractCraftingRecipe
	{
		name = "Cook Cat Food";
		pictureItem = "Exile_Item_CatFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_CatFood_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_CatFood"}
		};
		category = "Consumables";
	};
	class CookChristmasTinner: Exile_AbstractCraftingRecipe
	{
		name = "Cook Christmas Tinner";
		pictureItem = "Exile_Item_ChristmasTinner_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_ChristmasTinner_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_ChristmasTinner"}
		};
		category = "Consumables";
	};
	class CookCoffee: Exile_AbstractCraftingRecipe
	{
		name = "Brew Coffee";
		pictureItem = "Exile_Item_PlasticBottleCoffee";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleCoffee"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"},
			{1, "Exile_Item_InstantCoffee"}
		};
		category = "Consumables";
	};
	class CookDogFood: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dog Food";
		pictureItem = "Exile_Item_DogFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_DogFood_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_DogFood"}
		};
		category = "Consumables";
	};
	class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
	{
		name = "Cook Glorious Knakworst";
		pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_GloriousKnakworst_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_GloriousKnakworst"}
		};
		category = "Consumables";
	};
	class CookMacasCheese: Exile_AbstractCraftingRecipe
	{
		name = "Cook Macas Cheese";
		pictureItem = "Exile_Item_MacasCheese_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MacasCheese_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_MacasCheese"}
		};
		category = "Consumables";
	};
	class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		category = "Consumables";
	};
	class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Salt Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		category = "Consumables";
	};
	class CookSausageGravy: Exile_AbstractCraftingRecipe
	{
		name = "Cook Sausage Gravy";
		pictureItem = "Exile_Item_SausageGravy_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SausageGravy_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_SausageGravy"}
		};
		category = "Consumables";
	};
	class CookSurstromming: Exile_AbstractCraftingRecipe
	{
		name = "Cook Surströmming";
		pictureItem = "Exile_Item_Surstromming_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_Surstromming_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] =
		{
			{1, "Exile_Item_Surstromming"}
		};
		category = "Consumables";
	};
	class CraftBandage: Exile_AbstractCraftingRecipe
	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exile_Item_Bandage"}
		};
		components[] =
		{
			{4, "Exile_Item_ToiletPaper"}
		};
		category = "Consumables";
	};
	class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Doorway";
		pictureItem = "Exile_Item_ConcreteDoorwayKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcreteFloor: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Floor";
		pictureItem = "Exile_Item_ConcreteFloorKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteFloorPortKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcreteGate: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteGateKit"},
			{4, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{4, "Exile_Item_Cement"},
			{4, "Exile_Item_Sand"},
			{4, "Exile_Item_MetalPole"},
			{4, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcretStairs: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Stairs";
		pictureItem = "Exile_Item_ConcreteStairsKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteStairsKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcretSupport: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Support";
		pictureItem = "Exile_Item_ConcreteSupportKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteSupportKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftConcreteWall: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Wall";
		pictureItem = "Exile_Item_ConcreteWallKit";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftFirePlace: Exile_AbstractCraftingRecipe
	{
		name = "Craft Fire Place";
		pictureItem = "Exile_Item_CampFireKit";
		returnedItems[] =
		{
			{1, "Exile_Item_CampFireKit"}
		};
		components[] =
		{
			{2, "Exile_Item_WoodLog"}
		};
		category = "Crafting";
	};
	class CraftFloodLight: Exile_AbstractCraftingRecipe
	{
		name = "Craft Flood Light";
		pictureItem = "Exile_Item_FloodLightKit";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_FloodLightKit"}
		};
		components[] =
		{
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_LightBulb"},
			{1, "Exile_Item_ExtensionCord"}
		};
		category = "Lamps";
	};
	class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
	{
		name = "Craft Fortification Upgrade";
		pictureItem = "Exile_Item_MetalBoard";
		requiresFire = 1;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_FortificationUpgrade"}
		};
		components[] =
		{
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Metal";
	};
	class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
	{
		name = "Craft H-barrier (5 Blocks)";
		pictureItem = "Exile_Item_HBarrier5Kit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] =
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] =
		{
			{1, "Exile_Item_HBarrier5Kit"}
		};
		components[] =
		{
			{3, "Exile_Item_SandBagsKit_Long"},
			{2, "Exile_Item_MetalWire"}
		};
		category = "Metal";
	};
	class CraftMetalBoard: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Board";
		pictureItem = "Exile_Item_MetalBoard";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MetalBoard"}
		};
		components[] =
		{
			{2, "Exile_Item_JunkMetal"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Metal";
	};
	class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Hedgehog";
		pictureItem = "Exile_Item_MetalHedgehogKit";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MetalHedgehogKit"}
		};
		components[] =
		{
			{4, "Exile_Item_MetalPole"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Metal";
	};
	class CraftMetalPole: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Pole";
		pictureItem = "Exile_Item_MetalPole";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MetalPole"}
		};
		components[] =
		{
			{4, "Exile_Item_JunkMetal"}
		};
		tools[] = {"Exile_Item_Grinder"};
		category = "Metal";
	};
	class CraftPortableGenerator: Exile_AbstractCraftingRecipe
	{
		name = "Craft Portable Generator";
		pictureItem = "Exile_Item_PortableGeneratorKit";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PortableGeneratorKit"}
		};
		components[] =
		{
			{4, "Exile_Item_MetalBoard"},
			{1, "Exile_Item_FuelCanisterFull"},
			{1, "Exile_Item_ExtensionCord"}
		};
		category = "Lamps";
	};
	class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Repair Kit";
		pictureItem = "Exile_Item_Cement";
		requiresConcreteMixer = true;
		returnedItems[] =
		{
			{1, "Exile_Item_RepairKitConcrete"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{4, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Concrete";
	};
	class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Repair Kit";
		pictureItem = "Exile_Item_MetalBoard";
		requiresFire = 0;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_RepairKitWood"}
		};
		components[] =
		{
			{4, "Exile_Item_MetalBoard"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Grinder"
		};
		category = "Metal";
	};
	class CraftRepairKitWood: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Repair Kit";
		pictureItem = "Exile_Item_WoodPlank";
		requiresFire = 0;
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_RepairKitWood"}
		};
		components[] =
		{
			{4, "Exile_Item_WoodPlank"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox"
		};
		category = "Wood";
	};
	class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
	{
		name = "Craft Sandbags Kit (Corner)";
		pictureItem = "Exile_Item_SandBagsKit_Corner";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_SandBagsKit_Corner"}
		};
		components[] =
		{
			{3, "Exile_Item_Sand"}
		};
		category = "Walls";
	};
	class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
	{
		name = "Craft Sand Bags Kit (Long)";
		pictureItem = "Exile_Item_SandBagsKit_Long";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_SandBagsKit_Long"}
		};
		components[] =
		{
			{6, "Exile_Item_Sand"}
		};
		category = "Walls";
	};
	class CraftStorageCrate: Exile_AbstractCraftingRecipe
	{
		name = "Craft Storage Crate";
		pictureItem = "Exile_Item_StorageCrateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_StorageCrateKit"}
		};
		components[] =
		{
			{5, "Exile_Item_WoodPlank"}
		};
		category = "Container";
	};
	class CraftWaterBarrel: Exile_AbstractCraftingRecipe
	{
		name = "Craft Water Barrel";
		pictureItem = "Exile_Item_WaterBarrelKit";
		requiredInteractionModelGroup = "WorkBench";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_WaterBarrelKit"}
		};
		components[] =
		{
			{20, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Consumables";
	};
	class CraftWireFenceKit: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wire Fence Kit";
		pictureItem = "Exile_Item_WireFenceKit_Long";
		requiredInteractionModelGroup = "WorkBench";
		tools[] =
		{
			"Exile_Item_Grinder",
			"Exile_Item_Pliers",
			"Exile_Item_Screwdriver"
		};
		returnedItems[] =
		{
			{1, "Exile_Item_RazorWireKit_Long"}
		};
		components[] =
		{
			{4, "Exile_Item_MetalPole"},
			{6, "Exile_Item_MetalWire"},
			{1, "Exile_Item_MetalScrews"}
		};
		category = "Metal";
	};
	class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Doorway";
		pictureItem = "Exile_Item_WoodDoorwayKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodDoorwayKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodFloor: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor";
		pictureItem = "Exile_Item_WoodFloorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodFloorKit"}
		};
		components[] =
		{
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodGate: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] =
		{
			{8, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodPlank: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Plank";
		pictureItem = "Exile_Item_WoodPlank";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodPlank"}
		};
		components[] =
		{
			{2, "Exile_Item_WoodLog"}
		};
		tools[] = {"Exile_Item_Handsaw"};
		category = "Wood";
	};
	class CraftWoodStairs: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Stairs";
		pictureItem = "Exile_Item_WoodStairsKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodStairsKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodSupport: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Support";
		pictureItem = "Exile_Item_WoodSupportKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodSupportKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodWall: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Wall";
		pictureItem = "Exile_Item_WoodWallKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] =
		{
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
	{
		name = "Craft 1/2 Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodWallHalfKit"}
		};
		components[] =
		{
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWoodWindow: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] =
		{
			{6, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class CraftWorkBench: Exile_AbstractCraftingRecipe
	{
		name = "Craft Work Bench";
		pictureItem = "Exile_Item_WorkBenchKit";
		returnedItems[] =
		{
			{1, "Exile_Item_WorkBenchKit"}
		};
		components[] =
		{
			{4, "Exile_Item_WoodLog"}
		};
		category = "Crafting";
	};
	class EmptyFuelCanister: Exile_AbstractCraftingRecipe
	{
		name = "Empty Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
		category = "Consumables";
	};
	class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		category = "Consumables";
	};
	class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Salt Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		category = "Consumables";
	};
	class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Consumables";
	};
	class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fresh Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Consumables";
	};
	class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Salt Water";
		pictureItem = "Exile_Item_PlasticBottleSaltWater";
		requiresOcean = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		category = "Consumables";
	};
	class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_WaterCanisterDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_WaterCanisterDirtyWater"}
		};
		components[] =
		{
			{1, "Exile_Item_WaterCanisterEmpty"}
		};
		category = "Consumables";
	};
	class FillFuelCanister: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterFull";
		requiredInteractionModelGroup = "FuelSource";
		returnedItems[] =
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
		components[] =
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		category = "Consumables";
	};
	class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Door";
		pictureItem = "Exile_Item_ConcreteDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteDoorKit"}
		};
		components[] =
		{
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Concrete";
	};
	class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteFloorPortKit"}
		};
		components[] =
		{
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Concrete";
	};
	class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteGateKit"}
		};
		components[] =
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Concrete";
	};
	class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Window";
		pictureItem = "Exile_Item_ConcreteWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_ConcreteWindowKit"}
		};
		components[] =
		{
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
		category = "Concrete";
	};
	class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Door";
		pictureItem = "Exile_Item_WoodDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodDoorKit"}
		};
		components[] =
		{
			{1, "Exile_Item_WoodDoorwayKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] =
		{
			{1, "Exile_Item_WoodFloorKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] =
		{
			{1, "Exile_Item_WoodWallKit"},
			{4, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
	class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] =
		{
			{2, "Exile_Item_WoodWallHalfKit"}
		};
		category = "Wood";
	};
	class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] =
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] =
		{
			{1, "Exile_Item_WoodWallKit"},
			{2, "Exile_Item_WoodPlank"}
		};
		category = "Wood";
	};
};	

class CfgExileArsenal
{
	#include "addons\EBM\prices.hpp"
	///////////////////////////////////////////////////////////////////////////////
	// HLC Custom Stuff  [CiC]red_ned http://cic-gaming.co.uk
	///////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class	hlc_muzzle_300blk_KAC					{ quality = 2; price = 70; };
	class	hlc_muzzle_545SUP_AK					{ quality = 2; price = 70; };
	class	hlc_muzzle_556NATO_KAC					{ quality = 2; price = 70; };
	class	hlc_muzzle_762SUP_AK					{ quality = 2; price = 70; };
	class	hlc_muzzle_Agendasix					{ quality = 2; price = 70; };
	class	hlc_muzzle_Agendasix10mm				{ quality = 2; price = 70; };
	class	hlc_muzzle_Tundra						{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_AUG						{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_G3						{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_HK33					{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_M14						{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_a6AUG					{ quality = 2; price = 70; };
	class	hlc_muzzle_snds_fal						{ quality = 2; price = 70; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class 	HLC_Optic_1p29							{ quality = 1; price = 100; };
	class 	HLC_Optic_PSO1							{ quality = 1; price = 100; };
	class 	HLC_Optic_ZFSG1							{ quality = 1; price = 100; };
	class 	hlc_optic_LRT_m14						{ quality = 1; price = 100; };
	class 	hlc_optic_PVS4FAL						{ quality = 1; price = 100; };
	class 	hlc_optic_accupoint_g3					{ quality = 1; price = 100; };
	class 	hlc_optic_artel_m14						{ quality = 1; price = 100; };
	class 	hlc_optic_kobra							{ quality = 1; price = 100; };
	class 	hlc_optic_suit							{ quality = 1; price = 100; };
	class   hlc_optic_GOSHAWK						{ quality = 1; price = 200; };
	class   hlc_optic_PVS4G3						{ quality = 1; price = 100; };
	class   hlc_optic_PVS4M14						{ quality = 1; price = 100; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class	29rnd_300BLK_STANAG						{ quality = 1; price = 30; };
	class	29rnd_300BLK_STANAG_S					{ quality = 1; price = 30; };
	class	29rnd_300BLK_STANAG_T					{ quality = 1; price = 30; };
	class	hlc_100Rnd_762x51_B_M60E4				{ quality = 1; price = 30; };
	class	hlc_100Rnd_762x51_M_M60E4				{ quality = 1; price = 30; };
	class	hlc_100Rnd_762x51_T_M60E4				{ quality = 1; price = 30; };
	class	hlc_10rnd_12g_buck_S12					{ quality = 1; price = 30; };
	class	hlc_10rnd_12g_slug_S12					{ quality = 1; price = 30; };
	class	hlc_20Rnd_762x51_B_G3					{ quality = 1; price = 30; };
	class	hlc_20Rnd_762x51_B_M14					{ quality = 1; price = 30; };
	class	hlc_20Rnd_762x51_B_fal					{ quality = 1; price = 30; };
	class	hlc_20Rnd_762x51_S_fal					{ quality = 1; price = 30; };
	class	hlc_20Rnd_762x51_t_fal					{ quality = 1; price = 30; };
	class	hlc_20rnd_762x51_T_G3					{ quality = 1; price = 30; };
	class	hlc_20rnd_762x51_T_M14					{ quality = 1; price = 30; };
	class	hlc_25Rnd_9x19mm_JHP_AUG				{ quality = 1; price = 30; };
	class	hlc_25Rnd_9x19mm_M882_AUG				{ quality = 1; price = 30; };
	class	hlc_25Rnd_9x19mm_subsonic_AUG			{ quality = 1; price = 30; };
	class	hlc_30Rnd_10mm_B_MP5					{ quality = 1; price = 30; };
	class	hlc_30Rnd_10mm_JHP_MP5					{ quality = 1; price = 30; };
	class	hlc_30Rnd_545x39_B_AK					{ quality = 1; price = 30; };
	class	hlc_30Rnd_545x39_EP_AK					{ quality = 1; price = 30; };
	class	hlc_30Rnd_545x39_S_AK					{ quality = 1; price = 30; };
	class	hlc_30Rnd_545x39_T_AK					{ quality = 1; price = 30; };
	class	hlc_30Rnd_556x45_B_AUG					{ quality = 1; price = 30; };
	class	hlc_30Rnd_556x45_SOST_AUG				{ quality = 1; price = 30; };
	class	hlc_30Rnd_556x45_SPR_AUG				{ quality = 1; price = 30; };
	class	hlc_30Rnd_556x45_T_AUG					{ quality = 1; price = 30; };
	class	hlc_30Rnd_762x39_b_ak					{ quality = 1; price = 30; };
	class	hlc_30Rnd_762x39_t_ak					{ quality = 1; price = 30; };
	class	hlc_30Rnd_9x19_B_MP5					{ quality = 1; price = 30; };
	class	hlc_30Rnd_9x19_GD_MP5					{ quality = 1; price = 30; };
	class	hlc_30Rnd_9x19_SD_MP5					{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_EPR					{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_SOST					{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_SPR					{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_b_HK33					{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_epr_HK33				{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_sost_HK33				{ quality = 1; price = 30; };
	class	hlc_30rnd_556x45_t_HK33					{ quality = 1; price = 30; };
	class	hlc_40Rnd_556x45_B_AUG					{ quality = 1; price = 30; };
	class	hlc_40Rnd_556x45_SOST_AUG				{ quality = 1; price = 30; };
	class	hlc_40Rnd_556x45_SPR_AUG				{ quality = 1; price = 30; };
	class	hlc_45Rnd_545x39_t_rpk					{ quality = 1; price = 30; };
	class	hlc_45Rnd_762x39_m_rpk					{ quality = 1; price = 30; };
	class	hlc_45Rnd_762x39_t_rpk					{ quality = 1; price = 30; };
	class	hlc_50rnd_762x51_M_FAL					{ quality = 1; price = 30; };
	class	hlc_50rnd_762x51_M_G3					{ quality = 1; price = 30; };
	//class	hlc_50rnd_762x51_M_M14					{ quality = 1; price = 30; };
	class	hlc_75Rnd_762x39_m_rpk					{ quality = 1; price = 30; };
	class	hlc_GRD_White							{ quality = 1; price = 30; };
	class	hlc_GRD_blue							{ quality = 1; price = 30; };
	class	hlc_GRD_green							{ quality = 1; price = 30; };
	class	hlc_GRD_orange							{ quality = 1; price = 30; };
	class	hlc_GRD_purple 							{ quality = 1; price = 30; };
	class	hlc_GRD_red								{ quality = 1; price = 30; };
	class	hlc_VOG25_AK							{ quality = 1; price = 30; };
	class 	hlc_5rnd_300WM_FMJ_AWM					{ quality = 1; price = 15; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class 	hlc_smg_mp5k	 						{ quality = 1; price = 200; };
	class	hlc_smg_mp5k_PDW						{ quality = 1; price = 250; };
	class	hlc_smg_mp5a2							{ quality = 1; price = 250; };
	class	hlc_smg_mp5a3							{ quality = 1; price = 250; };
	class	hlc_smg_mp5a4							{ quality = 1; price = 250; };
	class	hlc_smg_mp5n							{ quality = 1; price = 250; };
	class	hlc_smg_mp510							{ quality = 1; price = 250; };
	class	hlc_smg_mp5sd5							{ quality = 1; price = 250; };
	class	hlc_smg_mp5sd6							{ quality = 1; price = 250; };
	class	hlc_smg_9mmar							{ quality = 1; price = 250; };
	class	hlc_rifle_augpara						{ quality = 1; price = 250; };
	class	hlc_rifle_auga2para						{ quality = 1; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////	
	class	hlc_rifle_RPK12							{ quality = 3; price = 800; };
	class	hlc_rifle_rpk							{ quality = 3; price = 800; };
	class	hlc_lmg_m60								{ quality = 3; price = 800; };
	class	hlc_lmg_M60E4							{ quality = 3; price = 800; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class	hlc_rifle_ak12							{ quality = 2; price = 350; };
	class	hlc_rifle_ak47							{ quality = 3; price = 650; };
	class	hlc_rifle_aek971						{ quality = 3; price = 650; };
	class	hlc_rifle_aks74							{ quality = 3; price = 650; };
	class	hlc_rifle_aks74_GL						{ quality = 3; price = 650; };
	class	hlc_rifle_aks74u						{ quality = 3; price = 650; };
	class	hlc_rifle_ak74							{ quality = 3; price = 650; };
	class	hlc_rifle_akm							{ quality = 3; price = 650; };
	class	hlc_rifle_akmgl							{ quality = 3; price = 650; };
	class	hlc_rifle_l1a1slr						{ quality = 3; price = 650; };
	class	hlc_rifle_SLR							{ quality = 3; price = 650; };
	class	hlc_rifle_STG58F						{ quality = 3; price = 650; };
	class	hlc_rifle_FAL5061						{ quality = 3; price = 650; };
	class	hlc_rifle_c1A1							{ quality = 3; price = 650; };
	class	hlc_rifle_LAR							{ quality = 3; price = 650; };
	class	hlc_rifle_SLRchopmod					{ quality = 3; price = 650; };
	class	hlc_rifle_falosw						{ quality = 3; price = 650; };
	class	hlc_rifle_osw_GL						{ quality = 3; price = 650; };
	class	hlc_rifle_g3sg1							{ quality = 3; price = 650; };
	class	hlc_rifle_g3a3							{ quality = 3; price = 650; };
	class	hlc_rifle_g3ka4							{ quality = 3; price = 650; };
	class	HLC_Rifle_g3ka4_GL						{ quality = 3; price = 650; };
	class	hlc_rifle_hk51							{ quality = 3; price = 650; };
	class	hlc_rifle_hk53							{ quality = 3; price = 650; };
	class	hlc_rifle_RU556							{ quality = 3; price = 650; };
	class	hlc_rifle_RU5562						{ quality = 3; price = 650; };
	class	hlc_rifle_Colt727						{ quality = 3; price = 650; };
	class	hlc_rifle_Colt727_GL					{ quality = 3; price = 650; };
	class	hlc_rifle_bcmjack						{ quality = 3; price = 650; };
	class	hlc_rifle_Bushmaster300					{ quality = 3; price = 650; };
	class	hlc_rifle_vendimus						{ quality = 3; price = 650; };
	class	hlc_rifle_SAMR							{ quality = 3; price = 650; };
	class	hlc_rifle_samr2							{ quality = 3; price = 650; };
	class	hlc_rifle_honeybadger					{ quality = 3; price = 650; };
	class	hlc_rifle_aug							{ quality = 3; price = 650; };
	class	hlc_rifle_auga1carb						{ quality = 3; price = 650; };
	class	hlc_rifle_aughbar						{ quality = 3; price = 650; };
	class	hlc_rifle_auga2							{ quality = 3; price = 650; };
	class	hlc_rifle_auga2carb						{ quality = 3; price = 650; };
	class	hlc_rifle_auga2lsw						{ quality = 3; price = 650; };
	class	hlc_rifle_augsr							{ quality = 3; price = 650; };
	class	hlc_rifle_augsrcarb						{ quality = 3; price = 650; };
	class	hlc_rifle_augsrhbar						{ quality = 3; price = 650; };
	class	hlc_rifle_auga3							{ quality = 3; price = 650; };
	class	hlc_rifle_auga3_GL  					{ quality = 3; price = 650; };
	class	hlc_rifle_CQBR					  		{ quality = 3; price = 800; };
	class	hlc_rifle_m4m203				 		{ quality = 3; price = 800; };
	class	hlc_rifle_M4				        	{ quality = 3; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////	
	class	hlc_rifle_M21							{ quality = 3; price = 850; };
	class	hlc_rifle_psg1							{ quality = 3; price = 850; };	
	class	hlc_rifle_awmagnum_BL					{ quality = 3; price = 900; };
	
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };
	class U_B_CombatUniform_mcam 					{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 2; price = 40; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 2; price = 40; };
	class U_B_CTRG_1 								{ quality = 2; price = 40; };
	class U_B_CTRG_2 								{ quality = 2; price = 40; };
	class U_B_CTRG_3								{ quality = 2; price = 40; };
	class U_I_CombatUniform 						{ quality = 2; price = 40; };
	class U_I_CombatUniform_shortsleeve				{ quality = 2; price = 40; };
	class U_I_CombatUniform_tshirt					{ quality = 2; price = 40; };
	class U_I_OfficerUniform						{ quality = 2; price = 40; };
	class U_O_CombatUniform_ocamo 					{ quality = 2; price = 40; };
	class U_O_CombatUniform_oucamo 					{ quality = 2; price = 40; };
	class U_O_OfficerUniform_ocamo 					{ quality = 3; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 3; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 3; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 3; price = 100; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 150; };
	class U_C_HunterBody_grn						{ quality = 2; price = 40; };
	class U_IG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_1							{ quality = 2; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_IG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_1							{ quality = 2; price = 40; };
	class U_IG_Guerilla3_2							{ quality = 2; price = 40; };
	class U_BG_Guerrilla_6_1						{ quality = 2; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_2							{ quality = 2; price = 40; };
	class U_BG_Guerilla2_3							{ quality = 2; price = 40; };
	class U_BG_Guerilla3_1							{ quality = 2; price = 40; };
	class U_BG_leader								{ quality = 3; price = 40; };
	class U_IG_leader								{ quality = 3; price = 40; };
	class U_I_G_resistanceLeader_F					{ quality = 3; price = 100; };
	class U_B_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_B_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_B_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_B_GhillieSuit							{ quality = 3; price = 100; };
	class U_I_FullGhillie_ard						{ quality = 4; price = 150; };
	class U_I_FullGhillie_lsh						{ quality = 4; price = 150; };
	class U_I_FullGhillie_sard						{ quality = 4; price = 150; };
	class U_I_GhillieSuit							{ quality = 3; price = 100; };
	class U_O_FullGhillie_ard						{ quality = 6; price = 150; };
	class U_O_FullGhillie_lsh						{ quality = 6; price = 150; };
	class U_O_FullGhillie_sard						{ quality = 6; price = 150; };
	class U_O_GhillieSuit							{ quality = 5; price = 100; };
	class U_I_Wetsuit								{ quality = 3; price = 80; };
	class U_O_Wetsuit								{ quality = 3; price = 80; };
	class U_B_Wetsuit								{ quality = 3; price = 80; };
	class U_B_survival_uniform						{ quality = 3; price = 80; };
	class V_BandollierB_blk							{ quality = 1; price = 20; };
	class V_BandollierB_cbr							{ quality = 1; price = 20; };
	class V_BandollierB_khk							{ quality = 1; price = 20; };
	class V_BandollierB_oli							{ quality = 1; price = 20; };
	class V_BandollierB_rgr							{ quality = 1; price = 20; };
	class V_Chestrig_blk 							{ quality = 1; price = 30; };
	class V_Chestrig_khk 							{ quality = 1; price = 30; };
	class V_Chestrig_oli 							{ quality = 1; price = 30; };
	class V_Chestrig_rgr 							{ quality = 1; price = 30; };
	class V_Press_F									{ quality = 1; price = 10; };
	class V_Rangemaster_belt						{ quality = 1; price = 6; };
	class V_TacVest_blk								{ quality = 2; price = 50; };
	class V_TacVest_blk_POLICE						{ quality = 3; price = 50; };
	class V_TacVest_brn								{ quality = 2; price = 50; };
	class V_TacVest_camo							{ quality = 2; price = 50; };
	class V_TacVest_khk								{ quality = 2; price = 50; };
	class V_TacVest_oli								{ quality = 2; price = 50; };
	class V_TacVestCamo_khk							{ quality = 2; price = 50; };
	class V_TacVestIR_blk							{ quality = 2; price = 50; };
	class V_I_G_resistanceLeader_F					{ quality = 2; price = 50; };
	class V_HarnessO_brn							{ quality = 1; price = 40; };
	class V_HarnessO_gry							{ quality = 1; price = 40; };
	class V_HarnessOGL_brn							{ quality = 1; price = 30; };
	class V_HarnessOGL_gry							{ quality = 1; price = 30; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 40; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 40; };
	class V_PlateCarrier1_blk 						{ quality = 1; price = 80; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 80; };
	class V_PlateCarrier2_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrier3_rgr 						{ quality = 2; price = 100; };
	class V_PlateCarrierGL_blk 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_mtp 						{ quality = 6; price = 500; };
	class V_PlateCarrierGL_rgr 						{ quality = 6; price = 500; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 80; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 2; price = 100; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 3; price = 400; };
	class V_PlateCarrierIAGL_oli 					{ quality = 3; price = 400; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 100; };
	class V_PlateCarrierSpec_blk 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_mtp 					{ quality = 5; price = 200; };
	class V_PlateCarrierSpec_rgr 					{ quality = 5; price = 200; };
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };
	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 2; price = 10; };
	class G_Balaclava_oli			 	{ quality = 2; price = 10; };
	class G_Balaclava_combat			{ quality = 2; price = 10; };
	class G_Balaclava_lowprofile		{ quality = 2; price = 10; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_tna_F			{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_blk_F		{ quality = 2; price = 15; };
	class G_Balaclava_TI_G_tna_F		{ quality = 2; price = 15; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };
	class H_MilCap_blue 							{ quality = 1; price = 8; };
	class H_MilCap_dgtl 							{ quality = 1; price = 8; };
	class H_MilCap_mcamo 							{ quality = 1; price = 8; };
	class H_MilCap_ocamo 							{ quality = 1; price = 8; };
	class H_MilCap_oucamo 							{ quality = 1; price = 8; };
	class H_MilCap_rucamo 							{ quality = 1; price = 8; };
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };
	class H_Bandanna_camo							{ quality = 1; price = 4; };
	class H_Bandanna_cbr							{ quality = 1; price = 4; };
	class H_Bandanna_gry							{ quality = 1; price = 4; };
	class H_Bandanna_khk							{ quality = 1; price = 4; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 4; };
	class H_Bandanna_mcamo							{ quality = 1; price = 4; };
	class H_Bandanna_sgg							{ quality = 1; price = 4; };
	class H_Bandanna_surfer							{ quality = 1; price = 4; };
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 10; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };
	class H_Beret_02								{ quality = 2; price = 6; };
	class H_Beret_blk								{ quality = 2; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 2; price = 6; };
	class H_Beret_brn_SF							{ quality = 2; price = 6; };
	class H_Beret_Colonel							{ quality = 3; price = 8; };
	class H_Beret_grn								{ quality = 2; price = 6; };
	class H_Beret_grn_SF							{ quality = 2; price = 6; };
	class H_Beret_ocamo								{ quality = 2; price = 6; };
	class H_Beret_red								{ quality = 2; price = 6; };
	class H_Shemag_khk								{ quality = 1; price = 10; };
	class H_Shemag_olive							{ quality = 1; price = 10; };
	class H_Shemag_olive_hs							{ quality = 1; price = 10; };
	class H_Shemag_tan								{ quality = 1; price = 10; };
	class H_ShemagOpen_khk							{ quality = 1; price = 10; };
	class H_ShemagOpen_tan							{ quality = 1; price = 10; };
	class H_TurbanO_blk								{ quality = 1; price = 10; };
	class H_HelmetB_light							{ quality = 2; price = 20; };
	class H_HelmetB_light_black						{ quality = 2; price = 20; };
	class H_HelmetB_light_desert					{ quality = 2; price = 20; };
	class H_HelmetB_light_grass						{ quality = 2; price = 20; };
	class H_HelmetB_light_sand						{ quality = 2; price = 20; };
	class H_HelmetB_light_snakeskin					{ quality = 2; price = 20; };
	class H_HelmetIA								{ quality = 3; price = 40; };
	class H_HelmetIA_camo							{ quality = 3; price = 40; };
	class H_HelmetIA_net							{ quality = 3; price = 40; };
	class H_HelmetB									{ quality = 3; price = 60; };
	class H_HelmetB_black							{ quality = 3; price = 60; };
	class H_HelmetB_camo							{ quality = 3; price = 80; };
	class H_HelmetB_desert							{ quality = 3; price = 60; };
	class H_HelmetB_grass							{ quality = 3; price = 60; };
	class H_HelmetB_paint							{ quality = 3; price = 60; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 60; };
	class H_HelmetB_sand							{ quality = 3; price = 60; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 60; };
	class H_HelmetSpecB								{ quality = 4; price = 80; };
	class H_HelmetSpecB_blk							{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint1						{ quality = 4; price = 80; };
	class H_HelmetSpecB_paint2						{ quality = 4; price = 80; };
	class H_HelmetO_ocamo							{ quality = 5; price = 150; };
	class H_HelmetO_oucamo							{ quality = 5; price = 150; };
	class H_HelmetSpecO_blk							{ quality = 5; price = 100; };
	class H_HelmetSpecO_ocamo						{ quality = 5; price = 100; };
	class H_HelmetLeaderO_ocamo						{ quality = 5; price = 200; };
	class H_HelmetLeaderO_oucamo					{ quality = 5; price = 200; };
	class acc_flashlight 							{ quality = 1; price = 4; };
	class acc_pointer_IR 							{ quality = 1; price = 10; };
	class bipod_01_F_blk	 						{ quality = 2; price = 10; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 10; };
	class bipod_01_F_snd	 						{ quality = 2; price = 10; };
	class bipod_02_F_blk	 						{ quality = 2; price = 10; };
	class bipod_02_F_hex	 						{ quality = 2; price = 10; };
	class bipod_02_F_tan	 						{ quality = 2; price = 10; };
	class bipod_03_F_blk	 						{ quality = 2; price = 10; };
	class bipod_03_F_oli	 						{ quality = 2; price = 10; };
	class muzzle_snds_338_black 					{ quality = 5; price = 50; };
	class muzzle_snds_338_green 					{ quality = 5; price = 50; };
	class muzzle_snds_338_sand 						{ quality = 5; price = 50; };
	class muzzle_snds_93mmg 						{ quality = 4; price = 50; };
	class muzzle_snds_93mmg_tan 					{ quality = 4; price = 50; };
	class muzzle_snds_acp 							{ quality = 1; price = 10; };
	class muzzle_snds_B 							{ quality = 3; price = 20; };
	class muzzle_snds_H 							{ quality = 2; price = 20; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 20; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 20; };
	class muzzle_snds_L 							{ quality = 1; price = 10; };
	class muzzle_snds_M 							{ quality = 1; price = 10; };
	class O_HMG_01_weapon_F 						{ quality = 4; price = 7000; };
	class O_HMG_01_support_F 						{ quality = 4; price = 1000; };
	class optic_Aco									{ quality = 1; price = 70; };
	class optic_ACO_grn								{ quality = 1; price = 70; };
	class optic_ACO_grn_smg							{ quality = 1; price = 70; };
	class optic_Aco_smg								{ quality = 1; price = 70; };
	class optic_AMS									{ quality = 5; price = 300; };
	class optic_AMS_khk								{ quality = 5; price = 300; };
	class optic_AMS_snd								{ quality = 5; price = 300; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 2; price = 150; };
	class optic_Hamr								{ quality = 3; price = 200; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 4; price = 300; };
	class optic_KHS_hex								{ quality = 4; price = 300; };
	class optic_KHS_old								{ quality = 4; price = 300; };
	class optic_KHS_tan								{ quality = 4; price = 300; };
	class optic_LRPS								{ quality = 5; price = 300; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 10; };
	class optic_Nightstalker						{ quality = 6; price = 1000; };
	class optic_NVS									{ quality = 4; price = 500; };
	class optic_SOS									{ quality = 2; price = 200; };
	class optic_Yorris								{ quality = 1; price = 10; };
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 1000; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 20; };
	class Exile_Item_MetalBoard						{ quality = 1; price = 600; };
	class Exile_Item_SafeKit						{ quality = 4; price = 25000; };
	class Exile_Item_CodeLock						{ quality = 1; price = 5000; };
	class Exile_Item_Laptop							{ quality = 2; price = 9000; };
	class Exile_Item_BaseCameraKit					{ quality = 2; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 1; price = 800; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 100; };
	class Exile_Item_MetalWire						{ quality = 1; price = 100; };
	class Exile_Item_EMRE							{ quality = 3; price = 54; };
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; };
	class Exile_Item_Surstromming					{ quality = 3; price = 34; };
	class Exile_Item_SausageGravy					{ quality = 3; price = 30; };
	class Exile_Item_Catfood						{ quality = 2; price = 24; };
	class Exile_Item_ChristmasTinner				{ quality = 3; price = 20; };
	class Exile_Item_BBQSandwich					{ quality = 3; price = 20; };
	class Exile_Item_MacasCheese					{ quality = 3; price = 20; };
	class Exile_Item_Dogfood						{ quality = 2; price = 18; };
	class Exile_Item_BeefParts						{ quality = 2; price = 18; };
	class Exile_Item_Cheathas						{ quality = 2; price = 18; };
	class Exile_Item_Noodles						{ quality = 1; price = 14; };
	class Exile_Item_SeedAstics						{ quality = 1; price = 12; };
	class Exile_Item_Raisins						{ quality = 1; price = 10; };
	class Exile_Item_Moobar							{ quality = 1; price = 8; };
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; };
	class Exile_Item_Can_Empty						{ quality = 1; price = 1; sellPrice = 1; };
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 70; sellPrice = 10; };
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; };
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; sellPrice = 4; };
	class Exile_Item_Beer 							{ quality = 1; price = 50; };
	class Exile_Item_EnergyDrink					{ quality = 1; price = 40; };
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 25; };
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; };
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };
	class Exile_Item_InstaDoc                       { quality = 5; price = 1250; };
	class Exile_Item_Vishpirin						{ quality = 3; price = 300; };
	class Exile_Item_Bandage	                    { quality = 2; price = 100; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };
	class Exile_Item_Defibrillator					{ quality = 1; price = 1500; };
	class Exile_Item_Matches 						{ quality = 1; price = 60; };
	class Exile_Item_CookingPot						{ quality = 2; price = 80; };
	class Exile_Melee_Axe							{ quality = 2; price = 100; };
	class Exile_Melee_SledgeHammmer					{ quality = 3; price = 500; };
	class Exile_Item_CanOpener						{ quality = 1; price = 80; };
	class Exile_Item_Handsaw						{ quality = 2; price = 500; };
	class Exile_Item_Pliers							{ quality = 2; price = 350; };
	class Exile_Item_Grinder						{ quality = 2; price = 1250; };
	class Exile_Item_Foolbox						{ quality = 2; price = 4000; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	class Exile_Item_Shovel							{ quality = 1; price = 700; };
	class Exile_Item_ZipTie							{ quality = 1; price = 250; };
	class Exile_Item_Knife							{ quality = 3; price = 25000; };
	class ItemWatch									{ quality = 1; price = 2; };
	class ItemGPS									{ quality = 2; price = 40; };
	class ItemMap									{ quality = 1; price = 6; };
	class ItemCompass								{ quality = 1; price = 6; };
	class ItemRadio									{ quality = 1; price = 40; };
	class Binocular									{ quality = 1; price = 40; };
	class Rangefinder								{ quality = 3; price = 200; };
	class Laserdesignator							{ quality = 6; price = 750; };
	class Laserdesignator_02						{ quality = 6; price = 750; };
	class Laserdesignator_03						{ quality = 6; price = 750; };
	class NVGoggles									{ quality = 2; price = 100; };
	class NVGoggles_INDEP							{ quality = 2; price = 100; };
	class NVGoggles_OPFOR							{ quality = 2; price = 100; };
	class Exile_Item_XM8							{ quality = 2; price = 20; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 500; };
	class Exile_Headgear_GasMask					{ quality = 4; price = 500; };
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };
	class B_Parachute								{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_B						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_I						{ quality = 3; price = 150; };
	class H_CrewHelmetHeli_O						{ quality = 3; price = 150; };
	class H_HelmetCrew_I							{ quality = 3; price = 100; };
	class H_HelmetCrew_B							{ quality = 3; price = 100; };
	class H_HelmetCrew_O							{ quality = 3; price = 100; };
	class H_PilotHelmetHeli_B						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_I						{ quality = 4; price = 100; };
	class H_PilotHelmetHeli_O						{ quality = 4; price = 100; };
	class U_B_HeliPilotCoveralls					{ quality = 4; price = 80; };
	class U_B_PilotCoveralls						{ quality = 2; price = 60; };
	class U_I_HeliPilotCoveralls					{ quality = 2; price = 60; };
	class U_I_pilotCoveralls						{ quality = 2; price = 60; };
	class U_O_PilotCoveralls						{ quality = 2; price = 60; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 150; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 150; };
	class B_HuntingBackpack							{ quality = 3; price = 70; };
	class B_OutdoorPack_blk							{ quality = 1; price = 80; };
	class B_OutdoorPack_blu							{ quality = 1; price = 80; };
	class B_OutdoorPack_tan							{ quality = 1; price = 80; };
	class B_AssaultPack_blk							{ quality = 1; price = 90; };
	class B_AssaultPack_cbr							{ quality = 1; price = 90; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 90; };
	class B_AssaultPack_khk							{ quality = 1; price = 90; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 90; };
	class B_AssaultPack_rgr							{ quality = 1; price = 90; };
	class B_AssaultPack_sgg							{ quality = 1; price = 90; };
	class B_FieldPack_blk							{ quality = 2; price = 120; };
	class B_FieldPack_cbr							{ quality = 2; price = 120; };
	class B_FieldPack_ocamo							{ quality = 2; price = 120; };
	class B_FieldPack_oucamo						{ quality = 2; price = 120; };
	class B_TacticalPack_blk						{ quality = 2; price = 150; };
	class B_TacticalPack_rgr						{ quality = 2; price = 150; };
	class B_TacticalPack_ocamo						{ quality = 2; price = 150; };
	class B_TacticalPack_mcamo						{ quality = 2; price = 150; };
	class B_TacticalPack_oli						{ quality = 2; price = 150; };
	class B_Kitbag_cbr								{ quality = 3; price = 200; };
	class B_Kitbag_mcamo							{ quality = 3; price = 200; };
	class B_Kitbag_sgg								{ quality = 3; price = 200; };
	class B_Bergen_blk								{ quality = 3; price = 200; };
	class B_Bergen_mcamo							{ quality = 3; price = 200; };
	class B_Bergen_rgr								{ quality = 3; price = 200; };
	class B_Bergen_sgg								{ quality = 3; price = 200; };
	class B_Carryall_cbr							{ quality = 4; price = 300; };
	class B_Carryall_khk							{ quality = 4; price = 300; };
	class B_Carryall_mcamo							{ quality = 4; price = 300; };
	class B_Carryall_ocamo							{ quality = 4; price = 300; };
	class B_Carryall_oli							{ quality = 4; price = 300; };
	class B_Carryall_oucamo							{ quality = 4; price = 300; };
	class 100Rnd_65x39_caseless_mag 				{ quality = 2; price = 30; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 40; };
	class 10Rnd_127x54_Mag 							{ quality = 4; price = 30; };
	class 10Rnd_338_Mag 							{ quality = 5; price = 30; };
	class 10Rnd_762x54_Mag 							{ quality = 3; price = 30; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 4; price = 40; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 8; };
	class 150Rnd_762x54_Box 						{ quality = 3; price = 20; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 3; price = 30; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 2; price = 30; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 2; price = 30; };
	class 150Rnd_93x64_Mag 							{ quality = 6; price = 50; };
	class 130Rnd_338_Mag 							{ quality = 5; price = 40; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 20; };
	class 20Rnd_762x51_Mag 							{ quality = 2; price = 20; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 1; price = 10; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 1; price = 10; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 1; price = 20; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 1; price = 20; };
	class 30Rnd_65x39_caseless_green 				{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 2; price = 30; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 2; price = 20; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 30; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 40; };
	class 30Rnd_9x21_Yellow_Mag						{ quality = 1; price = 40; };
	class 30Rnd_9x21_Green_Mag						{ quality = 1; price = 40; };
	class 30Rnd_9x21_Red_Mag						{ quality = 1; price = 40; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 6; price = 50; };
	class 5Rnd_127x108_Mag 							{ quality = 6; price = 40; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 8; };
	class 6Rnd_GreenSignal_F 						{ quality = 1; price = 30; };
	class 6Rnd_RedSignal_F 							{ quality = 1; price = 30; };
	class 7Rnd_408_Mag 								{ quality = 6; price = 10; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 6; };
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag		{ quality = 6; price = 40 +  5 * 20; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag	{ quality = 6; price = 40 + 10 * 20; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag			{ quality = 6; price = 10 +  7 * 20; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag			{ quality = 6; price = 30 + 10 * 20; };
	class Chemlight_blue							{ quality = 1; price = 2; };
	class Chemlight_green							{ quality = 1; price = 2; };
	class Chemlight_red								{ quality = 1; price = 2; };
	class FlareGreen_F								{ quality = 1; price = 6; };
	class FlareRed_F								{ quality = 1; price = 6; };
	class FlareWhite_F								{ quality = 1; price = 6; };
	class FlareYellow_F								{ quality = 1; price = 6; };
	class UGL_FlareGreen_F							{ quality = 2; price = 8; };
	class UGL_FlareRed_F							{ quality = 2; price = 8; };
	class UGL_FlareWhite_F							{ quality = 2; price = 8; };
	class UGL_FlareYellow_F							{ quality = 2; price = 8; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 8*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 8*3; };
	class SmokeShell								{ quality = 1; price = 6; };
	class SmokeShellBlue							{ quality = 1; price = 6; };
	class SmokeShellGreen							{ quality = 1; price = 6; };
	class SmokeShellOrange							{ quality = 1; price = 6; };
	class SmokeShellPurple							{ quality = 1; price = 6; };
	class SmokeShellRed								{ quality = 1; price = 6; };
	class SmokeShellYellow							{ quality = 1; price = 6; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 8; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 8; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 8; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 8; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 8*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 8*3; };
	class B_IR_Grenade                                       { quality = 1; price = 50; };
	class O_IR_Grenade                                       { quality = 1; price = 50; };
	class I_IR_Grenade                                       { quality = 1; price = 50; };
	class 1Rnd_HE_Grenade_shell                              { quality = 1; price = 100; sellPrice = 1; };
	class 3Rnd_HE_Grenade_shell                              { quality = 1; price = 100*3; sellPrice = 1; };
	class MiniGrenade                                        { quality = 1; price = 250; };
	class HandGrenade                                        { quality = 2; price = 300; };
	class APERSMine_Range_Mag                                { quality = 2; price = 4500; };
	class APERSTripMine_Wire_Mag                             { quality = 2; price = 4500; };
	class APERSBoundingMine_Range_Mag                        { quality = 2; price = 5000; };
	class ClaymoreDirectionalMine_Remote_Mag                 { quality = 2; price = 5500; };
	class IEDUrbanSmall_Remote_Mag                           { quality = 2; price = 6000; };
	class IEDUrbanBig_Remote_Mag                             { quality = 3; price = 7000; };
	class IEDLandSmall_Remote_Mag                            { quality = 2; price = 6000; };
	class IEDLandBig_Remote_Mag                              { quality = 3; price = 7000; };
	class SLAMDirectionalMine_Wire_Mag                       { quality = 3; price = 7000; };
	class DemoCharge_Remote_Mag                              { quality = 3; price = 7000; };
	class SatchelCharge_Remote_Mag                           { quality = 3; price = 8000; };
	class hgun_ACPC2_F 								{ quality = 1; price = 1000; };
	class hgun_P07_F 								{ quality = 1; price = 1000; };
	class hgun_Pistol_heavy_01_F 					{ quality = 2; price = 1100; };
	class hgun_Pistol_heavy_02_F 					{ quality = 2; price = 1100; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 900; };
	class hgun_Rook40_F 							{ quality = 1; price = 1000; };
	class hgun_PDW2000_F 							{ quality = 1; price = 1250; };
	class SMG_01_F 									{ quality = 1; price = 1500; };
	class SMG_02_F 									{ quality = 1; price = 1500; };
	class arifle_MX_SW_Black_F						{ quality = 2; price = 2750; };
	class arifle_MX_SW_F							{ quality = 2; price = 2750; };
	class LMG_Mk200_F								{ quality = 2; price = 3000; };
	class LMG_Zafir_F								{ quality = 3; price = 3000; };
	class MMG_01_hex_F								{ quality = 6; price = 3500; };
	class MMG_01_tan_F								{ quality = 6; price = 3500; };
	class MMG_02_black_F							{ quality = 5; price = 3250; };
	class MMG_02_camo_F								{ quality = 5; price = 3250; };
	class MMG_02_sand_F								{ quality = 5; price = 3250; };
	class arifle_Katiba_C_F							{ quality = 1; price = 2000; };
	class arifle_Katiba_F							{ quality = 1; price = 2000; };
	class arifle_Katiba_GL_F						{ quality = 2; price = 2500; };
	class arifle_Mk20_F								{ quality = 1; price = 2000; };
	class arifle_Mk20_GL_F							{ quality = 2; price = 2500; };
	class arifle_Mk20_GL_plain_F					{ quality = 2; price = 2500; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 2000; };
	class arifle_Mk20C_F							{ quality = 1; price = 2000; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 2000; };
	class arifle_MX_Black_F							{ quality = 1; price = 2000; };
	class arifle_MX_F								{ quality = 1; price = 2000; };
	class arifle_MX_GL_Black_F						{ quality = 2; price = 2500; };
	class arifle_MX_GL_F							{ quality = 2; price = 2500; };
	class arifle_MXC_Black_F						{ quality = 1; price = 2000; };
	class arifle_MXC_F								{ quality = 1; price = 2000; };
	class arifle_SDAR_F								{ quality = 1; price = 2000; };
	class arifle_TRG20_F							{ quality = 1; price = 2000; };
	class arifle_TRG21_F							{ quality = 1; price = 2000; };
	class arifle_TRG21_GL_F							{ quality = 2; price = 2500; };
	class arifle_MXM_Black_F 						{ quality = 2; price = 3000; };
	class arifle_MXM_F 								{ quality = 2; price = 3000; };
	class srifle_DMR_01_F 							{ quality = 3; price = 3500; };
	class srifle_DMR_02_camo_F 						{ quality = 3; price = 3500; };
	class srifle_DMR_02_F 							{ quality = 3; price = 3500; };
	class srifle_DMR_02_sniper_F 					{ quality = 3; price = 3500; };
	class srifle_DMR_03_F 							{ quality = 3; price = 4000; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 4000; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 4000; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 4000; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 4000; };
	class srifle_DMR_04_F 							{ quality = 4; price = 4500; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 4500; };
	class srifle_DMR_05_blk_F 						{ quality = 4; price = 5000; };
	class srifle_DMR_05_hex_F 						{ quality = 4; price = 5000; };
	class srifle_DMR_05_tan_f 						{ quality = 4; price = 5000; };
	class srifle_DMR_06_camo_F 						{ quality = 5; price = 4000; };
	class srifle_DMR_06_olive_F 					{ quality = 5; price = 4000; };
	class srifle_EBR_F 								{ quality = 3; price = 3500; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 5500; };
	class srifle_GM6_F 								{ quality = 6; price = 5500; };
	class srifle_LRR_camo_F 						{ quality = 4; price = 5000; };
	class srifle_LRR_F 								{ quality = 4; price = 5000; };
	class Exile_Weapon_AK107						{ quality = 1; price = 2250; };
	class Exile_Weapon_AK107_GL						{ quality = 2; price = 2500; };
	class Exile_Weapon_AK74							{ quality = 2; price = 2100; };
	class Exile_Weapon_AK74_GL						{ quality = 2; price = 2600; };
	class Exile_Weapon_AK47							{ quality = 3; price = 2000; };
	class Exile_Weapon_AKM							{ quality = 3; price = 2000; };
	class Exile_Weapon_AKS							{ quality = 3; price = 2000; };
	class Exile_Weapon_AKS_Gold						{ quality = 3; price = 20000; };
	class Exile_Weapon_DMR							{ quality = 3; price = 3500; };
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 3500; };
	class Exile_Weapon_CZ550						{ quality = 2; price = 3000; };
	class Exile_Weapon_SVD							{ quality = 4; price = 3000; };
	class Exile_Weapon_SVDCamo						{ quality = 4; price = 3000; };
	class Exile_Weapon_VSSVintorez					{ quality = 3; price = 3000; };
	class Exile_Weapon_RPK							{ quality = 2; price = 2750; };
	class Exile_Weapon_PK							{ quality = 3; price = 2750; };
	class Exile_Weapon_PKP							{ quality = 3; price = 2750; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 1000; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 900; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 1000; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 10000; };
	class Exile_Weapon_M1014						{ quality = 2; price = 2000; };
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 3; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 20; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 20; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 3; price = 20; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 3; price = 20; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; };
	class hgun_Pistol_01_F            { quality = 1; price = 1000; };
	class hgun_P07_khk_F              { quality = 1; price = 1000; };
	class SMG_05_F					  { quality = 1; price = 1500; };
	class LMG_03_F					  { quality = 2; price = 2750; };
	class arifle_MX_khk_F             { quality = 2; price = 2000; };
	class arifle_MX_GL_khk_F          { quality = 2; price = 2500; };
	class arifle_MXC_khk_F            { quality = 2; price = 2000; };
	class arifle_MXM_khk_F            { quality = 2; price = 3000; };
	class srifle_LRR_tna_F            { quality = 6; price = 5000; };
	class srifle_GM6_ghex_F           { quality = 6; price = 5500; };
	class srifle_DMR_07_blk_F         { quality = 4; price = 3500; };
	class srifle_DMR_07_hex_F         { quality = 4; price = 3500; };
	class srifle_DMR_07_ghex_F        { quality = 4; price = 3500; };
	class arifle_AK12_F               { quality = 3; price = 2000; };
	class arifle_AK12_GL_F            { quality = 3; price = 2500; };
	class arifle_AKM_F                { quality = 3; price = 2000; };
	class arifle_AKM_FL_F             { quality = 3; price = 2000; };
	class arifle_AKS_F                { quality = 3; price = 2000; };
	class arifle_ARX_blk_F            { quality = 5; price = 2500; };
	class arifle_ARX_ghex_F           { quality = 5; price = 2500; };
	class arifle_ARX_hex_F            { quality = 5; price = 2500; };
	class arifle_CTAR_blk_F           { quality = 2; price = 2000; };
	class arifle_CTAR_hex_F           { quality = 2; price = 2000; };
	class arifle_CTAR_ghex_F          { quality = 2; price = 2000; };
	class arifle_CTAR_GL_blk_F        { quality = 2; price = 2500; };
	class arifle_CTARS_blk_F          { quality = 2; price = 2000; };
	class arifle_CTARS_ghex_F         { quality = 2; price = 2000; };
	class arifle_CTARS_hex_F          { quality = 2; price = 2000; };
	class arifle_SPAR_01_blk_F        { quality = 1; price = 2000; };
	class arifle_SPAR_01_khk_F        { quality = 1; price = 2000; };
	class arifle_SPAR_01_snd_F        { quality = 1; price = 2000; };
	class arifle_SPAR_01_GL_blk_F     { quality = 1; price = 2500; };
	class arifle_SPAR_01_GL_khk_F     { quality = 1; price = 2500; };
	class arifle_SPAR_01_GL_snd_F     { quality = 1; price = 2500; };
	class arifle_SPAR_03_blk_F        { quality = 3; price = 3000; };
	class arifle_SPAR_03_khk_F        { quality = 3; price = 3000; };
	class arifle_SPAR_03_snd_F        { quality = 3; price = 3000; };
	class muzzle_snds_H_khk_F         { quality = 2; price = 50; };
	class muzzle_snds_H_snd_F         { quality = 2; price = 50; };
	class muzzle_snds_58_blk_F        { quality = 1; price = 20; };
	class muzzle_snds_m_khk_F         { quality = 1; price = 15; };
	class muzzle_snds_m_snd_F         { quality = 1; price = 15; };
	class muzzle_snds_B_khk_F         { quality = 3; price = 50; };
	class muzzle_snds_B_snd_F         { quality = 3; price = 50; };
	class muzzle_snds_58_wdm_F        { quality = 1; price = 20; };
	class muzzle_snds_65_TI_blk_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_hex_F     { quality = 2; price = 75; };
	class muzzle_snds_65_TI_ghex_F    { quality = 2; price = 75; };
	class muzzle_snds_H_MG_blk_F      { quality = 2; price = 20; };
	class muzzle_snds_H_MG_khk_F      { quality = 2; price = 20; };
	class optic_Arco_blk_F            { quality = 1; price = 100; };
	class optic_Arco_ghex_F           { quality = 1; price = 100; };
	class optic_DMS_ghex_F            { quality = 2; price = 150; };
	class optic_Hamr_khk_F            { quality = 3; price = 200; };
	class optic_ERCO_blk_F            { quality = 1; price = 125; };
	class optic_ERCO_khk_F            { quality = 1; price = 125; };
	class optic_ERCO_snd_F            { quality = 1; price = 125; };
	class optic_SOS_khk_F             { quality = 2; price = 200; };
	class optic_LRPS_tna_F            { quality = 5; price = 300; };
	class optic_LRPS_ghex_F           { quality = 5; price = 300; };
	class optic_Holosight_blk_F       { quality = 1; price = 50; };
	class optic_Holosight_khk_F       { quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   { quality = 1; price = 50; };
	class bipod_01_F_khk              { quality = 2; price = 10; };
	class O_NVGoggles_hex_F           { quality = 3; price = 150; };
	class O_NVGoggles_urb_F           { quality = 3; price = 150; };
	class O_NVGoggles_ghex_F          { quality = 3; price = 150; };
	class NVGoggles_tna_F             { quality = 2; price = 100; };
	class U_B_T_Soldier_F             { quality = 2; price = 40; };
	class U_B_T_Soldier_AR_F          { quality = 2; price = 40; };
	class U_B_T_Soldier_SL_F          { quality = 2; price = 40; };
	class U_B_T_Sniper_F              { quality = 3; price = 100; };
	class U_B_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_B_CTRG_Soldier_F          { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_2_F        { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_3_F        { quality = 2; price = 40; };
	class U_B_GEN_Soldier_F           { quality = 2; price = 35; };
	class U_B_GEN_Commander_F         { quality = 2; price = 35; };
	class U_O_T_Soldier_F             { quality = 2; price = 40; };
	class U_O_T_Officer_F             { quality = 3; price = 40; };
	class U_O_T_Sniper_F              { quality = 3; price = 100; };
	class U_O_T_FullGhillie_tna_F     { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_F       { quality = 4; price = 150; };
	class U_O_V_Soldier_Viper_hex_F   { quality = 4; price = 150; };
	class U_I_C_Soldier_Para_1_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_2_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_3_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_4_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Para_5_F      { quality = 2; price = 30; };
	class U_I_C_Soldier_Bandit_1_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_2_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_3_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_4_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Bandit_5_F    { quality = 1; price = 15; };
	class U_I_C_Soldier_Camo_F        { quality = 2; price = 30; };
	class U_C_man_sport_1_F           { quality = 1; price = 10; };
	class U_C_man_sport_2_F           { quality = 1; price = 10; };
	class U_C_man_sport_3_F           { quality = 1; price = 10; };
	class U_C_Man_casual_1_F          { quality = 1; price = 10; };
	class U_C_Man_casual_2_F          { quality = 1; price = 10; };
	class U_C_Man_casual_3_F          { quality = 1; price = 10; };
	class U_C_Man_casual_4_F          { quality = 1; price = 10; };
	class U_C_Man_casual_5_F          { quality = 1; price = 10; };
	class U_C_Man_casual_6_F          { quality = 1; price = 10; };
	class U_B_CTRG_Soldier_urb_1_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_2_F    { quality = 2; price = 40; };
	class U_B_CTRG_Soldier_urb_3_F    { quality = 2; price = 40; };
	class H_Helmet_Skate              { quality = 2; price = 20; };
	class H_HelmetB_TI_tna_F          { quality = 4; price = 100; };
	class H_HelmetB_tna_F             { quality = 3; price = 50; };
	class H_HelmetB_Enh_tna_F         { quality = 4; price = 100; };
	class H_HelmetB_Light_tna_F       { quality = 2; price = 20; };
	class H_HelmetSpecO_ghex_F        { quality = 5; price = 100; };
	class H_HelmetLeaderO_ghex_F      { quality = 5; price = 175; };
	class H_HelmetO_ghex_F            { quality = 5; price = 75; };
	class H_HelmetCrew_O_ghex_F       { quality = 3; price = 75; };
	class H_MilCap_tna_F              { quality = 1; price = 8; };
	class H_MilCap_ghex_F             { quality = 1; price = 8; };
	class H_Booniehat_tna_F           { quality = 1; price = 4; };
	class H_Beret_gen_F               { quality = 2; price = 12; };
	class H_MilCap_gen_F              { quality = 1; price = 10; };
	class H_Cap_oli_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        { quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        { quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   { quality = 1; price = 6; };
	class V_TacChestrig_grn_F         { quality = 1; price = 15; };
	class V_TacChestrig_oli_F         { quality = 1; price = 15; };
	class V_TacChestrig_cbr_F         { quality = 1; price = 15; };
	class V_PlateCarrier1_tna_F       { quality = 3; price = 50; };
	class V_PlateCarrier2_tna_F       { quality = 3; price = 60; };
	class V_PlateCarrierSpec_tna_F    { quality = 5; price = 100; };
	class V_PlateCarrierGL_tna_F      { quality = 6; price = 500; };
	class V_HarnessO_ghex_F           { quality = 2; price = 50; };
	class V_HarnessOGL_ghex_F         { quality = 1; price = 30; };
	class V_BandollierB_ghex_F        { quality = 1; price = 10; };
	class V_TacVest_gen_F             { quality = 1; price = 25; };
	class V_PlateCarrier1_rgr_noflag_F		{ quality = 2; price = 50; };
	class V_PlateCarrier2_rgr_noflag_F		{ quality = 2; price = 60; };
	class B_Bergen_Base_F					{ quality = 5; price = 400; };
	class B_Bergen_mcamo_F                  { quality = 5; price = 400; };
	class B_Bergen_dgtl_F                   { quality = 5; price = 400; };
	class B_Bergen_hex_F                    { quality = 5; price = 400; };
	class B_Bergen_tna_F                    { quality = 5; price = 400; };
	class B_AssaultPack_tna_F               { quality = 1; price = 90; };
	class B_Carryall_ghex_F                 { quality = 4; price = 300; };
	class B_FieldPack_ghex_F                { quality = 2; price = 120; };
	class B_ViperHarness_base_F             { quality = 3; price = 250; };
	class B_ViperHarness_blk_F              { quality = 3; price = 250; };
	class B_ViperHarness_ghex_F             { quality = 3; price = 250; };
	class B_ViperHarness_hex_F              { quality = 3; price = 250; };
	class B_ViperHarness_khk_F              { quality = 3; price = 250; };
	class B_ViperHarness_oli_F              { quality = 3; price = 250; };
	class B_ViperLightHarness_base_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_blk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_ghex_F        { quality = 2; price = 200; };
	class B_ViperLightHarness_hex_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_khk_F         { quality = 2; price = 200; };
	class B_ViperLightHarness_oli_F         { quality = 2; price = 200; };
	class 30Rnd_9x21_Mag_SMG_02						{quality = 1; price = 10; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       {quality = 1; price = 15; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        {quality = 1; price = 15; };
	class 30Rnd_580x42_Mag_F                        {quality = 2; price = 15; };
	class 30Rnd_580x42_Mag_Tracer_F                 {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_F                       {quality = 2; price = 15; };
	class 100Rnd_580x42_Mag_Tracer_F                {quality = 2; price = 15; };
	class 20Rnd_650x39_Cased_Mag_F                  {quality = 4; price = 20; };
	class 10Rnd_50BW_Mag_F                          {quality = 5; price = 35; };
	class 150Rnd_556x45_Drum_Mag_F                  {quality = 2; price = 75; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           {quality = 2; price = 75; };
	class 30Rnd_762x39_Mag_F                        {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Green_F                  {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_F                 {quality = 3; price = 25; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           {quality = 3; price = 25; };
	class 30Rnd_545x39_Mag_F                        {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Green_F                  {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_F                 {quality = 1; price = 10; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           {quality = 1; price = 10; };
	class 200Rnd_556x45_Box_F                       {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                {quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            {quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{quality = 1; price = 10; };
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 7500; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 7500; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 7500; };
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };
	class Exile_Boat_SDV_CSAT						{ quality = 2; price = 15000; };
	class Exile_Boat_SDV_Digital					{ quality = 2; price = 15000; };
	class Exile_Boat_SDV_Grey						{ quality = 2; price = 15000; };
	class Exile_Boat_WaterScooter						{ quality = 2; price = 800; };
	class Exile_Boat_RHIB								{ quality = 3; price = 1500; };
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 40000; sellPrice = 40000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 45000; sellPrice = 45000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 50000; sellPrice = 50000; };
	class Exile_Car_Kart_White							{quality = 1; price = 1000; };
	class Exile_Car_Kart_Yellow							{quality = 1; price = 1000; };
	class Exile_Car_Kart_Orange							{quality = 1; price = 1000; };
	class Exile_Car_Kart_Blue							{quality = 1; price = 1000; };
	class Exile_Car_Kart_Green							{quality = 1; price = 1000; };
	class Exile_Car_Kart_BluKing						{quality = 1; price = 1000; };
	class Exile_Car_Kart_Black							{quality = 1; price = 1000; };
	class Exile_Car_Kart_RedStone						{quality = 1; price = 1000; };
	class Exile_Car_Kart_Vrana							{quality = 1; price = 1000; };
	class C_Kart_01_Fuel_F								{quality = 1; price = 1000; };
	class CUP_B_M1030									{quality = 1; price = 750; };
	class Exile_Bike_QuadBike_Black						{quality = 1; price = 3200; };
	class Exile_Bike_QuadBike_White						{quality = 1; price = 3200; };
	class Exile_Bike_QuadBike_Red						{quality = 1; price = 3200; };
	class Exile_Bike_QuadBike_Blue						{quality = 1; price = 3200; };
	class Exile_Bike_QuadBike_Nato						{quality = 1; price = 3700; };
	class Exile_Bike_QuadBike_Csat						{quality = 1; price = 3700; };
	class Exile_Bike_QuadBike_Fia						{quality = 1; price = 3700; };
	class Exile_Bike_QuadBike_Guerilla01				{quality = 1; price = 3700; };
	class Exile_Bike_QuadBike_Guerilla02				{quality = 1; price = 3700; };
	class Exile_Car_Tractor_Red							{quality = 1; price = 5000; };
	class Exile_Car_OldTractor_Red						{quality = 1; price = 4600; };
	class Exile_Car_TowTractor_White					{quality = 1; price = 7700; };
	class Exile_Car_BTR40_Green							{quality = 1; price = 16000; };
	class Exile_Car_BTR40_Camo							{quality = 1; price = 16000; };
	class CUP_C_Datsun									{quality = 1; price = 10500; };
	class CUP_C_Datsun_Tubeframe						{quality = 1; price = 10500; };
	class CUP_C_Datsun_Plain							{quality = 1; price = 10500; };
	class CUP_C_Datsun_4seat							{quality = 1; price = 10500; };
	class CUP_C_Datsun_Covered							{quality = 1; price = 10500; };
	class Exile_Car_Golf_Black							{quality = 1; price = 4300; };
	class Exile_Car_Golf_Red							{quality = 1; price = 4300; };
	class CUP_C_Golf4_blue_Civ							{quality = 1; price = 7200; };
	class CUP_C_Golf4_green_Civ							{quality = 1; price = 7200; };
	class CUP_C_Golf4_white_Civ							{quality = 1; price = 7200; };
	class CUP_C_Golf4_yellow_Civ						{quality = 1; price = 7200; };
	class CUP_C_Golf4_camo_Civ							{quality = 1; price = 8900; };
	class CUP_C_Golf4_whiteblood_Civ					{quality = 1; price = 8400; };
	class CUP_C_Golf4_crowe_Civ							{quality = 1; price = 8400; };
	class CUP_C_Golf4_kitty_Civ							{quality = 1; price = 8400; };
	class CUP_C_Golf4_reptile_Civ						{quality = 1; price = 8400; };
	class CUP_C_Golf4_camodigital_Civ					{quality = 1; price = 8900; };
	class CUP_C_Golf4_camodark_Civ						{quality = 1; price = 8900; };
	class Exile_Car_Hatchback_Rusty1					{quality = 3; price = 6600; };
	class Exile_Car_Hatchback_Rusty2					{quality = 3; price = 6600; };
	class Exile_Car_Hatchback_Rusty3					{quality = 3; price = 6600; };
	class Exile_Car_Hatchback_Dark						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Black						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Grey						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Blue						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Green						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Beige						{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_Yellow					{quality = 3; price = 7100; };
	class Exile_Car_Hatchback_BeigeCustom				{quality = 3; price = 7600; };
	class Exile_Car_Hatchback_BlueCustom				{quality = 3; price = 7600; };
	class Exile_Car_Hatchback_Sport_White				{quality = 4; price = 7900; };
	class Exile_Car_Hatchback_Sport_Red					{quality = 4; price = 7900; };
	class Exile_Car_Hatchback_Sport_Orange				{quality = 4; price = 7900; };
	class Exile_Car_Hatchback_Sport_Blue				{quality = 4; price = 7900; };
	class Exile_Car_Hatchback_Sport_Green				{quality = 4; price = 7900; };
	class Exile_Car_Hatchback_Sport_Beige				{quality = 4; price = 7900; };
	class Exile_Car_HMMWV_UNA_Green						{quality = 3; price = 15400; };
	class Exile_Car_HMMWV_MEV_Green						{quality = 3; price = 15400; };
	class Exile_Car_HMMWV_UNA_Desert					{quality = 3; price = 15400; };
	class Exile_Car_HMMWV_MEV_Desert					{quality = 3; price = 15400; };
	class CUP_B_HMMWV_Unarmed_USA						{quality = 3; price = 24000; };
	class CUP_B_HMMWV_Unarmed_USMC						{quality = 3; price = 24000; };
	class Exile_Car_Hunter								{quality = 5; price = 76400; };
	class Exile_Car_Ifrit								{quality = 1; price = 47300; };
	class Exile_Car_Ikarus_Red							{quality = 1; price = 25400; };
	class Exile_Car_Ikarus_Blue							{quality = 1; price = 25400; };
	class Exile_Car_Lada_Green							{quality = 1; price = 7300; };
	class Exile_Car_Lada_White							{quality = 1; price = 7800; };
	class Exile_Car_Lada_Red							{quality = 1; price = 7800; };
	class Exile_Car_Lada_Taxi							{quality = 1; price = 7800; };
	class Exile_Car_Lada_Hipster						{quality = 1; price = 8300; };
	class Exile_Car_LandRover_Red						{quality = 1; price = 11800; };
	class Exile_Car_LandRover_Green						{quality = 1; price = 11800; };
	class Exile_Car_LandRover_Sand						{quality = 1; price = 11800; };
	class Exile_Car_LandRover_Desert					{quality = 1; price = 11800; };
	class Exile_Car_LandRover_Urban						{quality = 1; price = 11800; };
	class CUP_I_LR_Transport_AAF						{quality = 1; price = 33900; };
	class CUP_I_LR_Transport_RACS						{quality = 1; price = 33900; };
	class CUP_O_LR_Transport_TKA						{quality = 1; price = 33900; };
	class CUP_B_LR_Transport_GB_D						{quality = 1; price = 33900; };
	class CUP_B_LR_Transport_GB_W						{quality = 1; price = 33900; };
	class CUP_B_M1133_MEV_Woodland						{quality = 1; price = 85700; };
	class CUP_B_M1133_MEV_Woodland_Slat					{quality = 1; price = 102900; };
	class CUP_B_M1133_MEV_Desert						{quality = 1; price = 85700; };
	class CUP_B_M1133_MEV_Desert_Slat					{quality = 1; price = 102900; };
	class CUP_I_M113_Med_UN								{quality = 1; price = 52600; };
	class CUP_B_M113_Med_USA							{quality = 1; price = 52600; };
	class CUP_O_M113_Med_TKA							{quality = 1; price = 52600; };
	class CUP_I_M113_Med_AAF							{quality = 1; price = 52600; };
	class CUP_I_M113_Med_RACS							{quality = 1; price = 52600; };
	class Exile_Car_MB4WD								{quality = 1; price = 15600; };
	class Exile_Car_MB4WDOpen							{quality = 1; price = 15600; };
	class Exile_Car_Octavius_White						{quality = 1; price = 8300; };
	class Exile_Car_Octavius_Black						{quality = 1; price = 8300; };
	class Exile_Car_Offroad_Rusty1						{quality = 1; price = 10200; };
	class Exile_Car_Offroad_Rusty2						{quality = 1; price = 10200; };
	class Exile_Car_Offroad_Rusty3						{quality = 1; price = 10200; };
	class Exile_Car_Offroad_White						{quality = 1; price = 10700; };
	class Exile_Car_Offroad_Beige						{quality = 1; price = 10700; };
	class Exile_Car_Offroad_Red							{quality = 1; price = 10700; };
	class Exile_Car_Offroad_DarkRed						{quality = 1; price = 10700; };
	class Exile_Car_Offroad_Blue						{quality = 1; price = 10700; };
	class Exile_Car_Offroad_BlueCustom					{quality = 1; price = 10700; };
	class Exile_Car_Offroad_Guerilla01					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla02					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla03					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla04					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla05					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla06					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla07					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla08					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla09					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla10					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla11					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Guerilla12					{quality = 1; price = 11200; };
	class Exile_Car_Offroad_Repair_Civillian			{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_White				{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_Beige				{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_Red					{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_DarkRed				{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_Blue					{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_BlueCustom			{quality = 1; price = 7300; };
	class Exile_Car_Offroad_Repair_Guerilla01			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla02			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla03			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla04			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla05			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla06			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla07			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla08			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla09			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla10			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla11			{quality = 1; price = 7800; };
	class Exile_Car_Offroad_Repair_Guerilla12			{quality = 1; price = 7800; };
	class B_LSV_01_unarmed_F							{quality = 1; price = 54500; };
	class B_T_LSV_01_unarmed_F							{quality = 1; price = 54500; };
	class Exile_Car_ProwlerUnarmed						{quality = 1; price = 51200; };
	class Exile_Car_ProwlerLight						{quality = 1; price = 51200; };
	class Exile_Car_QilinUnarmed						{quality = 1; price = 48500; };
	class O_LSV_02_unarmed_F							{quality = 1; price = 50900; };
	class O_T_LSV_02_unarmed_F							{quality = 1; price = 50900; };
	class Exile_Car_Strider								{quality = 1; price = 78600; };
	class Exile_Car_SUV_Rusty1							{quality = 1; price = 8500; };
	class Exile_Car_SUV_Rusty2							{quality = 1; price = 8500; };
	class Exile_Car_SUV_Rusty3							{quality = 1; price = 8500; };
	class Exile_Car_SUV_Red								{quality = 1; price = 9000; };
	class Exile_Car_SUV_Orange							{quality = 1; price = 9000; };
	class Exile_Car_SUV_Grey							{quality = 1; price = 9000; };
	class Exile_Car_SUV_Black							{quality = 1; price = 9000; };
	class Exile_Car_SUVXL_Black							{quality = 1; price = 13200; };
	class Exile_Car_SUVXL_TG							{quality = 1; price = 13200; };
	class SUV_civ_01									{quality = 1; price = 7900; };
	class SUV_civ_02									{quality = 1; price = 7900; };
	class SUV_civ_03									{quality = 1; price = 7900; };
	class SUV_civ_04									{quality = 1; price = 7900; };
	class Exile_Car_UAZ_Green							{quality = 1; price = 10200; };
	class Exile_Car_UAZ_Open_Green						{quality = 1; price = 10200; };
	class CUP_C_UAZ_Unarmed_TK_CIV						{quality = 1; price = 21500; };
	class CUP_C_UAZ_Open_TK_CIV							{quality = 1; price = 21500; };
	class CUP_I_UAZ_Unarmed_UN							{quality = 1; price = 21500; };
	class CUP_I_UAZ_Open_UN								{quality = 1; price = 21500; };
	class CUP_O_UAZ_Unarmed_CHDKZ						{quality = 1; price = 21500; };
	class CUP_O_UAZ_Open_CHDKZ							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Unarmed_CSAT						{quality = 1; price = 21500; };
	class CUP_O_UAZ_Open_CSAT							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Unarmed_RU							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Open_RU								{quality = 1; price = 21500; };
	class CUP_O_UAZ_Unarmed_SLA							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Open_SLA							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Unarmed_TKA							{quality = 1; price = 21500; };
	class CUP_O_UAZ_Open_TKA							{quality = 1; price = 21500; };
	class CUP_B_UAZ_Unarmed_CDF							{quality = 1; price = 21500; };
	class CUP_B_UAZ_Open_CDF							{quality = 1; price = 21500; };
	class CUP_B_UAZ_Unarmed_ACR							{quality = 1; price = 21500; };
	class CUP_B_UAZ_Open_ACR							{quality = 1; price = 21500; };
	class Exile_Car_Van_Black							{quality = 1; price = 48200; };
	class Exile_Car_Van_White							{quality = 1; price = 48200; };
	class Exile_Car_Van_Red								{quality = 1; price = 48200; };
	class Exile_Car_Van_Guerilla01						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla02						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla03						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla04						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla05						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla06						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla07						{quality = 1; price = 48700; };
	class Exile_Car_Van_Guerilla08						{quality = 1; price = 48700; };
	class Exile_Car_Van_Fuel_Black						{quality = 1; price = 15800; };
	class Exile_Car_Van_Fuel_White						{quality = 1; price = 15800; };
	class Exile_Car_Van_Fuel_Red						{quality = 1; price = 15800; };
	class Exile_Car_Van_Fuel_Guerilla01					{quality = 1; price = 16300; };
	class Exile_Car_Van_Fuel_Guerilla02					{quality = 1; price = 16300; };
	class Exile_Car_Van_Fuel_Guerilla03					{quality = 1; price = 16300; };
	class CUP_O_GAZ_Vodnik_MedEvac_RU					{quality = 1; price = 50800; };
	class Exile_Car_Volha_Blue							{quality = 1; price = 10600; };
	class Exile_Car_Volha_White							{quality = 1; price = 10600; };
	class Exile_Car_Volha_Black							{quality = 1; price = 10600; };
	class Exile_Car_HEMMT								{quality = 1; price = 152900; };
	class CUP_B_HMMWV_Ambulance_USA						{quality = 1; price = 24000; };
	class CUP_B_HMMWV_Terminal_USA						{quality = 1; price = 24000; };
	class CUP_B_HMMWV_Ambulance_USMC					{quality = 1; price = 24000; };
	class CUP_B_HMMWV_Transport_USA						{quality = 1; price = 24000; };
	class Exile_Car_LandRover_Ambulance_Green			{quality = 1; price = 13300; };
	class Exile_Car_LandRover_Ambulance_Sand			{quality = 1; price = 13300; };
	class Exile_Car_LandRover_Ambulance_Desert			{quality = 1; price = 13300; };
	class CUP_I_LR_Ambulance_AAF						{quality = 1; price = 33800; };
	class CUP_I_LR_Ambulance_RACS						{quality = 1; price = 33800; };
	class CUP_O_LR_Ambulance_TKA						{quality = 1; price = 33800; };
	class CUP_B_LR_Ambulance_GB_D						{quality = 1; price = 33800; };
	class CUP_B_LR_Ambulance_GB_W						{quality = 1; price = 33800; };
	class CUP_B_MTVR_USMC								{quality = 1; price = 10700; };
	class CUP_B_MTVR_USA								{quality = 1; price = 10700; };
	class Exile_Car_Tempest								{quality = 1; price = 127100; };
	class O_Truck_03_covered_F							{quality = 1; price = 100900; };
	class O_T_Truck_03_transport_ghex_F					{quality = 1; price = 100900; };
	class O_T_Truck_03_covered_ghex_F					{quality = 1; price = 100900; };
	class Exile_Car_Ural_Covered_Worker					{quality = 1; price = 14200; };
	class Exile_Car_Ural_Open_Worker					{quality = 1; price = 14200; };
	class Exile_Car_Ural_Covered_Blue					{quality = 1; price = 14200; };
	class Exile_Car_Ural_Open_Blue						{quality = 1; price = 14200; };
	class Exile_Car_Ural_Covered_Yellow					{quality = 1; price = 14200; };
	class Exile_Car_Ural_Open_Yellow					{quality = 1; price = 14200; };
	class Exile_Car_Ural_Covered_Military				{quality = 1; price = 14200; };
	class Exile_Car_Ural_Open_Military					{quality = 1; price = 14200; };
	class CUP_B_Ural_CDF								{quality = 1; price = 16000; };
	class CUP_B_Ural_Open_CDF							{quality = 1; price = 16000; };
	class CUP_O_Ural_CHDKZ								{quality = 1; price = 16000; };
	class CUP_O_Ural_Open_CHDKZ							{quality = 1; price = 16000; };
	class CUP_O_Ural_SLA								{quality = 1; price = 16000; };
	class CUP_O_Ural_Open_SLA							{quality = 1; price = 16000; };
	class CUP_O_Ural_TKA								{quality = 1; price = 16000; };
	class CUP_O_Ural_Open_TKA							{quality = 1; price = 16000; };
	class CUP_I_Ural_UN									{quality = 1; price = 16000; };
	class Exile_Car_V3S_Covered							{quality = 1; price = 37200; };
	class Exile_Car_V3S_Open							{quality = 1; price = 37200; };
	class CUP_C_V3S_Covered_TKC							{quality = 1; price = 10700; };
	class CUP_C_V3S_Open_TKC							{quality = 1; price = 10700; };
	class CUP_I_V3S_Covered_TKG							{quality = 1; price = 10700; };
	class CUP_I_V3S_Open_TKG							{quality = 1; price = 10700; };
	class CUP_O_V3S_Covered_TKA							{quality = 1; price = 10700; };
	class CUP_O_V3S_Open_TKA							{quality = 1; price = 10700; };
	class Exile_Car_Van_Box_Black						{quality = 1; price = 61600; };
	class Exile_Car_Van_Box_White						{quality = 1; price = 61600; };
	class Exile_Car_Van_Box_Red							{quality = 1; price = 61600; };
	class Exile_Car_Van_Box_Guerilla01					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla02					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla03					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla04					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla05					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla06					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla07					{quality = 1; price = 62100; };
	class Exile_Car_Van_Box_Guerilla08					{quality = 1; price = 62100; };
	class C_Truck_02_transport_F						{quality = 1; price = 50300; };
	class C_Truck_02_covered_F							{quality = 1; price = 50300; };
	class Exile_Car_Zamak								{quality = 1; price = 69900; };
	class I_Truck_02_covered_F							{quality = 1; price = 50300; };
	class O_Truck_02_transport_F						{quality = 1; price = 50300; };
	class O_Truck_02_covered_F							{quality = 1; price = 50300; };
	class B_APC_Tracked_01_CRV_F						{quality = 1; price = 250000; };
	class Exile_Car_BTR40_MG_Green						{quality = 1; price = 32000; };
	class Exile_Car_BTR40_MG_Camo						{quality = 1; price = 32000; };
	class CUP_B_BTR60_CDF								{quality = 1; price = 100600; };
	class CUP_O_BTR60_CSAT								{quality = 1; price = 100600; };
	class CUP_O_BTR60_SLA								{quality = 1; price = 100600; };
	class CUP_O_BTR60_TK								{quality = 1; price = 100600; };
	class CUP_I_BTR60_UN								{quality = 1; price = 100600; };
	class CUP_I_BRDM2_HQ_NAPA							{quality = 1; price = 100600; };
	class CUP_I_BRDM2_HQ_UN								{quality = 1; price = 100600; };
	class CUP_O_BRDM2_HQ_CSAT							{quality = 1; price = 100600; };
	class Exile_Car_BRDM2_HQ							{quality = 1; price = 53700; };
	class CUP_O_BRDM2_HQ_RUS							{quality = 1; price = 100600; };
	class CUP_O_BRDM2_HQ_TKA							{quality = 1; price = 100600; };
	class CUP_B_BRDM2_HQ_CDF							{quality = 1; price = 100600; };
	class CUP_B_BRDM2_HQ_CZ								{quality = 1; price = 100600; };
	class CUP_B_BRDM2_HQ_Des							{quality = 1; price = 100600; };
	class CUP_B_BAF_Coyote_L2A1_W						{quality = 1; price = 56900; };
	class CUP_B_BAF_Coyote_L2A1_D						{quality = 1; price = 56900; };
	class CUP_O_Datsun_PK								{quality = 1; price = 20900; };
	class CUP_I_Datsun_PK								{quality = 1; price = 20900; };
	class CUP_I_Datsun_PK_TK							{quality = 1; price = 20900; };
	class CUP_B_Dingo_GER_Wdl							{quality = 1; price = 150000; };
	class CUP_B_Dingo_CZ_Wdl							{quality = 1; price = 150000; };
	class CUP_B_Dingo_GER_Des							{quality = 1; price = 150000; };
	class CUP_B_Dingo_CZ_Des							{quality = 1; price = 150000; };
	class Exile_Car_HMMWV_M134_Green					{quality = 1; price = 23500; };
	class Exile_Car_HMMWV_M134_Desert					{quality = 1; price = 23500; };
	class Exile_Car_HMMWV_M2_Green						{quality = 1; price = 19100; };
	class Exile_Car_HMMWV_M2_Desert						{quality = 1; price = 19100; };
	class CUP_B_HMMWV_M2_USA							{quality = 1; price = 48000; };
	class CUP_B_HMMWV_M2_USMC							{quality = 1; price = 48000; };
	class B_MRAP_01_hmg_F								{quality = 1; price = 103500; };
	class O_MRAP_02_hmg_F								{quality = 1; price = 69600; };
	class CUP_B_Jackal2_L2A1_GB_W						{quality = 1; price = 56900; };
	class CUP_B_Jackal2_L2A1_GB_D						{quality = 1; price = 56900; };
	class LR_MG_Base									{quality = 1; price = 31700; };
	class CUP_I_LR_MG_AAF								{quality = 1; price = 67800; };
	class CUP_I_LR_MG_RACS								{quality = 1; price = 67800; };
	class CUP_O_LR_MG_TKA								{quality = 1; price = 67800; };
	class CUP_B_LR_MG_GB_W								{quality = 1; price = 67800; };
	class CUP_B_LR_Special_M2_GB_W						{quality = 1; price = 67800; };
	class CUP_B_LR_Special_M2_GB_D						{quality = 1; price = 67800; };
	class CUP_B_M1130_CV_M2_Woodland					{quality = 1; price = 165000; };
	class CUP_B_M1130_CV_M2_Woodland_Slat				{quality = 1; price = 175000; };
	class CUP_B_M1130_CV_M2_Desert						{quality = 1; price = 165000; };
	class CUP_B_M1130_CV_M2_Desert_Slat					{quality = 1; price = 175000; };
	class CUP_I_M113_UN									{quality = 1; price = 105000; };
	class CUP_B_M113_USA								{quality = 1; price = 105000; };
	class CUP_O_M113_TKA								{quality = 1; price = 105000; };
	class CUP_I_M113_AAF								{quality = 1; price = 105000; };
	class CUP_I_M113_RACS								{quality = 1; price = 105000; };
	class CUP_B_Mastiff_HMG_GB_W						{quality = 1; price = 170000; };
	class CUP_B_Mastiff_HMG_GB_D						{quality = 1; price = 170000; };
	class Exile_Car_Offroad_Armed_Guerilla01			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla02			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla03			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla04			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla05			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla06			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla07			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla08			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla09			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla10			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla11			{quality = 1; price = 13900; };
	class Exile_Car_Offroad_Armed_Guerilla12			{quality = 1; price = 13900; };
	class B_APC_Tracked_01_rcws_F						{quality = 1; price = 250000; };
	class B_T_LSV_01_armed_F							{quality = 1; price = 109000; };
	class B_LSV_01_armed_F								{quality = 1; price = 109000; };
	class O_LSV_02_armed_F								{quality = 1; price = 101900; };
	class O_T_LSV_02_armed_F							{quality = 1; price = 101900; };
	class CUP_B_RG31_M2_OD_USMC							{quality = 1; price = 180000; };
	class CUP_B_RG31_M2_USMC							{quality = 1; price = 180000; };
	class CUP_B_Ridgback_HMG_GB_W						{quality = 1; price = 160000; };
	class CUP_B_Ridgback_HMG_GB_D						{quality = 1; price = 160000; };
	class I_MRAP_03_hmg_F								{quality = 1; price = 202000; };
	class Exile_Car_SUV_Armed_Black						{quality = 1; price = 45000; };
	class CUP_B_Wolfhound_HMG_GB_W						{quality = 1; price = 170000; };
	class CUP_B_Wolfhound_HMG_GB_D						{quality = 1; price = 170000; };
	class UAZ_MG_Base									{quality = 1; price = 48700; };
	class CUP_I_UAZ_MG_UN								{quality = 1; price = 43000; };
	class CUP_O_UAZ_MG_CHDKZ							{quality = 1; price = 43000; };
	class CUP_O_UAZ_MG_CSAT								{quality = 1; price = 43000; };
	class CUP_O_UAZ_MG_RU								{quality = 1; price = 43000; };
	class CUP_O_UAZ_MG_SLA								{quality = 1; price = 43000; };
	class CUP_O_UAZ_MG_TKA								{quality = 1; price = 43000; };
	class CUP_B_UAZ_MG_CDF								{quality = 1; price = 43000; };
	class CUP_B_UAZ_MG_ACR								{quality = 1; price = 43000; };
	class CUP_O_GAZ_Vodnik_PK_RU						{quality = 1; price = 101800; };
	class CUP_B_AW159_Unarmed_GB						{quality = 1; price = 95400; };
	class CUP_B_Wildcat_Unarmed_RN_Blackcat				{quality = 1; price = 95400; };
	class CUP_B_Wildcat_Unarmed_Digital_AAF				{quality = 1; price = 95400; };
	class CUP_B_Wildcat_Unarmed_Green_AAF				{quality = 1; price = 95400; };
	class Exile_Chopper_Hummingbird_Green						{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Blue				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{quality = 1; price = 23300; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{quality = 1; price = 23300; };
	class CUP_B_Merlin_HC3A_GB							{quality = 1; price = 96000; };
	class Exile_Chopper_Orca_Black						{quality = 1; price = 94500; };
	class Exile_Chopper_Orca_CSAT						{quality = 1; price = 94500; };
	class CUP_B_SA330_Puma_HC1_BAF						{quality = 1; price = 63300; };
	class CUP_I_SA330_Puma_HC1_RACS						{quality = 1; price = 63300; };
	class Exile_Chopper_Huey_Green						{quality = 1; price = 52400; };
	class Exile_Chopper_Huey_Desert						{quality = 1; price = 52400; };
	class CUP_B_UH1Y_UNA_USMC							{quality = 1; price = 95400; };
	class CUP_B_UH1Y_MEV_USMC							{quality = 1; price = 95400; };
	class CUP_B_UH60L_Unarmed_US						{quality = 1; price = 127800; };
	class CUP_B_UH60M_Unarmed_US						{quality = 1; price = 127800; };
	class CUP_B_UH60M_Unarmed_FFV_MEV_US				{quality = 1; price = 127800; };
	class CUP_I_UH60L_Unarmed_RACS						{quality = 1; price = 127800; };
	class CUP_I_UH60L_Unarmed_FFV_MEV_Racs				{quality = 1; price = 127800; };
	class Exile_Chopper_Hellcat_Green					{quality = 1; price = 56000; };
	class Exile_Chopper_Hellcat_FIA						{quality = 1; price = 56000; };
	class CUP_B_CH47F_GB								{quality = 1; price = 93800; };
	class CUP_B_CH47F_USA								{quality = 1; price = 93800; };
	class Exile_Chopper_Mohawk_FIA						{quality = 1; price = 98500; };
	class CUP_B_CH53E_USMC								{quality = 1; price = 250000; };
	class CUP_B_CH53E_GER								{quality = 1; price = 250000; };
	class Exile_Chopper_Huron_Black						{quality = 1; price = 121700; };
	class Exile_Chopper_Huron_Green						{quality = 1; price = 121700; };
	class CUP_C_MI6T_RU									{quality = 1; price = 161300; };
	class CUP_O_MI6T_RU									{quality = 1; price = 161300; };
	class CUP_O_MI6T_CHDKZ								{quality = 1; price = 161300; };
	class CUP_B_MI6T_CDF								{quality = 1; price = 161300; };
	class CUP_O_MI6T_TKA								{quality = 1; price = 161300; };
	class CUP_C_Mi17_VIV_RU								{quality = 1; price = 78700; };
	class CUP_I_Mi17_VIV_UN								{quality = 1; price = 78700; };
	class CUP_O_Mi8_VIV_RU								{quality = 1; price = 78700; };
	class CUP_O_Mi8_VIV_CHDKZ							{quality = 1; price = 78700; };
	class CUP_O_Mi8_VIV_SLA								{quality = 1; price = 78700; };
	class CUP_B_Mi17_VIV_CDF							{quality = 1; price = 78700; };
	class CUP_O_Mi17_VIV_TK								{quality = 1; price = 78700; };
	class Exile_Chopper_Taru_Black						{quality = 1; price = 66600; };
	class Exile_Chopper_Taru_CSAT						{quality = 1; price = 66600; };
	class Exile_Chopper_Taru_Covered_Black				{quality = 1; price = 87900; };
	class Exile_Chopper_Taru_Covered_CSAT				{quality = 1; price = 82100; };
	class O_Heli_Transport_04_medevac_F					{quality = 1; price = 82100; };
	class Exile_Chopper_Taru_Transport_Black			{quality = 1; price = 26000; };
	class Exile_Chopper_Taru_Transport_CSAT				{quality = 1; price = 26000; };
	class CUP_B_AH1Z_NoWeapons_USMC						{quality = 1; price = 190800; };
	class CUP_B_AH64D_NO_USA							{quality = 1; price = 190800; };
	class CUP_O_Ka60_Blk_CSAT							{quality = 1; price = 95600; };
	class CUP_O_Ka60_Hex_CSAT							{quality = 1; price = 95600; };
	class CUP_O_Ka60_Whale_CSAT							{quality = 1; price = 95600; };
	class CUP_O_Ka60_Grey_RU							{quality = 1; price = 95600; };
	class CUP_I_Ka60_Digi_AAF							{quality = 1; price = 95600; };
	class CUP_B_Merlin_HC3A_Armed_GB					{quality = 1; price = 191800; };
	class CUP_B_MH60S_USMC								{quality = 1; price = 110500; };
	class CUP_B_Mi24_D_MEV_CDF							{quality = 1; price = 191900; };
	class CUP_I_Mi24_Mk3_Empty_AAF						{quality = 1; price = 191900; };
	class CUP_I_Mi24_Mk3_Empty_ION						{quality = 1; price = 191900; };
	class CUP_I_Mi17_UN									{quality = 1; price = 162800; };
	class CUP_O_Mi8_CHDKZ								{quality = 1; price = 162800; };
	class CUP_O_Mi8_SLA_1								{quality = 1; price = 162800; };
	class CUP_O_Mi17_TK									{quality = 1; price = 162800; };
	class CUP_B_Mi17_CDF								{quality = 1; price = 162800; };
	class CUP_B_Mi171Sh_Unarmed_ACR						{quality = 1; price = 162800; };
	class Exile_Chopper_Huey_Armed_Green				{quality = 1; price = 159400; };
	class Exile_Chopper_Huey_Armed_Desert				{quality = 1; price = 159400; };
	class CUP_B_UH1D_GER_KSK							{quality = 1; price = 159400; };
	class CUP_B_UH1D_GER_KSK_Des						{quality = 1; price = 159400; };
	class CUP_O_UH1H_SLA								{quality = 1; price = 159400; };
	class CUP_O_UH1H_TKA								{quality = 1; price = 159400; };
	class CUP_B_UH1Y_GUNSHIP_USMC						{quality = 1; price = 190500; };
	class CUP_B_UH60L_US								{quality = 1; price = 200000; };
	class CUP_B_UH60M_US								{quality = 1; price = 200000; };
	class CUP_I_UH60L_RACS								{quality = 1; price = 200000; };
	class B_Heli_Transport_01_F							{quality = 1; price = 127500; };
	class B_Heli_Transport_01_camo_F					{quality = 1; price = 127500; };
	class B_CTRG_Heli_Transport_01_tropic_F				{quality = 1; price = 127500; };
	class B_CTRG_Heli_Transport_01_sand_F				{quality = 1; price = 127500; };
	class Exile_Plane_AN2_White							{quality = 1; price = 46500; };
	class Exile_Plane_AN2_Stripe						{quality = 1; price = 46500; };
	class Exile_Plane_AN2_Green							{quality = 1; price = 46500; };
	class CUP_B_C130J_USMC								{quality = 1; price = 66500; };
	class CUP_B_C130J_Cargo_USMC						{quality = 1; price = 66500; };
	class CUP_B_C130J_GB								{quality = 1; price = 66500; };
	class CUP_B_C130J_Cargo_GB							{quality = 1; price = 66500; };
	class CUP_O_C130J_TKA								{quality = 1; price = 66500; };
	class CUP_I_C130J_AAF								{quality = 1; price = 66500; };
	class CUP_I_C130J_RACS								{quality = 1; price = 66500; };
	class Exile_Plane_Ceasar							{quality = 1; price = 29500; };
	class C_Plane_Civil_01_racing_F						{quality = 1; price = 15900; };
	class Exile_Plane_Cessna							{quality = 1; price = 15300; };
	class CUP_C_DC3_TanoAir_CIV							{quality = 1; price = 21200; };
	class CUP_C_DC3_CIV									{quality = 1; price = 21200; };
	class CUP_B_C47_USA									{quality = 1; price = 21200; };
	class CUP_B_MV22_USMC								{quality = 1; price = 40700; };
	class Exile_Plane_BlackfishInfantry					{quality = 1; price = 250000; };
	class Exile_Plane_BlackfishVehicle					{quality = 1; price = 250000; };
	class GNT_C185T										{quality = 1; price = 30600; };
	class CUP_B_MV22_USMC_RAMPGUN						{quality = 1; price = 81100; };
	class CUP_O_TKI_Khet_Partug_01                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_02                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_03                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_04                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_05                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_06                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_07                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Partug_08                           { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Jeans_01                            { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Jeans_02                            { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Jeans_03                            { quality = 1; price = 20; };
	class CUP_O_TKI_Khet_Jeans_04                            { quality = 1; price = 20; };
	class CUP_U_C_Pilot_01                                   { quality = 1; price = 20; };
	class CUP_U_C_Citizen_01                                 { quality = 1; price = 20; };
	class CUP_U_C_Citizen_02                                 { quality = 1; price = 20; };
	class CUP_U_C_Citizen_03                                 { quality = 1; price = 20; };
	class CUP_U_C_Citizen_04                                 { quality = 1; price = 20; };
	class CUP_U_C_Worker_01                                  { quality = 1; price = 20; };
	class CUP_U_C_Worker_02                                  { quality = 1; price = 20; };
	class CUP_U_C_Worker_03                                  { quality = 1; price = 20; };
	class CUP_U_C_Worker_04                                  { quality = 1; price = 20; };
	class CUP_U_C_Profiteer_01                               { quality = 1; price = 20; };
	class CUP_U_C_Profiteer_02                               { quality = 1; price = 20; };
	class CUP_U_C_Profiteer_03                               { quality = 1; price = 20; };
	class CUP_U_C_Profiteer_04                               { quality = 1; price = 20; };
	class CUP_U_C_Woodlander_01                              { quality = 1; price = 20; };
	class CUP_U_C_Woodlander_02                              { quality = 1; price = 20; };
	class CUP_U_C_Woodlander_03                              { quality = 1; price = 20; };
	class CUP_U_C_Woodlander_04                              { quality = 1; price = 20; };
	class CUP_U_C_Villager_01                                { quality = 1; price = 20; };
	class CUP_U_C_Villager_02                                { quality = 1; price = 20; };
	class CUP_U_C_Villager_03                                { quality = 1; price = 20; };
	class CUP_U_C_Villager_04                                { quality = 1; price = 20; };
	class CUP_U_B_CZ_WDL_TShirt                              { quality = 1; price = 20; };
	class CUP_U_B_GER_Tropentarn_1                           { quality = 1; price = 100; };
	class CUP_U_B_GER_Tropentarn_2                           { quality = 1; price = 100; };
	class CUP_U_B_GER_Ghillie                                { quality = 3; price = 150; };
	class CUP_U_B_GER_Flecktarn_1                            { quality = 1; price = 100; };
	class CUP_U_B_GER_Flecktarn_2                            { quality = 1; price = 100; };
	class CUP_U_B_GER_Fleck_Ghillie                          { quality = 1; price = 150; };
	class CUP_U_B_USMC_Officer                               { quality = 1; price = 20; };
	class CUP_U_B_USMC_PilotOverall                          { quality = 1; price = 20; };
	class CUP_U_B_USMC_Ghillie_WDL                           { quality = 1; price = 200; };
	class CUP_U_B_USMC_MARPAT_WDL_Sleeves                    { quality = 1; price = 20; };
	class CUP_U_B_USMC_MARPAT_WDL_RolledUp                   { quality = 1; price = 20; };
	class CUP_U_B_USMC_MARPAT_WDL_Kneepad                    { quality = 1; price = 20; };
	class CUP_U_B_USMC_MARPAT_WDL_TwoKneepads                { quality = 1; price = 20; };
	class CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad              { quality = 1; price = 20; };
	class CUP_U_B_FR_SpecOps                                 { quality = 1; price = 200; };
	class CUP_U_B_FR_Scout                                   { quality = 1; price = 200; };
	class CUP_U_B_FR_Scout1                                  { quality = 1; price = 200; };
	class CUP_U_B_FR_Scout2                                  { quality = 1; price = 200; };
	class CUP_U_B_FR_Scout3                                  { quality = 1; price = 200; };
	class CUP_U_B_FR_Officer                                 { quality = 1; price = 200; };
	class CUP_U_B_FR_Corpsman                                { quality = 1; price = 200; };
	class CUP_U_B_FR_DirAction                               { quality = 1; price = 200; };
	class CUP_U_B_FR_DirAction2                              { quality = 1; price = 200; };
	class CUP_U_B_FR_Light                                   { quality = 1; price = 200; };
	class CUP_U_I_GUE_Flecktarn                              { quality = 1; price = 20; };
	class CUP_U_I_GUE_Flecktarn2                             { quality = 1; price = 20; };
	class CUP_U_I_GUE_Flecktarn3                             { quality = 1; price = 20; };
	class CUP_U_I_GUE_Woodland1                              { quality = 1; price = 20; };
	class CUP_U_I_Ghillie_Top                                { quality = 1; price = 20; };
	class CUP_U_I_RACS_PilotOverall                          { quality = 1; price = 20; };
	class CUP_U_I_RACS_Desert_1                              { quality = 1; price = 100; };
	class CUP_U_I_RACS_Desert_2                              { quality = 1; price = 100; };
	class CUP_U_I_RACS_Urban_1                               { quality = 1; price = 100; };
	class CUP_U_I_RACS_Urban_2                               { quality = 1; price = 100; };
	class CUP_U_O_SLA_Officer                                { quality = 1; price = 15; };
	class CUP_U_O_SLA_Officer_Suit                           { quality = 1; price = 20; };
	class CUP_U_O_SLA_MixedCamo                              { quality = 1; price = 20; };
	class CUP_U_O_SLA_Green                                  { quality = 1; price = 20; };
	class CUP_U_O_SLA_Urban                                  { quality = 1; price = 20; };
	class CUP_U_O_SLA_Desert                                 { quality = 1; price = 20; };
	class CUP_U_O_SLA_Overalls_Pilot                         { quality = 1; price = 20; };
	class CUP_U_O_SLA_Overalls_Tank                          { quality = 1; price = 20; };
	class CUP_U_O_Partisan_TTsKO                             { quality = 1; price = 20; };
	class CUP_U_O_Partisan_TTsKO_Mixed                       { quality = 1; price = 20; };
	class CUP_U_O_Partisan_VSR_Mixed1                        { quality = 1; price = 20; };
	class CUP_U_O_Partisan_VSR_Mixed2                        { quality = 1; price = 20; };
	class CUP_U_O_TK_Officer                                 { quality = 1; price = 15; };
	class CUP_U_O_TK_MixedCamo                               { quality = 1; price = 20; };
	class CUP_U_O_TK_Green                                   { quality = 1; price = 20; };
	class CUP_U_O_TK_Ghillie                                 { quality = 1; price = 100; };
	class CUP_U_O_TK_Ghillie_Top                             { quality = 1; price = 100; };
	class CUP_H_C_Ushanka_01                                 { quality = 1; price = 10; };
	class CUP_H_C_Ushanka_02                                 { quality = 1; price = 10; };
	class CUP_H_C_Ushanka_03                                 { quality = 1; price = 10; };
	class CUP_H_C_Ushanka_04                                 { quality = 1; price = 10; };
	class CUP_H_C_Beanie_01                                  { quality = 1; price = 10; };
	class CUP_H_C_Beanie_02                                  { quality = 1; price = 10; };
	class CUP_H_C_Beanie_03                                  { quality = 1; price = 10; };
	class CUP_H_C_Beanie_04                                  { quality = 1; price = 10; };
	class CUP_H_C_Beret_01                                   { quality = 1; price = 10; };
	class CUP_H_C_Beret_02                                   { quality = 1; price = 10; };
	class CUP_H_C_Beret_03                                   { quality = 1; price = 10; };
	class CUP_H_C_Beret_04                                   { quality = 1; price = 10; };
	class CUP_H_GER_Boonie_desert                            { quality = 1; price = 10; };
	class CUP_H_GER_Boonie_Flecktarn                         { quality = 1; price = 10; };
	class CUP_H_NAPA_Fedora                                  { quality = 1; price = 10; };
	class CUP_H_PMC_PRR_Headset                              { quality = 1; price = 10; };
	class CUP_H_PMC_EP_Headset                               { quality = 1; price = 10; };
	class CUP_H_PMC_Cap_Tan                                  { quality = 1; price = 10; };
	class CUP_H_PMC_Cap_Grey                                 { quality = 1; price = 10; };
	class CUP_H_PMC_Cap_PRR_Tan                              { quality = 1; price = 10; };
	class CUP_H_PMC_Cap_PRR_Grey                             { quality = 1; price = 10; };
	class CUP_H_RACS_Beret_Blue                              { quality = 1; price = 06; };
	class CUP_H_RACS_Helmet_Des                              { quality = 1; price = 150; };
	class CUP_H_RACS_Helmet_Goggles_Des                      { quality = 1; price = 150; };
	class CUP_H_RACS_Helmet_Headset_Des                      { quality = 1; price = 150; };
	class CUP_H_RACS_Helmet_DPAT                             { quality = 1; price = 150; };
	class CUP_H_RACS_Helmet_Goggles_DPAT                     { quality = 1; price = 150; };
	class CUP_H_RACS_Helmet_Headset_DPAT                     { quality = 1; price = 150; };
	class CUP_H_SLA_TankerHelmet                             { quality = 1; price = 75; };
	class CUP_H_SLA_Helmet                                   { quality = 1; price = 75; };
	class CUP_H_SLA_Pilot_Helmet                             { quality = 1; price = 75; };
	class CUP_H_SLA_OfficerCap                               { quality = 1; price = 75; };
	class CUP_H_SLA_SLCap                                    { quality = 1; price = 75; };
	class CUP_H_SLA_Boonie                                   { quality = 1; price = 10; };
	class CUP_H_SLA_Beret                                    { quality = 1; price = 10; };
	class CUP_H_TK_TankerHelmet                              { quality = 1; price = 75; };
	class CUP_H_TK_PilotHelmet                               { quality = 1; price = 75; };
	class CUP_H_TK_Helmet                                    { quality = 1; price = 75; };
	class CUP_H_TK_Lungee                                    { quality = 1; price = 10; };
	class CUP_H_TK_Beret                                     { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_01                              { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_02                              { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_03                              { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_04                              { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_05                              { quality = 1; price = 10; };
	class CUP_H_TKI_SkullCap_06                              { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_01                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_02                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_03                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_04                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_05                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_06                                { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_01                           { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_02                           { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_03                           { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_04                           { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_05                           { quality = 1; price = 10; };
	class CUP_H_TKI_Lungee_Open_06                           { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_01                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_02                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_03                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_04                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_05                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_1_06                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_01                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_02                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_03                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_04                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_05                               { quality = 1; price = 10; };
	class CUP_H_TKI_Pakol_2_06                               { quality = 1; price = 10; };
	class CUP_H_USMC_Officer_Cap                             { quality = 1; price = 10; };
	class CUP_H_USMC_HelmetWDL                               { quality = 1; price = 150; };
	class CUP_H_USMC_HeadSet_HelmetWDL                       { quality = 1; price = 150; };
	class CUP_H_USMC_HeadSet_GoggleW_HelmetWDL               { quality = 1; price = 150; };
	class CUP_H_USMC_Crew_Helmet                             { quality = 1; price = 150; };
	class CUP_H_USMC_Goggles_HelmetWDL                       { quality = 1; price = 150; };
	class CUP_H_USMC_Helmet_Pilot                            { quality = 1; price = 150; };
	class CUP_H_FR_Headset                                   { quality = 1; price = 10; };
	class CUP_H_FR_Cap_Headset_Green                         { quality = 1; price = 10; };
	class CUP_H_FR_Cap_Officer_Headset                       { quality = 1; price = 10; };
	class CUP_H_FR_BandanaGreen                              { quality = 1; price = 10; };
	class CUP_H_FR_BandanaWdl                                { quality = 1; price = 10; };
	class CUP_H_FR_Bandana_Headset                           { quality = 1; price = 10; };
	class CUP_H_FR_Headband_Headset                          { quality = 1; price = 10; };
	class CUP_H_FR_ECH                                       { quality = 1; price = 150; };
	class CUP_H_FR_BoonieMARPAT                              { quality = 1; price = 10; };
	class CUP_H_FR_BoonieWDL                                 { quality = 1; price = 10; };
	class CUP_H_FR_BeanieGreen                               { quality = 1; price = 10; };
	class CUP_H_FR_PRR_BoonieWDL                             { quality = 1; price = 10; };
	class CUP_H_Navy_CrewHelmet_Blue                         { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_Brown                        { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_Green                        { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_Red                          { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_Violet                       { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_White                        { quality = 1; price = 150; };
	class CUP_H_Navy_CrewHelmet_Yellow                       { quality = 1; price = 150; };
	class CUP_V_B_GER_Carrier_Rig                            { quality = 1; price = 40; };
	class CUP_V_B_GER_Carrier_Rig_2                          { quality = 1; price = 40; };
	class CUP_V_B_GER_Carrier_Vest                           { quality = 1; price = 250; };
	class CUP_V_B_GER_Carrier_Vest_2                         { quality = 1; price = 250; };
	class CUP_V_B_GER_Carrier_Vest_3                         { quality = 1; price = 250; };
	class CUP_V_B_GER_Vest_1                                 { quality = 1; price = 250; };
	class CUP_V_B_GER_Vest_2                                 { quality = 1; price = 250; };
	class CUP_V_B_MTV                                        { quality = 1; price = 250; };
	class CUP_V_B_MTV_Patrol                                 { quality = 1; price = 250; };
	class CUP_V_B_MTV_Pouches                                { quality = 1; price = 250; };
	class CUP_V_B_MTV_noCB                                   { quality = 1; price = 250; };
	class CUP_V_B_MTV_Marksman                               { quality = 1; price = 250; };
	class CUP_V_B_MTV_PistolBlack                            { quality = 1; price = 250; };
	class CUP_V_B_MTV_LegPouch                               { quality = 1; price = 250; };
	class CUP_V_B_MTV_MG                                     { quality = 1; price = 250; };
	class CUP_V_B_MTV_Mine                                   { quality = 1; price = 250; };
	class CUP_V_B_MTV_TL                                     { quality = 1; price = 250; };
	class CUP_V_B_PilotVest                                  { quality = 1; price = 250; };
	class CUP_V_B_RRV_TL                                     { quality = 1; price = 40; };
	class CUP_V_B_RRV_Officer                                { quality = 1; price = 40; };
	class CUP_V_B_RRV_Medic                                  { quality = 1; price = 40; };
	class CUP_V_B_RRV_DA1                                    { quality = 1; price = 75; };
	class CUP_V_B_RRV_DA2                                    { quality = 1; price = 75; };
	class CUP_V_B_RRV_MG                                     { quality = 1; price = 40; };
	class CUP_V_B_RRV_Light                                  { quality = 1; price = 40; };
	class CUP_V_B_RRV_Scout                                  { quality = 1; price = 40; };
	class CUP_V_B_RRV_Scout2                                 { quality = 1; price = 40; };
	class CUP_V_B_RRV_Scout3                                 { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Blue                               { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Brown                              { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Green                              { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Red                                { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Violet                             { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_White                              { quality = 1; price = 40; };
	class CUP_V_B_LHDVest_Yellow                             { quality = 1; price = 40; };
	class CUP_V_I_Carrier_Belt                               { quality = 1; price = 40; };
	class CUP_V_I_Guerilla_Jacket                            { quality = 1; price = 40; };
	class CUP_V_I_RACS_Carrier_Vest                          { quality = 1; price = 250; };
	class CUP_V_I_RACS_Carrier_Vest_2                        { quality = 1; price = 250; };
	class CUP_V_I_RACS_Carrier_Vest_3                        { quality = 1; price = 250; };
	class CUP_V_O_SLA_Carrier_Belt                           { quality = 1; price = 40; };
	class CUP_V_O_SLA_Carrier_Belt02                         { quality = 1; price = 40; };
	class CUP_V_O_SLA_Carrier_Belt03                         { quality = 1; price = 40; };
	class CUP_V_O_SLA_Flak_Vest01                            { quality = 1; price = 40; };
	class CUP_V_O_SLA_Flak_Vest02                            { quality = 1; price = 40; };
	class CUP_V_O_SLA_Flak_Vest03                            { quality = 1; price = 40; };
	class CUP_V_O_TK_CrewBelt                                { quality = 1; price = 40; };
	class CUP_V_O_TK_OfficerBelt                             { quality = 1; price = 40; };
	class CUP_V_O_TK_OfficerBelt2                            { quality = 1; price = 40; };
	class CUP_V_O_TK_Vest_1                                  { quality = 1; price = 40; };
	class CUP_V_O_TK_Vest_2                                  { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_01                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_02                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_03                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_04                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_05                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket1_06                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_01                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_02                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_03                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_04                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_05                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket2_06                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_01                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_02                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_03                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_04                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_05                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket3_06                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_01                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_02                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_03                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_04                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_05                            { quality = 1; price = 40; };
	class CUP_V_OI_TKI_Jacket4_06                            { quality = 1; price = 40; };
	class CUP_arifle_CZ805_A1 						{ quality = 1; price = 2000; };
	class CUP_arifle_CZ805_A2 						{ quality = 1; price = 2000; };
	class CUP_arifle_CZ805_B 						{ quality = 1; price = 2000; };
	class CUP_arifle_CZ805_B_GL 					{ quality = 1; price = 2500; };
	class CUP_arifle_CZ805_GL 						{ quality = 1; price = 2500; };
	class CUP_arifle_FNFAL 							{ quality = 1; price = 2000; };
	class CUP_arifle_FNFAL_railed 					{ quality = 1; price = 2250; };
	class CUP_arifle_G36A 							{ quality = 1; price = 1900; };
	class CUP_arifle_G36A_camo 						{ quality = 1; price = 1900; };
	class CUP_arifle_G36C 							{ quality = 1; price = 1900; };
	class CUP_arifle_G36C_camo 						{ quality = 1; price = 1900; };
	class CUP_arifle_G36K 							{ quality = 1; price = 1900; };
	class CUP_arifle_G36K_camo 						{ quality = 1; price = 1900; };
	class CUP_arifle_L85A2 							{ quality = 1; price = 2250; };
	class CUP_arifle_L85A2_GL 						{ quality = 1; price = 2750; };
	class CUP_arifle_L86A2 							{ quality = 1; price = 2500; };
	class CUP_arifle_M16A2 							{ quality = 1; price = 2000; };
	class CUP_arifle_M16A2_GL 						{ quality = 1; price = 2500; };
	class CUP_arifle_M16A4_Base						{ quality = 1; price = 2000; };
	class CUP_arifle_M16A4_GL 						{ quality = 1; price = 2500; };
	class CUP_arifle_M4A1 							{ quality = 1; price = 2000; };
	class CUP_arifle_M4A1_black 					{ quality = 1; price = 2000; };
	class CUP_arifle_M4A1_BUIS_camo_GL 				{ quality = 1; price = 2500; };
	class CUP_arifle_M4A1_BUIS_desert_GL 			{ quality = 1; price = 2500; };
	class CUP_arifle_M4A1_BUIS_GL 					{ quality = 1; price = 2500; };
	class CUP_arifle_M4A1_camo 						{ quality = 1; price = 2000; };
	class CUP_arifle_M4A1_desert 					{ quality = 1; price = 2000; };
	class CUP_arifle_MG36 							{ quality = 1; price = 2500; };
	class CUP_arifle_MG36_camo 						{ quality = 1; price = 2500; };
	class CUP_arifle_Mk16_CQC 						{ quality = 1; price = 2000; };
	class CUP_arifle_Mk16_CQC_EGLM 					{ quality = 1; price = 2500; };
	class CUP_arifle_Mk16_CQC_FG 					{ quality = 1; price = 2100; };
	class CUP_arifle_Mk16_CQC_SFG 					{ quality = 1; price = 2250; };
	class CUP_arifle_Mk16_STD 						{ quality = 1; price = 2000; };
	class CUP_arifle_Mk16_STD_EGLM 					{ quality = 1; price = 2500; };
	class CUP_arifle_Mk16_STD_FG 					{ quality = 1; price = 2100; };
	class CUP_arifle_Mk16_STD_SFG 					{ quality = 1; price = 2250; };
	class CUP_arifle_Mk16_SV 						{ quality = 1; price = 2100; };
	class CUP_arifle_Mk17_CQC 						{ quality = 1; price = 2100; };
	class CUP_arifle_Mk17_CQC_EGLM 					{ quality = 1; price = 2500; };
	class CUP_arifle_Mk17_CQC_FG 					{ quality = 1; price = 2100; };
	class CUP_arifle_Mk17_CQC_SFG 					{ quality = 1; price = 2250; };
	class CUP_arifle_Mk17_STD 						{ quality = 1; price = 2000; };
	class CUP_arifle_Mk17_STD_EGLM 					{ quality = 1; price = 2500; };
	class CUP_arifle_Mk17_STD_FG 					{ quality = 1; price = 2100; };
	class CUP_arifle_Mk17_STD_SFG 					{ quality = 1; price = 2250; };
	class CUP_arifle_Mk20 							{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58P 							{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58P_des 						{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58RIS1 						{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58RIS1_des 					{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58RIS2 						{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58RIS2_camo 					{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58V 							{ quality = 1; price = 2100; };
	class CUP_arifle_Sa58V_camo 					{ quality = 1; price = 2100; };
	class CUP_arifle_XM8_Carbine 					{ quality = 1; price = 1900; };
	class CUP_arifle_XM8_Carbine_FG 				{ quality = 1; price = 2000; };
	class CUP_arifle_XM8_Carbine_GL 				{ quality = 1; price = 2400; };
	class CUP_arifle_XM8_Compact 					{ quality = 1; price = 1900; };
	class CUP_arifle_XM8_Compact_Rail 				{ quality = 1; price = 1900; };
	class CUP_arifle_XM8_Railed 					{ quality = 1; price = 1900; };
	class CUP_arifle_xm8_SAW 						{ quality = 1; price = 2000; };
	class CUP_arifle_xm8_sharpshooter 				{ quality = 1; price = 2000; };
	class CUP_sgun_AA12								{ quality = 1; price = 2250; };
	class CUP_sgun_Saiga12K							{ quality = 1; price = 2000; };
	class CUP_hgun_Compact 							{ quality = 1; price = 1000; };
	class CUP_hgun_Duty 							{ quality = 1; price = 1000; };
	class CUP_hgun_Glock17 							{ quality = 2; price = 1100; };
	class CUP_hgun_M9 								{ quality = 2; price = 1100; };
	class CUP_hgun_MicroUzi 						{ quality = 1; price = 900; };
	class CUP_hgun_PB6P9 							{ quality = 1; price = 1000; };
	class CUP_hgun_Phantom 							{ quality = 1; price = 1000; };
	class CUP_hgun_SA61 							{ quality = 1; price = 900; };
	class CUP_lmg_L110A1 							{ quality = 1; price = 2750; };
	class CUP_lmg_L7A2 								{ quality = 1; price = 2750; };
	class CUP_lmg_M240 								{ quality = 1; price = 2500; };
	class CUP_lmg_M249 								{ quality = 1; price = 2500; };
	class CUP_lmg_M249_para 						{ quality = 1; price = 2500; };
	class CUP_lmg_M60E4 							{ quality = 1; price = 2500; };
	class CUP_lmg_Mk48_des 							{ quality = 3; price = 2750; };
	class CUP_lmg_Mk48_wdl 							{ quality = 3; price = 2750; };
	class CUP_lmg_UK59 								{ quality = 1; price = 2750; };
	class CUP_smg_bizon 							{ quality = 1; price = 1500; };
	class CUP_smg_EVO 								{ quality = 1; price = 1500; };
	class CUP_smg_MP5A5 							{ quality = 1; price = 1500; };
	class CUP_smg_MP5SD6 							{ quality = 1; price = 1500; };
	class CUP_srifle_AS50 							{ quality = 3; price = 5000; };
	class CUP_srifle_AWM_des 						{ quality = 1; price = 3250; };
	class CUP_srifle_AWM_wdl 						{ quality = 1; price = 3250; };
	class CUP_srifle_CZ750 							{ quality = 1; price = 3750; };
	class CUP_srifle_ksvk 							{ quality = 3; price = 5500; };
	class CUP_srifle_M107_base    					{ quality = 3; price = 5000; };
	class CUP_srifle_M110 							{ quality = 1; price = 3000; };
	class CUP_srifle_M14							{ quality = 1; price = 3000; };
	class CUP_srifle_M24_des 						{ quality = 1; price = 3750; };
	class CUP_srifle_M24_wdl 						{ quality = 1; price = 3750; };
	class CUP_srifle_M40A3 							{ quality = 2; price = 4000; };
	class CUP_srifle_Mk12SPR 						{ quality = 1; price = 3000; };
	class CUP_glaunch_M32							{ quality = 3; price = 5000; };
	class CUP_glaunch_M79							{ quality = 3; price = 5000; };
	class CUP_glaunch_Mk13							{ quality = 3; price = 5000; };
	class CUP_acc_Glock17_Flashlight				{ quality = 1; price = 50; };
	class CUP_acc_ANPEQ_15							{ quality = 1; price = 50; };
	class CUP_acc_ANPEQ_2							{ quality = 1; price = 50; };
	class CUP_acc_Flashlight						{ quality = 1; price = 50; };
	class CUP_acc_Flashlight_wdl					{ quality = 1; price = 50; };
	class CUP_acc_Flashlight_desert					{ quality = 1; price = 50; };
	class CUP_acc_XM8_light_module					{ quality = 1; price = 50; };
	class CUP_acc_ANPEQ_2_camo						{ quality = 1; price = 50; };
	class CUP_acc_ANPEQ_2_desert					{ quality = 1; price = 50; };
	class CUP_acc_ANPEQ_2_grey						{ quality = 1; price = 50; };
	class CUP_acc_CZ_M3X							{ quality = 1; price = 50; };
	class CUP_optic_PSO_1							{ quality = 1; price = 100; };
	class CUP_optic_PSO_3							{ quality = 1; price = 100; };
	class CUP_optic_Kobra							{ quality = 1; price = 100; };
	class CUP_optic_GOSHAWK							{ quality = 3; price = 1000; };
	class CUP_optic_NSPU							{ quality = 2; price = 500; };
	class CUP_optic_PechenegScope					{ quality = 1; price = 100; };
	class CUP_optic_HoloBlack						{ quality = 1; price = 100; };
	class CUP_optic_HoloWdl							{ quality = 1; price = 100; };
	class CUP_optic_HoloDesert						{ quality = 1; price = 100; };
	class CUP_optic_Eotech533						{ quality = 1; price = 100; };
	class CUP_optic_Eotech533Grey					{ quality = 1; price = 100; };
	class CUP_optic_CompM4							{ quality = 1; price = 100; };
	class CUP_optic_SUSAT							{ quality = 1; price = 100; };
	class CUP_optic_CWS								{ quality = 1; price = 1000; };
	class CUP_optic_RCO								{ quality = 1; price = 100; };
	class CUP_optic_RCO_desert						{ quality = 1; price = 100; };
	class CUP_optic_CompM2_Woodland2				{ quality = 1; price = 100; };
	class CUP_optic_CompM2_Woodland					{ quality = 1; price = 100; };
	class CUP_optic_CompM2_Black					{ quality = 1; price = 100; };
	class CUP_optic_CompM2_Desert					{ quality = 1; price = 100; };
	class CUP_optic_ACOG							{ quality = 1; price = 100; };
	class CUP_optic_SB_3_12x50_PMII					{ quality = 1; price = 100; };
	class CUP_optic_AN_PAS_13c2						{ quality = 3; price = 1000; };
	class CUP_optic_AN_PVS_4						{ quality = 2; price = 500; };
	class CUP_optic_AN_PVS_10						{ quality = 2; price = 500; };
	class CUP_optic_LeupoldMk4						{ quality = 1; price = 100; };
	class CUP_optic_LeupoldM3LR						{ quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_CQ_T					{ quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_MRT_tan				{ quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert		{ quality = 1; price = 100; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland	{ quality = 1; price = 100; };
	class CUP_optic_Leupold_VX3						{ quality = 1; price = 100; };
	class CUP_optic_ElcanM145						{ quality = 1; price = 100; };
	class CUP_optic_ELCAN_SpecterDR					{ quality = 1; price = 100; };
	class CUP_optic_AN_PAS_13c1						{ quality = 3; price = 1000; };
	class CUP_optic_SB_11_4x20_PM					{ quality = 1; price = 100; };
	class CUP_optic_ZDDot							{ quality = 1; price = 100; };
	class CUP_optic_MRad							{ quality = 1; price = 100; };
	class CUP_optic_TrijiconRx01_black				{ quality = 1; price = 100; };
	class CUP_optic_TrijiconRx01_desert				{ quality = 1; price = 100; };
	class CUP_muzzle_PBS4                                    { quality = 1; price = 50; };
	class CUP_muzzle_PB6P9                                   { quality = 1; price = 50; };
	class CUP_muzzle_Bizon                                   { quality = 1; price = 50; };
	class CUP_muzzle_snds_M110                               { quality = 1; price = 50; };
	class CUP_muzzle_snds_M14                                { quality = 1; price = 50; };
	class CUP_muzzle_snds_M9                                 { quality = 1; price = 50; };
	class CUP_muzzle_snds_MicroUzi                           { quality = 1; price = 50; };
	class CUP_muzzle_snds_AWM                                { quality = 1; price = 50; };
	class CUP_muzzle_snds_G36_black                          { quality = 1; price = 50; };
	class CUP_muzzle_snds_G36_desert                         { quality = 1; price = 50; };
	class CUP_muzzle_snds_L85                                { quality = 1; price = 50; };
	class CUP_muzzle_snds_M16_camo                           { quality = 1; price = 50; };
	class CUP_muzzle_snds_M16                                { quality = 1; price = 50; };
	class CUP_muzzle_snds_SCAR_L                             { quality = 1; price = 50; };
	class CUP_muzzle_mfsup_SCAR_L                            { quality = 1; price = 50; };
	class CUP_muzzle_snds_SCAR_H                             { quality = 1; price = 50; };
	class CUP_muzzle_mfsup_SCAR_H                            { quality = 1; price = 50; };
	class CUP_muzzle_snds_XM8                                { quality = 1; price = 50; };
	class CUP_20Rnd_B_AA12_Pellets                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_B_AA12_74Slug                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_B_AA12_HE                                { quality = 1; price = 25; sellPrice = 1; };
	class CUP_8Rnd_B_Beneli_74Slug                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_8Rnd_B_Saiga12_74Slug_M                        { quality = 1; price = 25; sellPrice = 1; };
	class CUP_6Rnd_HE_M203                                   { quality = 1; price = 100*6; sellPrice = 1; };
	class CUP_6Rnd_FlareWhite_M203                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_FlareGreen_M203                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_FlareRed_M203                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_FlareYellow_M203                          { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_Smoke_M203                                { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_SmokeRed_M203                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_SmokeGreen_M203                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_6Rnd_SmokeYellow_M203                          { quality = 1; price = 50; sellPrice = 1; };
	class CUP_1Rnd_HE_M203                                   { quality = 1; price = 100; sellPrice = 1; };
	class CUP_1Rnd_HEDP_M203                                 { quality = 1; price = 150; sellPrice = 1; };
	class CUP_FlareWhite_M203                                { quality = 1; price = 50; sellPrice = 1; };
	class CUP_FlareGreen_M203                                { quality = 1; price = 50; sellPrice = 1; };
	class CUP_FlareRed_M203                                  { quality = 1; price = 50; sellPrice = 1; };
	class CUP_FlareYellow_M203                               { quality = 1; price = 50; sellPrice = 1; };
	class CUP_1Rnd_Smoke_M203                                { quality = 1; price = 50; sellPrice = 1; };
	class CUP_1Rnd_SmokeRed_M203                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_1Rnd_SmokeGreen_M203                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_1Rnd_SmokeYellow_M203                          { quality = 1; price = 50; sellPrice = 1; };
	class CUP_8Rnd_9x18_Makarov_M                            { quality = 1; price = 8; sellPrice = 1; };
	class CUP_8Rnd_9x18_MakarovSD_M                          { quality = 1; price = 8; sellPrice = 1; };
	class CUP_15Rnd_9x19_M9                                  { quality = 1; price = 8; sellPrice = 1; };
	class CUP_18Rnd_9x19_Phantom                             { quality = 1; price = 8; sellPrice = 1; };
	class CUP_6Rnd_45ACP_M                                   { quality = 1; price = 8; sellPrice = 1; };
	class CUP_17Rnd_9x19_glock17                             { quality = 1; price = 8; sellPrice = 1; };
	class CUP_7Rnd_45ACP_1911                                { quality = 1; price = 8; sellPrice = 1; };
	class CUP_10Rnd_9x19_Compact                             { quality = 1; price = 8; sellPrice = 1; };
	class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M     { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_M249              { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249           { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE1_Red_Tracer_556x45_M249              { quality = 1; price = 75; sellPrice = 1; };
	class CUP_100Rnd_TE4_Green_Tracer_556x45_M249            { quality = 1; price = 75; sellPrice = 1; };
	class CUP_100Rnd_TE4_Red_Tracer_556x45_M249              { quality = 1; price = 75; sellPrice = 1; };
	class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249           { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1          { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1            { quality = 1; price = 75; sellPrice = 1; };
	class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1         { quality = 1; price = 75; sellPrice = 1; };
	class CUP_50Rnd_UK59_762x54R_Tracer                      { quality = 1; price = 75; sellPrice = 1; };
	class CUP_64Rnd_9x19_Bizon_M                             { quality = 1; price = 20; sellPrice = 1; };
	class CUP_64Rnd_Green_Tracer_9x19_Bizon_M                { quality = 1; price = 20; sellPrice = 1; };
	class CUP_64Rnd_Red_Tracer_9x19_Bizon_M                  { quality = 1; price = 20; sellPrice = 1; };
	class CUP_64Rnd_White_Tracer_9x19_Bizon_M                { quality = 1; price = 20; sellPrice = 1; };
	class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M               { quality = 1; price = 20; sellPrice = 1; };
	class CUP_30Rnd_9x19_EVO                                 { quality = 1; price = 10; sellPrice = 1; };
	class CUP_30Rnd_9x19_UZI                                 { quality = 1; price = 10; sellPrice = 1; };
	class CUP_30Rnd_9x19_MP5                                 { quality = 1; price = 10; sellPrice = 1; };
	class CUP_20Rnd_B_765x17_Ball_M                          { quality = 1; price = 10; sellPrice = 1; };
	class CUP_5Rnd_127x99_as50_M                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_5Rnd_86x70_L115A1                              { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10Rnd_762x51_CZ750_Tracer                      { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10Rnd_762x51_CZ750                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10x_303_M                                      { quality = 1; price = 50; sellPrice = 1; };
	class CUP_5Rnd_762x51_M24                                { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10Rnd_127x99_m107                              { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_762x51_B_M110                            { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110            { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110               { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10Rnd_762x54_SVD_M                             { quality = 1; price = 50; sellPrice = 1; };
	class CUP_10Rnd_9x39_SP5_VSS_M                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_20Rnd_9x39_SP5_VSS_M                           { quality = 1; price = 50; sellPrice = 1; };
	class CUP_5x_22_LR_17_HMR_M                              { quality = 1; price = 50; sellPrice = 1; };
	class CUP_5Rnd_127x108_KSVK_M                            { quality = 1; price = 50; sellPrice = 1; };
	class CUP_30Rnd_545x39_AK_M                              { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M               { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M       { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_762x39_AK47_M                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_556x45_Stanag                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_556x45_G36                               { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Red_Tracer_556x45_G36                { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Green_Tracer_556x45_G36              { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_100Rnd_556x45_BetaCMag                         { quality = 1; price = 25; sellPrice = 1; };
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag          { quality = 1; price = 25; sellPrice = 1; };
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag        { quality = 1; price = 25; sellPrice = 1; };
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag       { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_556x45_Stanag                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_762x51_CZ805B                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B          { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_762x51_DMR                               { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR                { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR              { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR              { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_762x51_FNFAL_M                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_Sa58_M_TracerG                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_Sa58_M_TracerR                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_Sa58_M_TracerY                           { quality = 1; price = 25; sellPrice = 1; };
	class CUP_30Rnd_Sa58_M                                   { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_762x51_B_SCAR                            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR            { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR               { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR             { quality = 1; price = 25; sellPrice = 1; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR             { quality = 1; price = 25; sellPrice = 1; };
};
class CfgExileEnvironment
{
	class Chernarus
	{
		class FireFlies
		{
			enable = 1;
			startHour = 18;
			endHour = 4;
		};
		class Anomalies
		{
			enable = 0;
		};
		class Breathing
		{
			enable = 0;
		};
		class Snow
		{
			enable = 0;
		};
		class Radiation
		{
			enable = 0;
		};
		class Temperature
		{
			daytimeTemperature[] = {8.12,8.50,8.32,8.90,9.10,9.40,10.18,12.03,16.00,18.46,19.13,20.00,20.12,19.97,18.36,17.45,16.69,14.36,12.80,10.25,9.89,9.40,8.90,8.50,8.12};
			overcast = -2;
			rain = -5;
			wind = -1;
			altitude = -0.5;
			water = -5;
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};
		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};
		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};
		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};
		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};
		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};
		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};
		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};
		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};
		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};
		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	lifeTime = 8;
	spawnInterval = 45;
	maximumPositionCoverage = 75;
	maximumNumberOfLootSpotsPerBuilding = 15;
	maximumNumberOfItemsPerLootSpot = 1;
	spawnRadius = 100;
	minimumDistanceToTraderZones = 500;
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	code = "LSG6";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	buyInAmount = 5000;
};
class CfgFlags
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};
class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};
class CfgInteractionMenus
{
	#include "addons\EBM\menus.hpp"
	class Car
	{
		target = "Car";
		targetType = 2;
		class Actions
		{
			class PackDeployedVehicle: ExileAbstractAction
			{
				title = "Pack Vehicle";
				condition = "call ExAd_XM8_DV_fnc_canPack";
				action = "call ExAd_XM8_DV_fnc_pack";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};
	class Armored
	{
		target = "Armored";
		targetType = 2;
		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};
	class Support
	{
		target = "Support";
		targetType = 2;
		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};
	class Tank
	{
		target = "Tank";
		targetType = 2;
		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};
	class Air
	{
		target = "Air";
		targetType = 2;
		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};
			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
			class ClaimVehicle: ExileAbstractAction
			{
				title = "Claim Ownership";
				condition = "true";
				action = "call ExileClient_ClaimVehicles_network_claimRequestSend";
			};
		};
	};
	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";
		class Actions
		{
			class HackSafe : ExileAbstractAction
			{
				title = "Hack Safe";
				condition = "call ExAd_fnc_canHackSafe";
				action = "_this spawn ExAd_fnc_startHack";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};
	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";
		class Actions
		{
			class StopHack: ExileAbstractAction
			{
				title = "Interupt Hack";
				condition = "(ExileClientInteractionObject getVariable ['ExAd_HACKING_IN_PROGRESS', false])";
				action = "_this spawn ExAd_fnc_stopHack";
			};
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
			class VirtualGarage: ExileAbstractAction
			{
				title = "Access Virtual Garage";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "call ExileClient_VirtualGarage_AccessGarage";
			};
		};
	};
	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";
		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};
			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};
			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";
		class Actions
		{
			class Grind : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "call ExAd_fnc_canGrindLock";
				action = "_this spawn ExAd_fnc_grindLock";
			};
			
			class RestoreLock : ExileAbstractAction
			{
				title = "Restore Lock";
				condition = "_object call ExAd_fnc_canRestoreLock";
				action = "_this spawn ExAd_fnc_restoreLock";
			};
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};
			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};
			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};
			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};
			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};
		};
	};
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";
		class Actions
		{
			class Pack
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";
		class Actions
		{
			class HackVG : ExileAbstractAction
			{
				title = "Hack Virtual Garage";
				condition = "call ExAd_fnc_canHackVG";
				action = "_this spawn ExAd_fnc_startHack";
			};
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};
	class Boat
	{
		targetType = 2;
		target = "Ship";
		class Actions
		{
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};
	class Bikes
	{
		targetType = 2;
		target = "Bicycle";
		class Actions
		{
			class PackDeployedVehicle: ExileAbstractAction
			{
				title = "Pack Bike";
				condition = "call ExAd_XM8_DV_fnc_canPack";
				action = "call ExAd_XM8_DV_fnc_pack";
			};
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};
	class Player
	{
		targetType = 2;
		target = "Exile_Unit_Player";
		class Actions
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};
			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Item_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] =
		{
			"barrelwater_f",
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",
			"Land_Sink_F"
		};
	};
	class CleanWaterSource
	{
		name = "Water cooler";
		models[] =
		{
			"watercooler"
		};
	};
	class WorkBench
	{
		name = "Work Bench";
		models[] =
		{
			"workstand_f.p3d"
		};
	};
	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] =
		{
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			"containerline_01_f",
			"containerline_02_f",
			"containerline_03_f",
			"wreck_"
		};
	};
	class WoodSource
	{
		name = "Trees";
		models[] =
		{
			" t_",
			" bo_t_",
            " str_",
            " Smrk_",
            " les_",
            " brg_"
		};
	};
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] =
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};
	};
};
class CfgLocker
{
	numbersOnly = "0123456789";
	maxDeposit = 999999;
};
class CfgPlayer
{
	hungerDecay = 90;
	thirstDecay = 60;
	healthDecay = 5.0;
	thirstRegen = 90;
	hungerRegen = 90;
	recoveryPerMinute = 2;
	customAimCoefficient = -1;
	enableFatigue = 0;
	enableStamina = 0;
	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	chances[] =
	{
		{85, ""},
		{95, "Level1"},
		{96, "Level2"},
		{97, "Level3"},
		{98, "Level4"},
		{99, "Level5"},
		{100, "Jackpot"}
	};
	class Prizes
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};
		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};
		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};
		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};
		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	prices[] =
	{
		{5000,					15,			30 					},
		{10000,					30,			60 					},
		{15000,					45,			90 					},
		{20000,					60,			120					},
		{25000,					75,			150					},
		{30000,					90,			180					},
		{35000,					105,		210					},
		{40000,					120,		240					},
		{45000,					135,		270					},
		{50000,					150,		300					}
	};
	maximumRadius = 150;
	minimumDistanceToOtherTerritories = 325;
	maximumNumberOfTerritoriesPerPlayer = 1;
	minimumDistanceToTraderZones = 1000;
	minimumDistanceToSpawnZones = 1000;
	popTabAmountPerObject = 50;
};
class CfgTraderCategories
{
	#include "addons\EBM\traders.hpp"
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
		};
	};
	
	class HLCMuzzleAttachments 
	{
		name = "HLC Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"hlc_muzzle_545SUP_AK",
			"hlc_muzzle_762SUP_AK",
			"hlc_muzzle_snds_fal",
			"hlc_muzzle_snds_HK33",
			"hlc_muzzle_snds_G3",
			"hlc_muzzle_snds_M14",
			"hlc_muzzle_556NATO_KAC",
			"hlc_muzzle_300blk_KAC",
			"hlc_muzzle_Agendasix",
			"hlc_muzzle_Tundra",
			"hlc_muzzle_Agendasix10mm",
			"hlc_muzzle_snds_AUG",
			"hlc_muzzle_snds_a6AUG"
		};
	};

	class HLCOpticAttachments 
	{
		name = "HLC Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
            "hlc_optic_GOSHAWK",
            "hlc_optic_PVS4G3",
            "hlc_optic_PVS4M14",
			"HLC_Optic_PSO1",
			"HLC_Optic_1p29",
			"hlc_optic_kobra",	
			"hlc_optic_PVS4FAL",
			"hlc_optic_suit",	
			"HLC_Optic_ZFSG1",	
			"hlc_optic_accupoint_g3",
			"hlc_optic_artel_m14",
			"hlc_optic_LRT_m14"
		};
	};
	
	class HLCLightMachineGuns
	{
		name = "HLC Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
		"hlc_rifle_RPK12",
		"hlc_rifle_rpk",
		"hlc_lmg_m60",
		"hlc_lmg_M60E4"
		};
	};
	
	class HLCAssaultRifles
	{
		name = "HLC Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"hlc_rifle_ak12",
			"hlc_rifle_ak47",
			"hlc_rifle_aek971",
			"hlc_rifle_aks74",
			"hlc_rifle_aks74_GL",
			"hlc_rifle_aks74u",
			"hlc_rifle_ak74",
			"hlc_rifle_akm",
			"hlc_rifle_akmgl",
			"hlc_rifle_l1a1slr",
			"hlc_rifle_SLR",
			"hlc_rifle_STG58F",
			"hlc_rifle_FAL5061",
			"hlc_rifle_c1A1",
			"hlc_rifle_LAR",
			"hlc_rifle_SLRchopmod",
			"hlc_rifle_falosw",
			"hlc_rifle_osw_GL",
			"hlc_rifle_g3sg1",
			"hlc_rifle_g3a3",
			"hlc_rifle_g3ka4",
			"HLC_Rifle_g3ka4_GL",
			"hlc_rifle_hk51",
			"hlc_rifle_hk53",
			"hlc_rifle_RU556",
			"hlc_rifle_RU5562",
			"hlc_rifle_Colt727",
			"hlc_rifle_Colt727_GL",
			"hlc_rifle_bcmjack",
			"hlc_rifle_Bushmaster300",
			"hlc_rifle_vendimus",
			"hlc_rifle_SAMR",
			"hlc_rifle_samr2",
			"hlc_rifle_honeybadger",
			"hlc_rifle_aug",
			"hlc_rifle_auga1carb",
			"hlc_rifle_aughbar",
			"hlc_rifle_auga2",
			"hlc_rifle_auga2carb",
			"hlc_rifle_auga2lsw",
			"hlc_rifle_augsr",
			"hlc_rifle_augsrcarb",
			"hlc_rifle_augsrhbar",
			"hlc_rifle_auga3",
			"hlc_rifle_auga3_GL",
			"hlc_rifle_CQBR",
			"hlc_rifle_m4m203",
			"hlc_rifle_M4"
		};
	};
	
	class HLCSniperRifles
	{
		name = "HLC Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"hlc_rifle_M21",
			"hlc_rifle_psg1",
			"hlc_rifle_awmagnum_BL"
		};
	};
	
	class HLCAmmunition
	{
		name = "HLC Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[]=
		{
			"hlc_100Rnd_762x51_B_M60E4",
			"hlc_100Rnd_762x51_T_M60E4",	
			"hlc_100Rnd_762x51_M_M60E4",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_30Rnd_545x39_S_AK",				
			"hlc_45Rnd_545x39_t_rpk",	
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_m_rpk",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_20Rnd_762x51_B_fal",
			"hlc_20Rnd_762x51_t_fal",
			"hlc_20Rnd_762x51_S_fal",
			"hlc_50rnd_762x51_M_FAL",
			"hlc_20Rnd_762x51_B_G3",
			"hlc_20rnd_762x51_T_G3",
			"hlc_50rnd_762x51_M_G3",
			"hlc_30rnd_556x45_b_HK33",
			"hlc_30rnd_556x45_t_HK33",
			"hlc_30rnd_556x45_epr_HK33",
			"hlc_30rnd_556x45_sost_HK33",
			"hlc_20Rnd_762x51_B_M14",
			"hlc_20rnd_762x51_T_M14",
			//"hlc_50rnd_762x51_M_M14",
			"29rnd_300BLK_STANAG",
			"29rnd_300BLK_STANAG_T",
			"29rnd_300BLK_STANAG_S",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30Rnd_9x19_B_MP5",
			"hlc_30Rnd_9x19_GD_MP5",
			"hlc_30Rnd_9x19_SD_MP5",
			"hlc_30Rnd_10mm_B_MP5",
			"hlc_30Rnd_10mm_JHP_MP5",
			"hlc_30Rnd_556x45_B_AUG",
			"hlc_30Rnd_556x45_SOST_AUG",
			"hlc_30Rnd_556x45_SPR_AUG",
			"hlc_30Rnd_556x45_T_AUG",
			"hlc_40Rnd_556x45_B_AUG",
			"hlc_40Rnd_556x45_SOST_AUG",
			"hlc_40Rnd_556x45_SPR_AUG",
			"hlc_25Rnd_9x19mm_M882_AUG",
			"hlc_25Rnd_9x19mm_JHP_AUG",
			"hlc_25Rnd_9x19mm_subsonic_AUG",
			"hlc_10rnd_12g_buck_S12",
			"hlc_10rnd_12g_slug_S12",
			"hlc_VOG25_AK",
			"hlc_GRD_White",
			"hlc_GRD_blue",
			"hlc_GRD_green",
			"hlc_GRD_orange",
			"hlc_GRD_purple",
			"hlc_GRD_red",
			"hlc_5rnd_300WM_FMJ_AWM"
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_B_FullGhillie_ard",
			"U_B_FullGhillie_lsh",
			"U_B_FullGhillie_sard",
			"U_B_GhillieSuit",
			"U_I_FullGhillie_ard",
			"U_I_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_I_GhillieSuit",
			"U_O_FullGhillie_ard",
			"U_O_FullGhillie_lsh",
			"U_O_FullGhillie_sard",
			"U_O_GhillieSuit",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			"U_B_T_Soldier_F",
			"U_B_T_Soldier_AR_F",
			"U_B_T_Soldier_SL_F",
			"U_B_T_Sniper_F",
			"U_B_T_FullGhillie_tna_F",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			"U_B_GEN_Soldier_F",
			"U_B_GEN_Commander_F",
			"U_O_T_Soldier_F",
			"U_O_T_Officer_F",
			"U_O_T_Sniper_F",
			"U_O_T_FullGhillie_tna_F",
			"U_O_V_Soldier_Viper_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_I_C_Soldier_Para_1_F",
			"U_I_C_Soldier_Para_2_F",
			"U_I_C_Soldier_Para_3_F",
			"U_I_C_Soldier_Para_4_F",
			"U_I_C_Soldier_Para_5_F",
			"U_I_C_Soldier_Bandit_1_F",
			"U_I_C_Soldier_Bandit_2_F",
			"U_I_C_Soldier_Bandit_3_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F",
			"U_I_C_Soldier_Camo_F",
			"U_C_man_sport_1_F",
			"U_C_man_sport_2_F",
			"U_C_man_sport_3_F",
			"U_C_Man_casual_1_F",
			"U_C_Man_casual_2_F",
			"U_C_Man_casual_3_F",
			"U_C_Man_casual_4_F",
			"U_C_Man_casual_5_F",
			"U_C_Man_casual_6_F",
			"U_B_CTRG_Soldier_urb_1_F",
			"U_B_CTRG_Soldier_urb_2_F",
			"U_B_CTRG_Soldier_urb_3_F"
		};
	};
	class CupUniforms
	{
		name = "CUP Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"CUP_O_TKI_Khet_Partug_01",
            "CUP_O_TKI_Khet_Jeans_01",
            "CUP_O_TKI_Khet_Jeans_02",
            "CUP_O_TKI_Khet_Jeans_03",
            "CUP_O_TKI_Khet_Jeans_04",
            "CUP_O_TKI_Khet_Partug_02",
            "CUP_O_TKI_Khet_Partug_03",
            "CUP_O_TKI_Khet_Partug_04",
            "CUP_O_TKI_Khet_Partug_05",
            "CUP_O_TKI_Khet_Partug_06",
            "CUP_O_TKI_Khet_Partug_07",
            "CUP_O_TKI_Khet_Partug_08",
            "CUP_U_B_CZ_WDL_TShirt",
            "CUP_U_B_FR_Corpsman",
            "CUP_U_B_FR_DirAction",
            "CUP_U_B_FR_DirAction2",
            "CUP_U_B_FR_Light",
            "CUP_U_B_FR_Officer",
            "CUP_U_B_FR_Scout",
            "CUP_U_B_FR_Scout1",
            "CUP_U_B_FR_Scout2",
            "CUP_U_B_FR_Scout3",
            "CUP_U_B_FR_SpecOps",
            "CUP_U_B_GER_Flecktarn_1",
            "CUP_U_B_GER_Flecktarn_2",
            "CUP_U_B_GER_Fleck_Ghillie",
            "CUP_U_B_GER_Ghillie",
            "CUP_U_B_GER_Tropentarn_1",
            "CUP_U_B_GER_Tropentarn_2",
            "CUP_U_B_USMC_Ghillie_WDL",
            "CUP_U_B_USMC_MARPAT_WDL_Kneepad",
            "CUP_U_B_USMC_MARPAT_WDL_RolledUp",
            "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
            "CUP_U_B_USMC_MARPAT_WDL_Sleeves",
            "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
            "CUP_U_B_USMC_Officer",
            "CUP_U_B_USMC_PilotOverall",
            "CUP_U_C_Citizen_01",
            "CUP_U_C_Citizen_02",
            "CUP_U_C_Citizen_03",
            "CUP_U_C_Citizen_04",
            "CUP_U_C_Pilot_01",
            "CUP_U_C_Profiteer_01",
            "CUP_U_C_Profiteer_02",
            "CUP_U_C_Profiteer_03",
            "CUP_U_C_Profiteer_04",
            "CUP_U_C_Villager_01",
            "CUP_U_C_Villager_02",
            "CUP_U_C_Villager_03",
            "CUP_U_C_Villager_04",
            "CUP_U_C_Woodlander_01",
            "CUP_U_C_Woodlander_02",
            "CUP_U_C_Woodlander_03",
            "CUP_U_C_Woodlander_04",
            "CUP_U_C_Worker_01",
            "CUP_U_C_Worker_02",
            "CUP_U_C_Worker_03",
            "CUP_U_C_Worker_04",
            "CUP_U_I_Ghillie_Top",
            "CUP_U_I_GUE_Flecktarn",
            "CUP_U_I_GUE_Flecktarn2",
            "CUP_U_I_GUE_Flecktarn3",
            "CUP_U_I_GUE_Woodland1",
            "CUP_U_I_RACS_Desert_1",
            "CUP_U_I_RACS_Desert_2",
            "CUP_U_I_RACS_PilotOverall",
            "CUP_U_I_RACS_Urban_1",
            "CUP_U_I_RACS_Urban_2",
            "CUP_U_O_Partisan_TTsKO",
            "CUP_U_O_Partisan_TTsKO_Mixed",
            "CUP_U_O_Partisan_VSR_Mixed1",
            "CUP_U_O_Partisan_VSR_Mixed2",
            "CUP_U_O_SLA_Desert",
            "CUP_U_O_SLA_Green",
            "CUP_U_O_SLA_MixedCamo",
            "CUP_U_O_SLA_Officer",
            "CUP_U_O_SLA_Officer_Suit",
            "CUP_U_O_SLA_Overalls_Pilot",
            "CUP_U_O_SLA_Overalls_Tank",
            "CUP_U_O_SLA_Urban",
            "CUP_U_O_TK_Ghillie",
            "CUP_U_O_TK_Ghillie_Top",
            "CUP_U_O_TK_Green",
            "CUP_U_O_TK_MixedCamo",
            "CUP_U_O_TK_Officer"
		};
	};
	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F",
			"V_TacChestrig_cbr_F",
			"V_PlateCarrier1_tna_F",
			"V_PlateCarrier2_tna_F",
			"V_PlateCarrierSpec_tna_F",
			"V_PlateCarrierGL_tna_F",
			"V_HarnessO_ghex_F",
			"V_HarnessOGL_ghex_F",
			"V_BandollierB_ghex_F",
			"V_TacVest_gen_F",
			"V_PlateCarrier1_rgr_noflag_F",
			"V_PlateCarrier2_rgr_noflag_F"
		};
	};
	class CupVests
	{
		name = "CUP Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"CUP_V_B_GER_Carrier_Rig",
            "CUP_V_B_GER_Carrier_Rig_2",
            "CUP_V_B_GER_Carrier_Vest",
            "CUP_V_B_GER_Carrier_Vest_2",
            "CUP_V_B_GER_Carrier_Vest_3",
            "CUP_V_B_GER_Vest_1",
            "CUP_V_B_GER_Vest_2",
            "CUP_V_B_LHDVest_Blue",
            "CUP_V_B_LHDVest_Brown",
            "CUP_V_B_LHDVest_Green",
            "CUP_V_B_LHDVest_Red",
            "CUP_V_B_LHDVest_Violet",
            "CUP_V_B_LHDVest_White",
            "CUP_V_B_LHDVest_Yellow",
            "CUP_V_B_MTV",
            "CUP_V_B_MTV_LegPouch",
            "CUP_V_B_MTV_Marksman",
            "CUP_V_B_MTV_MG",
            "CUP_V_B_MTV_Mine",
            "CUP_V_B_MTV_noCB",
            "CUP_V_B_MTV_Patrol",
            "CUP_V_B_MTV_PistolBlack",
            "CUP_V_B_MTV_Pouches",
            "CUP_V_B_MTV_TL",
            "CUP_V_B_PilotVest",
            "CUP_V_B_RRV_DA1",
            "CUP_V_B_RRV_DA2",
            "CUP_V_B_RRV_Light",
            "CUP_V_B_RRV_Medic",
            "CUP_V_B_RRV_MG",
            "CUP_V_B_RRV_Officer",
            "CUP_V_B_RRV_Scout",
            "CUP_V_B_RRV_Scout2",
            "CUP_V_B_RRV_Scout3",
            "CUP_V_B_RRV_TL",
            "CUP_V_I_Carrier_Belt",
            "CUP_V_I_Guerilla_Jacket",
            "CUP_V_I_RACS_Carrier_Vest",
            "CUP_V_I_RACS_Carrier_Vest_2",
            "CUP_V_I_RACS_Carrier_Vest_3",
            "CUP_V_OI_TKI_Jacket1_01",
            "CUP_V_OI_TKI_Jacket1_02",
            "CUP_V_OI_TKI_Jacket1_03",
            "CUP_V_OI_TKI_Jacket1_04",
            "CUP_V_OI_TKI_Jacket1_05",
            "CUP_V_OI_TKI_Jacket1_06",
            "CUP_V_OI_TKI_Jacket2_01",
            "CUP_V_OI_TKI_Jacket2_02",
            "CUP_V_OI_TKI_Jacket2_03",
            "CUP_V_OI_TKI_Jacket2_04",
            "CUP_V_OI_TKI_Jacket2_05",
            "CUP_V_OI_TKI_Jacket2_06",
            "CUP_V_OI_TKI_Jacket3_01",
            "CUP_V_OI_TKI_Jacket3_02",
            "CUP_V_OI_TKI_Jacket3_03",
            "CUP_V_OI_TKI_Jacket3_04",
            "CUP_V_OI_TKI_Jacket3_05",
            "CUP_V_OI_TKI_Jacket3_06",
            "CUP_V_OI_TKI_Jacket4_01",
            "CUP_V_OI_TKI_Jacket4_02",
            "CUP_V_OI_TKI_Jacket4_03",
            "CUP_V_OI_TKI_Jacket4_04",
            "CUP_V_OI_TKI_Jacket4_05",
            "CUP_V_OI_TKI_Jacket4_06",
            "CUP_V_O_SLA_Carrier_Belt",
            "CUP_V_O_SLA_Carrier_Belt02",
            "CUP_V_O_SLA_Carrier_Belt03",
            "CUP_V_O_SLA_Flak_Vest01",
            "CUP_V_O_SLA_Flak_Vest02",
            "CUP_V_O_SLA_Flak_Vest03",
            "CUP_V_O_TK_CrewBelt",
            "CUP_V_O_TK_OfficerBelt",
            "CUP_V_O_TK_OfficerBelt2",
            "CUP_V_O_TK_Vest_1",
            "CUP_V_O_TK_Vest_2"
		};
	};
	class Headgear
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			"H_Helmet_Skate",
			"H_HelmetB_TI_tna_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetB_Light_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetLeaderO_ghex_F",
			"H_HelmetO_ghex_F",
			"H_HelmetCrew_O_ghex_F",
			"H_MilCap_tna_F",
			"H_MilCap_ghex_F",
			"H_Booniehat_tna_F",
			"H_Beret_gen_F",
			"H_MilCap_gen_F",
			"H_Cap_oli_Syndikat_F",
			"H_Cap_tan_Syndikat_F",
			"H_Cap_blk_Syndikat_F",
			"H_Cap_grn_Syndikat_F"
		};
	};
	class CupHeadgear
	{
		name = "CUP Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
            "CUP_H_C_Beanie_01",
            "CUP_H_C_Beanie_02",
            "CUP_H_C_Beanie_03",
            "CUP_H_C_Beanie_04",
            "CUP_H_C_Beret_01",
            "CUP_H_C_Beret_02",
            "CUP_H_C_Beret_03",
            "CUP_H_C_Beret_04",
			"CUP_H_C_Ushanka_01",
            "CUP_H_C_Ushanka_02",
            "CUP_H_C_Ushanka_03",
            "CUP_H_C_Ushanka_04",
            "CUP_H_FR_BandanaGreen",
            "CUP_H_FR_BandanaWdl",
            "CUP_H_FR_Bandana_Headset",
            "CUP_H_FR_BeanieGreen",
            "CUP_H_FR_BoonieMARPAT",
            "CUP_H_FR_BoonieWDL",
            "CUP_H_FR_Cap_Headset_Green",
            "CUP_H_FR_Cap_Officer_Headset",
            "CUP_H_FR_ECH",
            "CUP_H_FR_Headband_Headset",
            "CUP_H_FR_Headset",
            "CUP_H_FR_PRR_BoonieWDL",
            "CUP_H_GER_Boonie_desert",
            "CUP_H_GER_Boonie_Flecktarn",
            "CUP_H_NAPA_Fedora",
            "CUP_H_Navy_CrewHelmet_Blue",
            "CUP_H_Navy_CrewHelmet_Brown",
            "CUP_H_Navy_CrewHelmet_Green",
            "CUP_H_Navy_CrewHelmet_Red",
            "CUP_H_Navy_CrewHelmet_Violet",
            "CUP_H_Navy_CrewHelmet_White",
            "CUP_H_Navy_CrewHelmet_Yellow",
            "CUP_H_PMC_Cap_Grey",
            "CUP_H_PMC_Cap_PRR_Grey",
            "CUP_H_PMC_Cap_PRR_Tan",
            "CUP_H_PMC_Cap_Tan",
            "CUP_H_PMC_EP_Headset",
            "CUP_H_PMC_PRR_Headset",
            "CUP_H_RACS_Beret_Blue",
            "CUP_H_RACS_Helmet_Des",
            "CUP_H_RACS_Helmet_DPAT",
            "CUP_H_RACS_Helmet_Goggles_Des",
            "CUP_H_RACS_Helmet_Goggles_DPAT",
            "CUP_H_RACS_Helmet_Headset_Des",
            "CUP_H_RACS_Helmet_Headset_DPAT",
            "CUP_H_SLA_Beret",
            "CUP_H_SLA_Boonie",
            "CUP_H_SLA_Helmet",
            "CUP_H_SLA_OfficerCap",
            "CUP_H_SLA_Pilot_Helmet",
            "CUP_H_SLA_SLCap",
            "CUP_H_SLA_TankerHelmet",
            "CUP_H_TKI_Lungee_01",
            "CUP_H_TKI_Lungee_02",
            "CUP_H_TKI_Lungee_03",
            "CUP_H_TKI_Lungee_04",
            "CUP_H_TKI_Lungee_05",
            "CUP_H_TKI_Lungee_06",
            "CUP_H_TKI_Lungee_Open_01",
            "CUP_H_TKI_Lungee_Open_02",
            "CUP_H_TKI_Lungee_Open_03",
            "CUP_H_TKI_Lungee_Open_04",
            "CUP_H_TKI_Lungee_Open_05",
            "CUP_H_TKI_Lungee_Open_06",
            "CUP_H_TKI_Pakol_1_01",
            "CUP_H_TKI_Pakol_1_02",
            "CUP_H_TKI_Pakol_1_03",
            "CUP_H_TKI_Pakol_1_04",
            "CUP_H_TKI_Pakol_1_05",
            "CUP_H_TKI_Pakol_1_06",
            "CUP_H_TKI_Pakol_2_01",
            "CUP_H_TKI_Pakol_2_02",
            "CUP_H_TKI_Pakol_2_03",
            "CUP_H_TKI_Pakol_2_04",
            "CUP_H_TKI_Pakol_2_05",
            "CUP_H_TKI_Pakol_2_06",
            "CUP_H_TKI_SkullCap_01",
            "CUP_H_TKI_SkullCap_02",
            "CUP_H_TKI_SkullCap_03",
            "CUP_H_TKI_SkullCap_04",
            "CUP_H_TKI_SkullCap_05",
            "CUP_H_TKI_SkullCap_06",
            "CUP_H_TK_Beret",
            "CUP_H_TK_Helmet",
            "CUP_H_TK_Lungee",
            "CUP_H_TK_PilotHelmet",
            "CUP_H_TK_TankerHelmet",
            "CUP_H_USMC_Crew_Helmet",
            "CUP_H_USMC_Goggles_HelmetWDL",
            "CUP_H_USMC_HeadSet_GoggleW_HelmetWDL",
            "CUP_H_USMC_HeadSet_HelmetWDL",
            "CUP_H_USMC_HelmetWDL",
            "CUP_H_USMC_Helmet_Pilot",
            "CUP_H_USMC_Officer_Cap"
		};
	};
	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};
class Glasses
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};
	class PointerAttachments
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};
	class CupPointerAttachments
	{
		name = "CUP Pointers";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_acc_ANPEQ_15",
			"CUP_acc_ANPEQ_2",
			"CUP_acc_ANPEQ_2_camo",
			"CUP_acc_ANPEQ_2_desert",
			"CUP_acc_ANPEQ_2_grey",
			"CUP_acc_CZ_M3X",
			"CUP_acc_Flashlight",
			"CUP_acc_Flashlight_desert",
			"CUP_acc_Flashlight_wdl",
			"CUP_acc_Glock17_Flashlight",
			"CUP_acc_XM8_light_module"
		};
	};
	class BipodAttachments
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] =
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			"bipod_01_F_khk"
		};
	};
	class MuzzleAttachments
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"
		};
	};
	class CupMuzzleAttachments
	{
		name = "CUP Suppressors";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
            "CUP_muzzle_PBS4",
            "CUP_muzzle_PB6P9",
            "CUP_muzzle_Bizon",
            "CUP_muzzle_snds_M110",
            "CUP_muzzle_snds_M14",
            "CUP_muzzle_snds_M9",
            "CUP_muzzle_snds_MicroUzi",
            "CUP_muzzle_snds_AWM",
            "CUP_muzzle_snds_G36_black",
            "CUP_muzzle_snds_G36_desert",
            "CUP_muzzle_snds_L85",
            "CUP_muzzle_snds_M16_camo",
            "CUP_muzzle_snds_M16",
            "CUP_muzzle_snds_SCAR_L",
            "CUP_muzzle_mfsup_SCAR_L",
            "CUP_muzzle_snds_SCAR_H",
            "CUP_muzzle_mfsup_SCAR_H",
            "CUP_muzzle_snds_XM8"
		};
	};
	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"O_HMG_01_support_F",
			"O_HMG_01_weapon_F"
		};
	};
	class OpticAttachments
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_Yorris",
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F"
		};
	};
	class CupOpticAttachments
	{
		name = "CUP Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"CUP_optic_ACOG",
			"CUP_optic_AN_PVS_10",
			"CUP_optic_AN_PVS_4",
			"CUP_optic_CompM2_Black",
			"CUP_optic_CompM2_Desert",
			"CUP_optic_CompM2_Woodland",
			"CUP_optic_CompM2_Woodland2",
			"CUP_optic_CompM4",
			"CUP_optic_ELCAN_SpecterDR",
			"CUP_optic_ElcanM145",
			"CUP_optic_Eotech533",
			"CUP_optic_Eotech533Grey",
			"CUP_optic_HoloBlack",
			"CUP_optic_HoloDesert",
			"CUP_optic_HoloWdl",
			"CUP_optic_Kobra",
			"CUP_optic_LeupoldM3LR",
			"CUP_optic_LeupoldMk4",
			"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
			"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
			"CUP_optic_LeupoldMk4_CQ_T",
			"CUP_optic_LeupoldMk4_MRT_tan",
			"CUP_optic_Leupold_VX3",
			"CUP_optic_MRad",
			"CUP_optic_NSPU",
			"CUP_optic_PSO_1",
			"CUP_optic_PSO_3",
			"CUP_optic_PechenegScope",
			"CUP_optic_RCO",
			"CUP_optic_RCO_desert",
			"CUP_optic_SB_11_4x20_PM",
			"CUP_optic_SB_3_12x50_PMII",
			"CUP_optic_SUSAT",
			"CUP_optic_TrijiconRx01_black",
			"CUP_optic_TrijiconRx01_desert",
			"CUP_optic_ZDDot"
		};
	};
	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox"
		};
	};
	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Defibrillator"
		};
	};
	class SpecialEquipment
	{
		name = "Special Equipment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"ItemWatch",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"Binocular",
			"Rangefinder",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"Exile_Item_XM8",
			"Exile_Headgear_GasMask",
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F"
		};
	};
	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			"B_Bergen_mcamo_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_tna_F",
			"B_AssaultPack_tna_F",
			"B_Carryall_ghex_F",
			"B_FieldPack_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_ghex_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F"
		};
	};
	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			"Exile_Magazine_8Rnd_74Slug",
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"CUP_20Rnd_B_AA12_Pellets",
            "CUP_20Rnd_B_AA12_74Slug",
            "CUP_20Rnd_B_AA12_HE",
            "CUP_8Rnd_B_Beneli_74Slug",
            "CUP_8Rnd_B_Saiga12_74Slug_M",
            "CUP_8Rnd_9x18_Makarov_M",
            "CUP_8Rnd_9x18_MakarovSD_M",
            "CUP_15Rnd_9x19_M9",
            "CUP_18Rnd_9x19_Phantom",
            "CUP_6Rnd_45ACP_M",
            "CUP_17Rnd_9x19_glock17",
            "CUP_7Rnd_45ACP_1911",
            "CUP_10Rnd_9x19_Compact",
            "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
            "CUP_50Rnd_UK59_762x54R_Tracer",
            "CUP_64Rnd_9x19_Bizon_M",
            "CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_White_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M",
            "CUP_30Rnd_9x19_EVO",
            "CUP_30Rnd_9x19_UZI",
            "CUP_30Rnd_9x19_MP5",
            "CUP_20Rnd_B_765x17_Ball_M",
            "CUP_5Rnd_127x99_as50_M",
            "CUP_5Rnd_86x70_L115A1",
            "CUP_10Rnd_762x51_CZ750_Tracer",
            "CUP_10Rnd_762x51_CZ750",
            "CUP_10x_303_M",
            "CUP_5Rnd_762x51_M24",
            "CUP_10Rnd_127x99_m107",
            "CUP_20Rnd_762x51_B_M110",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_White_Tracer_762x51_M110",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_9x39_SP5_VSS_M",
            "CUP_20Rnd_9x39_SP5_VSS_M",
            "CUP_5x_22_LR_17_HMR_M",
            "CUP_5Rnd_127x108_KSVK_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_556x45_Stanag",
            "CUP_30Rnd_556x45_G36",
            "CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
            "CUP_100Rnd_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
            "CUP_20Rnd_556x45_Stanag",
            "CUP_20Rnd_762x51_CZ805B",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
            "CUP_20Rnd_762x51_DMR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_30Rnd_Sa58_M_TracerG",
            "CUP_30Rnd_Sa58_M_TracerR",
            "CUP_30Rnd_Sa58_M_TracerY",
            "CUP_30Rnd_Sa58_M",
            "CUP_20Rnd_762x51_B_SCAR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"
		};
	};
	class Flares
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F",
			"CUP_FlareWhite_M203",
            "CUP_FlareGreen_M203",
            "CUP_FlareRed_M203",
            "CUP_FlareYellow_M203",
			"CUP_6Rnd_FlareWhite_M203",
            "CUP_6Rnd_FlareGreen_M203",
            "CUP_6Rnd_FlareRed_M203",
            "CUP_6Rnd_FlareYellow_M203"
		};
	};
	class Smokes
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"CUP_1Rnd_Smoke_M203",
            "CUP_1Rnd_SmokeRed_M203",
            "CUP_1Rnd_SmokeGreen_M203",
            "CUP_1Rnd_SmokeYellow_M203",
			"CUP_6Rnd_Smoke_M203",
            "CUP_6Rnd_SmokeRed_M203",
            "CUP_6Rnd_SmokeGreen_M203",
            "CUP_6Rnd_SmokeYellow_M203"
		};
	};
	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};
	class CupExplosives
	{
		name = "CUP Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"CUP_glaunch_M32",
			"CUP_glaunch_M79",
			"CUP_glaunch_Mk13",
			"CUP_1Rnd_HE_M203",
            "CUP_1Rnd_HEDP_M203",
			"CUP_6Rnd_HE_M203"
		};
	};
	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F"
		};
	};
	class CupPistols
	{
		name = "CUP Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"CUP_hgun_Compact",
			"CUP_hgun_Duty",
			"CUP_hgun_Glock17",
			"CUP_hgun_M9",
			"CUP_hgun_MicroUzi",
			"CUP_hgun_PB6P9",
			"CUP_hgun_Phantom",
			"CUP_hgun_SA61"
		};
	};
	class SubMachineGuns
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};
	class CupSubMachineGuns
	{
		name = "CUP Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_smg_bizon",
			"CUP_smg_EVO",
			"CUP_smg_MP5A5",
			"CUP_smg_MP5SD6"
		};
	};
	class LightMachineGuns
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"
		};
	};
	class CupLightMachineGuns
	{
		name = "CUP Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_lmg_L110A1",
			"CUP_lmg_L7A2",
			"CUP_lmg_M240",
			"CUP_lmg_M249",
			"CUP_lmg_M249_para",
			"CUP_lmg_M60E4",
			"CUP_lmg_Mk48_des",
			"CUP_lmg_Mk48_wdl",
			"CUP_lmg_UK59"
		};
	};
	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F"
		};
	};
	class CupAssaultRifles
	{
		name = "CUP Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_arifle_CZ805_A1",
			"CUP_arifle_CZ805_A2",
			"CUP_arifle_CZ805_B",
			"CUP_arifle_CZ805_B_GL",
			"CUP_arifle_CZ805_GL",
			"CUP_arifle_FNFAL",
			"CUP_arifle_FNFAL_railed",
			"CUP_arifle_G36A",
			"CUP_arifle_G36A_camo",
			"CUP_arifle_G36C",
			"CUP_arifle_G36C_camo",
			"CUP_arifle_G36K",
			"CUP_arifle_G36K_camo",
			"CUP_arifle_L85A2",
			"CUP_arifle_L85A2_GL",
			"CUP_arifle_L86A2",
			"CUP_arifle_M16A2",
			"CUP_arifle_M16A2_GL",
			"CUP_arifle_M16A4_Base",
			"CUP_arifle_M16A4_GL",
			"CUP_arifle_M4A1",
			"CUP_arifle_M4A1_BUIS_GL",
			"CUP_arifle_M4A1_BUIS_camo_GL",
			"CUP_arifle_M4A1_BUIS_desert_GL",
			"CUP_arifle_M4A1_black",
			"CUP_arifle_M4A1_camo",
			"CUP_arifle_M4A1_desert",
			"CUP_arifle_MG36",
			"CUP_arifle_MG36_camo",
			"CUP_arifle_Mk16_CQC",
			"CUP_arifle_Mk16_CQC_EGLM",
			"CUP_arifle_Mk16_CQC_FG",
			"CUP_arifle_Mk16_CQC_SFG",
			"CUP_arifle_Mk16_STD",
			"CUP_arifle_Mk16_STD_EGLM",
			"CUP_arifle_Mk16_STD_FG",
			"CUP_arifle_Mk16_STD_SFG",
			"CUP_arifle_Mk16_SV",
			"CUP_arifle_Mk17_CQC",
			"CUP_arifle_Mk17_CQC_EGLM",
			"CUP_arifle_Mk17_CQC_FG",
			"CUP_arifle_Mk17_CQC_SFG",
			"CUP_arifle_Mk17_STD",
			"CUP_arifle_Mk17_STD_EGLM",
			"CUP_arifle_Mk17_STD_FG",
			"CUP_arifle_Mk17_STD_SFG",
			"CUP_arifle_Mk20",
			"CUP_arifle_Sa58P",
			"CUP_arifle_Sa58P_des",
			"CUP_arifle_Sa58RIS1",
			"CUP_arifle_Sa58RIS1_des",
			"CUP_arifle_Sa58RIS2",
			"CUP_arifle_Sa58RIS2_camo",
			"CUP_arifle_Sa58V",
			"CUP_arifle_Sa58V_camo",
			"CUP_arifle_XM8_Carbine",
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_arifle_XM8_Carbine_GL",
			"CUP_arifle_XM8_Compact",
			"CUP_arifle_XM8_Compact_Rail",
			"CUP_arifle_XM8_Railed",
			"CUP_arifle_xm8_SAW",
			"CUP_arifle_xm8_sharpshooter",
			"CUP_sgun_AA12",
			"CUP_sgun_Saiga12K"
		};
	};
	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Weapon_M1014"
		};
	};
	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F"
		};
	};
	class CupSniperRifles
	{
		name = "CUP Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"CUP_srifle_AS50",
			"CUP_srifle_AWM_des",
			"CUP_srifle_AWM_wdl",
			"CUP_srifle_CZ750",
			"CUP_srifle_ksvk",
			"CUP_srifle_M107_base",
			"CUP_srifle_M110",
			"CUP_srifle_M14",
			"CUP_srifle_M24_des",
			"CUP_srifle_M24_wdl",
			"CUP_srifle_M40A3",
			"CUP_srifle_Mk12SPR"
		};
	};
	class VehiclesPersonal
	{
		name = "Personal Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"Exile_Car_Kart_White",
			"CUP_B_M1030",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White"
		};
	};
	class VehicleKart
	{
		name = "          Kart";
		icon = "";
		items[] =
		{
			"Exile_Car_Kart_White",
			"Exile_Car_Kart_Yellow",
			"Exile_Car_Kart_Orange",
			"Exile_Car_Kart_Blue",
			"Exile_Car_Kart_Green",
			"Exile_Car_Kart_BluKing",
			"Exile_Car_Kart_Black",
			"Exile_Car_Kart_RedStone",
			"Exile_Car_Kart_Vrana",
			"C_Kart_01_Fuel_F"
		};
	};
	class VehicleM1030
	{
		name = "          M1030";
		icon = "";
		items[] =
		{
			"CUP_B_M1030"
		};
	};
	class VehicleQuadbike
	{
		name = "          Quadbike";
		icon = "";
		items[] =
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02"
		};
	};
	class VehicleTractor
	{
		name = "          Tractor";
		icon = "";
		items[] =
		{
			"Exile_Car_Tractor_Red"
		};
	};
	class VehicleOldTractor
	{
		name = "          Old Tractor";
		icon = "";
		items[] =
		{
			"Exile_Car_OldTractor_Red"
		};
	};
	class VehicleTowTractor
	{
		name = "          Tow Tractor";
		icon = "";
		items[] =
		{
			"Exile_Car_TowTractor_White"
		};
	};
	class VehiclesCarsTrucks
	{
		name = "Cars and Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"CUP_B_M1133_MEV_Woodland",
			"CUP_O_GAZ_Vodnik_MedEvac_RU",
			"CUP_I_M113_Med_UN",
			"CUP_C_Datsun",
			"Exile_Car_Golf_Black",
			"CUP_C_Golf4_camo_Civ",
			"Exile_Car_LandRover_Red",
			"Exile_Car_Octavius_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Sport_White",
			"Exile_Car_SUV_Rusty1",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen",
			"Exile_Car_UAZ_Green",
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ikarus_Red",
			"Exile_Car_BTR40_Green",
			"Exile_Car_SUVXL_Black"
		};
	};
	class VehicleBTR40Una
	{
		name = "          BTR-40 (unarmed)";
		icon = "";
		items[] =
		{
			"Exile_Car_BTR40_Green",
			"Exile_Car_BTR40_Camo"
		};
	};
	class VehicleDatsunUna
	{
		name = "          Datsun";
		icon = "";
		items[] =
		{
			"CUP_C_Datsun",
			"CUP_C_Datsun_Tubeframe",
			"CUP_C_Datsun_Plain",
			"CUP_C_Datsun_4seat",
			"CUP_C_Datsun_Covered"
		};
	};
	class VehicleGolf
	{
		name = "          Golf";
		icon = "";
		items[] =
		{
			"Exile_Car_Golf_Black",
			"Exile_Car_Golf_Red",
			"CUP_C_Golf4_blue_Civ",
			"CUP_C_Golf4_green_Civ",
			"CUP_C_Golf4_white_Civ",
			"CUP_C_Golf4_yellow_Civ"
		};
	};
	class VehicleGolfSport
	{
		name = "          Golf (sport)";
		icon = "";
		items[] =
		{
			"CUP_C_Golf4_camo_Civ",
			"CUP_C_Golf4_whiteblood_Civ",
			"CUP_C_Golf4_crowe_Civ",
			"CUP_C_Golf4_kitty_Civ",
			"CUP_C_Golf4_reptile_Civ",
			"CUP_C_Golf4_camodigital_Civ",
			"CUP_C_Golf4_camodark_Civ"
		};
	};
	class VehicleHatchback
	{
		name = "          Hatchback";
		icon = "";
		items[] =
		{
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Dark",
			"Exile_Car_Hatchback_Black",
			"Exile_Car_Hatchback_Grey",
			"Exile_Car_Hatchback_Blue",
			"Exile_Car_Hatchback_Green",
			"Exile_Car_Hatchback_Beige",
			"Exile_Car_Hatchback_Yellow",
			"Exile_Car_Hatchback_BeigeCustom",
			"Exile_Car_Hatchback_BlueCustom"
		};
	};
	class VehicleHatchbackSport
	{
		name = "          Hatchback (sport)";
		icon = "";
		items[] =
		{
			"Exile_Car_Hatchback_Sport_White",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_Hatchback_Sport_Orange",
			"Exile_Car_Hatchback_Sport_Blue",
			"Exile_Car_Hatchback_Sport_Green",
			"Exile_Car_Hatchback_Sport_Beige"
		};
	};
	class VehicleHMMWVUna
	{
		name = "          HMMWV";
		icon = "";
		items[] =
		{
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Desert",
			"Exile_Car_HMMWV_MEV_Desert",
			"CUP_B_HMMWV_Unarmed_USA",
			"CUP_B_HMMWV_Unarmed_USMC"
		};
	};
	class VehicleHunterUna
	{
		name = "          Hunter";
		icon = "";
		items[] =
		{
			"Exile_Car_Hunter"
		};
	};
	class VehicleIfritUna
	{
		name = "          Ifrit";
		icon = "";
		items[] =
		{
			"Exile_Car_Ifrit"
		};
	};
	class VehicleIkarus
	{
		name = "          Ikarus";
		icon = "";
		items[] =
		{
			"Exile_Car_Ikarus_Red",
			"Exile_Car_Ikarus_Blue"
		};
	};
	class VehicleLada
	{
		name = "          Lada";
		icon = "";
		items[] =
		{
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_White",
			"Exile_Car_Lada_Red",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_Lada_Hipster"
		};
	};
	class VehicleLandRover
	{
		name = "          Land Rover";
		icon = "";
		items[] =
		{
			"Exile_Car_LandRover_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Sand",
			"Exile_Car_LandRover_Desert",
			"Exile_Car_LandRover_Urban",
			"CUP_I_LR_Transport_AAF",
			"CUP_I_LR_Transport_RACS",
			"CUP_O_LR_Transport_TKA",
			"CUP_B_LR_Transport_GB_D",
			"CUP_B_LR_Transport_GB_W"
		};
	};
	class VehicleM1133Una
	{
		name = "          M1133";
		icon = "";
		items[] =
		{
			"CUP_B_M1133_MEV_Woodland",
			"CUP_B_M1133_MEV_Woodland_Slat",
			"CUP_B_M1133_MEV_Desert",
			"CUP_B_M1133_MEV_Desert_Slat"
		};
	};
	class VehicleM113AUna
	{
		name = "          M113A";
		icon = "";
		items[] =
		{
			"CUP_I_M113_Med_UN",
			"CUP_B_M113_Med_USA",
			"CUP_O_M113_Med_TKA",
			"CUP_I_M113_Med_AAF",
			"CUP_I_M113_Med_RACS"
		};
	};
	class VehicleMB4WD
	{
		name = "          MB 4WD";
		icon = "";
		items[] =
		{
			"Exile_Car_MB4WD"
		};
	};
	class VehicleMB4WDOpen
	{
		name = "          MB 4WD (open)";
		icon = "";
		items[] =
		{
			"Exile_Car_MB4WDOpen"
		};
	};
	class VehicleOctavius
	{
		name = "          Octavius";
		icon = "";
		items[] =
		{
			"Exile_Car_Octavius_White",
			"Exile_Car_Octavius_Black"
		};
	};
	class VehicleOffroad
	{
		name = "          Offroad";
		icon = "";
		items[] =
		{
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_White",
			"Exile_Car_Offroad_Beige",
			"Exile_Car_Offroad_Red",
			"Exile_Car_Offroad_DarkRed",
			"Exile_Car_Offroad_Blue",
			"Exile_Car_Offroad_BlueCustom",
			"Exile_Car_Offroad_Guerilla01",
			"Exile_Car_Offroad_Guerilla02",
			"Exile_Car_Offroad_Guerilla03",
			"Exile_Car_Offroad_Guerilla04",
			"Exile_Car_Offroad_Guerilla05",
			"Exile_Car_Offroad_Guerilla06",
			"Exile_Car_Offroad_Guerilla07",
			"Exile_Car_Offroad_Guerilla08",
			"Exile_Car_Offroad_Guerilla09",
			"Exile_Car_Offroad_Guerilla10",
			"Exile_Car_Offroad_Guerilla11",
			"Exile_Car_Offroad_Guerilla12"
		};
	};
	class VehicleOffroadRepair
	{
		name = "          Offroad (repair)";
		icon = "";
		items[] =
		{
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Repair_White",
			"Exile_Car_Offroad_Repair_Beige",
			"Exile_Car_Offroad_Repair_Red",
			"Exile_Car_Offroad_Repair_DarkRed",
			"Exile_Car_Offroad_Repair_Blue",
			"Exile_Car_Offroad_Repair_BlueCustom",
			"Exile_Car_Offroad_Repair_Guerilla01",
			"Exile_Car_Offroad_Repair_Guerilla02",
			"Exile_Car_Offroad_Repair_Guerilla03",
			"Exile_Car_Offroad_Repair_Guerilla04",
			"Exile_Car_Offroad_Repair_Guerilla05",
			"Exile_Car_Offroad_Repair_Guerilla06",
			"Exile_Car_Offroad_Repair_Guerilla07",
			"Exile_Car_Offroad_Repair_Guerilla08",
			"Exile_Car_Offroad_Repair_Guerilla09",
			"Exile_Car_Offroad_Repair_Guerilla10",
			"Exile_Car_Offroad_Repair_Guerilla11",
			"Exile_Car_Offroad_Repair_Guerilla12"
		};
	};
	class VehicleProwlerUna
	{
		name = "          Prowler";
		icon = "";
		items[] =
		{
			"B_LSV_01_unarmed_F",
			"B_T_LSV_01_unarmed_F"
		};
	};
	class VehicleProwlerLight
	{
		name = "          Prowler (light)";
		icon = "";
		items[] =
		{
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed"
		};
	};
	class VehicleQilinUna
	{
		name = "          Qilin";
		icon = "";
		items[] =
		{
			"Exile_Car_QilinUnarmed",
			"O_LSV_02_unarmed_F",
			"O_T_LSV_02_unarmed_F"
		};
	};
	class VehicleStriderUna
	{
		name = "          Strider";
		icon = "";
		items[] =
		{
			"Exile_Car_Strider"
		};
	};
	class VehicleSUV
	{
		name = "          SUV";
		icon = "";
		items[] =
		{
			"Exile_Car_SUV_Rusty1",
			"Exile_Car_SUV_Rusty2",
			"Exile_Car_SUV_Rusty3",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUV_Orange",
			"Exile_Car_SUV_Grey",
			"Exile_Car_SUV_Black"
		};
	};
	class VehicleSUVOld
	{
		name = "          SUV Old";
		icon = "";
		items[] =
		{
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUVXL_TG",
			"SUV_civ_01",
			"SUV_civ_02",
			"SUV_civ_03",
			"SUV_civ_04"
		};
	};
	class VehicleUAZUna
	{
		name = "          UAZ";
		icon = "";
		items[] =
		{
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"CUP_C_UAZ_Unarmed_TK_CIV",
			"CUP_C_UAZ_Open_TK_CIV",
			"CUP_I_UAZ_Unarmed_UN",
			"CUP_I_UAZ_Open_UN",
			"CUP_O_UAZ_Unarmed_CHDKZ",
			"CUP_O_UAZ_Open_CHDKZ",
			"CUP_O_UAZ_Unarmed_CSAT",
			"CUP_O_UAZ_Open_CSAT",
			"CUP_O_UAZ_Unarmed_RU",
			"CUP_O_UAZ_Open_RU",
			"CUP_O_UAZ_Unarmed_SLA",
			"CUP_O_UAZ_Open_SLA",
			"CUP_O_UAZ_Unarmed_TKA",
			"CUP_O_UAZ_Open_TKA",
			"CUP_B_UAZ_Unarmed_CDF",
			"CUP_B_UAZ_Open_CDF",
			"CUP_B_UAZ_Unarmed_ACR",
			"CUP_B_UAZ_Open_ACR"
		};
	};
	class VehicleVan
	{
		name = "          Van";
		icon = "";
		items[] =
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_White",
			"Exile_Car_Van_Red",
			"Exile_Car_Van_Guerilla01",
			"Exile_Car_Van_Guerilla02",
			"Exile_Car_Van_Guerilla03",
			"Exile_Car_Van_Guerilla04",
			"Exile_Car_Van_Guerilla05",
			"Exile_Car_Van_Guerilla06",
			"Exile_Car_Van_Guerilla07",
			"Exile_Car_Van_Guerilla08"
		};
	};
	class VehicleVanFuel
	{
		name = "          Van (fuel)";
		icon = "";
		items[] =
		{
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Van_Fuel_White",
			"Exile_Car_Van_Fuel_Red",
			"Exile_Car_Van_Fuel_Guerilla01",
			"Exile_Car_Van_Fuel_Guerilla02",
			"Exile_Car_Van_Fuel_Guerilla03"
		};
	};
	class VehicleVodnikUna
	{
		name = "          Vodnik";
		icon = "";
		items[] =
		{
			"CUP_O_GAZ_Vodnik_MedEvac_RU"
		};
	};
	class VehicleVolha
	{
		name = "          Volha";
		icon = "";
		items[] =
		{
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Volha_Black"
		};
	};
	class VehiclesTransport
	{
		name = "Transport Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"Exile_Car_HEMMT",
			"CUP_B_HMMWV_Ambulance_USA",
			"CUP_B_HMMWV_Transport_USA",
			"Exile_Car_LandRover_Ambulance_Green",
			"CUP_B_MTVR_USMC",
			"Exile_Car_Tempest",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Van_Box_Black",
			"C_Truck_02_transport_F"
		};
	};
	class VehicleHEMMT
	{
		name = "          HEMMT";
		icon = "";
		items[] =
		{
			"Exile_Car_HEMMT"
		};
	};
	class VehicleHMMWVAmbulance
	{
		name = "          HMMWV (ambulance)";
		icon = "";
		items[] =
		{
			"CUP_B_HMMWV_Ambulance_USA",
			"CUP_B_HMMWV_Terminal_USA",
			"CUP_B_HMMWV_Ambulance_USMC"
		};
	};
	class VehicleHMMWVTransport
	{
		name = "          HMMWV (transport)";
		icon = "";
		items[] =
		{
			"CUP_B_HMMWV_Transport_USA"
		};
	};
	class VehicleLandRoverAmbulance
	{
		name = "          Land Rover (ambulance)";
		icon = "";
		items[] =
		{
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_LandRover_Ambulance_Sand",
			"Exile_Car_LandRover_Ambulance_Desert",
			"CUP_I_LR_Ambulance_AAF",
			"CUP_I_LR_Ambulance_RACS",
			"CUP_O_LR_Ambulance_TKA",
			"CUP_B_LR_Ambulance_GB_D",
			"CUP_B_LR_Ambulance_GB_W"
		};
	};
	class VehicleMTVR
	{
		name = "          MTVR";
		icon = "";
		items[] =
		{
			"CUP_B_MTVR_USMC",
			"CUP_B_MTVR_USA"
		};
	};
	class VehicleTempest
	{
		name = "          Tempest";
		icon = "";
		items[] =
		{
			"Exile_Car_Tempest",
			"O_Truck_03_covered_F",
			"O_T_Truck_03_transport_ghex_F",
			"O_T_Truck_03_covered_ghex_F"
		};
	};
	class VehicleUral
	{
		name = "          Ural";
		icon = "";
		items[] =
		{
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Blue",
			"Exile_Car_Ural_Open_Blue",
			"Exile_Car_Ural_Covered_Yellow",
			"Exile_Car_Ural_Open_Yellow",
			"Exile_Car_Ural_Covered_Military",
			"Exile_Car_Ural_Open_Military",
			"CUP_B_Ural_CDF",
			"CUP_B_Ural_Open_CDF",
			"CUP_O_Ural_CHDKZ",
			"CUP_O_Ural_Open_CHDKZ",
			"CUP_O_Ural_SLA",
			"CUP_O_Ural_Open_SLA",
			"CUP_O_Ural_TKA",
			"CUP_O_Ural_Open_TKA",
			"CUP_I_Ural_UN"
		};
	};
	class VehicleV3S
	{
		name = "          V3S";
		icon = "";
		items[] =
		{
			"Exile_Car_V3S_Covered",
			"Exile_Car_V3S_Open",
			"CUP_C_V3S_Covered_TKC",
			"CUP_C_V3S_Open_TKC",
			"CUP_I_V3S_Covered_TKG",
			"CUP_I_V3S_Open_TKG",
			"CUP_O_V3S_Covered_TKA",
			"CUP_O_V3S_Open_TKA"
		};
	};
	class VehicleVanBox
	{
		name = "          Van (box)";
		icon = "";
		items[] =
		{
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Box_White",
			"Exile_Car_Van_Box_Red",
			"Exile_Car_Van_Box_Guerilla01",
			"Exile_Car_Van_Box_Guerilla02",
			"Exile_Car_Van_Box_Guerilla03",
			"Exile_Car_Van_Box_Guerilla04",
			"Exile_Car_Van_Box_Guerilla05",
			"Exile_Car_Van_Box_Guerilla06",
			"Exile_Car_Van_Box_Guerilla07",
			"Exile_Car_Van_Box_Guerilla08"
		};
	};
	class VehicleZAMAK
	{
		name = "          ZAMAK";
		icon = "";
		items[] =
		{
			"C_Truck_02_transport_F",
			"C_Truck_02_covered_F",
			"Exile_Car_Zamak",
			"I_Truck_02_covered_F",
			"O_Truck_02_transport_F",
			"O_Truck_02_covered_F"
		};
	};
	class VehiclesArmed
	{
		name = "Armed Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"B_APC_Tracked_01_CRV_F",
			"Exile_Car_BTR40_MG_Green",
			"CUP_B_BTR60_CDF",
			"CUP_I_BRDM2_HQ_NAPA",
			"CUP_B_BAF_Coyote_L2A1_W",
			"CUP_O_Datsun_PK",
			"CUP_B_Dingo_GER_Wdl",
			"CUP_O_GAZ_Vodnik_PK_RU",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"B_MRAP_01_hmg_F",
			"O_MRAP_02_hmg_F",
			"CUP_B_Jackal2_L2A1_GB_W",
			"LR_MG_Base",
			"CUP_B_LR_Special_M2_GB_W",
			"CUP_B_M1130_CV_M2_Woodland",
			"CUP_I_M113_UN",
			"CUP_B_Mastiff_HMG_GB_W",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"B_APC_Tracked_01_rcws_F",
			"B_T_LSV_01_armed_F",
			"O_LSV_02_armed_F",
			"CUP_B_RG31_M2_OD_USMC",
			"CUP_B_Ridgback_HMG_GB_W",
			"I_MRAP_03_hmg_F",
			"Exile_Car_SUV_Armed_Black",
			"CUP_B_Wolfhound_HMG_GB_W",
			"UAZ_MG_Base"
		};
	};
	class VehicleBobcatArmed
	{
		name = "          Bobcat";
		icon = "";
		items[] =
		{
			"B_APC_Tracked_01_CRV_F",
		};
	};
	class VehicleBTR40Armed
	{
		name = "          BTR-40";
		icon = "";
		items[] =
		{
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_MG_Camo"
		};
	};
	class VehicleBTR60Armed
	{
		name = "          BTR-60";
		icon = "";
		items[] =
		{
			"CUP_B_BTR60_CDF",
			"CUP_O_BTR60_CSAT",
			"CUP_O_BTR60_SLA",
			"CUP_O_BTR60_TK",
			"CUP_I_BTR60_UN"
		};
	};
	class VehicleBRDM2Armed
	{
		name = "          BRDM2";
		icon = "";
		items[] =
		{
			"CUP_I_BRDM2_HQ_NAPA",
			"CUP_I_BRDM2_HQ_UN",
			"CUP_O_BRDM2_HQ_CSAT",
			"Exile_Car_BRDM2_HQ",
			"CUP_O_BRDM2_HQ_RUS",
			"CUP_O_BRDM2_HQ_TKA",
			"CUP_B_BRDM2_HQ_CDF",
			"CUP_B_BRDM2_HQ_CZ",
			"CUP_B_BRDM2_HQ_Des"
		};
	};
	class VehicleCoyoteArmed
	{
		name = "          Coyote";
		icon = "";
		items[] =
		{
			"CUP_B_BAF_Coyote_L2A1_W",
			"CUP_B_BAF_Coyote_L2A1_D"
		};
	};
	class VehicleDatsunArmed
	{
		name = "          Datsun PK";
		icon = "";
		items[] =
		{
			"CUP_O_Datsun_PK",
			"CUP_I_Datsun_PK",
			"CUP_I_Datsun_PK_TK"
		};
	};
	class VehicleDingoArmed
	{
		name = "          Dingo";
		icon = "";
		items[] =
		{
			"CUP_B_Dingo_GER_Wdl",
			"CUP_B_Dingo_CZ_Wdl",
			"CUP_B_Dingo_GER_Des",
			"CUP_B_Dingo_CZ_Des"
		};
	};
	class VehicleHMMWVM134
	{
		name = "          HMMWV M134";
		icon = "";
		items[] =
		{
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M134_Desert"
		};
	};
	class VehicleHMMWVM2
	{
		name = "          HMMWV M2";
		icon = "";
		items[] =
		{
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_M2_Desert",
			"CUP_B_HMMWV_M2_USA",
			"CUP_B_HMMWV_M2_USMC"
		};
	};
	class VehicleHunterArmed
	{
		name = "          Hunter";
		icon = "";
		items[] =
		{
			"B_MRAP_01_hmg_F"
		};
	};
	class VehicleIfritArmed
	{
		name = "          Ifrit";
		icon = "";
		items[] =
		{
			"O_MRAP_02_hmg_F"
		};
	};
	class VehicleJackal
	{
		name = "          Jackal";
		icon = "";
		items[] =
		{
			"CUP_B_Jackal2_L2A1_GB_W",
			"CUP_B_Jackal2_L2A1_GB_D"
		};
	};
	class VehicleLandRoverArmed
	{
		name = "          Land Rover";
		icon = "";
		items[] =
		{
			"LR_MG_Base",
			"CUP_I_LR_MG_AAF",
			"CUP_I_LR_MG_RACS",
			"CUP_O_LR_MG_TKA",
			"CUP_B_LR_MG_GB_W"
		};
	};
	class VehicleLandRoverSpecial
	{
		name = "          Land Rover (special)";
		icon = "";
		items[] =
		{
			"CUP_B_LR_Special_M2_GB_W",
			"CUP_B_LR_Special_M2_GB_D"
		};
	};
	class VehicleM1130Armed
	{
		name = "          M1130";
		icon = "";
		items[] =
		{
			"CUP_B_M1130_CV_M2_Woodland",
			"CUP_B_M1130_CV_M2_Woodland_Slat",
			"CUP_B_M1130_CV_M2_Desert",
			"CUP_B_M1130_CV_M2_Desert_Slat"
		};
	};
	class VehicleM113AArmed
	{
		name = "          M113A";
		icon = "";
		items[] =
		{
			"CUP_I_M113_UN",
			"CUP_B_M113_USA",
			"CUP_O_M113_TKA",
			"CUP_I_M113_AAF",
			"CUP_I_M113_RACS"
		};
	};
	class VehicleMastiffHMG
	{
		name = "          Mastiff";
		icon = "";
		items[] =
		{
			"CUP_B_Mastiff_HMG_GB_W",
			"CUP_B_Mastiff_HMG_GB_D"
		};
	};
	class VehicleOffroadArmed
	{
		name = "          Offroad";
		icon = "";
		items[] =
		{
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_Offroad_Armed_Guerilla02",
			"Exile_Car_Offroad_Armed_Guerilla03",
			"Exile_Car_Offroad_Armed_Guerilla04",
			"Exile_Car_Offroad_Armed_Guerilla05",
			"Exile_Car_Offroad_Armed_Guerilla06",
			"Exile_Car_Offroad_Armed_Guerilla07",
			"Exile_Car_Offroad_Armed_Guerilla08",
			"Exile_Car_Offroad_Armed_Guerilla09",
			"Exile_Car_Offroad_Armed_Guerilla10",
			"Exile_Car_Offroad_Armed_Guerilla11",
			"Exile_Car_Offroad_Armed_Guerilla12"
		};
	};
	class VehiclePantherArmed
	{
		name = "          Panther";
		icon = "";
		items[] =
		{
			"B_APC_Tracked_01_rcws_F"
		};
	};
	class VehicleProwlerArmed
	{
		name = "          Prowler";
		icon = "";
		items[] =
		{
			"B_T_LSV_01_armed_F",
			"B_LSV_01_armed_F"
		};
	};
	class VehicleQilinArmed
	{
		name = "          Qilin";
		icon = "";
		items[] =
		{
			"O_LSV_02_armed_F",
			"O_T_LSV_02_armed_F"
		};
	};
	class VehicleRG31Armed
	{
		name = "          RG-31";
		icon = "";
		items[] =
		{
			"CUP_B_RG31_M2_OD_USMC",
			"CUP_B_RG31_M2_USMC"
		};
	};
	class VehicleRidgeback
	{
		name = "          Ridgeback";
		icon = "";
		items[] =
		{
			"CUP_B_Ridgback_HMG_GB_W",
			"CUP_B_Ridgback_HMG_GB_D"
		};
	};
	class VehicleStriderArmed
	{
		name = "          Strider";
		icon = "";
		items[] =
		{
			"I_MRAP_03_hmg_F"
		};
	};
	class VehicleSUVOldArmed
	{
		name = "          SUV Old";
		icon = "";
		items[] =
		{
			"Exile_Car_SUV_Armed_Black"
		};
	};
	class VehicleWolfhoundArmed
	{
		name = "          Wolfhound";
		icon = "";
		items[] =
		{
			"CUP_B_Wolfhound_HMG_GB_W",
			"CUP_B_Wolfhound_HMG_GB_D"
		};
	};
	class VehicleUAZArmed
	{
		name = "          UAZ";
		icon = "";
		items[] =
		{
			"UAZ_MG_Base",
			"CUP_I_UAZ_MG_UN",
			"CUP_O_UAZ_MG_CHDKZ",
			"CUP_O_UAZ_MG_CSAT",
			"CUP_O_UAZ_MG_RU",
			"CUP_O_UAZ_MG_SLA",
			"CUP_O_UAZ_MG_TKA",
			"CUP_B_UAZ_MG_CDF",
			"CUP_B_UAZ_MG_ACR"
		};
	};
	class VehicleVodnikArmed
	{
		name = "          Vodnik";
		icon = "";
		items[] =
		{
			"CUP_O_GAZ_Vodnik_PK_RU"
		};
	};
	class AirHelicopters
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
            "CUP_B_AW159_Unarmed_GB",
			"Exile_Chopper_Hummingbird_Green",
			"CUP_B_Merlin_HC3A_GB",
			"Exile_Chopper_Orca_Black",
			"CUP_B_SA330_Puma_HC1_BAF",
			"Exile_Chopper_Huey_Green",
			"CUP_B_UH1Y_UNA_USMC",
			"CUP_B_UH60L_Unarmed_US",
			"Exile_Chopper_Hellcat_Green"
		};
	};
	class AirWildcat
	{
		name = "          AW-159 Wildcat";
		icon = "";
		items[] =
		{
			"CUP_B_AW159_Unarmed_GB",
			"CUP_B_Wildcat_Unarmed_RN_Blackcat",
			"CUP_B_Wildcat_Unarmed_Digital_AAF",
			"CUP_B_Wildcat_Unarmed_Green_AAF"
		};
	};
	class AirHummingbird
	{
		name = "          M-900 Hummingbird";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Light",
			"Exile_Chopper_Hummingbird_Civillian_Red",
			"Exile_Chopper_Hummingbird_Civillian_Blue",
			"Exile_Chopper_Hummingbird_Civillian_Shadow",
			"Exile_Chopper_Hummingbird_Civillian_Sunset",
			"Exile_Chopper_Hummingbird_Civillian_GrayWatcher",
			"Exile_Chopper_Hummingbird_Civillian_Jeans",
			"Exile_Chopper_Hummingbird_Civillian_Elliptical",
			"Exile_Chopper_Hummingbird_Civillian_ION",
			"Exile_Chopper_Hummingbird_Civillian_BlueLine",
			"Exile_Chopper_Hummingbird_Civillian_Digital",
			"Exile_Chopper_Hummingbird_Civillian_Sheriff",
			"Exile_Chopper_Hummingbird_Civillian_Furious",
			"Exile_Chopper_Hummingbird_Civillian_Wave",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Hummingbird_Civillian_Vrana"
		};
	};
	class AirMerlin
	{
		name = "          Merlin";
		icon = "";
		items[] =
		{
			"CUP_B_Merlin_HC3A_GB"
		};
	};
	class AirOrca
	{
		name = "          PO-30 Orca";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Orca_Black",
			"Exile_Chopper_Orca_CSAT"
		};
	};
	class AirPuma
	{
		name = "          SA330 Puma";
		icon = "";
		items[] =
		{
			"CUP_B_SA330_Puma_HC1_BAF",
			"CUP_I_SA330_Puma_HC1_RACS"
		};
	};
	class AirHuey
	{
		name = "          UH-1H Huey";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Desert"
		};
	};
	class AirVenom
	{
		name = "          UH-1Y Venom";
		icon = "";
		items[] =
		{
			"CUP_B_UH1Y_UNA_USMC",
			"CUP_B_UH1Y_MEV_USMC"
		};
	};
	class AirBlackHawk
	{
		name = "          UH-60 Black Hawk";
		icon = "";
		items[] =
		{
			"CUP_B_UH60L_Unarmed_US",
			"CUP_B_UH60M_Unarmed_US",
			"CUP_B_UH60M_Unarmed_FFV_MEV_US",
			"CUP_I_UH60L_Unarmed_RACS",
			"CUP_I_UH60L_Unarmed_FFV_MEV_Racs"
		};
	};
	class AirHellcat
	{
		name = "          WY-55 Hellcat";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Hellcat_Green",
			"Exile_Chopper_Hellcat_FIA"
		};
	};
	class AirTransportHelicopters
	{
		name = "Transport Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"CUP_B_CH47F_GB",
			"Exile_Chopper_Mohawk_FIA",
			"CUP_B_CH53E_USMC",
			"Exile_Chopper_Huron_Black",
			"CUP_C_MI6T_RU",
			"CUP_C_Mi17_VIV_RU",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black"
		};
	};
	class AirChinook
	{
		name = "          Ch-47 Chinook";
		icon = "";
		items[] =
		{
			"CUP_B_CH47F_GB",
			"CUP_B_CH47F_USA"
		};
	};
	class AirMohawk
	{
		name = "          CH-49 Mohawk";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Mohawk_FIA"
		};
	};
	class AirSuperStallion
	{
		name = "          CH-53E Super Stallion";
		icon = "";
		items[] =
		{
			"CUP_B_CH53E_USMC",
			"CUP_B_CH53E_GER"
		};
	};
	class AirHuron
	{
		name = "          CH-67 Huron";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Huron_Green"
		};
	};
	class AirMi6
	{
		name = "          Mi-6A Hook";
		icon = "";
		items[] =
		{
			"CUP_C_MI6T_RU",
			"CUP_O_MI6T_RU",
			"CUP_O_MI6T_CHDKZ",
			"CUP_B_MI6T_CDF",
			"CUP_O_MI6T_TKA"
		};
	};
	class AirMi8
	{
		name = "          Mi-8";
		icon = "";
		items[] =
		{
			"CUP_C_Mi17_VIV_RU",
			"CUP_I_Mi17_VIV_UN",
			"CUP_O_Mi8_VIV_RU",
			"CUP_O_Mi8_VIV_CHDKZ",
			"CUP_O_Mi8_VIV_SLA",
			"CUP_B_Mi17_VIV_CDF",
			"CUP_O_Mi17_VIV_TK"
		};
	};
	class AirTaruBench
	{
		name = "          Mi-280 Taru (bench)";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_CSAT"
		};
	};
	class AirTaruCovered
	{
		name = "          Mi-280 Taru (covered)";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Covered_CSAT",
			"O_Heli_Transport_04_medevac_F"
		};
	};
	class AirTaruTransport
	{
		name = "          Mi-280 Taru (transport)";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Taru_Transport_CSAT"
		};
	};
	class AirArmedHelicopters
	{
		name = "Armed Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"CUP_B_AH1Z_NoWeapons_USMC",
			"CUP_B_AH64D_NO_USA",
			"CUP_O_Ka60_Blk_CSAT",
			"CUP_B_Merlin_HC3A_Armed_GB",
			"CUP_B_MH60S_USMC",
			"CUP_B_Mi24_D_MEV_CDF",
			"CUP_I_Mi17_UN",
			"Exile_Chopper_Huey_Armed_Green",
			"CUP_B_UH1Y_GUNSHIP_USMC",
			"CUP_B_UH60L_US",
			"B_Heli_Transport_01_F"
		};
	};
	class AirViper
	{
		name = "          AH1Z Viper";
		icon = "";
		items[] =
		{
			"CUP_B_AH1Z_NoWeapons_USMC"
		};
	};
	class AirApache
	{
		name = "          AH-64D Apache";
		icon = "";
		items[] =
		{
			"CUP_B_AH64D_NO_USA"
		};
	};
	class AirKasatka
	{
		name = "          KA-60 Kasatka";
		icon = "";
		items[] =
		{
			"CUP_O_Ka60_Blk_CSAT",
			"CUP_O_Ka60_Hex_CSAT",
			"CUP_O_Ka60_Whale_CSAT",
			"CUP_O_Ka60_Grey_RU",
			"CUP_I_Ka60_Digi_AAF"
		};
	};
	class AirMerlinArmed
	{
		name = "          Merlin";
		icon = "";
		items[] =
		{
			"CUP_B_Merlin_HC3A_Armed_GB"
		};
	};
	class AirSeahawk
	{
		name = "          MH-60S Seahawk";
		icon = "";
		items[] =
		{
			"CUP_B_MH60S_USMC"
		};
	};
	class AirMi24
	{
		name = "          Mi-24D";
		icon = "";
		items[] =
		{
			"CUP_B_Mi24_D_MEV_CDF",
			"CUP_I_Mi24_Mk3_Empty_AAF",
			"CUP_I_Mi24_Mk3_Empty_ION"
		};
	};
	class AirMi8Armed
	{
		name = "          Mi-8";
		icon = "";
		items[] =
		{
			"CUP_I_Mi17_UN",
			"CUP_O_Mi8_CHDKZ",
			"CUP_O_Mi8_SLA_1",
			"CUP_O_Mi17_TK",
			"CUP_B_Mi17_CDF",
			"CUP_B_Mi171Sh_Unarmed_ACR"
		};
	};
	class AirHueyArmed
	{
		name = "          UH-1H Huey";
		icon = "";
		items[] =
		{
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Huey_Armed_Desert",
			"CUP_B_UH1D_GER_KSK",
			"CUP_B_UH1D_GER_KSK_Des",
			"CUP_O_UH1H_SLA",
			"CUP_O_UH1H_TKA"
		};
	};
	class AirVenomArmed
	{
		name = "          UH-1Y Venom";
		icon = "";
		items[] =
		{
			"CUP_B_UH1Y_GUNSHIP_USMC"
		};
	};
	class AirBlackHawkArmed
	{
		name = "          UH-60 Black Hawk";
		icon = "";
		items[] =
		{
			"CUP_B_UH60L_US",
			"CUP_B_UH60M_US",
			"CUP_I_UH60L_RACS"
		};
	};
	class AirGhostHawk
	{
		name = "          UH-80 Ghost Hawk";
		icon = "";
		items[] =
		{
			"B_Heli_Transport_01_F",
			"B_Heli_Transport_01_camo_F",
			"B_CTRG_Heli_Transport_01_tropic_F",
			"B_CTRG_Heli_Transport_01_sand_F"
		};
	};
	class AirPlanes
	{
		name = "Planes/VTOL";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"Exile_Plane_AN2_White",
			"CUP_B_C130J_USMC",
			"Exile_Plane_Ceasar",
			"Exile_Plane_Cessna",
			"CUP_C_DC3_TanoAir_CIV",
			"CUP_B_MV22_USMC",
			"Exile_Plane_BlackfishInfantry"
		};
	};
	class AirAN2
	{
		name = "          AN-2";
		icon = "";
		items[] =
		{
			"Exile_Plane_AN2_White",
			"Exile_Plane_AN2_Stripe",
			"Exile_Plane_AN2_Green"
		};
	};
	class AirSuperHercules
	{
		name = "          C-130J Super Hercules";
		icon = "";
		items[] =
		{
			"CUP_B_C130J_USMC",
			"CUP_B_C130J_Cargo_USMC",
			"CUP_B_C130J_GB",
			"CUP_B_C130J_Cargo_GB",
			"CUP_O_C130J_TKA",
			"CUP_I_C130J_AAF",
			"CUP_I_C130J_RACS"
		};
	};
	class AirCeaserBTT
	{
		name = "          Ceaser BTT";
		icon = "";
		items[] =
		{
			"Exile_Plane_Ceasar",
			"C_Plane_Civil_01_racing_F"
		};
	};
	class AirCessna
	{
		name = "          Cessna 185";
		icon = "";
		items[] =
		{
			"Exile_Plane_Cessna"
		};
	};
	class AirDC3
	{
		name = "          DC-3";
		icon = "";
		items[] =
		{
			"CUP_C_DC3_TanoAir_CIV",
			"CUP_C_DC3_CIV",
			"CUP_B_C47_USA"
		};
	};
	class AirOsprey
	{
		name = "          MV-22 Osprey";
		icon = "";
		items[] =
		{
			"CUP_B_MV22_USMC"
		};
	};
	class AirBlackfish
	{
		name = "          V-44 X Blackfish";
		icon = "";
		items[] =
		{
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};
	class AirPlanesArmed
	{
		name = "Armed Planes/VTOL";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayMultiplayer\arrow_down_ca.paa";
		items[] =
		{
			"GNT_C185T",
			"CUP_B_MV22_USMC_RAMPGUN"
		};
	};
	class AirCessnaArmed
	{
		name = "          Cessna 185";
		icon = "";
		items[] =
		{
			"GNT_C185T"
		};
	};
	class AirOspreyArmed
	{
		name = "          MV-22 Osprey";
		icon = "";
		items[] =
		{
			"CUP_B_MV22_USMC_RAMPGUN"
		};
	};
	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB"
		};
	};
	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};
	class Diving
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
};
class CfgTraders
{
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] =
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"CupPointerAttachments",
			"CupMuzzleAttachments",
			"CupOpticAttachments",
			"CupPistols",
			"CupSubMachineGuns",
			"CupLightMachineGuns",
			"CupAssaultRifles",
			"CupSniperRifles",
			"HLCMuzzleAttachments",
			"HLCOpticAttachments",
			"HLCLightMachineGuns",
			"HLCAssaultRifles",
			"HLCSniperRifles",
			"HLCAmmunition"
		};
	};
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1;
		categories[] =
		{
			"Flares",
			"Smokes",
			"StaticMGs",
			"Explosives",
			"CupExplosives",
			"SpecialEquipment"
		};
	};
	class Exile_Trader_Equipment
	{
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"CupHeadgear",
			"CupUniforms",
			"CupVests",
			"Backpacks",
			"FirstAid"
		};
	};
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] =
		{
			"Food",
			"Drinks"
		};
	};
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] =
		{
			"Hardware",
			"Tools",
			"ExtendedBaseMod"
		};
	};
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] =
		{
			"VehiclesPersonal",
			"VehicleKart",
			"VehicleM1030",
			"VehicleQuadbike",
			"VehicleTractor",
			"VehicleOldTractor",
			"VehicleTowTractor",
			"VehiclesCarsTrucks",
			"VehicleBTR40Una",
			"VehicleDatsunUna",
			"VehicleGolf",
			"VehicleGolfSport",
			"VehicleHatchback",
			"VehicleHatchbackSport",
			"VehicleHMMWVUna",
			"VehicleHunterUna",
			"VehicleIfritUna",
			"VehicleIkarus",
			"VehicleLada",
			"VehicleLandRover",
			"VehicleM1133Una",
			"VehicleM113AUna",
			"VehicleMB4WD",
			"VehicleMB4WDOpen",
			"VehicleOctavius",
			"VehicleOffroad",
			"VehicleOffroadRepair",
			"VehicleProwlerUna",
			"VehicleProwlerLight",
			"VehicleQilinUna",
			"VehicleStriderUna",
			"VehicleSUV",
			"VehicleSUVOld",
			"VehicleUAZUna",
			"VehicleVan",
			"VehicleVanFuel",
			"VehicleVodnikUna",
			"VehicleVolha",
			"VehiclesTransport",
			"VehicleHEMMT",
			"VehicleHMMWVAmbulance",
			"VehicleHMMWVTransport",
			"VehicleLandRoverAmbulance",
			"VehicleMTVR",
			"VehicleUral",
			"VehicleTempest",
			"VehicleV3S",
			"VehicleVanBox",
			"VehicleZAMAK",
			"VehiclesArmed",
			"VehicleBobcatArmed",
			"VehicleBTR40Armed",
			"VehicleBTR60Armed",
			"VehicleBRDM2Armed",
			"VehicleCoyoteArmed",
			"VehicleDatsunArmed",
			"VehicleDingoArmed",
			"VehicleHMMWVM134",
			"VehicleHMMWVM2",
			"VehicleHunterArmed",
			"VehicleIfritArmed",
			"VehicleJackal",
			"VehicleLandRoverArmed",
			"VehicleLandRoverSpecial",
			"VehicleM1130Armed",
			"VehicleM113AArmed",
			"VehicleMastiffHMG",
			"VehicleOffroadArmed",
			"VehiclePantherArmed",
			"VehicleProwlerArmed",
			"VehicleQilinArmed",
			"VehicleRG31Armed",
			"VehicleRidgeback",
			"VehicleStriderArmed",
			"VehicleSUVOldArmed",
			"VehicleWolfhoundArmed",
			"VehicleUAZArmed",
			"VehicleVodnikArmed"
		};
	};
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] =
		{
			"AirHelicopters",
			"AirWildcat",
			"AirHummingbird",
			"AirMerlin",
			"AirOrca",
			"AirPuma",
			"AirHuey",
			"AirVenom",
			"AirBlackHawk",
			"AirHellcat",
			"AirTransportHelicopters",
			"AirChinook",
			"AirMohawk",
			"AirSuperStallion",
			"AirHuron",
			"AirMi6",
			"AirMi8",
			"AirTaruBench",
			"AirTaruCovered",
			"AirTaruTransport",
			"AirArmedHelicopters",
			"AirViper",
			"AirApache",
			"AirKasatka",
			"AirMerlinArmed",
			"AirSeahawk",
			"AirMi24",
			"AirMi8Armed",
			"AirHueyArmed",
			"AirVenomArmed",
			"AirGhostHawk",
			"AirPlanes",
			"AirAN2",
			"AirSuperHercules",
			"AirCeaserBTT",
			"AirCessna",
			"AirDC3",
			"AirOsprey",
			"AirBlackfish",
			"AirPlanesArmed",
			"AirCessnaArmed",
			"AirOspreyArmed"
		};
	};
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] =
		{
			"Boats"
		};
	};
	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] =
		{
			"Diving"
		};
	};
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community2"
		};
	};
	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community3"
		};
	};
	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community4"
		};
	};
	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community5"
		};
	};
	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community6"
		};
	};
	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community7"
		};
	};
	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community8"
		};
	};
	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community9"
		};
	};
	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] =
		{
			"Community10"
		};
	};
};
class CfgTrading
{
	sellPriceFactor = 0.33;
	rekeyPriceFactor = 0.1;
	class requiredRespect
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] =
		{
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};
	class Exile_Boat_SDV_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};
	class Exile_Car_Kart_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};
	class Exile_Chopper_Huron_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};
	class Exile_Chopper_Orca_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};
	class Exile_Chopper_Taru_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};
	class Exile_Car_Hatchback_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};
	class Exile_Car_Offroad_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};
	class Exile_Car_LandRover_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] =
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};
	class Exile_Car_Octavius_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};
	class Exile_Chopper_Huey_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};
	class Exile_Car_SUV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};
	class Exile_Car_SUVXL_Abstract
	{
		skins[] =
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};},
			{"Exile_Car_SUVXL_TG", 100, "Black", {"\addons\skins\suv_body_tg_co.paa"};}
		};
	};
	class Exile_Car_Van_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",			150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",			150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};
	class Exile_Car_Van_Box_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	class Exile_Car_Tempest_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};
	class Exile_Car_Ikarus_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};
	class Exile_Car_Ural_Open_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};
	class Exile_Car_Ural_Covered_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};
	class Exile_Car_Lada_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};
	class Exile_Car_Volha_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	class Exile_Car_Hunter_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	class Exile_Car_Ifrit_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] =
		{
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] =
		{
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] =
		{
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] =
		{
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] =
		{
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	class Exile_Car_BTR40_Abstract
	{
		skins[] =
		{
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	class Exile_Car_Golf_Abstract
	{
		skins[] =
		{
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	class Exile_Plane_AN2_Abstract
	{
		skins[] =
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	class B_G_Boat_Transport_02_F
	{
		skins[] =
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] =
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	class C_Plane_Civil_01_F
	{
		skins[] =
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	class B_T_VTOL_01_infantry_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	class B_T_VTOL_01_vehicle_F
	{
		skins[] =
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	class B_CTRG_LSV_01_light_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] =
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	class I_C_Offroad_02_unarmed_F
	{
		skins[] =
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
class CfgVehicleTransport
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};
		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7};
			detachPosition[] = {0, -4.4};
		};
		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4};
			detachPosition[] = {0, -4};
		};
		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7};
			detachPosition[] = {0.03, -4.8};
		};
		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9};
			detachPosition[] = {0.05, -6.1};
		};
		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9};
			detachPosition[] = {0.08, -6};
		};
	};
};
class CfgXM8
{
	extraApps[] = {"ExAd_VG","ExAd_Info","ExAd_CHVD","ExAd_Journal","ExAd_Bike","ExAd_Quad","ExAd_SB"};
	
	class ExAd_VG 
	{
		title = "Virtual Garage";
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
		onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
	};	
	class ExAd_Info 
	{
		title = "Server Info";
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
		onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
	};	
	class ExAd_CHVD 
	{
		title = "View Distance Settings";
		controlID = 50200;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\CHVD\config.sqf";
		logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
		onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};		
	class ExAd_Journal 
	{
		title = "Journal";
		controlID = 50300;					//IDC:50300 -> 50305 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\Journal\config.sqf";
		logo = "ExadClient\XM8\Apps\Journal\Icon_Journal.paa";
		onLoad = "ExAdClient\XM8\Apps\Journal\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Journal\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Journal\onClose.sqf";
	};
	class ExAd_Bike
	{
		title = "Deploy Bike";
		config = "ExadClient\XM8\Apps\DeployVehicle\config.sqf";
		bambiState = 0;
		vehicleClass = "Exile_Bike_MountainBike";
		recipe[] = {{"Exile_Item_ExtensionCord",-1}};
		packable = 1;
		autoCleanUp = 1;
		quickFunction = "['ExAd_Bike'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_Quad
	{
		title = "Deploy Quad";
		bambiState = 0;
		vehicleClass = "Exile_Bike_QuadBike_Fia";
		recipe[] = {{"Exile_Item_ExtensionCord",1}};
		packable = 1;
		quickFunction = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_SB 
	{
		title = "Statsbar Settings";
		controlID = 50400;					//IDC:50400 -> 50475 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\SB_Settings\Icon_SB.paa";
		onLoad = "ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
	};
}; 

class CfgExileCustomCode 
{
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	exileclient_system_lootmanager_thread_spawn = "addons\EBM\exileclient_system_lootmanager_thread_spawn.sqf";
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
    ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf";	//Happys Revive AntiDupe ---NEW with v0.65
	ExileServer_object_player_createBambi = "custom\loadout\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest = "custom\loadout\ExileServer_object_player_network_createPlayerRequest.sqf";
};