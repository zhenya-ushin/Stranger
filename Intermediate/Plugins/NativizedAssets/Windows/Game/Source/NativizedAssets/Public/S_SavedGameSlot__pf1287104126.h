#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "S_GameplayData__pf1287104126.h"
#include "S_SavedQuest__pf2347504867.h"
#include "S_SavedGameSlot__pf1287104126.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SaveSystem/S_SavedGameSlot.S_SavedGameSlot", OverrideNativeName="S_SavedGameSlot"))
struct FS_SavedGameSlot__pf1287104126
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SlotName", Tooltip, OverrideNativeName="SlotName_4_D2EAEE3E4DB615E312EFDCBFF652193F"))
	FText bpv__SlotName_4_D2EAEE3E4DB615E312EFDCBFF652193F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SaveDate", Tooltip, OverrideNativeName="SaveDate_6_8100B4854BD4443B8C8C23AE16371B01"))
	FDateTime bpv__SaveDate_6_8100B4854BD4443B8C8C23AE16371B01__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GameplayData", Tooltip, OverrideNativeName="GameplayData_9_F1059BB84C13CF181823CF8AD7BC2666"))
	FS_GameplayData__pf1287104126 bpv__GameplayData_9_F1059BB84C13CF181823CF8AD7BC2666__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SavedQuest", Tooltip, OverrideNativeName="SavedQuest_17_99DAA41E4810CBB27D3A378B78C47780"))
	TArray<FS_SavedQuest__pf2347504867> bpv__SavedQuest_17_99DAA41E4810CBB27D3A378B78C47780__pf;
	FS_SavedGameSlot__pf1287104126();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_SavedGameSlot__pf1287104126& __Other) const
	{
		return FS_SavedGameSlot__pf1287104126::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
