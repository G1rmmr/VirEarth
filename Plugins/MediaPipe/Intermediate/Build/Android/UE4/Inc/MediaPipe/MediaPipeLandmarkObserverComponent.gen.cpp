// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPipe/Public/MediaPipeLandmarkObserverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPipeLandmarkObserverComponent() {}
// Cross Module References
	MEDIAPIPE_API UEnum* Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping();
	UPackage* Z_Construct_UPackage__Script_MediaPipe();
	MEDIAPIPE_API UEnum* Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType();
	MEDIAPIPE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeLandmark();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EMediaPipeLandmarkAxisMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping, Z_Construct_UPackage__Script_MediaPipe(), TEXT("EMediaPipeLandmarkAxisMapping"));
		}
		return Singleton;
	}
	template<> MEDIAPIPE_API UEnum* StaticEnum<EMediaPipeLandmarkAxisMapping>()
	{
		return EMediaPipeLandmarkAxisMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaPipeLandmarkAxisMapping(EMediaPipeLandmarkAxisMapping_StaticEnum, TEXT("/Script/MediaPipe"), TEXT("EMediaPipeLandmarkAxisMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping_Hash() { return 1056743327U; }
	UEnum* Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaPipe();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaPipeLandmarkAxisMapping"), 0, Get_Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaPipeLandmarkAxisMapping::X", (int64)EMediaPipeLandmarkAxisMapping::X },
				{ "EMediaPipeLandmarkAxisMapping::Y", (int64)EMediaPipeLandmarkAxisMapping::Y },
				{ "EMediaPipeLandmarkAxisMapping::Z", (int64)EMediaPipeLandmarkAxisMapping::Z },
				{ "EMediaPipeLandmarkAxisMapping::NegX", (int64)EMediaPipeLandmarkAxisMapping::NegX },
				{ "EMediaPipeLandmarkAxisMapping::NegY", (int64)EMediaPipeLandmarkAxisMapping::NegY },
				{ "EMediaPipeLandmarkAxisMapping::NegZ", (int64)EMediaPipeLandmarkAxisMapping::NegZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
				{ "NegX.Name", "EMediaPipeLandmarkAxisMapping::NegX" },
				{ "NegY.Name", "EMediaPipeLandmarkAxisMapping::NegY" },
				{ "NegZ.Name", "EMediaPipeLandmarkAxisMapping::NegZ" },
				{ "X.Name", "EMediaPipeLandmarkAxisMapping::X" },
				{ "Y.Name", "EMediaPipeLandmarkAxisMapping::Y" },
				{ "Z.Name", "EMediaPipeLandmarkAxisMapping::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaPipe,
				nullptr,
				"EMediaPipeLandmarkAxisMapping",
				"EMediaPipeLandmarkAxisMapping",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaPipeLandmarkListType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType, Z_Construct_UPackage__Script_MediaPipe(), TEXT("EMediaPipeLandmarkListType"));
		}
		return Singleton;
	}
	template<> MEDIAPIPE_API UEnum* StaticEnum<EMediaPipeLandmarkListType>()
	{
		return EMediaPipeLandmarkListType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaPipeLandmarkListType(EMediaPipeLandmarkListType_StaticEnum, TEXT("/Script/MediaPipe"), TEXT("EMediaPipeLandmarkListType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType_Hash() { return 2064331593U; }
	UEnum* Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaPipe();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaPipeLandmarkListType"), 0, Get_Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaPipeLandmarkListType::LandmarkList", (int64)EMediaPipeLandmarkListType::LandmarkList },
				{ "EMediaPipeLandmarkListType::NormalizedLandmarkList", (int64)EMediaPipeLandmarkListType::NormalizedLandmarkList },
				{ "EMediaPipeLandmarkListType::MultiLandmarkList", (int64)EMediaPipeLandmarkListType::MultiLandmarkList },
				{ "EMediaPipeLandmarkListType::MultiNormalizedLandmarkList", (int64)EMediaPipeLandmarkListType::MultiNormalizedLandmarkList },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "LandmarkList.Name", "EMediaPipeLandmarkListType::LandmarkList" },
				{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
				{ "MultiLandmarkList.Name", "EMediaPipeLandmarkListType::MultiLandmarkList" },
				{ "MultiNormalizedLandmarkList.Name", "EMediaPipeLandmarkListType::MultiNormalizedLandmarkList" },
				{ "NormalizedLandmarkList.Name", "EMediaPipeLandmarkListType::NormalizedLandmarkList" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaPipe,
				nullptr,
				"EMediaPipeLandmarkListType",
				"EMediaPipeLandmarkListType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMediaPipeLandmark::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAPIPE_API uint32 Get_Z_Construct_UScriptStruct_FMediaPipeLandmark_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPipeLandmark, Z_Construct_UPackage__Script_MediaPipe(), TEXT("MediaPipeLandmark"), sizeof(FMediaPipeLandmark), Get_Z_Construct_UScriptStruct_FMediaPipeLandmark_Hash());
	}
	return Singleton;
}
template<> MEDIAPIPE_API UScriptStruct* StaticStruct<FMediaPipeLandmark>()
{
	return FMediaPipeLandmark::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPipeLandmark(FMediaPipeLandmark::StaticStruct, TEXT("/Script/MediaPipe"), TEXT("MediaPipeLandmark"), false, nullptr, nullptr);
static struct FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeLandmark
{
	FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeLandmark()
	{
		UScriptStruct::DeferCppStructOps<FMediaPipeLandmark>(FName(TEXT("MediaPipeLandmark")));
	}
} ScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeLandmark;
	struct Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Visibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPipeLandmark>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "MediaPipeLandmark" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeLandmark, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "MediaPipeLandmark" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeLandmark, Visibility), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Visibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Presence_MetaData[] = {
		{ "Category", "MediaPipeLandmark" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeLandmark, Presence), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Presence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Presence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::NewProp_Presence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
		nullptr,
		&NewStructOps,
		"MediaPipeLandmark",
		sizeof(FMediaPipeLandmark),
		alignof(FMediaPipeLandmark),
		Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeLandmark()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPipeLandmark_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaPipe();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPipeLandmark"), sizeof(FMediaPipeLandmark), Get_Z_Construct_UScriptStruct_FMediaPipeLandmark_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPipeLandmark_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPipeLandmark_Hash() { return 2941342681U; }
	DEFINE_FUNCTION(UMediaPipeLandmarkObserverComponent::execDrawDebugLandmarks)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectId);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PrimitiveScale);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLandmarks(Z_Param_ObjectId,Z_Param_Out_Transform,Z_Param_PrimitiveScale,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeLandmarkObserverComponent::execTryGetLandmark)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectId);
		P_GET_PROPERTY(FIntProperty,Z_Param_LandmarkId);
		P_GET_STRUCT_REF(FMediaPipeLandmark,Z_Param_Out_Landmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetLandmark(Z_Param_ObjectId,Z_Param_LandmarkId,Z_Param_Out_Landmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeLandmarkObserverComponent::execTryGetLandmarkList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectId);
		P_GET_TARRAY_REF(FMediaPipeLandmark,Z_Param_Out_LandmarkList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetLandmarkList(Z_Param_ObjectId,Z_Param_Out_LandmarkList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeLandmarkObserverComponent::execGetLandmark)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectId);
		P_GET_PROPERTY(FIntProperty,Z_Param_LandmarkId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaPipeLandmark*)Z_Param__Result=P_THIS->GetLandmark(Z_Param_ObjectId,Z_Param_LandmarkId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeLandmarkObserverComponent::execGetLandmarkList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ObjectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMediaPipeLandmark>*)Z_Param__Result=P_THIS->GetLandmarkList(Z_Param_ObjectId);
		P_NATIVE_END;
	}
	void UMediaPipeLandmarkObserverComponent::StaticRegisterNativesUMediaPipeLandmarkObserverComponent()
	{
		UClass* Class = UMediaPipeLandmarkObserverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugLandmarks", &UMediaPipeLandmarkObserverComponent::execDrawDebugLandmarks },
			{ "GetLandmark", &UMediaPipeLandmarkObserverComponent::execGetLandmark },
			{ "GetLandmarkList", &UMediaPipeLandmarkObserverComponent::execGetLandmarkList },
			{ "TryGetLandmark", &UMediaPipeLandmarkObserverComponent::execTryGetLandmark },
			{ "TryGetLandmarkList", &UMediaPipeLandmarkObserverComponent::execTryGetLandmarkList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics
	{
		struct MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms
		{
			int32 ObjectId;
			FTransform Transform;
			float PrimitiveScale;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimitiveScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms, ObjectId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_PrimitiveScale = { "PrimitiveScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms, PrimitiveScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_PrimitiveScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Utils\n" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_PrimitiveScale", "1.000000" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
		{ "ToolTip", "Utils" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, nullptr, "DrawDebugLandmarks", nullptr, nullptr, sizeof(MediaPipeLandmarkObserverComponent_eventDrawDebugLandmarks_Parms), Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics
	{
		struct MediaPipeLandmarkObserverComponent_eventGetLandmark_Parms
		{
			int32 ObjectId;
			int32 LandmarkId;
			FMediaPipeLandmark ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LandmarkId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventGetLandmark_Parms, ObjectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_LandmarkId = { "LandmarkId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventGetLandmark_Parms, LandmarkId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventGetLandmark_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaPipeLandmark, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_LandmarkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, nullptr, "GetLandmark", nullptr, nullptr, sizeof(MediaPipeLandmarkObserverComponent_eventGetLandmark_Parms), Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics
	{
		struct MediaPipeLandmarkObserverComponent_eventGetLandmarkList_Parms
		{
			int32 ObjectId;
			TArray<FMediaPipeLandmark> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventGetLandmarkList_Parms, ObjectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaPipeLandmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventGetLandmarkList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, nullptr, "GetLandmarkList", nullptr, nullptr, sizeof(MediaPipeLandmarkObserverComponent_eventGetLandmarkList_Parms), Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics
	{
		struct MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms
		{
			int32 ObjectId;
			int32 LandmarkId;
			FMediaPipeLandmark Landmark;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LandmarkId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Landmark;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms, ObjectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_LandmarkId = { "LandmarkId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms, LandmarkId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_Landmark = { "Landmark", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms, Landmark), Z_Construct_UScriptStruct_FMediaPipeLandmark, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms), &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_LandmarkId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_Landmark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, nullptr, "TryGetLandmark", nullptr, nullptr, sizeof(MediaPipeLandmarkObserverComponent_eventTryGetLandmark_Parms), Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics
	{
		struct MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms
		{
			int32 ObjectId;
			TArray<FMediaPipeLandmark> LandmarkList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandmarkList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandmarkList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms, ObjectId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_LandmarkList_Inner = { "LandmarkList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaPipeLandmark, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_LandmarkList = { "LandmarkList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms, LandmarkList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms), &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ObjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_LandmarkList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_LandmarkList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, nullptr, "TryGetLandmarkList", nullptr, nullptr, sizeof(MediaPipeLandmarkObserverComponent_eventTryGetLandmarkList_Parms), Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_NoRegister()
	{
		return UMediaPipeLandmarkObserverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandmarkListType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandmarkListType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LandmarkListType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisX_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisY_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisZ_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPresence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaPipeObserverComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_DrawDebugLandmarks, "DrawDebugLandmarks" }, // 3452038440
		{ &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmark, "GetLandmark" }, // 2780431792
		{ &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_GetLandmarkList, "GetLandmarkList" }, // 1284499490
		{ &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmark, "TryGetLandmark" }, // 3902882088
		{ &Z_Construct_UFunction_UMediaPipeLandmarkObserverComponent_TryGetLandmarkList, "TryGetLandmarkList" }, // 4268359708
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MediaPipeLandmarkObserverComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "Comment", "// Config\n" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType = { "LandmarkListType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, LandmarkListType), Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkListType, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX = { "AxisX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, AxisX), Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY = { "AxisY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, AxisY), Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ = { "AxisZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, AxisZ), Z_Construct_UEnum_MediaPipe_EMediaPipeLandmarkAxisMapping, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_WorldScale_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_WorldScale = { "WorldScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, WorldScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_WorldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_WorldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinVisibility_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinVisibility = { "MinVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, MinVisibility), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinPresence_MetaData[] = {
		{ "Category", "MediaPipe|Landmarks" },
		{ "ModuleRelativePath", "Public/MediaPipeLandmarkObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinPresence = { "MinPresence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeLandmarkObserverComponent, MinPresence), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinPresence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_LandmarkListType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_AxisZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_WorldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::NewProp_MinPresence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPipeLandmarkObserverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::ClassParams = {
		&UMediaPipeLandmarkObserverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPipeLandmarkObserverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPipeLandmarkObserverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPipeLandmarkObserverComponent, 3959683869);
	template<> MEDIAPIPE_API UClass* StaticClass<UMediaPipeLandmarkObserverComponent>()
	{
		return UMediaPipeLandmarkObserverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPipeLandmarkObserverComponent(Z_Construct_UClass_UMediaPipeLandmarkObserverComponent, &UMediaPipeLandmarkObserverComponent::StaticClass, TEXT("/Script/MediaPipe"), TEXT("UMediaPipeLandmarkObserverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPipeLandmarkObserverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
