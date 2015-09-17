// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRS2D_brs2dGameMode_generated_h
#error "brs2dGameMode.generated.h already included, missing '#pragma once' in brs2dGameMode.h"
#endif
#define BRS2D_brs2dGameMode_generated_h

#define brs2d_Source_brs2d_brs2dGameMode_h_14_RPC_WRAPPERS
#define brs2d_Source_brs2d_brs2dGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define brs2d_Source_brs2d_brs2dGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAbrs2dGameMode(); \
	friend BRS2D_API class UClass* Z_Construct_UClass_Abrs2dGameMode(); \
	public: \
	DECLARE_CLASS(Abrs2dGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, brs2d, NO_API) \
	DECLARE_SERIALIZER(Abrs2dGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<Abrs2dGameMode*>(this); }


#define brs2d_Source_brs2d_brs2dGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAbrs2dGameMode(); \
	friend BRS2D_API class UClass* Z_Construct_UClass_Abrs2dGameMode(); \
	public: \
	DECLARE_CLASS(Abrs2dGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, brs2d, NO_API) \
	DECLARE_SERIALIZER(Abrs2dGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<Abrs2dGameMode*>(this); }


#define brs2d_Source_brs2d_brs2dGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Abrs2dGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Abrs2dGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abrs2dGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abrs2dGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API Abrs2dGameMode(const Abrs2dGameMode& InCopy); \
public:


#define brs2d_Source_brs2d_brs2dGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Abrs2dGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API Abrs2dGameMode(const Abrs2dGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abrs2dGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abrs2dGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Abrs2dGameMode)


#define brs2d_Source_brs2d_brs2dGameMode_h_11_PROLOG
#define brs2d_Source_brs2d_brs2dGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	brs2d_Source_brs2d_brs2dGameMode_h_14_RPC_WRAPPERS \
	brs2d_Source_brs2d_brs2dGameMode_h_14_INCLASS \
	brs2d_Source_brs2d_brs2dGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define brs2d_Source_brs2d_brs2dGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	brs2d_Source_brs2d_brs2dGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	brs2d_Source_brs2d_brs2dGameMode_h_14_INCLASS_NO_PURE_DECLS \
	brs2d_Source_brs2d_brs2dGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID brs2d_Source_brs2d_brs2dGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS