// Fill out your copyright notice in the Description page of Project Settings.


#include "Cup.h"

// Sets default values
ACup::ACup() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	cupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cup Mesh"));
	SetRootComponent(cupMesh);
}

