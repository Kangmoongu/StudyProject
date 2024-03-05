// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/SGameInstance.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SUnrealObjectClass.h"
#include "Examples/SFlyable.h"
#include "Examples/SPigeon.h"

USGameInstance::USGameInstance()
{
	UE_LOG(LogTemp,Log,TEXT("USGameInstance() has been called."));

	Name = TEXT("USGameInstance Class Default Object");
}

void USGameInstance::Init()
{
    Super::Init();

    TMap<int32, FString> BirdMap;
    BirdMap.Add(5, TEXT("Pigeon"));
    BirdMap.Add(2, TEXT("Owl"));
    BirdMap.Add(7, TEXT("Albatross"));
    // BirdMap == [
    //  { Key: 5, Value: "Pigeon"     },
    //  { Key: 2, Value: "Owl"        },
    //  { Key: 7, Value: "Albatross"  }
    // ]

    BirdMap.Add(2, TEXT("Penquin"));
    // BirdMap == [
    //  { Key: 5, Value: "Pigeon"     },
    //  { Key: 2, Value: "Penquin"    },
    //  { Key: 7, Value: "Albatross"  }
    // ]

    FString* BirdIn7 = BirdMap.Find(7);
    // *BirdIn7 == "Albatross"
    FString* BirdIn8 = BirdMap.Find(8);
    // *BirdIn8 == nullptr
}

void USGameInstance::Shutdown()
{
	Super::Shutdown();
	UE_LOG(LogTemp, Log, TEXT("Shutdown() has been called."));
}
