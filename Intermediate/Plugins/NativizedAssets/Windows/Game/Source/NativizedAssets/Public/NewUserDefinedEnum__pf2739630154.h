#pragma once
#include "NewUserDefinedEnum__pf2739630154.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/MainMenu/Widgets/NewUserDefinedEnum.NewUserDefinedEnum", OverrideNativeName="NewUserDefinedEnum", EnumDisplayNameFn="E__NewUserDefinedEnum__pf__GetUserFriendlyName") )
enum class E__NewUserDefinedEnum__pf  : uint8
{
	E__NewUserDefinedEnum__pf_MAX = 0 UMETA(OverrideName = "NewUserDefinedEnum::NewUserDefinedEnum_MAX"),
};
FText E__NewUserDefinedEnum__pf__GetUserFriendlyName(int32 InValue);
