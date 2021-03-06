#include "CreatureEditorPCH.h"
#include "CreatureEditor.h"
#include "CreatureAnimStateMachineDetails.h"
#include "CreatureAnimStateMachineAssetTypeActions.h"
#define LOCTEXT_NAMESPACE "CreatureEditor"
void CreatureEditor::StartupModule()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	//Custom detail views
	PropertyModule.RegisterCustomClassLayout("CreatureAnimStateMachine", FOnGetDetailCustomizationInstance::CreateStatic(&FCreatureAnimStateMachineDetails::MakeInstance));
	
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type CreatureAnimAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CreatureAnimStateMachine")), LOCTEXT("CreatureAnimStateMachineAssetCategory", "CreatureAnimStateMachine"));
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FCreatureAnimStateMachineAssetTypeActions(CreatureAnimAssetCategoryBit)));
}

void CreatureEditor::ShutdownModule()
{
}

IMPLEMENT_MODULE(CreatureEditor, CreatureEditor)

#undef LOCTEXT_NAMESPACE