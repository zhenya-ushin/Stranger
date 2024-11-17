#pragma once
#include "E_QuestRegion__pf4087967742.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Enums/E_QuestRegion.E_QuestRegion", OverrideNativeName="E_QuestRegion", EnumDisplayNameFn="E__E_QuestRegion__pf__GetUserFriendlyName") )
enum class E__E_QuestRegion__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_QuestRegion::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_QuestRegion::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_QuestRegion::NewEnumerator2"),
	E__E_QuestRegion__pf_MAX = 3 UMETA(OverrideName = "E_QuestRegion::E_MAX"),
};
FText E__E_QuestRegion__pf__GetUserFriendlyName(int32 InValue);
