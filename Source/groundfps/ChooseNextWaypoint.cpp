// Fill out your copyright notice in the Description page of Project Settings.
#include "groundfps.h"
#include "ChooseNextWaypoint.h"


 EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	UE_LOG(LogTemp, Warning, TEXT("AI in c++ -yay"));
	 return EBTNodeResult::Succeeded;


}