#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_MasterNPC_C__pf1795093217;
class UClass;
#include "S_RespawnEnemy__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_RespawnEnemy.S_RespawnEnemy", OverrideNativeName="S_RespawnEnemy"))
struct FS_RespawnEnemy__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time", Tooltip, OverrideNativeName="Time_3_CDB4AA414B93F4AF89AEB8A8B9B680E6"))
	float bpv__Time_3_CDB4AA414B93F4AF89AEB8A8B9B680E6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enemy", Tooltip, OverrideNativeName="Enemy_6_15E6192540D5E599F9CC0AA8D4FBDBB4"))
	UClass* bpv__Enemy_6_15E6192540D5E599F9CC0AA8D4FBDBB4__pf;
	FS_RespawnEnemy__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_RespawnEnemy__pf2347504867& __Other) const
	{
		return FS_RespawnEnemy__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_RespawnEnemy__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_RespawnEnemy__pf2347504867::StaticStruct()); }
};
