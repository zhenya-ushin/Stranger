#include "NativizedAssets.h"
#include "E_TypeOfItems__pf206792035.h"
FText E__E_TypeOfItems__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_TypeOfItems__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_TypeOfItems__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2D72E5CF4B49DE62749394AB3099266D]\", \"CB8869814B8935A73DC7ED83BB426E85\", \"Eating\")"), Text); break;
		case E__E_TypeOfItems__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2D72E5CF4B49DE62749394AB3099266D]\", \"EAA4B9AD4930A8667EBBAE9651ECE11B\", \"Fighting (NoInventory)\")"), Text); break;
		case E__E_TypeOfItems__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2D72E5CF4B49DE62749394AB3099266D]\", \"9537DC804A0DF8E417D753B183F4BFA5\", \"QuestItem\")"), Text); break;
		case E__E_TypeOfItems__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2D72E5CF4B49DE62749394AB3099266D]\", \"28AA3F584152DA571DFC2FAC277CDD3E\", \"CanThrow\")"), Text); break;
		case E__E_TypeOfItems__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[2D72E5CF4B49DE62749394AB3099266D]\", \"CEE7B35F4370D67913D14E97912D16BD\", \"ForDrow\")"), Text); break;
		case E__E_TypeOfItems__pf::E__E_TypeOfItems__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
