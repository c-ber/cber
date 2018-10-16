#pragma once
#include "UCoherentUIGTBaseComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTComponent // Size: 0x530
	: public UCoherentUIGTBaseComponent // Size: 0x500
{
private:
	typedef UCoherentUIGTComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2072); // id32("Class CoherentUIGTPlugin.CoherentUIGTComponent")
		return ptr;
	}
//	FString URL; /* Ofs: 0x4F8 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTComponent.URL */
	uint8_t UnknownData500[0x8];
	int32_t Width; /* Ofs: 0x508 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTComponent.Width */
	int32_t Height; /* Ofs: 0x50C Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTComponent.Height */
	uint8_t boolField510;
	uint8_t UnknownData511[0x3];
	float ClickThroughAlphaThreshold; /* Ofs: 0x514 Size: 0x4 - FloatProperty CoherentUIGTPlugin.CoherentUIGTComponent.ClickThroughAlphaThreshold */
	uint8_t boolField518;
	uint8_t UnknownData519[0x17];


//	inline bool SetURL(t_structHelper inst, FString value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x508, value); }
	inline bool SetHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50C, value); }
	inline bool ManualTexture()
	{
		return boolField510& 0x1;
	}
	inline bool SetManualTexture(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x510, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetClickThroughAlphaThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool Transparent()
	{
		return boolField518& 0x1;
	}
	inline bool SetTransparent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x518, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTComponent = sizeof(UCoherentUIGTComponent); // 1328
    static_assert(sizeof(UCoherentUIGTComponent) == 0x530, "Size of UCoherentUIGTComponent is not correct.");
//	auto constexpr UCoherentUIGTComponent_URL_Offset = offsetof(UCoherentUIGTComponent, URL);
//	static_assert(UCoherentUIGTComponent_URL_Offset == 0x4f8, "UCoherentUIGTComponent::URL offset is not 4f8");
	auto constexpr UCoherentUIGTComponent_Width_Offset = offsetof(UCoherentUIGTComponent, Width);
	static_assert(UCoherentUIGTComponent_Width_Offset == 0x508, "UCoherentUIGTComponent::Width offset is not 508");
	auto constexpr UCoherentUIGTComponent_Height_Offset = offsetof(UCoherentUIGTComponent, Height);
	static_assert(UCoherentUIGTComponent_Height_Offset == 0x50c, "UCoherentUIGTComponent::Height offset is not 50c");
	auto constexpr UCoherentUIGTComponent_boolField510_Offset = offsetof(UCoherentUIGTComponent, boolField510);
	static_assert(UCoherentUIGTComponent_boolField510_Offset == 0x510, "UCoherentUIGTComponent::boolField510 offset is not 510");
	auto constexpr UCoherentUIGTComponent_ClickThroughAlphaThreshold_Offset = offsetof(UCoherentUIGTComponent, ClickThroughAlphaThreshold);
	static_assert(UCoherentUIGTComponent_ClickThroughAlphaThreshold_Offset == 0x514, "UCoherentUIGTComponent::ClickThroughAlphaThreshold offset is not 514");
	auto constexpr UCoherentUIGTComponent_boolField518_Offset = offsetof(UCoherentUIGTComponent, boolField518);
	static_assert(UCoherentUIGTComponent_boolField518_Offset == 0x518, "UCoherentUIGTComponent::boolField518 offset is not 518");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
