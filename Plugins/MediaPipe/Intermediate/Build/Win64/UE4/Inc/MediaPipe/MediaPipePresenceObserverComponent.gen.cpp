// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPipe/Public/MediaPipePresenceObserverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPipePresenceObserverComponent() {}
// Cross Module References
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePresenceObserverComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePresenceObserverComponent();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent();
	UPackage* Z_Construct_UPackage__Script_MediaPipe();
// End Cross Module References
	void UMediaPipePresenceObserverComponent::StaticRegisterNativesUMediaPipePresenceObserverComponent()
	{
	}
	UClass* Z_Construct_UClass_UMediaPipePresenceObserverComponent_NoRegister()
	{
		return UMediaPipePresenceObserverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPresent_MetaData[];
#endif
		static void NewProp_bPresent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPresent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaPipeObserverComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MediaPipePresenceObserverComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPipePresenceObserverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent_MetaData[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipePresenceObserverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent_SetBit(void* Obj)
	{
		((UMediaPipePresenceObserverComponent*)Obj)->bPresent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent = { "bPresent", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaPipePresenceObserverComponent), &Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::NewProp_bPresent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPipePresenceObserverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::ClassParams = {
		&UMediaPipePresenceObserverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPipePresenceObserverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPipePresenceObserverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPipePresenceObserverComponent, 1815313393);
	template<> MEDIAPIPE_API UClass* StaticClass<UMediaPipePresenceObserverComponent>()
	{
		return UMediaPipePresenceObserverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPipePresenceObserverComponent(Z_Construct_UClass_UMediaPipePresenceObserverComponent, &UMediaPipePresenceObserverComponent::StaticClass, TEXT("/Script/MediaPipe"), TEXT("UMediaPipePresenceObserverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPipePresenceObserverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
