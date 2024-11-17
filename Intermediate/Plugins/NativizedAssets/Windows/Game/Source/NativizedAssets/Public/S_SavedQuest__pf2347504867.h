#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_GoalInfo__pf2347504867.h"
#include "S_CompletedGoal__pf2347504867.h"
#include "E_QuestStates__pf4087967742.h"
class ABP_MasterQuest_C__pf3622441537;
class UClass;
#include "S_SavedQuest__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_SavedQuest.S_SavedQuest", OverrideNativeName="S_SavedQuest"))
struct FS_SavedQuest__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="QuestClass", Tooltip, OverrideNativeName="QuestClass_4_1EA66AC14A73AB7F6A98668E37A6E6AE"))
	UClass* bpv__QuestClass_4_1EA66AC14A73AB7F6A98668E37A6E6AE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentActive?", Tooltip, OverrideNativeName="CurrentActive?_5_9EC1C11B4B2CFA0B4D65C6B59FEE5789"))
	bool bpv__CurrentActivex_5_9EC1C11B4B2CFA0B4D65C6B59FEE5789__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentGoalIndeces", Tooltip, OverrideNativeName="CurrentGoalIndeces_9_B76079E1442614493017C89BCDB7D8D5"))
	TArray<int32> bpv__CurrentGoalIndeces_9_B76079E1442614493017C89BCDB7D8D5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HuntAmount", Tooltip, OverrideNativeName="HuntAmount_11_BF3F29734224E36E790DDA8F9CEA0EBC"))
	TArray<int32> bpv__HuntAmount_11_BF3F29734224E36E790DDA8F9CEA0EBC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SelectedGoalIndex", Tooltip, OverrideNativeName="SelectedGoalIndex_14_ED2D96234D0B7694ED61758DDA62EEE9"))
	int32 bpv__SelectedGoalIndex_14_ED2D96234D0B7694ED61758DDA62EEE9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentGoals", Tooltip, OverrideNativeName="CurrentGoals_18_04D0CB934EA2DA492FDA9582D754EAC7"))
	TArray<FS_GoalInfo__pf2347504867> bpv__CurrentGoals_18_04D0CB934EA2DA492FDA9582D754EAC7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CompletedGoals", Tooltip, OverrideNativeName="CompletedGoals_22_E0C070894D10365424B947B3AA9B8095"))
	TArray<FS_CompletedGoal__pf2347504867> bpv__CompletedGoals_22_E0C070894D10365424B947B3AA9B8095__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MemberVar_21", Tooltip, OverrideNativeName="MemberVar_21_EF9020CC43B1B204C15200812B727504"))
	TArray<FS_GoalInfo__pf2347504867> bpv__MemberVar_21_EF9020CC43B1B204C15200812B727504__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentState", Tooltip, OverrideNativeName="CurrentState_26_04677ADC43EC05759FCAD6B950077114"))
	E__E_QuestStates__pf bpv__CurrentState_26_04677ADC43EC05759FCAD6B950077114__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentDesc", Tooltip, OverrideNativeName="CurrentDesc_29_2F1C0BFB43E20837E689C0843ED4AEA9"))
	FText bpv__CurrentDesc_29_2F1C0BFB43E20837E689C0843ED4AEA9__pf;
	FS_SavedQuest__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_SavedQuest__pf2347504867& __Other) const
	{
		return FS_SavedQuest__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
