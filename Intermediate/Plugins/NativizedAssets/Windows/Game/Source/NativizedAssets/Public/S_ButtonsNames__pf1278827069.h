#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_ButtonsNames__pf1278827069.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Widgets/Struct/S_ButtonsNames.S_ButtonsNames", OverrideNativeName="S_ButtonsNames"))
struct FS_ButtonsNames__pf1278827069
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ButtonText", Tooltip, OverrideNativeName="ButtonText_2_0AA6D7CB4B4982CFF2D4A7924BEB8DD3"))
	FText bpv__ButtonText_2_0AA6D7CB4B4982CFF2D4A7924BEB8DD3__pf;
	FS_ButtonsNames__pf1278827069();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_ButtonsNames__pf1278827069& __Other) const
	{
		return FS_ButtonsNames__pf1278827069::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
