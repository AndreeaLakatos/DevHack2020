// Copyright Kat Code Labs SRL. All Rights Reserved.


#include "TimerComponent.h"

// Sets default values for this component's properties
UTimerComponent::UTimerComponent() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


void UTimerComponent::startTimer(float time) {
	GetWorld()->GetTimerManager().SetTimer(FuzeTimerHandle, this, &UTimerComponent::OnComplete, time, false);
}

void UTimerComponent::OnComplete() {
	completionDelegate.Execute();
}

void UTimerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	Super::EndPlay(EndPlayReason);

	// Ensure the fuze timer is cleared by using the timer handle
	GetWorld()->GetTimerManager().ClearTimer(FuzeTimerHandle);

}
