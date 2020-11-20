// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEVHACK2020_API UTimerComponent : public UActorComponent {
	GENERATED_BODY()
		
private: 
	/* Handle to manage the timer */
	FTimerHandle FuzeTimerHandle;

	
public:
	DECLARE_DELEGATE(FCompletionDelegate)
	FCompletionDelegate completionDelegate;

public:	
	// Sets default values for this component's properties
	UTimerComponent();

	
public: 
	void startTimer(float time);

private:
	UFUNCTION()
		void OnComplete();
protected:

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

		
};
