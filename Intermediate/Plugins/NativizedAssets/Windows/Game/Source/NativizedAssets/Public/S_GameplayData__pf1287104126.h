#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_MainCharacterData__pf1287104126.h"
#include "S_NPCData__pf1287104126.h"
#include "S_ObjectData__pf1287104126.h"
#include "S_GameplayData__pf1287104126.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/SaveSystem/S_GameplayData.S_GameplayData", OverrideNativeName="S_GameplayData"))
struct FS_GameplayData__pf1287104126
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MainCharacterData", Tooltip, OverrideNativeName="MainCharacterData_4_468B7FD34F9CE1A928AA7CB6C11EE138"))
	FS_MainCharacterData__pf1287104126 bpv__MainCharacterData_4_468B7FD34F9CE1A928AA7CB6C11EE138__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NPC_Data", Tooltip, OverrideNativeName="NPC_Data_9_C9B061CA4A1F177793C596AD61E3D3C6"))
	TMap<FString,FS_NPCData__pf1287104126> bpv__NPC_Data_9_C9B061CA4A1F177793C596AD61E3D3C6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ObjectData", Tooltip, OverrideNativeName="ObjectData_12_712141D84238B11E68ED5CA2E333EC4D"))
	TMap<FString,FS_ObjectData__pf1287104126> bpv__ObjectData_12_712141D84238B11E68ED5CA2E333EC4D__pf;
	FS_GameplayData__pf1287104126();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_GameplayData__pf1287104126& __Other) const
	{
		return FS_GameplayData__pf1287104126::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
