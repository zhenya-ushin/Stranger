#include "NativizedAssets.h"
#include "E_QuestStates__pf4087967742.h"
FText E__E_QuestStates__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_QuestStates__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_QuestStates__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5395374E4BE075DDDB40ECBE96381179]\", \"93C8584142119D3DA107829D06CCCAC0\", \"Current Quests\")"), Text); break;
		case E__E_QuestStates__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5395374E4BE075DDDB40ECBE96381179]\", \"7C0895FF4789965557B459BBAA184FA3\", \"Completed Quests\")"), Text); break;
		case E__E_QuestStates__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5395374E4BE075DDDB40ECBE96381179]\", \"5CF66F04452FE0847190478C36C99E83\", \"Failed Quests\")"), Text); break;
		case E__E_QuestStates__pf::E__E_QuestStates__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
