// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MediaPipePipelineComponent.h"
#include "MediaPipeLandmarkObserverComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"

UCLASS(ClassGroup = "MediaPipe")
class VIREARTHAR_API AMyActor2 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor2();
	void OnConstruction(const FTransform& Transform) override;
	void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	void Tick(float DeltaSeconds) override;

	UPROPERTY()
		USceneComponent* Root = nullptr;

	UPROPERTY()
		UMediaPipePipelineComponent* Pipeline = nullptr;

	UPROPERTY()
		UMediaPipeLandmarkObserverComponent* Observer = nullptr;
	// +++ 1123 To make Function that finger counting and draw point
	UFUNCTION(BlueprintCallable, Category = "MyMediaPipe")
		int32 MyFunction();
	// 1123 To make Function that finger counting and draw point +++
private:
	int tipIds[5] = { 4, 8, 12, 16, 20 };
};
