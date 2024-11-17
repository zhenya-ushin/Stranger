#pragma once
#include "E_GoalStates__pf4087967742.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Enums/E_GoalStates.E_GoalStates", OverrideNativeName="E_GoalStates", EnumDisplayNameFn="E__E_GoalStates__pf__GetUserFriendlyName") )
enum class E__E_GoalStates__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_GoalStates::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_GoalStates::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_GoalStates::NewEnumerator2"),
	E__E_GoalStates__pf_MAX = 3 UMETA(OverrideName = "E_GoalStates::E_MAX"),
};
FText E__E_GoalStates__pf__GetUserFriendlyName(int32 InValue);
