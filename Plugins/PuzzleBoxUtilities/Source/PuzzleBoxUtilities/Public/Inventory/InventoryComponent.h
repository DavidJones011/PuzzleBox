// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUZZLEBOXUTILITIES_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	TMap <FName,int32> MapInventory;
	int32 Add(FName ItemName, int32 Count);   
	int32 Remove(FName ItemName, int32 Count);
	bool IsFull() const;                      
	bool IsEmpty() const;                     
	bool HasItem(FName ItemName) const;       

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
