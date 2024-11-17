#pragma once
#include "E_TypeOfItems__pf206792035.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Props/Interfaces/E_TypeOfItems.E_TypeOfItems", OverrideNativeName="E_TypeOfItems", EnumDisplayNameFn="E__E_TypeOfItems__pf__GetUserFriendlyName") )
enum class E__E_TypeOfItems__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_TypeOfItems::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_TypeOfItems::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "E_TypeOfItems::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "E_TypeOfItems::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "E_TypeOfItems::NewEnumerator4"),
	E__E_TypeOfItems__pf_MAX = 5 UMETA(OverrideName = "E_TypeOfItems::E_MAX"),
};
FText E__E_TypeOfItems__pf__GetUserFriendlyName(int32 InValue);
