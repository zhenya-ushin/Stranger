#pragma once
#include "E_QuestCategories__pf4087967742.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Enums/E_QuestCategories.E_QuestCategories", OverrideNativeName="E_QuestCategories", EnumDisplayNameFn="E__E_QuestCategories__pf__GetUserFriendlyName") )
enum class E__E_QuestCategories__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_QuestCategories::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_QuestCategories::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_QuestCategories::NewEnumerator2"),
	E__E_QuestCategories__pf_MAX = 3 UMETA(OverrideName = "E_QuestCategories::E_MAX"),
};
FText E__E_QuestCategories__pf__GetUserFriendlyName(int32 InValue);
