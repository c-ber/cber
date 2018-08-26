#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapStatAnalyzer_C // Size: 0x550
	: public UActor // Size: 0x410
{
private:
	typedef UMapStatAnalyzer_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(85903); // id32("BlueprintGeneratedClass MapStatAnalyzer.MapStatAnalyzer_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty MapStatAnalyzer.MapStatAnalyzer_C.DefaultSceneRoot */
	FVector WorldMin; /* Ofs: 0x420 Size: 0xC - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.WorldMin */
	FVector WorldMax; /* Ofs: 0x42C Size: 0xC - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.WorldMax */
	FVector SamplingInterval; /* Ofs: 0x438 Size: 0xC - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.SamplingInterval */
	uint8_t UnknownData444[0x4];
	TArray<struct FVector> WorldAvgSamples; /* Ofs: 0x448 Size: 0x10 - ArrayProperty MapStatAnalyzer.MapStatAnalyzer_C.WorldAvgSamples */
	TArray<struct FTransform> WorldSamplesT; /* Ofs: 0x458 Size: 0x10 - ArrayProperty MapStatAnalyzer.MapStatAnalyzer_C.WorldSamplesT */
	TArray<struct FString> BeginConsoleCommands; /* Ofs: 0x468 Size: 0x10 - ArrayProperty MapStatAnalyzer.MapStatAnalyzer_C.BeginConsoleCommands */
	int32_t IY; /* Ofs: 0x478 Size: 0x4 - IntProperty MapStatAnalyzer.MapStatAnalyzer_C.IY */
	int32_t IX; /* Ofs: 0x47C Size: 0x4 - IntProperty MapStatAnalyzer.MapStatAnalyzer_C.IX */
	FVector CameraRelativeOffset; /* Ofs: 0x480 Size: 0xC - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.CameraRelativeOffset */
	float SkippingMinimumHeight; /* Ofs: 0x48C Size: 0x4 - FloatProperty MapStatAnalyzer.MapStatAnalyzer_C.SkippingMinimumHeight */
	int32_t CameraCut; /* Ofs: 0x490 Size: 0x4 - IntProperty MapStatAnalyzer.MapStatAnalyzer_C.CameraCut */
	float TimeInterval; /* Ofs: 0x494 Size: 0x4 - FloatProperty MapStatAnalyzer.MapStatAnalyzer_C.TimeInterval */
	FString SaveFileName; /* Ofs: 0x498 Size: 0x10 - StrProperty MapStatAnalyzer.MapStatAnalyzer_C.SaveFileName */
	int32_t SubdivisionCount; /* Ofs: 0x4A8 Size: 0x4 - IntProperty MapStatAnalyzer.MapStatAnalyzer_C.SubdivisionCount */
	uint8_t UnknownData4AC[0x4];
	TArray<struct FVector> PresetLoc; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty MapStatAnalyzer.MapStatAnalyzer_C.PresetLoc */
	uint8_t boolField4C0;
	uint8_t UnknownData4C1[0x3];
	int32_t SubdivisionIndex; /* Ofs: 0x4C4 Size: 0x4 - IntProperty MapStatAnalyzer.MapStatAnalyzer_C.SubdivisionIndex */
	FHitResult HitResult; /* Ofs: 0x4C8 Size: 0x88 - StructProperty MapStatAnalyzer.MapStatAnalyzer_C.HitResult */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetWorldMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x420, value); }
	inline bool SetWorldMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x42C, value); }
	inline bool SetSamplingInterval(t_structHelper inst, FVector value) { inst.WriteOffset(0x438, value); }
	inline bool SetWorldAvgSamples(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x448, value); }
	inline bool SetWorldSamplesT(t_structHelper inst, TArray<struct FTransform> value) { inst.WriteOffset(0x458, value); }
	inline bool SetBeginConsoleCommands(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x468, value); }
	inline bool SetIY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x478, value); }
	inline bool SetIX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x47C, value); }
	inline bool SetCameraRelativeOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x480, value); }
	inline bool SetSkippingMinimumHeight(t_structHelper inst, float value) { inst.WriteOffset(0x48C, value); }
	inline bool SetCameraCut(t_structHelper inst, int32_t value) { inst.WriteOffset(0x490, value); }
	inline bool SetTimeInterval(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetSaveFileName(t_structHelper inst, FString value) { inst.WriteOffset(0x498, value); }
	inline bool SetSubdivisionCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetPresetLoc(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x4B0, value); }
	inline bool UsePresetLoc()
	{
		return boolField4C0& 0x1;
	}
	inline bool SetUsePresetLoc(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSubdivisionIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetHitResult(t_structHelper inst, FHitResult value) { inst.WriteOffset(0x4C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapStatAnalyzer_C = sizeof(UMapStatAnalyzer_C); // 1360
    static_assert(sizeof(UMapStatAnalyzer_C) == 0x550, "Size of UMapStatAnalyzer_C is not correct.");
	auto constexpr UMapStatAnalyzer_C_UberGraphFrame_Offset = offsetof(UMapStatAnalyzer_C, UberGraphFrame);
	static_assert(UMapStatAnalyzer_C_UberGraphFrame_Offset == 0x410, "UMapStatAnalyzer_C::UberGraphFrame offset is not 410");
	auto constexpr UMapStatAnalyzer_C_DefaultSceneRoot_Offset = offsetof(UMapStatAnalyzer_C, DefaultSceneRoot);
	static_assert(UMapStatAnalyzer_C_DefaultSceneRoot_Offset == 0x418, "UMapStatAnalyzer_C::DefaultSceneRoot offset is not 418");
	auto constexpr UMapStatAnalyzer_C_WorldMin_Offset = offsetof(UMapStatAnalyzer_C, WorldMin);
	static_assert(UMapStatAnalyzer_C_WorldMin_Offset == 0x420, "UMapStatAnalyzer_C::WorldMin offset is not 420");
	auto constexpr UMapStatAnalyzer_C_WorldMax_Offset = offsetof(UMapStatAnalyzer_C, WorldMax);
	static_assert(UMapStatAnalyzer_C_WorldMax_Offset == 0x42c, "UMapStatAnalyzer_C::WorldMax offset is not 42c");
	auto constexpr UMapStatAnalyzer_C_SamplingInterval_Offset = offsetof(UMapStatAnalyzer_C, SamplingInterval);
	static_assert(UMapStatAnalyzer_C_SamplingInterval_Offset == 0x438, "UMapStatAnalyzer_C::SamplingInterval offset is not 438");
	auto constexpr UMapStatAnalyzer_C_WorldAvgSamples_Offset = offsetof(UMapStatAnalyzer_C, WorldAvgSamples);
	static_assert(UMapStatAnalyzer_C_WorldAvgSamples_Offset == 0x448, "UMapStatAnalyzer_C::WorldAvgSamples offset is not 448");
	auto constexpr UMapStatAnalyzer_C_WorldSamplesT_Offset = offsetof(UMapStatAnalyzer_C, WorldSamplesT);
	static_assert(UMapStatAnalyzer_C_WorldSamplesT_Offset == 0x458, "UMapStatAnalyzer_C::WorldSamplesT offset is not 458");
	auto constexpr UMapStatAnalyzer_C_BeginConsoleCommands_Offset = offsetof(UMapStatAnalyzer_C, BeginConsoleCommands);
	static_assert(UMapStatAnalyzer_C_BeginConsoleCommands_Offset == 0x468, "UMapStatAnalyzer_C::BeginConsoleCommands offset is not 468");
	auto constexpr UMapStatAnalyzer_C_IY_Offset = offsetof(UMapStatAnalyzer_C, IY);
	static_assert(UMapStatAnalyzer_C_IY_Offset == 0x478, "UMapStatAnalyzer_C::IY offset is not 478");
	auto constexpr UMapStatAnalyzer_C_IX_Offset = offsetof(UMapStatAnalyzer_C, IX);
	static_assert(UMapStatAnalyzer_C_IX_Offset == 0x47c, "UMapStatAnalyzer_C::IX offset is not 47c");
	auto constexpr UMapStatAnalyzer_C_CameraRelativeOffset_Offset = offsetof(UMapStatAnalyzer_C, CameraRelativeOffset);
	static_assert(UMapStatAnalyzer_C_CameraRelativeOffset_Offset == 0x480, "UMapStatAnalyzer_C::CameraRelativeOffset offset is not 480");
	auto constexpr UMapStatAnalyzer_C_SkippingMinimumHeight_Offset = offsetof(UMapStatAnalyzer_C, SkippingMinimumHeight);
	static_assert(UMapStatAnalyzer_C_SkippingMinimumHeight_Offset == 0x48c, "UMapStatAnalyzer_C::SkippingMinimumHeight offset is not 48c");
	auto constexpr UMapStatAnalyzer_C_CameraCut_Offset = offsetof(UMapStatAnalyzer_C, CameraCut);
	static_assert(UMapStatAnalyzer_C_CameraCut_Offset == 0x490, "UMapStatAnalyzer_C::CameraCut offset is not 490");
	auto constexpr UMapStatAnalyzer_C_TimeInterval_Offset = offsetof(UMapStatAnalyzer_C, TimeInterval);
	static_assert(UMapStatAnalyzer_C_TimeInterval_Offset == 0x494, "UMapStatAnalyzer_C::TimeInterval offset is not 494");
	auto constexpr UMapStatAnalyzer_C_SaveFileName_Offset = offsetof(UMapStatAnalyzer_C, SaveFileName);
	static_assert(UMapStatAnalyzer_C_SaveFileName_Offset == 0x498, "UMapStatAnalyzer_C::SaveFileName offset is not 498");
	auto constexpr UMapStatAnalyzer_C_SubdivisionCount_Offset = offsetof(UMapStatAnalyzer_C, SubdivisionCount);
	static_assert(UMapStatAnalyzer_C_SubdivisionCount_Offset == 0x4a8, "UMapStatAnalyzer_C::SubdivisionCount offset is not 4a8");
	auto constexpr UMapStatAnalyzer_C_PresetLoc_Offset = offsetof(UMapStatAnalyzer_C, PresetLoc);
	static_assert(UMapStatAnalyzer_C_PresetLoc_Offset == 0x4b0, "UMapStatAnalyzer_C::PresetLoc offset is not 4b0");
	auto constexpr UMapStatAnalyzer_C_boolField4C0_Offset = offsetof(UMapStatAnalyzer_C, boolField4C0);
	static_assert(UMapStatAnalyzer_C_boolField4C0_Offset == 0x4c0, "UMapStatAnalyzer_C::boolField4C0 offset is not 4c0");
	auto constexpr UMapStatAnalyzer_C_SubdivisionIndex_Offset = offsetof(UMapStatAnalyzer_C, SubdivisionIndex);
	static_assert(UMapStatAnalyzer_C_SubdivisionIndex_Offset == 0x4c4, "UMapStatAnalyzer_C::SubdivisionIndex offset is not 4c4");
	auto constexpr UMapStatAnalyzer_C_HitResult_Offset = offsetof(UMapStatAnalyzer_C, HitResult);
	static_assert(UMapStatAnalyzer_C_HitResult_Offset == 0x4c8, "UMapStatAnalyzer_C::HitResult offset is not 4c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
