#include "NativizedAssets.h"
#include "S_GoalLocation__pf2347504867.h"
FS_GoalLocation__pf2347504867::FS_GoalLocation__pf2347504867()
{
	bpv__hasLocationx_1_23CA8D2941FB3A4616DE00BB11EF3D7C__pfzy = false;
	bpv__Location_4_0B9F349A46766A0257854AA80C2E284D__pf = FVector(0.000000, 0.000000, 0.000000);
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_GoalLocation__pf2347504867::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_GoalLocation__pf2347504867
{
	FRegisterHelper__FS_GoalLocation__pf2347504867()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/QuestSystem/Structure/S_GoalLocation"), &FS_GoalLocation__pf2347504867::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_GoalLocation__pf2347504867 Instance;
};
FRegisterHelper__FS_GoalLocation__pf2347504867 FRegisterHelper__FS_GoalLocation__pf2347504867::Instance;
