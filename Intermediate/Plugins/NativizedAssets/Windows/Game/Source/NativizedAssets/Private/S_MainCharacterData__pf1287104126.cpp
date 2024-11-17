#include "NativizedAssets.h"
#include "S_MainCharacterData__pf1287104126.h"
FS_MainCharacterData__pf1287104126::FS_MainCharacterData__pf1287104126()
{
	bpv__Save_PlayerTransform_2_6FBB7693420EF30232C792A6BC0ECEBD__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__Save_CameraRotation_5_20C6317E405B959C6E5C9AB4301E3C80__pf = FRotator(0.000000, 0.000000, 0.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_MainCharacterData__pf1287104126::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.BP_InteractiveObj_C 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  BP_InteractiveObj_C /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.Default__BP_InteractiveObj_C 
		{244, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/InventorySystem/S_Inventory.S_Inventory 
		{245, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_RegionPrestige.S_RegionPrestige 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_QuestRegion.E_QuestRegion 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_MainCharacterData__pf1287104126
{
	FRegisterHelper__FS_MainCharacterData__pf1287104126()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SaveSystem/S_MainCharacterData"), &FS_MainCharacterData__pf1287104126::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_MainCharacterData__pf1287104126 Instance;
};
FRegisterHelper__FS_MainCharacterData__pf1287104126 FRegisterHelper__FS_MainCharacterData__pf1287104126::Instance;
