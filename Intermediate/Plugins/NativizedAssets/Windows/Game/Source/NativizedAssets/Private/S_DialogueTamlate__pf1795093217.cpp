#include "NativizedAssets.h"
#include "S_DialogueTamlate__pf1795093217.h"
FS_DialogueTamlate__pf1795093217::FS_DialogueTamlate__pf1795093217()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_DialogueTamlate__pf1795093217::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{237, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Blueprint/AI_With_Markovs_chain/S_PlayerSpeech.S_PlayerSpeech 
		{238, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Blueprint/AI_With_Markovs_chain/S_NpcSpeech.S_NpcSpeech 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_DialogueTamlate__pf1795093217
{
	FRegisterHelper__FS_DialogueTamlate__pf1795093217()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprint/AI_With_Markovs_chain/S_DialogueTamlate"), &FS_DialogueTamlate__pf1795093217::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_DialogueTamlate__pf1795093217 Instance;
};
FRegisterHelper__FS_DialogueTamlate__pf1795093217 FRegisterHelper__FS_DialogueTamlate__pf1795093217::Instance;
