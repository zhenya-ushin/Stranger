#include "NativizedAssets.h"
#include "S_QuestReward__pf2347504867.h"
FS_QuestReward__pf2347504867::FS_QuestReward__pf2347504867()
{
	bpv__Exp_2_D4FB18CA44FC8980947BC88FDB74C37B__pf = 0;
	bpv__PrestigePoints_4_4449C2AC43176C3D95EF1FA857AD7F20__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_QuestReward__pf2347504867::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_QuestReward__pf2347504867
{
	FRegisterHelper__FS_QuestReward__pf2347504867()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/QuestSystem/Structure/S_QuestReward"), &FS_QuestReward__pf2347504867::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_QuestReward__pf2347504867 Instance;
};
FRegisterHelper__FS_QuestReward__pf2347504867 FRegisterHelper__FS_QuestReward__pf2347504867::Instance;
