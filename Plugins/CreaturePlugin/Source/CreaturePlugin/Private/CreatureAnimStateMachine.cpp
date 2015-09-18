#include "CustomProceduralMesh.h"
#include "CreatureAnimStateMachine.h"
#include "CreatureAnimTransition.h"
#include "EdGraph/EdGraphSchema.h"
UCreatureAnimStateMachine::UCreatureAnimStateMachine(){
	//StateMachineGraph = NewObject<UCreatureStateMachineGraph>(UCreatureStateMachineGraph::StaticClass());

}

void UCreatureAnimStateMachine::SetCondition(FString ConditionName, bool Flag)
{
	//����״̬

	for (int i = 0; i < TransitionConditionList.Num();i++)
	{
		if (TransitionConditionList[i].TransitionName == ConditionName)
		{
			TransitionConditionList[i].TransitionFlag = Flag;
		}
	}
	//�ж��Ƿ���Ҫת��
	CurrentState->CheckCondition();
}

void UCreatureAnimStateMachine::InitStateMachine()
{
	if (CurrentState != nullptr&&CurrentState != RootState->TransitionList[0]->TargetState)
	{
		CurrentState->bIsCurrentState = false;//���ó�ʼ�ڵ�״̬������Debug
	}
	//��ʱʹ�ã�ֱ�ӴӸ��ڵ�������һ���ڵ�
	CurrentState = RootState->TransitionList[0]->TargetState;
	CurrentState->bIsCurrentState = true;
	CurrentState->BeginState();
}

