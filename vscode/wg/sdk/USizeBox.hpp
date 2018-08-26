#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USizeBox // Size: 0x178
	: public UContentWidget // Size: 0x148
{
private:
	typedef USizeBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(505); // id32("Class UMG.SizeBox")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t UnknownData149[0x3];
	float WidthOverride; /* Ofs: 0x14C Size: 0x4 - FloatProperty UMG.SizeBox.WidthOverride */
	float HeightOverride; /* Ofs: 0x150 Size: 0x4 - FloatProperty UMG.SizeBox.HeightOverride */
	float MinDesiredWidth; /* Ofs: 0x154 Size: 0x4 - FloatProperty UMG.SizeBox.MinDesiredWidth */
	float MinDesiredHeight; /* Ofs: 0x158 Size: 0x4 - FloatProperty UMG.SizeBox.MinDesiredHeight */
	float MaxDesiredWidth; /* Ofs: 0x15C Size: 0x4 - FloatProperty UMG.SizeBox.MaxDesiredWidth */
	float MaxDesiredHeight; /* Ofs: 0x160 Size: 0x4 - FloatProperty UMG.SizeBox.MaxDesiredHeight */
	float MaxAspectRatio; /* Ofs: 0x164 Size: 0x4 - FloatProperty UMG.SizeBox.MaxAspectRatio */
	uint8_t UnknownData168[0x10];


	inline bool bOverride_WidthOverride()
	{
		return boolField148& 0x1;
	}
	inline bool SetbOverride_WidthOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverride_HeightOverride()
	{
		return boolField148& 0x2;
	}
	inline bool SetbOverride_HeightOverride(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bOverride_MinDesiredWidth()
	{
		return boolField148& 0x4;
	}
	inline bool SetbOverride_MinDesiredWidth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOverride_MinDesiredHeight()
	{
		return boolField148& 0x8;
	}
	inline bool SetbOverride_MinDesiredHeight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bOverride_MaxDesiredWidth()
	{
		return boolField148& 0x10;
	}
	inline bool SetbOverride_MaxDesiredWidth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bOverride_MaxDesiredHeight()
	{
		return boolField148& 0x20;
	}
	inline bool SetbOverride_MaxDesiredHeight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bOverride_MaxAspectRatio()
	{
		return boolField148& 0x40;
	}
	inline bool SetbOverride_MaxAspectRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetWidthOverride(t_structHelper inst, float value) { inst.WriteOffset(0x14C, value); }
	inline bool SetHeightOverride(t_structHelper inst, float value) { inst.WriteOffset(0x150, value); }
	inline bool SetMinDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0x154, value); }
	inline bool SetMinDesiredHeight(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
	inline bool SetMaxDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0x15C, value); }
	inline bool SetMaxDesiredHeight(t_structHelper inst, float value) { inst.WriteOffset(0x160, value); }
	inline bool SetMaxAspectRatio(t_structHelper inst, float value) { inst.WriteOffset(0x164, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSizeBox = sizeof(USizeBox); // 376
    static_assert(sizeof(USizeBox) == 0x178, "Size of USizeBox is not correct.");
	auto constexpr USizeBox_boolField148_Offset = offsetof(USizeBox, boolField148);
	static_assert(USizeBox_boolField148_Offset == 0x148, "USizeBox::boolField148 offset is not 148");
	auto constexpr USizeBox_WidthOverride_Offset = offsetof(USizeBox, WidthOverride);
	static_assert(USizeBox_WidthOverride_Offset == 0x14c, "USizeBox::WidthOverride offset is not 14c");
	auto constexpr USizeBox_HeightOverride_Offset = offsetof(USizeBox, HeightOverride);
	static_assert(USizeBox_HeightOverride_Offset == 0x150, "USizeBox::HeightOverride offset is not 150");
	auto constexpr USizeBox_MinDesiredWidth_Offset = offsetof(USizeBox, MinDesiredWidth);
	static_assert(USizeBox_MinDesiredWidth_Offset == 0x154, "USizeBox::MinDesiredWidth offset is not 154");
	auto constexpr USizeBox_MinDesiredHeight_Offset = offsetof(USizeBox, MinDesiredHeight);
	static_assert(USizeBox_MinDesiredHeight_Offset == 0x158, "USizeBox::MinDesiredHeight offset is not 158");
	auto constexpr USizeBox_MaxDesiredWidth_Offset = offsetof(USizeBox, MaxDesiredWidth);
	static_assert(USizeBox_MaxDesiredWidth_Offset == 0x15c, "USizeBox::MaxDesiredWidth offset is not 15c");
	auto constexpr USizeBox_MaxDesiredHeight_Offset = offsetof(USizeBox, MaxDesiredHeight);
	static_assert(USizeBox_MaxDesiredHeight_Offset == 0x160, "USizeBox::MaxDesiredHeight offset is not 160");
	auto constexpr USizeBox_MaxAspectRatio_Offset = offsetof(USizeBox, MaxAspectRatio);
	static_assert(USizeBox_MaxAspectRatio_Offset == 0x164, "USizeBox::MaxAspectRatio offset is not 164");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
