#pragma once
#include "Engine.h"
#include "AnimationRuntime.h"
#include "EdGraph/EdGraph.h"
#include "CreatureTransitionCondition.h"
#include "CreatureAnimStateMachine.generated.h"

UCLASS(Blueprintable)
class CREATUREPLUGIN_API UCreatureAnimStateMachine :
	public UObject
{
	GENERATED_BODY()
		UCreatureAnimStateMachine();
public:
	UPROPERTY(EditAnywhere, Category = "CreatureAnimStateMachine")
		FString Name;

	UPROPERTY()
	UEdGraph* StateMachineGraph=nullptr;

	TArray<FCreatureTransitionCondition> TransitionConditionList;

	UCreatureAnimState* CurrentState;
	//���ڵ㣬���ڴӸ�State��ʼ����״̬ת��
	UPROPERTY()
		UCreatureAnimState* RootState;

	

public:
	UFUNCTION(BlueprintCallable, Category = "Creature")
		void SetCondition(FString ConditionName, bool Flag);
	//��ʼ��״̬��������Ĭ�ϸ��ڵ㶯��
	void InitStateMachine();
};

