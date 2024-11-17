#include "NativizedAssets.h"
#include "S_RegionPrestige__pf2347504867.h"
FS_RegionPrestige__pf2347504867::FS_RegionPrestige__pf2347504867()
{
	bpv__Region_4_5923608848107CAECD16F2B907460DF2__pf = E__E_QuestRegion__pf::NewEnumerator0;
	bpv__Prestige_6_F157AF0E40BC9E529FC4779E146433B0__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_RegionPrestige__pf2347504867::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{8, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_QuestRegion.E_QuestRegion 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_RegionPrestige__pf2347504867
{
	FRegisterHelper__FS_RegionPrestige__pf2347504867()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/QuestSystem/Structure/S_RegionPrestige"), &FS_RegionPrestige__pf2347504867::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_RegionPrestige__pf2347504867 Instance;
};
FRegisterHelper__FS_RegionPrestige__pf2347504867 FRegisterHelper__FS_RegionPrestige__pf2347504867::Instance;
