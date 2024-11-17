#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_Punk_C__pf4158769763;
#include "S_list_of_punks__pf1598526105.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Interfaces/S_list_of_punks.S_list_of_punks", OverrideNativeName="S_list_of_punks"))
struct FS_list_of_punks__pf1598526105
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="ArrayOfPunks", Tooltip, OverrideNativeName="ArrayOfPunks_4_CADC36F8444490DCE9E813822AC6052C"))
	TArray<ABP_Punk_C__pf4158769763*> bpv__ArrayOfPunks_4_CADC36F8444490DCE9E813822AC6052C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FriendRate", Tooltip, OverrideNativeName="FriendRate_7_BF02692E4FE0312C093AAE9728EDCA1A"))
	TArray<int32> bpv__FriendRate_7_BF02692E4FE0312C093AAE9728EDCA1A__pf;
	FS_list_of_punks__pf1598526105();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_list_of_punks__pf1598526105& __Other) const
	{
		return FS_list_of_punks__pf1598526105::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
