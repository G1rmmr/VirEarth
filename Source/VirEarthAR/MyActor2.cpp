// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor2.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMyActor2::AMyActor2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	Pipeline = CreateDefaultSubobject<UMediaPipePipelineComponent>(TEXT("Pipeline"));
	Observer = CreateDefaultSubobject<UMediaPipeLandmarkObserverComponent>(TEXT("Observer"));

	Pipeline->PipelineName = TEXT("pipe0");
	Pipeline->GraphNodes.Add(TEXT("multi_hand_landmarks"));
	//Pipeline->GraphNodes.Add(TEXT(""));

	Observer->PipelineName = TEXT("pipe0");
	//Observer->StreamName = TEXT("pose_world_landmarks");
	Observer->StreamName = TEXT("multi_hand_landmarks");

	Observer->LandmarkListType = EMediaPipeLandmarkListType::MultiNormalizedLandmarkList;
	Observer->AxisX = EMediaPipeLandmarkAxisMapping::Z;
	Observer->AxisY = EMediaPipeLandmarkAxisMapping::X;
	Observer->AxisZ = EMediaPipeLandmarkAxisMapping::NegY;
	Observer->WorldScale = FVector(100, 100, 100);
	Observer->MinVisibility = -1.0;
	Observer->MinPresence = -1.0;

	Pipeline->AddObserver(Observer);
}

void AMyActor2::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	RegisterAllComponents();
}


// Called when the game starts or when spawned
void AMyActor2::BeginPlay()
{
	Super::BeginPlay();
	Pipeline->Start();
}

void AMyActor2::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Pipeline->Stop();
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AMyActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	////UE_LOG(LogTemp, Log, TEXT("In tick"));
	////Super::Tick(DeltaTime);
	//if (Observer)
	//	//UE_LOG(LogTemp, Log, TEXT("Ok Observer"));
	//	int a = Observer->GetNumDetections();
	////UE_LOG(LogTemp, Log, TEXT("getnumde = %d"), a);
	//if (Observer && Observer->GetNumDetections() == 1) {
	//	//UE_LOG(LogTemp, Log, TEXT("In first if"));
	//	int ObjectId = 0;
	//	const auto& Landmarks = Observer->GetLandmarkList(ObjectId);
	//	const int Count = Landmarks.Num();
	//	int32 b;
	//	for (b = 0; b < Landmarks.Num(); b++)
	//	{
	//	}
	//	//UE_LOG(LogTemp, Log, TEXT("B = %d"), b);

	//	// +++ 1123 finger counting
	//	int id;
	//	int fingers[5];
	//	float x, y;

	//	// unreal y : x
	//	// unreal z : y
	//	// Thumb
	//	id = tipIds[0];
	//	x = Landmarks[id].Pos.Y;	// x
	//	y = Landmarks[id - 1].Pos.Y; // y
	//	fingers[0] = (x < y) ? 1 : 0;
	//	UE_LOG(LogTemp, Log, TEXT("[0] : %d"), fingers[0]);
	//	// Other fingers
	//	for (int i = 1; i < 5; i++) {
	//		id = tipIds[i];
	//		x = Landmarks[id].Pos.Z;	// x
	//		y = Landmarks[id - 2].Pos.Z; // y
	//		fingers[i] = (x > y) ? 1 : 0;
	//		UE_LOG(LogTemp, Log, TEXT("[%d] : %d"), i, fingers[i]);
	//	}
	//	int count_fingers = 0;
	//	for (int i = 0; i < 5; i++) {
	//		if (fingers[i] == 1)
	//			count_fingers++;
	//	}
	//	UE_LOG(LogTemp, Log, TEXT("fngr_cnt : %d"), count_fingers);
	//	// 1123 finger counting +++

	//	for (int32 c = 0; c < Landmarks.Num(); c++) {
	//		//UE_LOG(LogTemp, Log, TEXT("[%d] : %s"), c, *Landmarks[c].Pos.ToString());

	//		//Landmarks[c].Pos.ToString()
	//	}
	//	if (Landmarks[0].Pos.Y > Landmarks[1].Pos.Y) {
	//		//UE_LOG(LogTemp, Log, TEXT("Right hand"));
	//	}
	//	else {
	//		//UE_LOG(LogTemp, Log, TEXT("Left hand"));
	//	}



	//	auto* World = GetWorld();
	//	auto Transform = GetActorTransform();

	//	for (int i = 0; i < Count; i++)
	//	{
	//		const auto& L = Landmarks[i];
	//		if ((L.Visibility > Observer->MinVisibility) && (L.Presence > Observer->MinPresence))
	//		{
	//			auto Pos = Transform.TransformPosition(L.Pos);
	//			DrawDebugPoint(World, Pos, 10.0f, FColor(255, 0, 0));
	//		}
	//	}
	//}
	///*if (Observer && Observer->HaveDetections())
	//{

	//	int ObjectId = 0;
	//	const auto& Landmarks = Observer->GetLandmarkList(ObjectId);
	//	const int Count = Landmarks.Num();
	//	int32 b;
	//	for (b = 0; b < Landmarks.Num(); b++)
	//	{
	//	}
	//	UE_LOG(LogTemp, Log, TEXT("B = %d"), b);
	//	auto* World = GetWorld();
	//	auto Transform = GetActorTransform();

	//	for (int i = 0; i < Count; i++)
	//	{
	//		const auto& L = Landmarks[i];
	//		if ((L.Visibility > Observer->MinVisibility) && (L.Presence > Observer->MinPresence))
	//		{
	//			auto Pos = Transform.TransformPosition(L.Pos);
	//			DrawDebugPoint(World, Pos, 10.0f, FColor(255, 0, 0));
	//		}
	//	}
	//}*/
}

int32 AMyActor2::MyFunction()
{
	int32 count_fingers = 0;
	UE_LOG(LogTemp, Log, TEXT("In tick"));
	//Super::Tick(DeltaTime);
	/*if (Observer)
		UE_LOG(LogTemp, Log, TEXT("Ok Observer"));*/
	int a = Observer->GetNumDetections();
	UE_LOG(LogTemp, Log, TEXT("getnumde = %d"), a);
	if (Observer && Observer->GetNumDetections() == 1) {
		UE_LOG(LogTemp, Log, TEXT("In first if"));
		int ObjectId = 0;
		const auto& Landmarks = Observer->GetLandmarkList(ObjectId);
		const int Count = Landmarks.Num();
		int32 b;
		for (b = 0; b < Landmarks.Num(); b++)
		{
		}
		//UE_LOG(LogTemp, Log, TEXT("B = %d"), b);

		// +++ 1123 finger counting
		int id;
		int fingers[5];
		float x, y;

		// unreal y : x
		// unreal z : y
		// Thumb
		id = tipIds[0];
		x = Landmarks[id].Pos.Y;	// x
		y = Landmarks[id - 1].Pos.Y; // y
		fingers[0] = (x < y) ? 1 : 0;
		UE_LOG(LogTemp, Log, TEXT("[0] : %d"), fingers[0]);
		// Other fingers
		for (int i = 1; i < 5; i++) {
			id = tipIds[i];
			x = Landmarks[id].Pos.Z;	// x
			y = Landmarks[id - 2].Pos.Z; // y
			fingers[i] = (x > y) ? 1 : 0;
			UE_LOG(LogTemp, Log, TEXT("[%d] : %d"), i, fingers[i]);
		}
		count_fingers = 0;
		for (int i = 0; i < 5; i++) {
			if (fingers[i] == 1)
				count_fingers++;
		}
		UE_LOG(LogTemp, Log, TEXT("fngr_cnt : %d"), count_fingers);
		// 1123 finger counting +++
		auto* World = GetWorld();
		auto Transform = GetActorTransform();

		for (int i = 0; i < Count; i++)
		{
			const auto& L = Landmarks[i];
			if ((L.Visibility > Observer->MinVisibility) && (L.Presence > Observer->MinPresence))
			{
				auto Pos = Transform.TransformPosition(L.Pos);
				DrawDebugPoint(World, Pos, 10.0f, FColor(255, 0, 0));
			}
		}

	}
	return count_fingers;
}

