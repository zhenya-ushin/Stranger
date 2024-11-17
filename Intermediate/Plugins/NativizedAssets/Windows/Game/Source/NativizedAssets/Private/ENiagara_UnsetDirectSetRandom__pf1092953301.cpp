#include "NativizedAssets.h"
#include "ENiagara_UnsetDirectSetRandom__pf1092953301.h"
FText E__ENiagara_UnsetDirectSetRandom__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagara_UnsetDirectSetRandom__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagara_UnsetDirectSetRandom__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CED593914C4B823368041DAE6647992A]\", \"5184707849BFB2FC37DEBCBEAEE0AFDD\", \"Unset\")"), Text); break;
		case E__ENiagara_UnsetDirectSetRandom__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CED593914C4B823368041DAE6647992A]\", \"A025C68F4F86E238E9E779806431EA68\", \"Direct Set\")"), Text); break;
		case E__ENiagara_UnsetDirectSetRandom__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[CED593914C4B823368041DAE6647992A]\", \"F1283EBD4EA12FA1B8CB60B3C4D07FF8\", \"Random\")"), Text); break;
		case E__ENiagara_UnsetDirectSetRandom__pf::E__ENiagara_UnsetDirectSetRandom__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
