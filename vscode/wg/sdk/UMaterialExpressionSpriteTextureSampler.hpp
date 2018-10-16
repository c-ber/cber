#pragma once
#include "UMaterialExpressionTextureSampleParameter2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSpriteTextureSampler // Size: 0x1E0
	: public UMaterialExpressionTextureSampleParameter2D // Size: 0x1C0
{
private:
	typedef UMaterialExpressionSpriteTextureSampler t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2022); // id32("Class Paper2D.MaterialExpressionSpriteTextureSampler")
		return ptr;
	}
	uint8_t boolField1C0;
	uint8_t UnknownData1C1[0x3];
	int32_t AdditionalSlotIndex; /* Ofs: 0x1C4 Size: 0x4 - IntProperty Paper2D.MaterialExpressionSpriteTextureSampler.AdditionalSlotIndex */
	FText SlotDisplayName; /* Ofs: 0x1C8 Size: 0x18 - TextProperty Paper2D.MaterialExpressionSpriteTextureSampler.SlotDisplayName */


	inline bool bSampleAdditionalTextures()
	{
		return boolField1C0& 0x1;
	}
	inline bool SetbSampleAdditionalTextures(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAdditionalSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1C4, value); }
	inline bool SetSlotDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x1C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSpriteTextureSampler = sizeof(UMaterialExpressionSpriteTextureSampler); // 480
    static_assert(sizeof(UMaterialExpressionSpriteTextureSampler) == 0x1E0, "Size of UMaterialExpressionSpriteTextureSampler is not correct.");
	auto constexpr UMaterialExpressionSpriteTextureSampler_boolField1C0_Offset = offsetof(UMaterialExpressionSpriteTextureSampler, boolField1C0);
	static_assert(UMaterialExpressionSpriteTextureSampler_boolField1C0_Offset == 0x1c0, "UMaterialExpressionSpriteTextureSampler::boolField1C0 offset is not 1c0");
	auto constexpr UMaterialExpressionSpriteTextureSampler_AdditionalSlotIndex_Offset = offsetof(UMaterialExpressionSpriteTextureSampler, AdditionalSlotIndex);
	static_assert(UMaterialExpressionSpriteTextureSampler_AdditionalSlotIndex_Offset == 0x1c4, "UMaterialExpressionSpriteTextureSampler::AdditionalSlotIndex offset is not 1c4");
	auto constexpr UMaterialExpressionSpriteTextureSampler_SlotDisplayName_Offset = offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName);
	static_assert(UMaterialExpressionSpriteTextureSampler_SlotDisplayName_Offset == 0x1c8, "UMaterialExpressionSpriteTextureSampler::SlotDisplayName offset is not 1c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
