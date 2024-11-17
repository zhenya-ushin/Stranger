#include "NativizedAssets.h"
#include "E_LoadGameParent__pf2739630154.h"
FText E__E_LoadGameParent__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_LoadGameParent__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_LoadGameParent__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5C6F4C1D4157543A060673A64091D4F3]\", \"231266234B9DE4221B1D44AE24D73E02\", \"MainMenu\")"), Text); break;
		case E__E_LoadGameParent__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5C6F4C1D4157543A060673A64091D4F3]\", \"624A96294B525A65C459D586DE0F7E2C\", \"PauseMenu\")"), Text); break;
		case E__E_LoadGameParent__pf::E__E_LoadGameParent__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
