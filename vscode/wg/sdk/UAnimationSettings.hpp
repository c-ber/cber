#pragma once
#include "UDeveloperSettings.hpp"
#include "AnimationCompressionFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimationSettings // Size: 0x78
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UAnimationSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(723); // id32("Class Engine.AnimationSettings")
		return ptr;
	}
	int32_t CompressCommandletVersion; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.AnimationSettings.CompressCommandletVersion */
	uint8_t UnknownData44[0x4];
	TArray<struct FString> KeyEndEffectorsMatchNameArray; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.AnimationSettings.KeyEndEffectorsMatchNameArray */
	ExternalPtr<struct UClass> DefaultCompressionAlgorithm; /* Ofs: 0x58 Size: 0x8 - ClassProperty Engine.AnimationSettings.DefaultCompressionAlgorithm */
	TEnumAsByte<enum AnimationCompressionFormat> RotationCompressionFormat; /* Ofs: 0x60 Size: 0x1 - ByteProperty Engine.AnimationSettings.RotationCompressionFormat */
	TEnumAsByte<enum AnimationCompressionFormat> TranslationCompressionFormat; /* Ofs: 0x61 Size: 0x1 - ByteProperty Engine.AnimationSettings.TranslationCompressionFormat */
	uint8_t UnknownData62[0x2];
	float MaxCurveError; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.AnimationSettings.MaxCurveError */
	float AlternativeCompressionThreshold; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.AnimationSettings.AlternativeCompressionThreshold */
	uint8_t boolField6C;
	uint8_t boolField6D;
	uint8_t boolField6E;
	uint8_t boolField6F;
	uint8_t boolField70;
	uint8_t boolField71;
	uint8_t boolField72;
	uint8_t boolField73;
	uint8_t boolField74;
	uint8_t boolField75;
	uint8_t boolField76;
	uint8_t UnknownData77[0x1];


	inline bool SetCompressCommandletVersion(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetKeyEndEffectorsMatchNameArray(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x48, value); }
	inline bool SetDefaultCompressionAlgorithm(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x58, value); }
	inline bool SetRotationCompressionFormat(t_structHelper inst, TEnumAsByte<enum AnimationCompressionFormat> value) { inst.WriteOffset(0x60, value); }
	inline bool SetTranslationCompressionFormat(t_structHelper inst, TEnumAsByte<enum AnimationCompressionFormat> value) { inst.WriteOffset(0x61, value); }
	inline bool SetMaxCurveError(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetAlternativeCompressionThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool ForceRecompression()
	{
		return boolField6C& 0x1;
	}
	inline bool SetForceRecompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOnlyCheckForMissingSkeletalMeshes()
	{
		return boolField6D& 0x1;
	}
	inline bool SetbOnlyCheckForMissingSkeletalMeshes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceBelowThreshold()
	{
		return boolField6E& 0x1;
	}
	inline bool SetbForceBelowThreshold(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFirstRecompressUsingCurrentOrDefault()
	{
		return boolField6F& 0x1;
	}
	inline bool SetbFirstRecompressUsingCurrentOrDefault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRaiseMaxErrorToExisting()
	{
		return boolField70& 0x1;
	}
	inline bool SetbRaiseMaxErrorToExisting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTryFixedBitwiseCompression()
	{
		return boolField71& 0x1;
	}
	inline bool SetbTryFixedBitwiseCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x71, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTryPerTrackBitwiseCompression()
	{
		return boolField72& 0x1;
	}
	inline bool SetbTryPerTrackBitwiseCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x72, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTryLinearKeyRemovalCompression()
	{
		return boolField73& 0x1;
	}
	inline bool SetbTryLinearKeyRemovalCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x73, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTryIntervalKeyRemoval()
	{
		return boolField74& 0x1;
	}
	inline bool SetbTryIntervalKeyRemoval(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePerformanceLog()
	{
		return boolField75& 0x1;
	}
	inline bool SetbEnablePerformanceLog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x75, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStripAnimationDataOnDedicatedServer()
	{
		return boolField76& 0x1;
	}
	inline bool SetbStripAnimationDataOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x76, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimationSettings = sizeof(UAnimationSettings); // 120
    static_assert(sizeof(UAnimationSettings) == 0x78, "Size of UAnimationSettings is not correct.");
	auto constexpr UAnimationSettings_CompressCommandletVersion_Offset = offsetof(UAnimationSettings, CompressCommandletVersion);
	static_assert(UAnimationSettings_CompressCommandletVersion_Offset == 0x40, "UAnimationSettings::CompressCommandletVersion offset is not 40");
	auto constexpr UAnimationSettings_KeyEndEffectorsMatchNameArray_Offset = offsetof(UAnimationSettings, KeyEndEffectorsMatchNameArray);
	static_assert(UAnimationSettings_KeyEndEffectorsMatchNameArray_Offset == 0x48, "UAnimationSettings::KeyEndEffectorsMatchNameArray offset is not 48");
	auto constexpr UAnimationSettings_DefaultCompressionAlgorithm_Offset = offsetof(UAnimationSettings, DefaultCompressionAlgorithm);
	static_assert(UAnimationSettings_DefaultCompressionAlgorithm_Offset == 0x58, "UAnimationSettings::DefaultCompressionAlgorithm offset is not 58");
	auto constexpr UAnimationSettings_RotationCompressionFormat_Offset = offsetof(UAnimationSettings, RotationCompressionFormat);
	static_assert(UAnimationSettings_RotationCompressionFormat_Offset == 0x60, "UAnimationSettings::RotationCompressionFormat offset is not 60");
	auto constexpr UAnimationSettings_TranslationCompressionFormat_Offset = offsetof(UAnimationSettings, TranslationCompressionFormat);
	static_assert(UAnimationSettings_TranslationCompressionFormat_Offset == 0x61, "UAnimationSettings::TranslationCompressionFormat offset is not 61");
	auto constexpr UAnimationSettings_MaxCurveError_Offset = offsetof(UAnimationSettings, MaxCurveError);
	static_assert(UAnimationSettings_MaxCurveError_Offset == 0x64, "UAnimationSettings::MaxCurveError offset is not 64");
	auto constexpr UAnimationSettings_AlternativeCompressionThreshold_Offset = offsetof(UAnimationSettings, AlternativeCompressionThreshold);
	static_assert(UAnimationSettings_AlternativeCompressionThreshold_Offset == 0x68, "UAnimationSettings::AlternativeCompressionThreshold offset is not 68");
	auto constexpr UAnimationSettings_boolField6C_Offset = offsetof(UAnimationSettings, boolField6C);
	static_assert(UAnimationSettings_boolField6C_Offset == 0x6c, "UAnimationSettings::boolField6C offset is not 6c");
	auto constexpr UAnimationSettings_boolField6D_Offset = offsetof(UAnimationSettings, boolField6D);
	static_assert(UAnimationSettings_boolField6D_Offset == 0x6d, "UAnimationSettings::boolField6D offset is not 6d");
	auto constexpr UAnimationSettings_boolField6E_Offset = offsetof(UAnimationSettings, boolField6E);
	static_assert(UAnimationSettings_boolField6E_Offset == 0x6e, "UAnimationSettings::boolField6E offset is not 6e");
	auto constexpr UAnimationSettings_boolField6F_Offset = offsetof(UAnimationSettings, boolField6F);
	static_assert(UAnimationSettings_boolField6F_Offset == 0x6f, "UAnimationSettings::boolField6F offset is not 6f");
	auto constexpr UAnimationSettings_boolField70_Offset = offsetof(UAnimationSettings, boolField70);
	static_assert(UAnimationSettings_boolField70_Offset == 0x70, "UAnimationSettings::boolField70 offset is not 70");
	auto constexpr UAnimationSettings_boolField71_Offset = offsetof(UAnimationSettings, boolField71);
	static_assert(UAnimationSettings_boolField71_Offset == 0x71, "UAnimationSettings::boolField71 offset is not 71");
	auto constexpr UAnimationSettings_boolField72_Offset = offsetof(UAnimationSettings, boolField72);
	static_assert(UAnimationSettings_boolField72_Offset == 0x72, "UAnimationSettings::boolField72 offset is not 72");
	auto constexpr UAnimationSettings_boolField73_Offset = offsetof(UAnimationSettings, boolField73);
	static_assert(UAnimationSettings_boolField73_Offset == 0x73, "UAnimationSettings::boolField73 offset is not 73");
	auto constexpr UAnimationSettings_boolField74_Offset = offsetof(UAnimationSettings, boolField74);
	static_assert(UAnimationSettings_boolField74_Offset == 0x74, "UAnimationSettings::boolField74 offset is not 74");
	auto constexpr UAnimationSettings_boolField75_Offset = offsetof(UAnimationSettings, boolField75);
	static_assert(UAnimationSettings_boolField75_Offset == 0x75, "UAnimationSettings::boolField75 offset is not 75");
	auto constexpr UAnimationSettings_boolField76_Offset = offsetof(UAnimationSettings, boolField76);
	static_assert(UAnimationSettings_boolField76_Offset == 0x76, "UAnimationSettings::boolField76 offset is not 76");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
