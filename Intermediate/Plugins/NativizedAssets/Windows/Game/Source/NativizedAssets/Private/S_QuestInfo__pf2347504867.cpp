#include "NativizedAssets.h"
#include "S_QuestInfo__pf2347504867.h"
#include "S_GoalLocation__pf2347504867.h"
FS_QuestInfo__pf2347504867::FS_QuestInfo__pf2347504867()
{
	bpv__Category_5_B57E80E24C288EECE9E43892DAA49EC7__pf = E__E_QuestCategories__pf::NewEnumerator0;
	bpv__Region_11_FA88826A4AE7A70971452D8B4F8135BB__pf = E__E_QuestRegion__pf::NewEnumerator0;
	bpv__SuggestedLvl_17_3FDDFB5F4AFEDCE21DC9B095B9AE036E__pf = 0;
	bpv__Difficulty_20_7EBF56D84C0BA7CCC24BF2933B73A9CB__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_QuestInfo__pf2347504867::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{5, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_QuestReward.S_QuestReward 
		{6, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_GoalInfo.S_GoalInfo 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_GoalLocation.S_GoalLocation 
		{7, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_QuestCategories.E_QuestCategories 
		{8, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_QuestRegion.E_QuestRegion 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_GoalTypes.E_GoalTypes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_QuestInfo__pf2347504867
{
	FRegisterHelper__FS_QuestInfo__pf2347504867()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/QuestSystem/Structure/S_QuestInfo"), &FS_QuestInfo__pf2347504867::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_QuestInfo__pf2347504867 Instance;
};
FRegisterHelper__FS_QuestInfo__pf2347504867 FRegisterHelper__FS_QuestInfo__pf2347504867::Instance;
