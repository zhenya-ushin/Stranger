#include "NativizedAssets.h"
#include "E_GoalTypes__pf4087967742.h"
FText E__E_GoalTypes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_GoalTypes__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_GoalTypes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7C8D4725497966B93FC9068367241CDB]\", \"8A73361444D9D2BFFDB2648C9E668DC4\", \"Custom\")"), Text); break;
		case E__E_GoalTypes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7C8D4725497966B93FC9068367241CDB]\", \"95A27A0E4D88BCE9DBFACA9D2552D958\", \"Hunt\")"), Text); break;
		case E__E_GoalTypes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7C8D4725497966B93FC9068367241CDB]\", \"A483CBF649B0A438BE4F8B8B8BBF4B2F\", \"Find\")"), Text); break;
		case E__E_GoalTypes__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7C8D4725497966B93FC9068367241CDB]\", \"ED33B9324D37215D53AC038E9C797262\", \"Talk\")"), Text); break;
		case E__E_GoalTypes__pf::E__E_GoalTypes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
