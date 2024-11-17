#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_PlayerSpeech__pf1795093217.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/AI_With_Markovs_chain/S_PlayerSpeech.S_PlayerSpeech", OverrideNativeName="S_PlayerSpeech"))
struct FS_PlayerSpeech__pf1795093217
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayerSpeechPart1", Tooltip, OverrideNativeName="PlayerSpeechPart1_3_72CAACC54FD35368788EB69DF84657E1"))
	TArray<FText> bpv__PlayerSpeechPart1_3_72CAACC54FD35368788EB69DF84657E1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayerSpeechPart2", Tooltip, OverrideNativeName="PlayerSpeechPart2_5_0228BF64431E72296B4012872C54E1EC"))
	TArray<FText> bpv__PlayerSpeechPart2_5_0228BF64431E72296B4012872C54E1EC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayerSpeechAdditional", Tooltip, OverrideNativeName="PlayerSpeechAdditional_7_B07B032F46EC35DE8D14D4ABA5E98ECD"))
	TArray<FText> bpv__PlayerSpeechAdditional_7_B07B032F46EC35DE8D14D4ABA5E98ECD__pf;
	FS_PlayerSpeech__pf1795093217();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_PlayerSpeech__pf1795093217& __Other) const
	{
		return FS_PlayerSpeech__pf1795093217::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
