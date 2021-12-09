// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPipe/Public/MediaPipePipelineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPipePipelineComponent() {}
// Cross Module References
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePipelineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MediaPipe();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMediaPipePipelineComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipePipelineComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipePipelineComponent::execRemoveAllObservers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllObservers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipePipelineComponent::execRemoveObserver)
	{
		P_GET_OBJECT(UMediaPipeObserverComponent,Z_Param_Observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObserver(Z_Param_Observer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipePipelineComponent::execAddObserver)
	{
		P_GET_OBJECT(UMediaPipeObserverComponent,Z_Param_Observer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObserver(Z_Param_Observer);
		P_NATIVE_END;
	}
	void UMediaPipePipelineComponent::StaticRegisterNativesUMediaPipePipelineComponent()
	{
		UClass* Class = UMediaPipePipelineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObserver", &UMediaPipePipelineComponent::execAddObserver },
			{ "RemoveAllObservers", &UMediaPipePipelineComponent::execRemoveAllObservers },
			{ "RemoveObserver", &UMediaPipePipelineComponent::execRemoveObserver },
			{ "Start", &UMediaPipePipelineComponent::execStart },
			{ "Stop", &UMediaPipePipelineComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics
	{
		struct MediaPipePipelineComponent_eventAddObserver_Parms
		{
			UMediaPipeObserverComponent* Observer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::NewProp_Observer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipePipelineComponent_eventAddObserver_Parms, Observer), Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::NewProp_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Methods\n" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
		{ "ToolTip", "Methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipePipelineComponent, nullptr, "AddObserver", nullptr, nullptr, sizeof(MediaPipePipelineComponent_eventAddObserver_Parms), Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipePipelineComponent, nullptr, "RemoveAllObservers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics
	{
		struct MediaPipePipelineComponent_eventRemoveObserver_Parms
		{
			UMediaPipeObserverComponent* Observer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::NewProp_Observer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipePipelineComponent_eventRemoveObserver_Parms, Observer), Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::NewProp_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipePipelineComponent, nullptr, "RemoveObserver", nullptr, nullptr, sizeof(MediaPipePipelineComponent_eventRemoveObserver_Parms), Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics
	{
		struct MediaPipePipelineComponent_eventStart_Parms
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
	void Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipePipelineComponent_eventStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipePipelineComponent_eventStart_Parms), &Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipePipelineComponent, nullptr, "Start", nullptr, nullptr, sizeof(MediaPipePipelineComponent_eventStart_Parms), Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipePipelineComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipePipelineComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipePipelineComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipePipelineComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipePipelineComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister()
	{
		return UMediaPipePipelineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPipePipelineComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphExt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphExt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GraphNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoBindObservers_MetaData[];
#endif
		static void NewProp_bAutoBindObservers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoBindObservers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureApi_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CaptureApi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Fps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOverlay_MetaData[];
#endif
		static void NewProp_bEnableOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastFrameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrameTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFrameTimestamp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Observers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPipePipelineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPipePipelineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPipePipelineComponent_AddObserver, "AddObserver" }, // 1917765807
		{ &Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveAllObservers, "RemoveAllObservers" }, // 2292687508
		{ &Z_Construct_UFunction_UMediaPipePipelineComponent_RemoveObserver, "RemoveObserver" }, // 1968960462
		{ &Z_Construct_UFunction_UMediaPipePipelineComponent_Start, "Start" }, // 3685529704
		{ &Z_Construct_UFunction_UMediaPipePipelineComponent_Stop, "Stop" }, // 1058805563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MediaPipePipelineComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_PipelineName_MetaData[] = {
		{ "Category", "MediaPipe|Graph" },
		{ "Comment", "// Core config\n" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
		{ "ToolTip", "Core config" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_PipelineName = { "PipelineName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, PipelineName), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_PipelineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_PipelineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphPrefix_MetaData[] = {
		{ "Category", "MediaPipe|Graph" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphPrefix = { "GraphPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, GraphPrefix), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphExt_MetaData[] = {
		{ "Category", "MediaPipe|Graph" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphExt = { "GraphExt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, GraphExt), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphExt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphExt_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes_Inner = { "GraphNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes_MetaData[] = {
		{ "Category", "MediaPipe|Graph" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes = { "GraphNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, GraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers_MetaData[] = {
		{ "Category", "MediaPipe|Graph" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers_SetBit(void* Obj)
	{
		((UMediaPipePipelineComponent*)Obj)->bAutoBindObservers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers = { "bAutoBindObservers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaPipePipelineComponent), &Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_InputFile_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "Comment", "// Capture config\n" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
		{ "ToolTip", "Capture config" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_InputFile = { "InputFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, InputFile), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_InputFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_InputFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CameraId_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CameraId = { "CameraId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, CameraId), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CameraId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CameraId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CaptureApi_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CaptureApi = { "CaptureApi", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, CaptureApi), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CaptureApi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CaptureApi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResX_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, ResX), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResY_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, ResY), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Fps_MetaData[] = {
		{ "Category", "MediaPipe|Capture" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Fps = { "Fps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, Fps), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Fps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Fps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay_MetaData[] = {
		{ "Category", "MediaPipe|Utils" },
		{ "Comment", "// Utils config\n" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
		{ "ToolTip", "Utils config" },
	};
#endif
	void Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay_SetBit(void* Obj)
	{
		((UMediaPipePipelineComponent*)Obj)->bEnableOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay = { "bEnableOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaPipePipelineComponent), &Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameId_MetaData[] = {
		{ "Category", "MediaPipe|Stats" },
		{ "Comment", "// Stats\n" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
		{ "ToolTip", "Stats" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameId = { "LastFrameId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, LastFrameId), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameTimestamp_MetaData[] = {
		{ "Category", "MediaPipe|Stats" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameTimestamp = { "LastFrameTimestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, LastFrameTimestamp), METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameTimestamp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMediaPipeObserverComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPipePipelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipePipelineComponent, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPipePipelineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_PipelineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphExt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_GraphNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bAutoBindObservers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_InputFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CameraId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_CaptureApi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_ResY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Fps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_bEnableOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_LastFrameTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipePipelineComponent_Statics::NewProp_Observers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPipePipelineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPipePipelineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPipePipelineComponent_Statics::ClassParams = {
		&UMediaPipePipelineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPipePipelineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipePipelineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPipePipelineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPipePipelineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPipePipelineComponent, 1145717854);
	template<> MEDIAPIPE_API UClass* StaticClass<UMediaPipePipelineComponent>()
	{
		return UMediaPipePipelineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPipePipelineComponent(Z_Construct_UClass_UMediaPipePipelineComponent, &UMediaPipePipelineComponent::StaticClass, TEXT("/Script/MediaPipe"), TEXT("UMediaPipePipelineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPipePipelineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
