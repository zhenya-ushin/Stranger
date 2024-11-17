#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_NpcSpeech__pf1795093217.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/AI_With_Markovs_chain/S_NpcSpeech.S_NpcSpeech", OverrideNativeName="S_NpcSpeech"))
struct FS_NpcSpeech__pf1795093217
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NpcSpeechPart1", Tooltip, OverrideNativeName="NpcSpeechPart1_3_72CAACC54FD35368788EB69DF84657E1"))
	TArray<FText> bpv__NpcSpeechPart1_3_72CAACC54FD35368788EB69DF84657E1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NpcSpeechPart2", Tooltip, OverrideNativeName="NpcSpeechPart2_5_4E2BF9D34198C522B0D2E5BF0A41CFB2"))
	TArray<FText> bpv__NpcSpeechPart2_5_4E2BF9D34198C522B0D2E5BF0A41CFB2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NpcSpeechAdditional", Tooltip, OverrideNativeName="NpcSpeechAdditional_7_37824AF54EAD7F68650AB88E552AC73A"))
	TArray<FText> bpv__NpcSpeechAdditional_7_37824AF54EAD7F68650AB88E552AC73A__pf;
	FS_NpcSpeech__pf1795093217();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_NpcSpeech__pf1795093217& __Other) const
	{
		return FS_NpcSpeech__pf1795093217::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
