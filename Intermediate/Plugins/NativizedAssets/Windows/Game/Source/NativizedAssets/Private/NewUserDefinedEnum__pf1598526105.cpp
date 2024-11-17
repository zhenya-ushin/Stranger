#include "NativizedAssets.h"
#include "NewUserDefinedEnum__pf1598526105.h"
FText E__NewUserDefinedEnum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__NewUserDefinedEnum__pf>(InValue);
	switch(EnumValue)
	{
		case E__NewUserDefinedEnum__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[9E194C994B1AD6821D9843AB756028C8]\", \"46BA07154A580662D9951EA56C2DF540\", \"NewEnumerator0\")"), Text); break;
		case E__NewUserDefinedEnum__pf::E__NewUserDefinedEnum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("New User Defined Enum 0 MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
