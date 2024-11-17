#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "E_GoalTypes__pf4087967742.h"
#include "S_GoalLocation__pf2347504867.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class AActor;
class UClass;
#include "S_GoalInfo__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_GoalInfo.S_GoalInfo", OverrideNativeName="S_GoalInfo"))
struct FS_GoalInfo__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type", Tooltip, OverrideNativeName="Type_2_54EF5C494F1FB9A253E956922A803210"))
	E__E_GoalTypes__pf bpv__Type_2_54EF5C494F1FB9A253E956922A803210__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CustomGoal?", Tooltip, OverrideNativeName="CustomGoal?_5_D1D2B535436760C098E03EABD25D8590"))
	bool bpv__CustomGoalx_5_D1D2B535436760C098E03EABD25D8590__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalText", Tooltip, OverrideNativeName="GoalText_8_CDF06F0143C476FF869986B78F7AB64A"))
	FText bpv__GoalText_8_CDF06F0143C476FF869986B78F7AB64A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Addition", Tooltip, OverrideNativeName="Addition_10_C89974AD4A68ABB1E1715F997DA83C48"))
	FText bpv__Addition_10_C89974AD4A68ABB1E1715F997DA83C48__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="AmountToHunt", Tooltip, OverrideNativeName="AmountToHunt_13_85811D854EAC219B5749B8B5447DFF97"))
	int32 bpv__AmountToHunt_13_85811D854EAC219B5749B8B5447DFF97__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalClass", Tooltip, OverrideNativeName="GoalClass_41_410CC7534165373BEA12D49938E6DCC9"))
	UClass* bpv__GoalClass_41_410CC7534165373BEA12D49938E6DCC9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TagGoal", Tooltip, OverrideNativeName="TagGoal_51_0F165A404EAF518D502CD7B66E7F8D71"))
	FName bpv__TagGoal_51_0F165A404EAF518D502CD7B66E7F8D71__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NPCName", Tooltip, OverrideNativeName="NPCName_47_5ECC094D454F6D7FBB63689F00F9E292"))
	FText bpv__NPCName_47_5ECC094D454F6D7FBB63689F00F9E292__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalID", Tooltip, OverrideNativeName="GoalID_44_053385F24D5B11867B543095EBCA3F52"))
	int32 bpv__GoalID_44_053385F24D5B11867B543095EBCA3F52__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="GoalLocation", Tooltip, OverrideNativeName="GoalLocation_16_246185A3458F7EDFFE50948F314CF5E4"))
	FS_GoalLocation__pf2347504867 bpv__GoalLocation_16_246185A3458F7EDFFE50948F314CF5E4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UseRadius?", Tooltip, OverrideNativeName="UseRadius?_32_3F7E6B114C6A928856D69EB6C58C51D7"))
	bool bpv__UseRadiusx_32_3F7E6B114C6A928856D69EB6C58C51D7__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Radius", Tooltip, OverrideNativeName="Radius_35_D244C88245C2545F26BA519BCE25A12C"))
	float bpv__Radius_35_D244C88245C2545F26BA519BCE25A12C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CircleColour", Tooltip, OverrideNativeName="CircleColour_38_5D8F74044861B2D023D59194B823EDF0"))
	FLinearColor bpv__CircleColour_38_5D8F74044861B2D023D59194B823EDF0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UpdateQuestDesc?", Tooltip, OverrideNativeName="UpdateQuestDesc?_23_D1BA1F4D4A2437275FECD5AF748E3987"))
	bool bpv__UpdateQuestDescx_23_D1BA1F4D4A2437275FECD5AF748E3987__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="UpdatedDescription", Tooltip, OverrideNativeName="UpdatedDescription_26_155CD77F42C45F118E631CA438411640"))
	FText bpv__UpdatedDescription_26_155CD77F42C45F118E631CA438411640__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SubGoalIndecies", Tooltip, OverrideNativeName="SubGoalIndecies_30_DAFB4D65488DD8C9BF49F1A662613694"))
	TArray<int32> bpv__SubGoalIndecies_30_DAFB4D65488DD8C9BF49F1A662613694__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FailMeansQuestFail?", Tooltip, OverrideNativeName="FailMeansQuestFail?_54_647491AC463539019F7DE3B4E4FCCDF4"))
	bool bpv__FailMeansQuestFailx_54_647491AC463539019F7DE3B4E4FCCDF4__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CompleteQuest?", Tooltip, OverrideNativeName="CompleteQuest?_55_4B645D1A45CFA47BA7EA4E83C929DEDD"))
	bool bpv__CompleteQuestx_55_4B645D1A45CFA47BA7EA4E83C929DEDD__pfzy;
	FS_GoalInfo__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_GoalInfo__pf2347504867& __Other) const
	{
		return FS_GoalInfo__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
