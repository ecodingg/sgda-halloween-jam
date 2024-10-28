// Fill out your copyright notice in the Description page of Project Settings.


#include "Cam_Player.h"

// Sets default values
ACam_Player::ACam_Player()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// default values
	bIsActive = true;

}

bool ACam_Player::IsPickupActive() const
{
	return bIsActive;
}

void ACam_Player::SetPickupActive(bool NewActiveState)
{
	bIsActive = NewActiveState;
}

// Called when the game starts or when spawned
void ACam_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACam_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

