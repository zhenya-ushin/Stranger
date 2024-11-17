#include "NativizedAssets.h"
#include "S_Inventory__pf2307205371.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
FS_Inventory__pf2307205371::FS_Inventory__pf2307205371()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_Inventory__pf2307205371::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.BP_InteractiveObj_C 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  BP_InteractiveObj_C /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.Default__BP_InteractiveObj_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_Inventory__pf2307205371
{
	FRegisterHelper__FS_Inventory__pf2307205371()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/InventorySystem/S_Inventory"), &FS_Inventory__pf2307205371::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_Inventory__pf2307205371 Instance;
};
FRegisterHelper__FS_Inventory__pf2307205371 FRegisterHelper__FS_Inventory__pf2307205371::Instance;
