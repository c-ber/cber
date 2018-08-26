#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URetainerBox // Size: 0x178
	: public UContentWidget // Size: 0x148
{
private:
	typedef URetainerBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(502); // id32("Class UMG.RetainerBox")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t UnknownData149[0x3];
	int32_t Phase; /* Ofs: 0x14C Size: 0x4 - IntProperty UMG.RetainerBox.Phase */
	int32_t PhaseCount; /* Ofs: 0x150 Size: 0x4 - IntProperty UMG.RetainerBox.PhaseCount */
	uint8_t UnknownData154[0x4];
	ExternalPtr<struct UMaterialInterface> EffectMaterial; /* Ofs: 0x158 Size: 0x8 - ObjectProperty UMG.RetainerBox.EffectMaterial */
	FName TextureParameter; /* Ofs: 0x160 Size: 0x8 - NameProperty UMG.RetainerBox.TextureParameter */
	uint8_t UnknownData168[0x10];


	inline bool RenderOnPhase()
	{
		return boolField148& 0x1;
	}
	inline bool SetRenderOnPhase(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPhase(t_structHelper inst, int32_t value) { inst.WriteOffset(0x14C, value); }
	inline bool SetPhaseCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x150, value); }
	inline bool SetEffectMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x158, value); }
	inline bool SetTextureParameter(t_structHelper inst, FName value) { inst.WriteOffset(0x160, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURetainerBox = sizeof(URetainerBox); // 376
    static_assert(sizeof(URetainerBox) == 0x178, "Size of URetainerBox is not correct.");
	auto constexpr URetainerBox_boolField148_Offset = offsetof(URetainerBox, boolField148);
	static_assert(URetainerBox_boolField148_Offset == 0x148, "URetainerBox::boolField148 offset is not 148");
	auto constexpr URetainerBox_Phase_Offset = offsetof(URetainerBox, Phase);
	static_assert(URetainerBox_Phase_Offset == 0x14c, "URetainerBox::Phase offset is not 14c");
	auto constexpr URetainerBox_PhaseCount_Offset = offsetof(URetainerBox, PhaseCount);
	static_assert(URetainerBox_PhaseCount_Offset == 0x150, "URetainerBox::PhaseCount offset is not 150");
	auto constexpr URetainerBox_EffectMaterial_Offset = offsetof(URetainerBox, EffectMaterial);
	static_assert(URetainerBox_EffectMaterial_Offset == 0x158, "URetainerBox::EffectMaterial offset is not 158");
	auto constexpr URetainerBox_TextureParameter_Offset = offsetof(URetainerBox, TextureParameter);
	static_assert(URetainerBox_TextureParameter_Offset == 0x160, "URetainerBox::TextureParameter offset is not 160");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
