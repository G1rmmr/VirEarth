// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirEarthAR/MyActor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor2() {}
// Cross Module References
	VIREARTHAR_API UClass* Z_Construct_UClass_AMyActor2_NoRegister();
	VIREARTHAR_API UClass* Z_Construct_UClass_AMyActor2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VirEarthAR();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyActor2::execMyFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MyFunction();
		P_NATIVE_END;
	}
	void AMyActor2::StaticRegisterNativesAMyActor2()
	{
		UClass* Class = AMyActor2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyFunction", &AMyActor2::execMyFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor2_MyFunction_Statics
	{
		struct MyActor2_eventMyFunction_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor2_MyFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyActor2_eventMyFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor2_MyFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor2_MyFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor2_MyFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyMediaPipe" },
		{ "Comment", "// +++ 1123 To make Function that finger counting and draw point\n" },
		{ "ModuleRelativePath", "MyActor2.h" },
		{ "ToolTip", "+++ 1123 To make Function that finger counting and draw point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor2_MyFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor2, nullptr, "MyFunction", nullptr, nullptr, sizeof(MyActor2_eventMyFunction_Parms), Z_Construct_UFunction_AMyActor2_MyFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor2_MyFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor2_MyFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor2_MyFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor2_MyFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor2_MyFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor2_NoRegister()
	{
		return AMyActor2::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor2_Statics
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
	UObject* (*const Z_Construct_UClass_AMyActor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VirEarthAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor2_MyFunction, "MyFunction" }, // 3299849453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MyActor2.h" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor2_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor2_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor2, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor2_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor2_Statics::NewProp_Pipeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor2_Statics::NewProp_Pipeline = { "Pipeline", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor2, Pipeline), Z_Construct_UClass_UMediaPipePipelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor2_Statics::NewProp_Pipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::NewProp_Pipeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor2_Statics::NewProp_Observer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyActor2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyActor2_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyActor2, Observer), Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyActor2_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2_Statics::NewProp_Pipeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor2_Statics::NewProp_Observer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor2_Statics::ClassParams = {
		&AMyActor2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyActor2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor2, 328149579);
	template<> VIREARTHAR_API UClass* StaticClass<AMyActor2>()
	{
		return AMyActor2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor2(Z_Construct_UClass_AMyActor2, &AMyActor2::StaticClass, TEXT("/Script/VirEarthAR"), TEXT("AMyActor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
