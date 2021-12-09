// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MediaPipePipelineComponent.h"
#include "MediaPipeLandmarkObserverComponent.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Hand_Tracking.generated.h"


//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
UCLASS(ClassGroup = "MediaPipe")
class VIREARTHAR_API UHand_Tracking : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHand_Tracking();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY()
		USceneComponent* Root = nullptr;

	UPROPERTY()
		UMediaPipePipelineComponent* Pipeline = nullptr;

	UPROPERTY()
		UMediaPipeLandmarkObserverComponent* Observer = nullptr;

	UFUNCTION(BlueprintCallable, Category = "MyMediaPipe")
		int32 GetFingers();
private:
	int tipIds[5] = { 4, 8, 12, 16, 20 };
		
};
