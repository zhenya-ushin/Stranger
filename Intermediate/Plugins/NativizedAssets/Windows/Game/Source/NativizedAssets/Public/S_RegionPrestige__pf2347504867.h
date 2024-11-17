#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "E_QuestRegion__pf4087967742.h"
#include "S_RegionPrestige__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_RegionPrestige.S_RegionPrestige", OverrideNativeName="S_RegionPrestige"))
struct FS_RegionPrestige__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Region", Tooltip, OverrideNativeName="Region_4_5923608848107CAECD16F2B907460DF2"))
	E__E_QuestRegion__pf bpv__Region_4_5923608848107CAECD16F2B907460DF2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Prestige", Tooltip, OverrideNativeName="Prestige_6_F157AF0E40BC9E529FC4779E146433B0"))
	int32 bpv__Prestige_6_F157AF0E40BC9E529FC4779E146433B0__pf;
	FS_RegionPrestige__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_RegionPrestige__pf2347504867& __Other) const
	{
		return FS_RegionPrestige__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_RegionPrestige__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_RegionPrestige__pf2347504867::StaticStruct()); }
};
