#include "NativizedAssets.h"
#include "S_CompletedGoal__pf2347504867.h"
#include "S_GoalLocation__pf2347504867.h"
FS_CompletedGoal__pf2347504867::FS_CompletedGoal__pf2347504867()
{
	bpv__GoalIndex_3_E2512FB04E140A06A855A79BEB05FDE9__pf = 0;
	bpv__Succx_8_D23F91834223D0CCA8DBCBA3B9CDDD8E__pfzy = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_CompletedGoal__pf2347504867::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{6, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_GoalInfo.S_GoalInfo 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedStruct /Game/QuestSystem/Structure/S_GoalLocation.S_GoalLocation 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedEnum /Game/QuestSystem/Enums/E_GoalTypes.E_GoalTypes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_CompletedGoal__pf2347504867
{
	FRegisterHelper__FS_CompletedGoal__pf2347504867()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/QuestSystem/Structure/S_CompletedGoal"), &FS_CompletedGoal__pf2347504867::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_CompletedGoal__pf2347504867 Instance;
};
FRegisterHelper__FS_CompletedGoal__pf2347504867 FRegisterHelper__FS_CompletedGoal__pf2347504867::Instance;
