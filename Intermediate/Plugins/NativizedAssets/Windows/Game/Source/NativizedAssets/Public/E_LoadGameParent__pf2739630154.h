#pragma once
#include "E_LoadGameParent__pf2739630154.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/MainMenu/Widgets/E_LoadGameParent.E_LoadGameParent", OverrideNativeName="E_LoadGameParent", EnumDisplayNameFn="E__E_LoadGameParent__pf__GetUserFriendlyName") )
enum class E__E_LoadGameParent__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_LoadGameParent::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_LoadGameParent::NewEnumerator1"),
	E__E_LoadGameParent__pf_MAX = 2 UMETA(OverrideName = "E_LoadGameParent::E_MAX"),
};
FText E__E_LoadGameParent__pf__GetUserFriendlyName(int32 InValue);
