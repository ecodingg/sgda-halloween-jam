// Fill out your copyright notice in the Description page of Project Settings.


#include "FourDigitCode.h"

// Sets default values for this component's properties
UFourDigitCode::UFourDigitCode()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
    
    bool solved = false;
    
    
	
}


// Called when the game starts
void UFourDigitCode::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFourDigitCode::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//Check whether or not the puzzle has been solved
bool status()
{
    return solved;
}

