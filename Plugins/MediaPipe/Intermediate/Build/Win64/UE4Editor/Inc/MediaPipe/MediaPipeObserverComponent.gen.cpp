// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPipe/Public/MediaPipeObserverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPipeObserverComponent() {}
// Cross Module References
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MediaPipe();
// End Cross Module References
	DEFINE_FUNCTION(UMediaPipeObserverComponent::execHaveDetections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveDetections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeObserverComponent::execGetNumDetections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumDetections();
		P_NATIVE_END;
	}
	void UMediaPipeObserverComponent::StaticRegisterNativesUMediaPipeObserverComponent()
	{
		UClass* Class = UMediaPipeObserverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumDetections", &UMediaPipeObserverComponent::execGetNumDetections },
			{ "HaveDetections", &UMediaPipeObserverComponent::execHaveDetections },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics
	{
		struct MediaPipeObserverComponent_eventGetNumDetections_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeObserverComponent_eventGetNumDetections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeObserverComponent, nullptr, "GetNumDetections", nullptr, nullptr, sizeof(MediaPipeObserverComponent_eventGetNumDetections_Parms), Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics
	{
		struct MediaPipeObserverComponent_eventHaveDetections_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeObserverComponent_eventHaveDetections_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeObserverComponent_eventHaveDetections_Parms), &Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeObserverComponent, nullptr, "HaveDetections", nullptr, nullptr, sizeof(MediaPipeObserverComponent_eventHaveDetections_Parms), Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister()
	{
		return UMediaPipeObserverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPipeObserverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipelineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PipelineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAutoBind_MetaData[];
#endif
		static void NewProp_bAllowAutoBind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAutoBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPipeObserverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPipeObserverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPipeObserverComponent_GetNumDetections, "GetNumDetections" }, // 1762417885
		{ &Z_Construct_UFunction_UMediaPipeObserverComponent_HaveDetections, "HaveDetections" }, // 51591973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeObserverComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MediaPipeObserverComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_PipelineName_MetaData[] = {
		{ "Category", "MediaPipe|Observer" },
		{ "Comment", "// Config\n" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_PipelineName = { "PipelineName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeObserverComponent, PipelineName), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_PipelineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_PipelineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_StreamName_MetaData[] = {
		{ "Category", "MediaPipe|Observer" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeObserverComponent, StreamName), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_StreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_StreamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind_MetaData[] = {
		{ "Category", "MediaPipe|Observer" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind_SetBit(void* Obj)
	{
		((UMediaPipeObserverComponent*)Obj)->bAllowAutoBind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind = { "bAllowAutoBind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaPipeObserverComponent), &Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_LastUpdate_MetaData[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Runtime\n" },
		{ "ModuleRelativePath", "Public/MediaPipeObserverComponent.h" },
		{ "ToolTip", "Runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_LastUpdate = { "LastUpdate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeObserverComponent, LastUpdate), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_LastUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_LastUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPipeObserverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_PipelineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_bAllowAutoBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeObserverComponent_Statics::NewProp_LastUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPipeObserverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPipeObserverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPipeObserverComponent_Statics::ClassParams = {
		&UMediaPipeObserverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPipeObserverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeObserverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPipeObserverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPipeObserverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPipeObserverComponent, 2056355131);
	template<> MEDIAPIPE_API UClass* StaticClass<UMediaPipeObserverComponent>()
	{
		return UMediaPipeObserverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPipeObserverComponent(Z_Construct_UClass_UMediaPipeObserverComponent, &UMediaPipeObserverComponent::StaticClass, TEXT("/Script/MediaPipe"), TEXT("UMediaPipeObserverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPipeObserverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
