#pragma once
#include "NewUserDefinedEnum__pf1598526105.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Interfaces/NewUserDefinedEnum.NewUserDefinedEnum", OverrideNativeName="NewUserDefinedEnum", EnumDisplayNameFn="E__NewUserDefinedEnum__pf__GetUserFriendlyName") )
enum class E__NewUserDefinedEnum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "NewUserDefinedEnum::NewEnumerator0"),
	E__NewUserDefinedEnum__pf_MAX = 1 UMETA(OverrideName = "NewUserDefinedEnum::NewUserDefinedEnum_0_MAX"),
};
FText E__NewUserDefinedEnum__pf__GetUserFriendlyName(int32 InValue);
