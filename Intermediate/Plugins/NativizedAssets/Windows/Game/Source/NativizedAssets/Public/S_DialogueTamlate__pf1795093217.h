#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_PlayerSpeech__pf1795093217.h"
#include "S_NpcSpeech__pf1795093217.h"
#include "S_DialogueTamlate__pf1795093217.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/AI_With_Markovs_chain/S_DialogueTamlate.S_DialogueTamlate", OverrideNativeName="S_DialogueTamlate"))
struct FS_DialogueTamlate__pf1795093217
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayerSpeech", Tooltip, OverrideNativeName="PlayerSpeech_18_9096B795429FAFA012897A97B58DD005"))
	FS_PlayerSpeech__pf1795093217 bpv__PlayerSpeech_18_9096B795429FAFA012897A97B58DD005__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NpcSpeech", Tooltip, OverrideNativeName="NpcSpeech_19_2F9A05A14FECC90F58AD09B115B758AA"))
	FS_NpcSpeech__pf1795093217 bpv__NpcSpeech_19_2F9A05A14FECC90F58AD09B115B758AA__pf;
	FS_DialogueTamlate__pf1795093217();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_DialogueTamlate__pf1795093217& __Other) const
	{
		return FS_DialogueTamlate__pf1795093217::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_DialogueTamlate__pf1795093217& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_DialogueTamlate__pf1795093217::StaticStruct()); }
};
