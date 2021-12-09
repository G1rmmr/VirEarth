// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirEarthAR/Hand_Tracking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHand_Tracking() {}
// Cross Module References
	VIREARTHAR_API UClass* Z_Construct_UClass_UHand_Tracking_NoRegister();
	VIREARTHAR_API UClass* Z_Construct_UClass_UHand_Tracking();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VirEarthAR();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHand_Tracking::execGetFingers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFingers();
		P_NATIVE_END;
	}
	void UHand_Tracking::StaticRegisterNativesUHand_Tracking()
	{
		UClass* Class = UHand_Tracking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFingers", &UHand_Tracking::execGetFingers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics
	{
		struct Hand_Tracking_eventGetFingers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Hand_Tracking_eventGetFingers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyMediaPipe" },
		{ "ModuleRelativePath", "Hand_Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHand_Tracking, nullptr, "GetFingers", nullptr, nullptr, sizeof(Hand_Tracking_eventGetFingers_Parms), Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHand_Tracking_GetFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHand_Tracking_GetFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHand_Tracking_NoRegister()
	{
		return UHand_Tracking::StaticClass();
	}
	struct Z_Construct_UClass_UHand_Tracking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pipeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pipeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHand_Tracking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirEarthAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHand_Tracking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHand_Tracking_GetFingers, "GetFingers" }, // 2019172020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Tracking_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MediaPipe" },
		{ "Comment", "//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Hand_Tracking.h" },
		{ "ModuleRelativePath", "Hand_Tracking.h" },
		{ "ToolTip", "UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hand_Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHand_Tracking, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Pipeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hand_Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Pipeline = { "Pipeline", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHand_Tracking, Pipeline), Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Pipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Pipeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Observer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hand_Tracking.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHand_Tracking, Observer), Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHand_Tracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Pipeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHand_Tracking_Statics::NewProp_Observer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHand_Tracking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHand_Tracking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHand_Tracking_Statics::ClassParams = {
		&UHand_Tracking::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHand_Tracking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Tracking_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHand_Tracking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHand_Tracking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHand_Tracking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHand_Tracking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHand_Tracking, 1810481015);
	template<> VIREARTHAR_API UClass* StaticClass<UHand_Tracking>()
	{
		return UHand_Tracking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHand_Tracking(Z_Construct_UClass_UHand_Tracking, &UHand_Tracking::StaticClass, TEXT("/Script/VirEarthAR"), TEXT("UHand_Tracking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHand_Tracking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
