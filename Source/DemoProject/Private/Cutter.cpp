// Fill out your copyright notice in the Description page of Project Settings.


#include "Cutter.h"


// Sets default values
ACutter::ACutter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACutter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACutter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

