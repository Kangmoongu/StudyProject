// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SUnrealObjectClass.h"
#include "Examples/SFlyable.h"
#include "Examples/SPigeon.h"

USGameInstance::USGameInstance()
{
	Name = TEXT("USGameInstance Class Default Object");
}

void USGameInstance::Init()
{
    Super::Init();
}

void USGameInstance::Shutdown()
{
	Super::Shutdown();
}
