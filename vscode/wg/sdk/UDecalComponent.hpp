#pragma once
#include "USceneComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDecalComponent // Size: 0x510
	: public USceneComponent // Size: 0x490
{
private:
	typedef UDecalComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1819); // id32("Class Engine.DecalComponent")
		return ptr;
	}
	ExternalPtr<struct UMaterialInterface> DecalMaterial; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.DecalComponent.DecalMaterial */
	int32_t SortOrder; /* Ofs: 0x498 Size: 0x4 - IntProperty Engine.DecalComponent.SortOrder */
	float FadeScreenSize; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.DecalComponent.FadeScreenSize */
	float FadeStartDelay; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.DecalComponent.FadeStartDelay */
	float FadeDuration; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Engine.DecalComponent.FadeDuration */
	uint8_t boolField4A8;
	uint8_t UnknownData4A9[0x3];
	FVector DecalSize; /* Ofs: 0x4AC Size: 0xC - StructProperty Engine.DecalComponent.DecalSize */
	uint8_t UnknownData4B8[0x58];


	inline bool SetDecalMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x490, value); }
	inline bool SetSortOrder(t_structHelper inst, int32_t value) { inst.WriteOffset(0x498, value); }
	inline bool SetFadeScreenSize(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetFadeStartDelay(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetFadeDuration(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool bDestroyOwnerAfterFade()
	{
		return boolField4A8& 0x1;
	}
	inline bool SetbDestroyOwnerAfterFade(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDecalSize(t_structHelper inst, FVector value) { inst.WriteOffset(0x4AC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDecalComponent = sizeof(UDecalComponent); // 1296
    static_assert(sizeof(UDecalComponent) == 0x510, "Size of UDecalComponent is not correct.");
	auto constexpr UDecalComponent_DecalMaterial_Offset = offsetof(UDecalComponent, DecalMaterial);
	static_assert(UDecalComponent_DecalMaterial_Offset == 0x490, "UDecalComponent::DecalMaterial offset is not 490");
	auto constexpr UDecalComponent_SortOrder_Offset = offsetof(UDecalComponent, SortOrder);
	static_assert(UDecalComponent_SortOrder_Offset == 0x498, "UDecalComponent::SortOrder offset is not 498");
	auto constexpr UDecalComponent_FadeScreenSize_Offset = offsetof(UDecalComponent, FadeScreenSize);
	static_assert(UDecalComponent_FadeScreenSize_Offset == 0x49c, "UDecalComponent::FadeScreenSize offset is not 49c");
	auto constexpr UDecalComponent_FadeStartDelay_Offset = offsetof(UDecalComponent, FadeStartDelay);
	static_assert(UDecalComponent_FadeStartDelay_Offset == 0x4a0, "UDecalComponent::FadeStartDelay offset is not 4a0");
	auto constexpr UDecalComponent_FadeDuration_Offset = offsetof(UDecalComponent, FadeDuration);
	static_assert(UDecalComponent_FadeDuration_Offset == 0x4a4, "UDecalComponent::FadeDuration offset is not 4a4");
	auto constexpr UDecalComponent_boolField4A8_Offset = offsetof(UDecalComponent, boolField4A8);
	static_assert(UDecalComponent_boolField4A8_Offset == 0x4a8, "UDecalComponent::boolField4A8 offset is not 4a8");
	auto constexpr UDecalComponent_DecalSize_Offset = offsetof(UDecalComponent, DecalSize);
	static_assert(UDecalComponent_DecalSize_Offset == 0x4ac, "UDecalComponent::DecalSize offset is not 4ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
