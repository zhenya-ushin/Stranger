#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "S_GoalLocation__pf2347504867.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/QuestSystem/Structure/S_GoalLocation.S_GoalLocation", OverrideNativeName="S_GoalLocation"))
struct FS_GoalLocation__pf2347504867
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="hasLocation?", Tooltip, OverrideNativeName="hasLocation?_1_23CA8D2941FB3A4616DE00BB11EF3D7C"))
	bool bpv__hasLocationx_1_23CA8D2941FB3A4616DE00BB11EF3D7C__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Location", Tooltip, OverrideNativeName="Location_4_0B9F349A46766A0257854AA80C2E284D"))
	FVector bpv__Location_4_0B9F349A46766A0257854AA80C2E284D__pf;
	FS_GoalLocation__pf2347504867();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_GoalLocation__pf2347504867& __Other) const
	{
		return FS_GoalLocation__pf2347504867::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_GoalLocation__pf2347504867& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_GoalLocation__pf2347504867::StaticStruct()); }
};
