// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryComponent.h"

// returns the amount taken
int32 UInventoryComponent::Add(FName ItemName, int32 Count)
{
	int32* Countptr = MapInventory.Find(ItemName);

	if (Countptr) 
	{
		int32 Count = *Countptr;
		Count++;
	}
	else 
	{
		MapInventory.Add(ItemName, Count);
	}
	return int32();
}

// returns the number of items removed
int32 UInventoryComponent::Remove(FName ItemName, int32 Count)
{
	int32* Countptr = MapInventory.Find(ItemName);

	if (Countptr)
	{
		int32 Count = *Countptr;
		Count--;
		if (Count == 0)
		{
			MapInventory.Remove(ItemName);
		}
	}
	else
	{
		MapInventory.Remove(ItemName);
	}
	return int32();
}

// returns if the inventory is completely full
bool UInventoryComponent::IsFull() const
{
	return false;
}

// returns if the inventory is empty
bool UInventoryComponent::IsEmpty() const
{
	return false;
}

// returns if inventory holds this item
bool UInventoryComponent::HasItem(FName ItemName) const
{
	//int32* Itemptr = MapInventory.Find(ItemName);
	//
	//if(Itemptr)
	//{
	//	return true;
	//}
	//return false;
}

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

