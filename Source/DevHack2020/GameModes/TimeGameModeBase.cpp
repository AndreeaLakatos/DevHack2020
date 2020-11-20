// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeGameModeBase.h"

void ATimeGameModeBase::Tick(float deltaTime) {
	Super::Tick(deltaTime);

	seconds -= deltaTime;

	if (seconds < 0) {
		//TODO
	}
}
