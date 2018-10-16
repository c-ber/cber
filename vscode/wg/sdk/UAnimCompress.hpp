#pragma once
#include "AnimationCompressionFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimCompress // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UAnimCompress t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(260); // id32("Class Engine.AnimCompress")
		return ptr;
	}
	FString Description; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.AnimCompress.Description */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	TEnumAsByte<enum AnimationCompressionFormat> TranslationCompressionFormat; /* Ofs: 0x44 Size: 0x1 - ByteProperty Engine.AnimCompress.TranslationCompressionFormat */
	TEnumAsByte<enum AnimationCompressionFormat> RotationCompressionFormat; /* Ofs: 0x45 Size: 0x1 - ByteProperty Engine.AnimCompress.RotationCompressionFormat */
	TEnumAsByte<enum AnimationCompressionFormat> ScaleCompressionFormat; /* Ofs: 0x46 Size: 0x1 - ByteProperty Engine.AnimCompress.ScaleCompressionFormat */
	uint8_t UnknownData47[0x1];
	float MaxCurveError; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.AnimCompress.MaxCurveError */
	uint8_t UnknownData4C[0x4];


	inline bool SetDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool bNeedsSkeleton()
	{
		return boolField40& 0x1;
	}
	inline bool SetbNeedsSkeleton(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTranslationCompressionFormat(t_structHelper inst, TEnumAsByte<enum AnimationCompressionFormat> value) { inst.WriteOffset(0x44, value); }
	inline bool SetRotationCompressionFormat(t_structHelper inst, TEnumAsByte<enum AnimationCompressionFormat> value) { inst.WriteOffset(0x45, value); }
	inline bool SetScaleCompressionFormat(t_structHelper inst, TEnumAsByte<enum AnimationCompressionFormat> value) { inst.WriteOffset(0x46, value); }
	inline bool SetMaxCurveError(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimCompress = sizeof(UAnimCompress); // 80
    static_assert(sizeof(UAnimCompress) == 0x50, "Size of UAnimCompress is not correct.");
	auto constexpr UAnimCompress_Description_Offset = offsetof(UAnimCompress, Description);
	static_assert(UAnimCompress_Description_Offset == 0x30, "UAnimCompress::Description offset is not 30");
	auto constexpr UAnimCompress_boolField40_Offset = offsetof(UAnimCompress, boolField40);
	static_assert(UAnimCompress_boolField40_Offset == 0x40, "UAnimCompress::boolField40 offset is not 40");
	auto constexpr UAnimCompress_TranslationCompressionFormat_Offset = offsetof(UAnimCompress, TranslationCompressionFormat);
	static_assert(UAnimCompress_TranslationCompressionFormat_Offset == 0x44, "UAnimCompress::TranslationCompressionFormat offset is not 44");
	auto constexpr UAnimCompress_RotationCompressionFormat_Offset = offsetof(UAnimCompress, RotationCompressionFormat);
	static_assert(UAnimCompress_RotationCompressionFormat_Offset == 0x45, "UAnimCompress::RotationCompressionFormat offset is not 45");
	auto constexpr UAnimCompress_ScaleCompressionFormat_Offset = offsetof(UAnimCompress, ScaleCompressionFormat);
	static_assert(UAnimCompress_ScaleCompressionFormat_Offset == 0x46, "UAnimCompress::ScaleCompressionFormat offset is not 46");
	auto constexpr UAnimCompress_MaxCurveError_Offset = offsetof(UAnimCompress, MaxCurveError);
	static_assert(UAnimCompress_MaxCurveError_Offset == 0x48, "UAnimCompress::MaxCurveError offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
