#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class AActor;
class UClass;
#include "S_Inventory__pf2307205371.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/InventorySystem/S_Inventory.S_Inventory", OverrideNativeName="S_Inventory"))
struct FS_Inventory__pf2307205371
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Inventory", Tooltip, OverrideNativeName="Inventory_5_93139C3945BF819BD28A21A0941488F0"))
	TArray<UClass*> bpv__Inventory_5_93139C3945BF819BD28A21A0941488F0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlotCount", Tooltip, OverrideNativeName="SlotCount_7_72E3938A4D2E3918412191BBABC44470"))
	TArray<int32> bpv__SlotCount_7_72E3938A4D2E3918412191BBABC44470__pf;
	FS_Inventory__pf2307205371();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_Inventory__pf2307205371& __Other) const
	{
		return FS_Inventory__pf2307205371::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
