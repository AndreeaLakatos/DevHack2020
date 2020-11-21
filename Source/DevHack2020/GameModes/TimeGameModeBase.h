// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DevHack2020GameModeBase.h"
#include "TimeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEVHACK2020_API ATimeGameModeBase : public ADevHack2020GameModeBase
{
	GENERATED_BODY()
	
public:
	void playerBonus() override {
		seconds += 3;
	}

	int getGameModeValue() override {
		return seconds;
	}


protected:
	virtual void Tick(float deltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float seconds = 30;
};
