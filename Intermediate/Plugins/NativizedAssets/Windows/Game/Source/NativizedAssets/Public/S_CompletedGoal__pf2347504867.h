#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_GoalInfo__pf2347504867.h"
#include "S_CompletedGoal__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_CompletedGoal.S_CompletedGoal", OverrideNativeName="S_CompletedGoal"))
struct FS_CompletedGoal__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalIndex", Tooltip, OverrideNativeName="GoalIndex_3_E2512FB04E140A06A855A79BEB05FDE9"))
	int32 bpv__GoalIndex_3_E2512FB04E140A06A855A79BEB05FDE9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalInfo", Tooltip, OverrideNativeName="GoalInfo_5_30DB4C394A7D1170FDF21789C540966C"))
	FS_GoalInfo__pf2347504867 bpv__GoalInfo_5_30DB4C394A7D1170FDF21789C540966C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Succ?", Tooltip, OverrideNativeName="Succ?_8_D23F91834223D0CCA8DBCBA3B9CDDD8E"))
	bool bpv__Succx_8_D23F91834223D0CCA8DBCBA3B9CDDD8E__pfzy;
	FS_CompletedGoal__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_CompletedGoal__pf2347504867& __Other) const
	{
		return FS_CompletedGoal__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_CompletedGoal__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_CompletedGoal__pf2347504867::StaticStruct()); }
};
