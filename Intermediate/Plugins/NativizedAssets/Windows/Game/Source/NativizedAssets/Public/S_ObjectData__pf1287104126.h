#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class AActor;
class UClass;
#include "S_ObjectData__pf1287104126.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SaveSystem/S_ObjectData.S_ObjectData", OverrideNativeName="S_ObjectData"))
struct FS_ObjectData__pf1287104126
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ObjectTransform", Tooltip, OverrideNativeName="ObjectTransform_2_F115187C4B17941E2491B19497D8ED8A"))
	FTransform bpv__ObjectTransform_2_F115187C4B17941E2491B19497D8ED8A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ActorClass", Tooltip, OverrideNativeName="ActorClass_6_0ABAFC684216032B35D725A71FC82114"))
	UClass* bpv__ActorClass_6_0ABAFC684216032B35D725A71FC82114__pf;
	FS_ObjectData__pf1287104126();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_ObjectData__pf1287104126& __Other) const
	{
		return FS_ObjectData__pf1287104126::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
