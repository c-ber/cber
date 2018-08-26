#pragma once
#include "UContentWidget.hpp"
#include "EStretch.hpp"
#include "EStretchDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScaleBox // Size: 0x168
	: public UContentWidget // Size: 0x148
{
private:
	typedef UScaleBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(504); // id32("Class UMG.ScaleBox")
		return ptr;
	}
	TEnumAsByte<enum EStretch> Stretch; /* Ofs: 0x148 Size: 0x1 - ByteProperty UMG.ScaleBox.Stretch */
	TEnumAsByte<enum EStretchDirection> StretchDirection; /* Ofs: 0x149 Size: 0x1 - ByteProperty UMG.ScaleBox.StretchDirection */
	uint8_t UnknownData14A[0x2];
	float UserSpecifiedScale; /* Ofs: 0x14C Size: 0x4 - FloatProperty UMG.ScaleBox.UserSpecifiedScale */
	uint8_t boolField150;
	uint8_t UnknownData151[0x17];


	inline bool SetStretch(t_structHelper inst, TEnumAsByte<enum EStretch> value) { inst.WriteOffset(0x148, value); }
	inline bool SetStretchDirection(t_structHelper inst, TEnumAsByte<enum EStretchDirection> value) { inst.WriteOffset(0x149, value); }
	inline bool SetUserSpecifiedScale(t_structHelper inst, float value) { inst.WriteOffset(0x14C, value); }
	inline bool IgnoreInheritedScale()
	{
		return boolField150& 0x1;
	}
	inline bool SetIgnoreInheritedScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x150, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScaleBox = sizeof(UScaleBox); // 360
    static_assert(sizeof(UScaleBox) == 0x168, "Size of UScaleBox is not correct.");
	auto constexpr UScaleBox_Stretch_Offset = offsetof(UScaleBox, Stretch);
	static_assert(UScaleBox_Stretch_Offset == 0x148, "UScaleBox::Stretch offset is not 148");
	auto constexpr UScaleBox_StretchDirection_Offset = offsetof(UScaleBox, StretchDirection);
	static_assert(UScaleBox_StretchDirection_Offset == 0x149, "UScaleBox::StretchDirection offset is not 149");
	auto constexpr UScaleBox_UserSpecifiedScale_Offset = offsetof(UScaleBox, UserSpecifiedScale);
	static_assert(UScaleBox_UserSpecifiedScale_Offset == 0x14c, "UScaleBox::UserSpecifiedScale offset is not 14c");
	auto constexpr UScaleBox_boolField150_Offset = offsetof(UScaleBox, boolField150);
	static_assert(UScaleBox_boolField150_Offset == 0x150, "UScaleBox::boolField150 offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
