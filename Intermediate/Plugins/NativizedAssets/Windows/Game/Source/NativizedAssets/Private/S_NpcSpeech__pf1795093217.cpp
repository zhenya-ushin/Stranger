#include "NativizedAssets.h"
#include "S_NpcSpeech__pf1795093217.h"
FS_NpcSpeech__pf1795093217::FS_NpcSpeech__pf1795093217()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_NpcSpeech__pf1795093217::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_NpcSpeech__pf1795093217
{
	FRegisterHelper__FS_NpcSpeech__pf1795093217()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprint/AI_With_Markovs_chain/S_NpcSpeech"), &FS_NpcSpeech__pf1795093217::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_NpcSpeech__pf1795093217 Instance;
};
FRegisterHelper__FS_NpcSpeech__pf1795093217 FRegisterHelper__FS_NpcSpeech__pf1795093217::Instance;
