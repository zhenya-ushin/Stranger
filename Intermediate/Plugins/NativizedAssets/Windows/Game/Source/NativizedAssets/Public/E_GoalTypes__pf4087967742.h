#pragma once
#include "E_GoalTypes__pf4087967742.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Enums/E_GoalTypes.E_GoalTypes", OverrideNativeName="E_GoalTypes", EnumDisplayNameFn="E__E_GoalTypes__pf__GetUserFriendlyName") )
enum class E__E_GoalTypes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_GoalTypes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_GoalTypes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_GoalTypes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_GoalTypes::NewEnumerator3"),
	E__E_GoalTypes__pf_MAX = 4 UMETA(OverrideName = "E_GoalTypes::E_MAX"),
};
FText E__E_GoalTypes__pf__GetUserFriendlyName(int32 InValue);
