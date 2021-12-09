// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPipe/Public/MediaPipeFaceMeshObserverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPipeFaceMeshObserverComponent() {}
// Cross Module References
	MEDIAPIPE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeFaceMesh();
	UPackage* Z_Construct_UPackage__Script_MediaPipe();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MEDIAPIPE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeVertex();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_NoRegister();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent();
	MEDIAPIPE_API UClass* Z_Construct_UClass_UMediaPipeObserverComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FMediaPipeFaceMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAPIPE_API uint32 Get_Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPipeFaceMesh, Z_Construct_UPackage__Script_MediaPipe(), TEXT("MediaPipeFaceMesh"), sizeof(FMediaPipeFaceMesh), Get_Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Hash());
	}
	return Singleton;
}
template<> MEDIAPIPE_API UScriptStruct* StaticStruct<FMediaPipeFaceMesh>()
{
	return FMediaPipeFaceMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPipeFaceMesh(FMediaPipeFaceMesh::StaticStruct, TEXT("/Script/MediaPipe"), TEXT("MediaPipeFaceMesh"), false, nullptr, nullptr);
static struct FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeFaceMesh
{
	FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeFaceMesh()
	{
		UScriptStruct::DeferCppStructOps<FMediaPipeFaceMesh>(FName(TEXT("MediaPipeFaceMesh")));
	}
} ScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeFaceMesh;
	struct Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPipeFaceMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "MediaPipeFaceMesh" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeFaceMesh, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Pose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMediaPipeVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "MediaPipeFaceMesh" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeFaceMesh, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "MediaPipeFaceMesh" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeFaceMesh, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Pose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::NewProp_Indices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
		nullptr,
		&NewStructOps,
		"MediaPipeFaceMesh",
		sizeof(FMediaPipeFaceMesh),
		alignof(FMediaPipeFaceMesh),
		Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeFaceMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaPipe();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPipeFaceMesh"), sizeof(FMediaPipeFaceMesh), Get_Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPipeFaceMesh_Hash() { return 938606871U; }
class UScriptStruct* FMediaPipeVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAPIPE_API uint32 Get_Z_Construct_UScriptStruct_FMediaPipeVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPipeVertex, Z_Construct_UPackage__Script_MediaPipe(), TEXT("MediaPipeVertex"), sizeof(FMediaPipeVertex), Get_Z_Construct_UScriptStruct_FMediaPipeVertex_Hash());
	}
	return Singleton;
}
template<> MEDIAPIPE_API UScriptStruct* StaticStruct<FMediaPipeVertex>()
{
	return FMediaPipeVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPipeVertex(FMediaPipeVertex::StaticStruct, TEXT("/Script/MediaPipe"), TEXT("MediaPipeVertex"), false, nullptr, nullptr);
static struct FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeVertex
{
	FScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeVertex()
	{
		UScriptStruct::DeferCppStructOps<FMediaPipeVertex>(FName(TEXT("MediaPipeVertex")));
	}
} ScriptStruct_MediaPipe_StaticRegisterNativesFMediaPipeVertex;
	struct Z_Construct_UScriptStruct_FMediaPipeVertex_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexCoord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPipeVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "MediaPipeVertex" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeVertex, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_Pos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_Pos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_TexCoord_MetaData[] = {
		{ "Category", "MediaPipeVertex" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_TexCoord = { "TexCoord", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPipeVertex, TexCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_TexCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_TexCoord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_Pos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::NewProp_TexCoord,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
		nullptr,
		&NewStructOps,
		"MediaPipeVertex",
		sizeof(FMediaPipeVertex),
		alignof(FMediaPipeVertex),
		Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPipeVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPipeVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaPipe();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPipeVertex"), sizeof(FMediaPipeVertex), Get_Z_Construct_UScriptStruct_FMediaPipeVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPipeVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPipeVertex_Hash() { return 2769771015U; }
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execDrawDebugMeshVertices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PrimitiveScale);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugMeshVertices(Z_Param_MeshId,Z_Param_Out_Transform,Z_Param_PrimitiveScale,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execTryGetMeshVertex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexId);
		P_GET_STRUCT_REF(FMediaPipeVertex,Z_Param_Out_Vertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetMeshVertex(Z_Param_MeshId,Z_Param_VertexId,Z_Param_Out_Vertex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execTryGetMeshPose)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetMeshPose(Z_Param_MeshId,Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execTryGetMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_GET_STRUCT_REF(FMediaPipeFaceMesh,Z_Param_Out_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetMesh(Z_Param_MeshId,Z_Param_Out_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execGetMeshVertex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaPipeVertex*)Z_Param__Result=P_THIS->GetMeshVertex(Z_Param_MeshId,Z_Param_VertexId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execGetMeshPose)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMeshPose(Z_Param_MeshId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPipeFaceMeshObserverComponent::execGetMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaPipeFaceMesh*)Z_Param__Result=P_THIS->GetMesh(Z_Param_MeshId);
		P_NATIVE_END;
	}
	void UMediaPipeFaceMeshObserverComponent::StaticRegisterNativesUMediaPipeFaceMeshObserverComponent()
	{
		UClass* Class = UMediaPipeFaceMeshObserverComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugMeshVertices", &UMediaPipeFaceMeshObserverComponent::execDrawDebugMeshVertices },
			{ "GetMesh", &UMediaPipeFaceMeshObserverComponent::execGetMesh },
			{ "GetMeshPose", &UMediaPipeFaceMeshObserverComponent::execGetMeshPose },
			{ "GetMeshVertex", &UMediaPipeFaceMeshObserverComponent::execGetMeshVertex },
			{ "TryGetMesh", &UMediaPipeFaceMeshObserverComponent::execTryGetMesh },
			{ "TryGetMeshPose", &UMediaPipeFaceMeshObserverComponent::execTryGetMeshPose },
			{ "TryGetMeshVertex", &UMediaPipeFaceMeshObserverComponent::execTryGetMeshVertex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms
		{
			int32 MeshId;
			FTransform Transform;
			float PrimitiveScale;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_PrimitiveScale = { "PrimitiveScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms, PrimitiveScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_PrimitiveScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Utils\n" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_PrimitiveScale", "1.000000" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
		{ "ToolTip", "Utils" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "DrawDebugMeshVertices", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventDrawDebugMeshVertices_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventGetMesh_Parms
		{
			int32 MeshId;
			FMediaPipeFaceMesh ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMesh_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMesh_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaPipeFaceMesh, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "GetMesh", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventGetMesh_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventGetMeshPose_Parms
		{
			int32 MeshId;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMeshPose_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMeshPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "GetMeshPose", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventGetMeshPose_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventGetMeshVertex_Parms
		{
			int32 MeshId;
			int32 VertexId;
			FMediaPipeVertex ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexId;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMeshVertex_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_VertexId = { "VertexId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMeshVertex_Parms, VertexId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventGetMeshVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaPipeVertex, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_VertexId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "GetMeshVertex", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventGetMeshVertex_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms
		{
			int32 MeshId;
			FMediaPipeFaceMesh Mesh;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms, Mesh), Z_Construct_UScriptStruct_FMediaPipeFaceMesh, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms), &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "TryGetMesh", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMesh_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms
		{
			int32 MeshId;
			FTransform Pose;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms), &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_Pose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "TryGetMeshPose", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMeshPose_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics
	{
		struct MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms
		{
			int32 MeshId;
			int32 VertexId;
			FMediaPipeVertex Vertex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MeshId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms, MeshId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_VertexId = { "VertexId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms, VertexId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_Vertex = { "Vertex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms, Vertex), Z_Construct_UScriptStruct_FMediaPipeVertex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms), &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_MeshId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_VertexId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_Vertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaPipe" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, nullptr, "TryGetMeshVertex", nullptr, nullptr, sizeof(MediaPipeFaceMeshObserverComponent_eventTryGetMeshVertex_Parms), Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_NoRegister()
	{
		return UMediaPipeFaceMeshObserverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipHorizontal_MetaData[];
#endif
		static void NewProp_bFlipHorizontal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipHorizontal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaPipeObserverComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPipe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_DrawDebugMeshVertices, "DrawDebugMeshVertices" }, // 3232165067
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMesh, "GetMesh" }, // 567426301
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshPose, "GetMeshPose" }, // 2833917319
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_GetMeshVertex, "GetMeshVertex" }, // 3448957303
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMesh, "TryGetMesh" }, // 1540062565
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshPose, "TryGetMeshPose" }, // 2640654941
		{ &Z_Construct_UFunction_UMediaPipeFaceMeshObserverComponent_TryGetMeshVertex, "TryGetMeshVertex" }, // 4227038486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MediaPipe" },
		{ "IncludePath", "MediaPipeFaceMeshObserverComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_UniformScale_MetaData[] = {
		{ "Category", "MediaPipe|FaceMesh" },
		{ "Comment", "// Config\n" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPipeFaceMeshObserverComponent, UniformScale), METADATA_PARAMS(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_UniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_UniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal_MetaData[] = {
		{ "Category", "MediaPipe|FaceMesh" },
		{ "ModuleRelativePath", "Public/MediaPipeFaceMeshObserverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal_SetBit(void* Obj)
	{
		((UMediaPipeFaceMeshObserverComponent*)Obj)->bFlipHorizontal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal = { "bFlipHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaPipeFaceMeshObserverComponent), &Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_UniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::NewProp_bFlipHorizontal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPipeFaceMeshObserverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::ClassParams = {
		&UMediaPipeFaceMeshObserverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPipeFaceMeshObserverComponent, 731182024);
	template<> MEDIAPIPE_API UClass* StaticClass<UMediaPipeFaceMeshObserverComponent>()
	{
		return UMediaPipeFaceMeshObserverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPipeFaceMeshObserverComponent(Z_Construct_UClass_UMediaPipeFaceMeshObserverComponent, &UMediaPipeFaceMeshObserverComponent::StaticClass, TEXT("/Script/MediaPipe"), TEXT("UMediaPipeFaceMeshObserverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPipeFaceMeshObserverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
