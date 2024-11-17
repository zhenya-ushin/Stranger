#pragma once
#include "E_QuestStates__pf4087967742.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Enums/E_QuestStates.E_QuestStates", OverrideNativeName="E_QuestStates", EnumDisplayNameFn="E__E_QuestStates__pf__GetUserFriendlyName") )
enum class E__E_QuestStates__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_QuestStates::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_QuestStates::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_QuestStates::NewEnumerator2"),
	E__E_QuestStates__pf_MAX = 3 UMETA(OverrideName = "E_QuestStates::E_MAX"),
};
FText E__E_QuestStates__pf__GetUserFriendlyName(int32 InValue);
