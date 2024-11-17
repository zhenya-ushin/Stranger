#include "NativizedAssets.h"
#include "E_QuestCategories__pf4087967742.h"
FText E__E_QuestCategories__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_QuestCategories__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_QuestCategories__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[72E120D64BF4255575DC419534343AEC]\", \"3CD962FE44FC6FE69A28D3A138895A1C\", \"MainQuest\")"), Text); break;
		case E__E_QuestCategories__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[72E120D64BF4255575DC419534343AEC]\", \"574D23924187D417E2A53B940BE14C0E\", \"SideQuest\")"), Text); break;
		case E__E_QuestCategories__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[72E120D64BF4255575DC419534343AEC]\", \"F22F89C6470BC7F79142FAB132B21BB7\", \"Events\")"), Text); break;
		case E__E_QuestCategories__pf::E__E_QuestCategories__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
