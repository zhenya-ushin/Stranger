#include "NativizedAssets.h"
#include "E_QuestRegion__pf4087967742.h"
FText E__E_QuestRegion__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_QuestRegion__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_QuestRegion__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E60B35A64267D52A36972B9F2A16A02F]\", \"1268D79D45BF40373A2F58B5047E1BD1\", \"Reg1\")"), Text); break;
		case E__E_QuestRegion__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E60B35A64267D52A36972B9F2A16A02F]\", \"CE4EE3E24D976A0CAEE74A8D9467DB9D\", \"REg2\")"), Text); break;
		case E__E_QuestRegion__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[E60B35A64267D52A36972B9F2A16A02F]\", \"42D664A740669E31FB045083203E43E2\", \"Reg3\")"), Text); break;
		case E__E_QuestRegion__pf::E__E_QuestRegion__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
