#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_AI_ver1_C__pf4158769763;
#include "S_ListOfBP_AI_VER1__pf1598526105.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprint/Interfaces/S_ListOfBP_AI_VER1.S_ListOfBP_AI_VER1", OverrideNativeName="S_ListOfBP_AI_VER1"))
struct FS_ListOfBP_AI_VER1__pf1598526105
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="ArrayOfBPAiVer1", Tooltip, OverrideNativeName="ArrayOfBPAiVer1_17_348F04F94772D7CD8F5C5CA2038A36EC"))
	TArray<ABP_AI_ver1_C__pf4158769763*> bpv__ArrayOfBPAiVer1_17_348F04F94772D7CD8F5C5CA2038A36EC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FriendRate", Tooltip, OverrideNativeName="FriendRate_20_B379B915438C4C67ACE22890A5CCBB85"))
	TArray<int32> bpv__FriendRate_20_B379B915438C4C67ACE22890A5CCBB85__pf;
	FS_ListOfBP_AI_VER1__pf1598526105();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_ListOfBP_AI_VER1__pf1598526105& __Other) const
	{
		return FS_ListOfBP_AI_VER1__pf1598526105::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
