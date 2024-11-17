#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_MasterNPC_C__pf1795093217;
#include "S_list_of_character__pf891357035.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Struct/S_list_of_character.S_list_of_character", OverrideNativeName="S_list_of_character"))
struct FS_list_of_character__pf891357035
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Character", Tooltip, OverrideNativeName="Character_3_A968F77247FAFA5EC4FF69936F4776FA"))
	TArray<ABP_MasterNPC_C__pf1795093217*> bpv__Character_3_A968F77247FAFA5EC4FF69936F4776FA__pf;
	FS_list_of_character__pf891357035();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_list_of_character__pf891357035& __Other) const
	{
		return FS_list_of_character__pf891357035::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
