#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "S_ListOfBP_AI_VER1__pf1598526105.h"
#include "S_DialogueTamlate__pf1795093217.h"
class ABP_MasterNPC_C__pf1795093217;
class UClass;
class ABP_RespawnActor_C__pf435599852;
class ABP_MasterQuest_C__pf3622441537;
#include "S_NPCData__pf1287104126.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SaveSystem/S_NPCData.S_NPCData", OverrideNativeName="S_NPCData"))
struct FS_NPCData__pf1287104126
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NameNPC", Tooltip, OverrideNativeName="NameNPC_50_5DC0D017450F0896D11EBB98435AFE3D"))
	FText bpv__NameNPC_50_5DC0D017450F0896D11EBB98435AFE3D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LocaionNPC", Tooltip, OverrideNativeName="LocaionNPC_8_D5F28F8044B91AB97A24A5B89E31C4DC"))
	FTransform bpv__LocaionNPC_8_D5F28F8044B91AB97A24A5B89E31C4DC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ActorClass", Tooltip, OverrideNativeName="ActorClass_51_16B367B54755AB7B8D27F19A29D25779"))
	UClass* bpv__ActorClass_51_16B367B54755AB7B8D27F19A29D25779__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ListOfCharacters", Tooltip, OverrideNativeName="ListOfCharacters_17_F7E01AA34D9F610874827EBD279B8516"))
	FS_ListOfBP_AI_VER1__pf1598526105 bpv__ListOfCharacters_17_F7E01AA34D9F610874827EBD279B8516__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can_Speak?", Tooltip, OverrideNativeName="Can_Speak?_19_C5F329AE48C679C93DBB068EBF7228AD"))
	bool bpv__Can_Speakx_19_C5F329AE48C679C93DBB068EBF7228AD__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="IsQuestGiver?", Tooltip, OverrideNativeName="IsQuestGiver?_25_E4E5DC7B45A8A1D4451D9C8B5F7743C5"))
	bool bpv__IsQuestGiverx_25_E4E5DC7B45A8A1D4451D9C8B5F7743C5__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="IsQuestNPCtoTALK?", Tooltip, OverrideNativeName="IsQuestNPCtoTALK?_34_28CDE771401F6E8C63F98592DF82DC25"))
	bool bpv__IsQuestNPCtoTALKx_34_28CDE771401F6E8C63F98592DF82DC25__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DialogueTemp", Tooltip, OverrideNativeName="DialogueTemp_22_87202E3B468B256FB0EA1491CA2D9AAB"))
	FS_DialogueTamlate__pf1795093217 bpv__DialogueTemp_22_87202E3B468B256FB0EA1491CA2D9AAB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NumberForGiveQuest", Tooltip, OverrideNativeName="NumberForGiveQuest_30_DFF23CB24E23D636FBFAC5AEBF728247"))
	int32 bpv__NumberForGiveQuest_30_DFF23CB24E23D636FBFAC5AEBF728247__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DialogueNumbers", Tooltip, OverrideNativeName="DialogueNumbers_33_4FBC12D9468C93E3F70B619A60084F2D"))
	TArray<int32> bpv__DialogueNumbers_33_4FBC12D9468C93E3F70B619A60084F2D__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="RespawnActor", Tooltip, OverrideNativeName="RespawnActor_38_CDF1372541EAAB2F21DAABB2F56F64BE"))
	ABP_RespawnActor_C__pf435599852* bpv__RespawnActor_38_CDF1372541EAAB2F21DAABB2F56F64BE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HasQuest", Tooltip, OverrideNativeName="HasQuest_41_96F2950D4AE13881FF6BCEA127466DF5"))
	UClass* bpv__HasQuest_41_96F2950D4AE13881FF6BCEA127466DF5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentHealth", Tooltip, OverrideNativeName="CurrentHealth_46_93C0FE86402E2A48DB2F059BD71B513A"))
	int32 bpv__CurrentHealth_46_93C0FE86402E2A48DB2F059BD71B513A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxHealth", Tooltip, OverrideNativeName="MaxHealth_47_99BC271047542019EBD03EA9FABA666D"))
	int32 bpv__MaxHealth_47_99BC271047542019EBD03EA9FABA666D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StartDialogueText", Tooltip, OverrideNativeName="StartDialogueText_54_B24B79054F3F6F8F865751B88D89A81D"))
	FText bpv__StartDialogueText_54_B24B79054F3F6F8F865751B88D89A81D__pf;
	FS_NPCData__pf1287104126();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_NPCData__pf1287104126& __Other) const
	{
		return FS_NPCData__pf1287104126::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
