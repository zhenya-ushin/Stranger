#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_QuestReward__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_QuestReward.S_QuestReward", OverrideNativeName="S_QuestReward"))
struct FS_QuestReward__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Exp", Tooltip, OverrideNativeName="Exp_2_D4FB18CA44FC8980947BC88FDB74C37B"))
	int32 bpv__Exp_2_D4FB18CA44FC8980947BC88FDB74C37B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PrestigePoints", Tooltip, OverrideNativeName="PrestigePoints_4_4449C2AC43176C3D95EF1FA857AD7F20"))
	int32 bpv__PrestigePoints_4_4449C2AC43176C3D95EF1FA857AD7F20__pf;
	FS_QuestReward__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_QuestReward__pf2347504867& __Other) const
	{
		return FS_QuestReward__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_QuestReward__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_QuestReward__pf2347504867::StaticStruct()); }
};
