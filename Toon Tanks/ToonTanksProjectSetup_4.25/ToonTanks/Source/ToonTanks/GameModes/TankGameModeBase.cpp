// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"


void ATankGameModeBase::BeginPlay() 
{
    // Get references and game win/lose conditions.

    // Call HandleGameStart() to initialize the start conditiuon, turret activation, pawen check etc.
}

void ATankGameModeBase::ActorDied(AActor* DeadActor) 
{
    // Check what type of Actor died. If turret, tally. If Player -> go to lose condition
}

void ATankGameModeBase::HandleGameStart() 
{
    //Initilise the start countdown, turret activation, panwn check etc.
    // Call Blueprint version GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon) 
{
    // See if the player has destroyed all the turrets, show win result.
    // else if turret destroyed playert, show lose result.
    // Call blueprint version GameOver(bool)
}


