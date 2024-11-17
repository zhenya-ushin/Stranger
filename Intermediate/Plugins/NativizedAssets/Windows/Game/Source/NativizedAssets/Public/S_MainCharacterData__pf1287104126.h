#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "S_Inventory__pf2307205371.h"
#include "S_RegionPrestige__pf2347504867.h"
#include "S_MainCharacterData__pf1287104126.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SaveSystem/S_MainCharacterData.S_MainCharacterData", OverrideNativeName="S_MainCharacterData"))
struct FS_MainCharacterData__pf1287104126
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Save_PlayerTransform", Tooltip, OverrideNativeName="Save_PlayerTransform_2_6FBB7693420EF30232C792A6BC0ECEBD"))
	FTransform bpv__Save_PlayerTransform_2_6FBB7693420EF30232C792A6BC0ECEBD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Save_CameraRotation", Tooltip, OverrideNativeName="Save_CameraRotation_5_20C6317E405B959C6E5C9AB4301E3C80"))
	FRotator bpv__Save_CameraRotation_5_20C6317E405B959C6E5C9AB4301E3C80__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Save_Inventory", Tooltip, OverrideNativeName="Save_Inventory_8_46A1A49242AB19806C7335AF43B3743A"))
	FS_Inventory__pf2307205371 bpv__Save_Inventory_8_46A1A49242AB19806C7335AF43B3743A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Save_PlayerTags", Tooltip, OverrideNativeName="Save_PlayerTags_13_B0FAB1154110A1169E88E49CFA907E81"))
	TArray<FName> bpv__Save_PlayerTags_13_B0FAB1154110A1169E88E49CFA907E81__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SavedPrestigePoints", Tooltip, OverrideNativeName="SavedPrestigePoints_17_7E43CD164C944449CC7E9DBCDB159EB6"))
	TArray<FS_RegionPrestige__pf2347504867> bpv__SavedPrestigePoints_17_7E43CD164C944449CC7E9DBCDB159EB6__pf;
	FS_MainCharacterData__pf1287104126();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_MainCharacterData__pf1287104126& __Other) const
	{
		return FS_MainCharacterData__pf1287104126::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
