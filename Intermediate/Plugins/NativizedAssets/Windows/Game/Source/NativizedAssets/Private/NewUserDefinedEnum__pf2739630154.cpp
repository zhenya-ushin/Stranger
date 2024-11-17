#include "NativizedAssets.h"
#include "NewUserDefinedEnum__pf2739630154.h"
FText E__NewUserDefinedEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__NewUserDefinedEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__NewUserDefinedEnum__pf::E__NewUserDefinedEnum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("New User Defined Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
