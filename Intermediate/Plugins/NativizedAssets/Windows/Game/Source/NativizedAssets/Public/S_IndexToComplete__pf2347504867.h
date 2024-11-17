#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_MasterQuest_C__pf3622441537;
#include "S_IndexToComplete__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_IndexToComplete.S_IndexToComplete", OverrideNativeName="S_IndexToComplete"))
struct FS_IndexToComplete__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Quest", Tooltip, OverrideNativeName="Quest_3_2477B1E44AC4DD58CFFA3ABDCC3FC65F"))
	ABP_MasterQuest_C__pf3622441537* bpv__Quest_3_2477B1E44AC4DD58CFFA3ABDCC3FC65F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Index", Tooltip, OverrideNativeName="Index_5_EAC085ED4DEE24CF0DBD3F8644FCA35D"))
	int32 bpv__Index_5_EAC085ED4DEE24CF0DBD3F8644FCA35D__pf;
	FS_IndexToComplete__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_IndexToComplete__pf2347504867& __Other) const
	{
		return FS_IndexToComplete__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_IndexToComplete__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_IndexToComplete__pf2347504867::StaticStruct()); }
};
