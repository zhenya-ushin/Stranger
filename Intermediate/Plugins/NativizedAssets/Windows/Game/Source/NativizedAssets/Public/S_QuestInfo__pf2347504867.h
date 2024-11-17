#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "E_QuestCategories__pf4087967742.h"
#include "E_QuestRegion__pf4087967742.h"
#include "S_QuestReward__pf2347504867.h"
#include "S_GoalInfo__pf2347504867.h"
#include "S_QuestInfo__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_QuestInfo.S_QuestInfo", OverrideNativeName="S_QuestInfo"))
struct FS_QuestInfo__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_2_1CF650A54D486161CCD8259BA2E6C1DE"))
	FText bpv__Name_2_1CF650A54D486161CCD8259BA2E6C1DE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Category", Tooltip, OverrideNativeName="Category_5_B57E80E24C288EECE9E43892DAA49EC7"))
	E__E_QuestCategories__pf bpv__Category_5_B57E80E24C288EECE9E43892DAA49EC7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Tooltip, OverrideNativeName="Description_8_58F773084001E101F2EC44A374A08CF8"))
	FText bpv__Description_8_58F773084001E101F2EC44A374A08CF8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Region", Tooltip, OverrideNativeName="Region_11_FA88826A4AE7A70971452D8B4F8135BB"))
	E__E_QuestRegion__pf bpv__Region_11_FA88826A4AE7A70971452D8B4F8135BB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CompleteionReward", Tooltip, OverrideNativeName="CompleteionReward_14_70C836BB4BF50018EA1CE388B30CA7F2"))
	FS_QuestReward__pf2347504867 bpv__CompleteionReward_14_70C836BB4BF50018EA1CE388B30CA7F2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SuggestedLvl", Tooltip, OverrideNativeName="SuggestedLvl_17_3FDDFB5F4AFEDCE21DC9B095B9AE036E"))
	int32 bpv__SuggestedLvl_17_3FDDFB5F4AFEDCE21DC9B095B9AE036E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Difficulty", Tooltip, OverrideNativeName="Difficulty_20_7EBF56D84C0BA7CCC24BF2933B73A9CB"))
	float bpv__Difficulty_20_7EBF56D84C0BA7CCC24BF2933B73A9CB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SubGoals", Tooltip, OverrideNativeName="SubGoals_24_0D709B5D4238C144508DD1B2EDE066F5"))
	TArray<FS_GoalInfo__pf2347504867> bpv__SubGoals_24_0D709B5D4238C144508DD1B2EDE066F5__pf;
	FS_QuestInfo__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_QuestInfo__pf2347504867& __Other) const
	{
		return FS_QuestInfo__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
