#include "NativizedAssets.h"
#include "S_NPCData__pf1287104126.h"
#include "BP_MasterNPC__pf1795093217.h"
#include "BP_RespawnActor__pf435599852.h"
#include "BP_MasterQuest__pf3622441537.h"
#include "BP_AI_ver1__pf4158769763.h"
#include "S_PlayerSpeech__pf1795093217.h"
#include "S_NpcSpeech__pf1795093217.h"
FS_NPCData__pf1287104126::FS_NPCData__pf1287104126()
{
	bpv__LocaionNPC_8_D5F28F8044B91AB97A24A5B89E31C4DC__pf = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bpv__ActorClass_51_16B367B54755AB7B8D27F19A29D25779__pf = nullptr;
	bpv__Can_Speakx_19_C5F329AE48C679C93DBB068EBF7228AD__pfzy = false;
	bpv__IsQuestGiverx_25_E4E5DC7B45A8A1D4451D9C8B5F7743C5__pfzy = false;
	bpv__IsQuestNPCtoTALKx_34_28CDE771401F6E8C63F98592DF82DC25__pfzy = false;
	bpv__NumberForGiveQuest_30_DFF23CB24E23D636FBFAC5AEBF728247__pf = 0;
	bpv__RespawnActor_38_CDF1372541EAAB2F21DAABB2F56F64BE__pf = nullptr;
	bpv__HasQuest_41_96F2950D4AE13881FF6BCEA127466DF5__pf = nullptr;
	bpv__CurrentHealth_46_93C0FE86402E2A48DB2F059BD71B513A__pf = 0;
	bpv__MaxHealth_47_99BC271047542019EBD03EA9FABA666D__pf = 0;
}
PRAGMA_DISABLE_OPTIMIZATION
void FS_NPCData__pf1287104126::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.FormatArgumentData 
		{11, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.PanelSlot 
		{12, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EFormatArgumentType 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ETextGender 
		{15, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{16, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{18, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{19, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.VerticalBox 
		{20, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.PanelWidget 
		{0, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.BP_InteractiveObj_C 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  BP_InteractiveObj_C /Game/Blueprint/Props/Blueprints/BP_InteractiveObj.Default__BP_InteractiveObj_C 
		{21, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{22, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/Btn1.Btn1 
		{23, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/Btn1Click.Btn1Click 
		{24, FBlueprintDependencyType(false, true, false, false)},  //  Font /Game/QuestSystem/Fonts/georgia_Font.georgia_Font 
		{25, FBlueprintDependencyType(false, true, false, false)},  //  Font /Game/QuestSystem/Fonts/estre_Font.estre_Font 
		{26, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{27, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{28, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{29, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{30, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{31, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESlateColorStylingMode 
		{32, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Button 
		{33, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{34, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{35, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{36, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/FPWeapon/Mesh/SK_FPGun.SK_FPGun 
		{37, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SphereComponent 
		{38, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavModifierComponent 
		{40, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CameraComponent 
		{41, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{42, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{43, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Minimap/BP_MapCapture.BP_MapCapture_C 
		{44, FBlueprintDependencyType(false, true, false, false)},  //  BP_MapCapture_C /Game/Minimap/BP_MapCapture.Default__BP_MapCapture_C 
		{45, FBlueprintDependencyType(false, true, false, false)},  //  TextureRenderTarget2D /Game/Minimap/MapRender.MapRender 
		{46, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Paper2D.PaperSpriteComponent 
		{47, FBlueprintDependencyType(false, true, false, false)},  //  PaperSprite /Game/Minimap/PlayerIcon_Sprite.PlayerIcon_Sprite 
		{48, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/UMG.EUMGSequencePlayMode 
		{49, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{50, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameInstance 
		{51, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Interfaces/BPI_SaveLoad.BPI_SaveLoad_C 
		{52, FBlueprintDependencyType(false, true, false, false)},  //  BPI_SaveLoad_C /Game/Blueprint/Interfaces/BPI_SaveLoad.Default__BPI_SaveLoad_C 
		{53, FBlueprintDependencyType(false, true, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{54, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{55, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerController 
		{56, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{57, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{58, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/Interfaces/BPI_Interaction.BPI_Interaction_C 
		{60, FBlueprintDependencyType(false, true, false, false)},  //  BPI_Interaction_C /Game/Blueprint/Props/Interfaces/BPI_Interaction.Default__BPI_Interaction_C 
		{61, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/DialogueSystem/BPI_DialogueInterface4GG.BPI_DialogueInterface4GG_C 
		{62, FBlueprintDependencyType(false, true, false, false)},  //  BPI_DialogueInterface4GG_C /Game/DialogueSystem/BPI_DialogueInterface4GG.Default__BPI_DialogueInterface4GG_C 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DecalComponent 
		{64, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{65, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.DamageType 
		{66, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Controller 
		{67, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BoxComponent 
		{68, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{69, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Character 
		{70, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Widget 
		{71, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{72, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/UI/M_Spray_paint.M_Spray_paint 
		{73, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{74, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{75, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{76, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.ProgressBar 
		{77, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/BP_ShakeCamera.BP_ShakeCamera_C 
		{78, FBlueprintDependencyType(false, true, false, false)},  //  BP_ShakeCamera_C /Game/FirstPersonBP/Blueprints/BP_ShakeCamera.Default__BP_ShakeCamera_C 
		{79, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/InputCore.ETouchIndex 
		{80, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/SaveSystem/BP_SaveGame.BP_SaveGame_C 
		{81, FBlueprintDependencyType(false, true, false, false)},  //  BP_SaveGame_C /Game/SaveSystem/BP_SaveGame.Default__BP_SaveGame_C 
		{82, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{83, FBlueprintDependencyType(false, true, false, false)},  //  AnimBlueprintGeneratedClass /Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C 
		{84, FBlueprintDependencyType(false, true, false, false)},  //  ThirdPerson_AnimBP_C /Game/Mannequin/Animations/ThirdPerson_AnimBP.Default__ThirdPerson_AnimBP_C 
		{85, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin 
		{86, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIController 
		{87, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanel 
		{88, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/DialogueSystem/BPI_InitDialogue.BPI_InitDialogue_C 
		{89, FBlueprintDependencyType(false, true, false, false)},  //  BPI_InitDialogue_C /Game/DialogueSystem/BPI_InitDialogue.Default__BPI_InitDialogue_C 
		{90, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{91, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/DialogueSystem/W_Phrase.W_Phrase_C 
		{92, FBlueprintDependencyType(false, true, false, false)},  //  W_Phrase_C /Game/DialogueSystem/W_Phrase.Default__W_Phrase_C 
		{93, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UniformGridSlot 
		{94, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UniformGridPanel 
		{95, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetLayoutLibrary 
		{96, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{97, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/DialogueSystem/W_AnswerNPC_BP_AI_ver_1.W_AnswerNPC_BP_AI_ver_1_C 
		{98, FBlueprintDependencyType(false, true, false, false)},  //  W_AnswerNPC_BP_AI_ver_1_C /Game/DialogueSystem/W_AnswerNPC_BP_AI_ver_1.Default__W_AnswerNPC_BP_AI_ver_1_C 
		{99, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{100, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/QuestSystem/Widgets/W_InteractWidget.W_InteractWidget_C 
		{101, FBlueprintDependencyType(false, true, false, false)},  //  W_InteractWidget_C /Game/QuestSystem/Widgets/W_InteractWidget.Default__W_InteractWidget_C 
		{102, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{103, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{104, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{105, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{106, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{107, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{108, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Interfaces/BPI_SaveLoadNPC.BPI_SaveLoadNPC_C 
		{109, FBlueprintDependencyType(false, true, false, false)},  //  BPI_SaveLoadNPC_C /Game/Blueprint/Interfaces/BPI_SaveLoadNPC.Default__BPI_SaveLoadNPC_C 
		{110, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/Characters/GGtest/Ch31_nonPBR.Ch31_nonPBR 
		{111, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{112, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/QuestActors/BP_GoalActor.BP_GoalActor_C 
		{113, FBlueprintDependencyType(false, true, false, false)},  //  BP_GoalActor_C /Game/Blueprint/QuestActors/BP_GoalActor.Default__BP_GoalActor_C 
		{114, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/QuestSystem/Widgets/W_MiniMap.W_MiniMap_C 
		{115, FBlueprintDependencyType(false, true, false, false)},  //  W_MiniMap_C /Game/QuestSystem/Widgets/W_MiniMap.Default__W_MiniMap_C 
		{116, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{117, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Border 
		{118, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Blueprint/Props/Texture/T_icon_plane.T_icon_plane 
		{119, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Textures/DistanceBorder.DistanceBorder 
		{120, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Textures/StepsIcon.StepsIcon 
		{121, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CanvasPanelSlot 
		{122, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.SizeBox 
		{123, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.ScrollBoxSlot 
		{124, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{125, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/background.background 
		{126, FBlueprintDependencyType(false, true, false, false)},  //  Font /Game/QuestSystem/Fonts/Georgia_Italic_Font.Georgia_Italic_Font 
		{127, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/LevelBorder.LevelBorder 
		{128, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/Spacer.Spacer 
		{129, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/expIcon.expIcon 
		{130, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/ppIcon.ppIcon 
		{131, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/BtnSelecty.BtnSelecty 
		{132, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/QuestSystem/Textures/BtnSelecty2.BtnSelecty2 
		{133, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.ScrollBox 
		{134, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/QuestSystem/Widgets/W_QuestCategory.W_QuestCategory_C 
		{135, FBlueprintDependencyType(false, true, false, false)},  //  W_QuestCategory_C /Game/QuestSystem/Widgets/W_QuestCategory.Default__W_QuestCategory_C 
		{136, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.HorizontalBox 
		{137, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/QuestSystem/Widgets/W_GoalEntry.W_GoalEntry_C 
		{138, FBlueprintDependencyType(false, true, false, false)},  //  W_GoalEntry_C /Game/QuestSystem/Widgets/W_GoalEntry.Default__W_GoalEntry_C 
		{139, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.VerticalBoxSlot 
		{140, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Minimap/TextBorder.TextBorder 
		{141, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Blueprint/Props/Texture/T_icon_rock.T_icon_rock 
		{142, FBlueprintDependencyType(false, true, false, false)},  //  BP_GymObject1_C /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject1.Default__BP_GymObject1_C 
		{143, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprint/MainMenu/Widgets/W_MainMenu.W_MainMenu_C 
		{144, FBlueprintDependencyType(false, true, false, false)},  //  W_MainMenu_C /Game/Blueprint/MainMenu/Widgets/W_MainMenu.Default__W_MainMenu_C 
		{145, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprint/MainMenu/Widgets/W_LoadingScreen.W_LoadingScreen_C 
		{146, FBlueprintDependencyType(false, true, false, false)},  //  W_LoadingScreen_C /Game/Blueprint/MainMenu/Widgets/W_LoadingScreen.Default__W_LoadingScreen_C 
		{147, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SaveGame 
		{148, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BlueprintMapLibrary 
		{149, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{150, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{151, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_SecondActivity2State.BP_SecondActivity2State_C 
		{152, FBlueprintDependencyType(false, true, false, false)},  //  BP_SecondActivity2State_C /Game/Blueprint/NoMovableObjects/BP_SecondActivity2State.Default__BP_SecondActivity2State_C 
		{153, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_BrokenCar.BP_BrokenCar_C 
		{154, FBlueprintDependencyType(false, true, false, false)},  //  BP_BrokenCar_C /Game/Blueprint/NoMovableObjects/BP_BrokenCar.Default__BP_BrokenCar_C 
		{155, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject3.BP_GymObject3_C 
		{156, FBlueprintDependencyType(false, true, false, false)},  //  BP_GymObject3_C /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject3.Default__BP_GymObject3_C 
		{157, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject2.BP_GymObject2_C 
		{158, FBlueprintDependencyType(false, true, false, false)},  //  BP_GymObject2_C /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject2.Default__BP_GymObject2_C 
		{159, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/GymObjects/BP_GymObject1.BP_GymObject1_C 
		{160, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIPerceptionComponent 
		{161, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AISense_Sight 
		{162, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AISense_Hearing 
		{163, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{164, FBlueprintDependencyType(false, true, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{165, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{166, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/AIModule.ActorPerceptionUpdateInfo 
		{167, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_Home.BP_Home_C 
		{168, FBlueprintDependencyType(false, true, false, false)},  //  BP_Home_C /Game/Blueprint/Props/CriticalPoints/BP_Home.Default__BP_Home_C 
		{169, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{170, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/AIModule.AIStimulus 
		{171, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/AI_With_Markovs_chain/Version1/BP_Cashier.BP_Cashier_C 
		{172, FBlueprintDependencyType(false, true, false, false)},  //  BP_Cashier_C /Game/Blueprint/AI_With_Markovs_chain/Version1/BP_Cashier.Default__BP_Cashier_C 
		{173, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Pawn 
		{174, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_3Activity3State.BP_3Activity3State_C 
		{175, FBlueprintDependencyType(false, true, false, false)},  //  BP_3Activity3State_C /Game/Blueprint/NoMovableObjects/BP_3Activity3State.Default__BP_3Activity3State_C 
		{176, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_2Activity3State.BP_2Activity3State_C 
		{177, FBlueprintDependencyType(false, true, false, false)},  //  BP_2Activity3State_C /Game/Blueprint/NoMovableObjects/BP_2Activity3State.Default__BP_2Activity3State_C 
		{178, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_1Activity3State.BP_1Activity3State_C 
		{179, FBlueprintDependencyType(false, true, false, false)},  //  BP_1Activity3State_C /Game/Blueprint/NoMovableObjects/BP_1Activity3State.Default__BP_1Activity3State_C 
		{180, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/NoMovableObjects/BP_ThirdActivity2State.BP_ThirdActivity2State_C 
		{181, FBlueprintDependencyType(false, true, false, false)},  //  BP_ThirdActivity2State_C /Game/Blueprint/NoMovableObjects/BP_ThirdActivity2State.Default__BP_ThirdActivity2State_C 
		{182, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WalkingThirdPoint.BP_WalkingThirdPoint_C 
		{183, FBlueprintDependencyType(false, true, false, false)},  //  BP_WalkingThirdPoint_C /Game/Blueprint/Props/CriticalPoints/BP_WalkingThirdPoint.Default__BP_WalkingThirdPoint_C 
		{184, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WalkingSecondPoint.BP_WalkingSecondPoint_C 
		{185, FBlueprintDependencyType(false, true, false, false)},  //  BP_WalkingSecondPoint_C /Game/Blueprint/Props/CriticalPoints/BP_WalkingSecondPoint.Default__BP_WalkingSecondPoint_C 
		{186, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WalkingFirstPoint.BP_WalkingFirstPoint_C 
		{187, FBlueprintDependencyType(false, true, false, false)},  //  BP_WalkingFirstPoint_C /Game/Blueprint/Props/CriticalPoints/BP_WalkingFirstPoint.Default__BP_WalkingFirstPoint_C 
		{188, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation3.BP_WorkLocation3_C 
		{189, FBlueprintDependencyType(false, true, false, false)},  //  BP_WorkLocation3_C /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation3.Default__BP_WorkLocation3_C 
		{190, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation2.BP_WorkLocation2_C 
		{191, FBlueprintDependencyType(false, true, false, false)},  //  BP_WorkLocation2_C /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation2.Default__BP_WorkLocation2_C 
		{192, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation.BP_WorkLocation_C 
		{193, FBlueprintDependencyType(false, true, false, false)},  //  BP_WorkLocation_C /Game/Blueprint/Props/CriticalPoints/BP_WorkLocation.Default__BP_WorkLocation_C 
		{194, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/LevelBP/I_Weather.I_Weather_C 
		{195, FBlueprintDependencyType(false, true, false, false)},  //  I_Weather_C /Game/Blueprint/LevelBP/I_Weather.Default__I_Weather_C 
		{196, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Interfaces/BPI_CheckTime.BPI_CheckTime_C 
		{197, FBlueprintDependencyType(false, true, false, false)},  //  BPI_CheckTime_C /Game/Blueprint/Interfaces/BPI_CheckTime.Default__BPI_CheckTime_C 
		{198, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Interfaces/BPI_InteractionForDialogue.BPI_InteractionForDialogue_C 
		{199, FBlueprintDependencyType(false, true, false, false)},  //  BPI_InteractionForDialogue_C /Game/Blueprint/Interfaces/BPI_InteractionForDialogue.Default__BPI_InteractionForDialogue_C 
		{200, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{201, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateSound 
		{202, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIPerceptionStimuliSourceComponent 
		{203, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/StarterContent/Props/Materials/M_Lamp.M_Lamp 
		{204, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/Interfaces/I_IsMovable.I_IsMovable_C 
		{205, FBlueprintDependencyType(false, true, false, false)},  //  I_IsMovable_C /Game/Blueprint/Interfaces/I_IsMovable.Default__I_IsMovable_C 
		{206, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/Characters/GGtest/Ch31_body.Ch31_body 
		{207, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.InputActionKeyMapping 
		{208, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetInputLibrary 
		{209, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.EditableTextBox 
		{210, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EWindowMode 
		{211, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ECheckBoxState 
		{212, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprint/MainMenu/Widgets/W_KeyBindings.W_KeyBindings_C 
		{213, FBlueprintDependencyType(false, true, false, false)},  //  W_KeyBindings_C /Game/Blueprint/MainMenu/Widgets/W_KeyBindings.Default__W_KeyBindings_C 
		{214, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{215, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESelectInfo 
		{216, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.ComboBoxString 
		{217, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.CheckBox 
		{218, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Slider 
		{219, FBlueprintDependencyType(false, true, false, false)},  //  W_ExitInMainMenu_C /Game/Blueprint/MainMenu/Widgets/W_ExitInMainMenu.Default__W_ExitInMainMenu_C 
		{220, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{221, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.KeyEvent 
		{222, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/UMG.EventReply 
		{223, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.InputSettings 
		{224, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprint/MainMenu/Widgets/W_ExitInMainMenu.W_ExitInMainMenu_C 
		{225, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/Iconplayer.Iconplayer 
		{226, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.ButtonStyle 
		{227, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{228, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{229, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{230, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{231, FBlueprintDependencyType(false, true, false, false)},  //  WidgetBlueprintGeneratedClass /Game/InventorySystem/Widgets/W_TextItemNotDrop.W_TextItemNotDrop_C 
		{232, FBlueprintDependencyType(false, true, false, false)},  //  W_TextItemNotDrop_C /Game/InventorySystem/Widgets/W_TextItemNotDrop.Default__W_TextItemNotDrop_C 
		{233, FBlueprintDependencyType(false, true, false, false)},  //  DelegateFunction /Script/UMG.OnInputAction__DelegateSignature 
		{240, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/AI_With_Markovs_chain/BP_MasterNPC.BP_MasterNPC_C 
		{239, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/AI_With_Markovs_chain/Version1/BP_AI_ver1.BP_AI_ver1_C 
		{241, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/QuestSystem/Actors/BP_RespawnActor.BP_RespawnActor_C 
		{234, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprint/QuestActors/BP_MasterQuest.BP_MasterQuest_C 
		{242, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Blueprint/Interfaces/S_ListOfBP_AI_VER1.S_ListOfBP_AI_VER1 
		{243, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Blueprint/AI_With_Markovs_chain/S_DialogueTamlate.S_DialogueTamlate 
		{237, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedStruct /Game/Blueprint/AI_With_Markovs_chain/S_PlayerSpeech.S_PlayerSpeech 
		{238, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedStruct /Game/Blueprint/AI_With_Markovs_chain/S_NpcSpeech.S_NpcSpeech 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FS_NPCData__pf1287104126
{
	FRegisterHelper__FS_NPCData__pf1287104126()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/SaveSystem/S_NPCData"), &FS_NPCData__pf1287104126::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FS_NPCData__pf1287104126 Instance;
};
FRegisterHelper__FS_NPCData__pf1287104126 FRegisterHelper__FS_NPCData__pf1287104126::Instance;