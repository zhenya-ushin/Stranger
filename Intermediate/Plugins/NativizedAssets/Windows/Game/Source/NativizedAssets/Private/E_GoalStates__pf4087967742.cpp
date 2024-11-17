#include "NativizedAssets.h"
#include "E_GoalStates__pf4087967742.h"
FText E__E_GoalStates__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_GoalStates__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_GoalStates__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[64B1D13E4031C573519839B7F6613967]\", \"EE65DFAF4AA1664A14018BB757FA517F\", \"Current Goal\")"), Text); break;
		case E__E_GoalStates__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[64B1D13E4031C573519839B7F6613967]\", \"458275F541B34E52D665EEA5587C135E\", \"Completed Goal\")"), Text); break;
		case E__E_GoalStates__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[64B1D13E4031C573519839B7F6613967]\", \"9529D1F048773238096791B286903C36\", \"Failed Goal\")"), Text); break;
		case E__E_GoalStates__pf::E__E_GoalStates__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
