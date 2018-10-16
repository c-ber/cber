#pragma once
#include "UAnimCompress_RemoveLinearKeys.hpp"
#include "AnimationCompressionFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress_PerTrackCompression // Size: 0xF0
	: public UAnimCompress_RemoveLinearKeys // Size: 0x70
{
private:
	typedef UAnimCompress_PerTrackCompression t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(266); // id32("Class Engine.AnimCompress_PerTrackCompression")
		return ptr;
	}
	float MaxZeroingThreshold; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.MaxZeroingThreshold */
	float MaxPosDiffBitwise; /* Ofs: 0x74 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.MaxPosDiffBitwise */
	float MaxAngleDiffBitwise; /* Ofs: 0x78 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.MaxAngleDiffBitwise */
	float MaxScaleDiffBitwise; /* Ofs: 0x7C Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.MaxScaleDiffBitwise */
	TArray<AnimationCompressionFormat> AllowedRotationFormats; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.AnimCompress_PerTrackCompression.AllowedRotationFormats */
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.AnimCompress_PerTrackCompression.AllowedTranslationFormats */
	TArray<AnimationCompressionFormat> AllowedScaleFormats; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.AnimCompress_PerTrackCompression.AllowedScaleFormats */
	uint8_t boolFieldB0;
	uint8_t UnknownDataB1[0x3];
	float ResampledFramerate; /* Ofs: 0xB4 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.ResampledFramerate */
	int32_t MinKeysForResampling; /* Ofs: 0xB8 Size: 0x4 - IntProperty Engine.AnimCompress_PerTrackCompression.MinKeysForResampling */
	uint8_t boolFieldBC;
	uint8_t UnknownDataBD[0x3];
	int32_t TrackHeightBias; /* Ofs: 0xC0 Size: 0x4 - IntProperty Engine.AnimCompress_PerTrackCompression.TrackHeightBias */
	float ParentingDivisor; /* Ofs: 0xC4 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.ParentingDivisor */
	float ParentingDivisorExponent; /* Ofs: 0xC8 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.ParentingDivisorExponent */
	uint8_t boolFieldCC;
	uint8_t UnknownDataCD[0x3];
	float RotationErrorSourceRatio; /* Ofs: 0xD0 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.RotationErrorSourceRatio */
	float TranslationErrorSourceRatio; /* Ofs: 0xD4 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.TranslationErrorSourceRatio */
	float ScaleErrorSourceRatio; /* Ofs: 0xD8 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.ScaleErrorSourceRatio */
	float MaxErrorPerTrackRatio; /* Ofs: 0xDC Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.MaxErrorPerTrackRatio */
	float PerturbationProbeSize; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Engine.AnimCompress_PerTrackCompression.PerturbationProbeSize */
	uint8_t UnknownDataE4[0xC];


	inline bool SetMaxZeroingThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetMaxPosDiffBitwise(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetMaxAngleDiffBitwise(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetMaxScaleDiffBitwise(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
	inline bool SetAllowedRotationFormats(t_structHelper inst, TArray<AnimationCompressionFormat> value) { inst.WriteOffset(0x80, value); }
	inline bool SetAllowedTranslationFormats(t_structHelper inst, TArray<AnimationCompressionFormat> value) { inst.WriteOffset(0x90, value); }
	inline bool SetAllowedScaleFormats(t_structHelper inst, TArray<AnimationCompressionFormat> value) { inst.WriteOffset(0xA0, value); }
	inline bool bResampleAnimation()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetbResampleAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetResampledFramerate(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetMinKeysForResampling(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB8, value); }
	inline bool bUseAdaptiveError()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetbUseAdaptiveError(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseOverrideForEndEffectors()
	{
		return boolFieldBC& 0x2;
	}
	inline bool SetbUseOverrideForEndEffectors(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetTrackHeightBias(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetParentingDivisor(t_structHelper inst, float value) { inst.WriteOffset(0xC4, value); }
	inline bool SetParentingDivisorExponent(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool bUseAdaptiveError2()
	{
		return boolFieldCC& 0x1;
	}
	inline bool SetbUseAdaptiveError2(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRotationErrorSourceRatio(t_structHelper inst, float value) { inst.WriteOffset(0xD0, value); }
	inline bool SetTranslationErrorSourceRatio(t_structHelper inst, float value) { inst.WriteOffset(0xD4, value); }
	inline bool SetScaleErrorSourceRatio(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetMaxErrorPerTrackRatio(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool SetPerturbationProbeSize(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress_PerTrackCompression = sizeof(UAnimCompress_PerTrackCompression); // 240
    static_assert(sizeof(UAnimCompress_PerTrackCompression) == 0xF0, "Size of UAnimCompress_PerTrackCompression is not correct.");
	auto constexpr UAnimCompress_PerTrackCompression_MaxZeroingThreshold_Offset = offsetof(UAnimCompress_PerTrackCompression, MaxZeroingThreshold);
	static_assert(UAnimCompress_PerTrackCompression_MaxZeroingThreshold_Offset == 0x70, "UAnimCompress_PerTrackCompression::MaxZeroingThreshold offset is not 70");
	auto constexpr UAnimCompress_PerTrackCompression_MaxPosDiffBitwise_Offset = offsetof(UAnimCompress_PerTrackCompression, MaxPosDiffBitwise);
	static_assert(UAnimCompress_PerTrackCompression_MaxPosDiffBitwise_Offset == 0x74, "UAnimCompress_PerTrackCompression::MaxPosDiffBitwise offset is not 74");
	auto constexpr UAnimCompress_PerTrackCompression_MaxAngleDiffBitwise_Offset = offsetof(UAnimCompress_PerTrackCompression, MaxAngleDiffBitwise);
	static_assert(UAnimCompress_PerTrackCompression_MaxAngleDiffBitwise_Offset == 0x78, "UAnimCompress_PerTrackCompression::MaxAngleDiffBitwise offset is not 78");
	auto constexpr UAnimCompress_PerTrackCompression_MaxScaleDiffBitwise_Offset = offsetof(UAnimCompress_PerTrackCompression, MaxScaleDiffBitwise);
	static_assert(UAnimCompress_PerTrackCompression_MaxScaleDiffBitwise_Offset == 0x7c, "UAnimCompress_PerTrackCompression::MaxScaleDiffBitwise offset is not 7c");
	auto constexpr UAnimCompress_PerTrackCompression_AllowedRotationFormats_Offset = offsetof(UAnimCompress_PerTrackCompression, AllowedRotationFormats);
	static_assert(UAnimCompress_PerTrackCompression_AllowedRotationFormats_Offset == 0x80, "UAnimCompress_PerTrackCompression::AllowedRotationFormats offset is not 80");
	auto constexpr UAnimCompress_PerTrackCompression_AllowedTranslationFormats_Offset = offsetof(UAnimCompress_PerTrackCompression, AllowedTranslationFormats);
	static_assert(UAnimCompress_PerTrackCompression_AllowedTranslationFormats_Offset == 0x90, "UAnimCompress_PerTrackCompression::AllowedTranslationFormats offset is not 90");
	auto constexpr UAnimCompress_PerTrackCompression_AllowedScaleFormats_Offset = offsetof(UAnimCompress_PerTrackCompression, AllowedScaleFormats);
	static_assert(UAnimCompress_PerTrackCompression_AllowedScaleFormats_Offset == 0xa0, "UAnimCompress_PerTrackCompression::AllowedScaleFormats offset is not a0");
	auto constexpr UAnimCompress_PerTrackCompression_boolFieldB0_Offset = offsetof(UAnimCompress_PerTrackCompression, boolFieldB0);
	static_assert(UAnimCompress_PerTrackCompression_boolFieldB0_Offset == 0xb0, "UAnimCompress_PerTrackCompression::boolFieldB0 offset is not b0");
	auto constexpr UAnimCompress_PerTrackCompression_ResampledFramerate_Offset = offsetof(UAnimCompress_PerTrackCompression, ResampledFramerate);
	static_assert(UAnimCompress_PerTrackCompression_ResampledFramerate_Offset == 0xb4, "UAnimCompress_PerTrackCompression::ResampledFramerate offset is not b4");
	auto constexpr UAnimCompress_PerTrackCompression_MinKeysForResampling_Offset = offsetof(UAnimCompress_PerTrackCompression, MinKeysForResampling);
	static_assert(UAnimCompress_PerTrackCompression_MinKeysForResampling_Offset == 0xb8, "UAnimCompress_PerTrackCompression::MinKeysForResampling offset is not b8");
	auto constexpr UAnimCompress_PerTrackCompression_boolFieldBC_Offset = offsetof(UAnimCompress_PerTrackCompression, boolFieldBC);
	static_assert(UAnimCompress_PerTrackCompression_boolFieldBC_Offset == 0xbc, "UAnimCompress_PerTrackCompression::boolFieldBC offset is not bc");
	auto constexpr UAnimCompress_PerTrackCompression_TrackHeightBias_Offset = offsetof(UAnimCompress_PerTrackCompression, TrackHeightBias);
	static_assert(UAnimCompress_PerTrackCompression_TrackHeightBias_Offset == 0xc0, "UAnimCompress_PerTrackCompression::TrackHeightBias offset is not c0");
	auto constexpr UAnimCompress_PerTrackCompression_ParentingDivisor_Offset = offsetof(UAnimCompress_PerTrackCompression, ParentingDivisor);
	static_assert(UAnimCompress_PerTrackCompression_ParentingDivisor_Offset == 0xc4, "UAnimCompress_PerTrackCompression::ParentingDivisor offset is not c4");
	auto constexpr UAnimCompress_PerTrackCompression_ParentingDivisorExponent_Offset = offsetof(UAnimCompress_PerTrackCompression, ParentingDivisorExponent);
	static_assert(UAnimCompress_PerTrackCompression_ParentingDivisorExponent_Offset == 0xc8, "UAnimCompress_PerTrackCompression::ParentingDivisorExponent offset is not c8");
	auto constexpr UAnimCompress_PerTrackCompression_boolFieldCC_Offset = offsetof(UAnimCompress_PerTrackCompression, boolFieldCC);
	static_assert(UAnimCompress_PerTrackCompression_boolFieldCC_Offset == 0xcc, "UAnimCompress_PerTrackCompression::boolFieldCC offset is not cc");
	auto constexpr UAnimCompress_PerTrackCompression_RotationErrorSourceRatio_Offset = offsetof(UAnimCompress_PerTrackCompression, RotationErrorSourceRatio);
	static_assert(UAnimCompress_PerTrackCompression_RotationErrorSourceRatio_Offset == 0xd0, "UAnimCompress_PerTrackCompression::RotationErrorSourceRatio offset is not d0");
	auto constexpr UAnimCompress_PerTrackCompression_TranslationErrorSourceRatio_Offset = offsetof(UAnimCompress_PerTrackCompression, TranslationErrorSourceRatio);
	static_assert(UAnimCompress_PerTrackCompression_TranslationErrorSourceRatio_Offset == 0xd4, "UAnimCompress_PerTrackCompression::TranslationErrorSourceRatio offset is not d4");
	auto constexpr UAnimCompress_PerTrackCompression_ScaleErrorSourceRatio_Offset = offsetof(UAnimCompress_PerTrackCompression, ScaleErrorSourceRatio);
	static_assert(UAnimCompress_PerTrackCompression_ScaleErrorSourceRatio_Offset == 0xd8, "UAnimCompress_PerTrackCompression::ScaleErrorSourceRatio offset is not d8");
	auto constexpr UAnimCompress_PerTrackCompression_MaxErrorPerTrackRatio_Offset = offsetof(UAnimCompress_PerTrackCompression, MaxErrorPerTrackRatio);
	static_assert(UAnimCompress_PerTrackCompression_MaxErrorPerTrackRatio_Offset == 0xdc, "UAnimCompress_PerTrackCompression::MaxErrorPerTrackRatio offset is not dc");
	auto constexpr UAnimCompress_PerTrackCompression_PerturbationProbeSize_Offset = offsetof(UAnimCompress_PerTrackCompression, PerturbationProbeSize);
	static_assert(UAnimCompress_PerTrackCompression_PerturbationProbeSize_Offset == 0xe0, "UAnimCompress_PerTrackCompression::PerturbationProbeSize offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
