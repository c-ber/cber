#pragma once
#include "UPrimitiveComponent.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDrawFrustumComponent // Size: 0x910
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UDrawFrustumComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(202); // id32("Class Engine.DrawFrustumComponent")
		return ptr;
	}
//	FColor FrustumColor; /* Ofs: 0x8E8 Size: 0x4 - StructProperty Engine.DrawFrustumComponent.FrustumColor */
//	float FrustumAngle; /* Ofs: 0x8EC Size: 0x4 - FloatProperty Engine.DrawFrustumComponent.FrustumAngle */
	float FrustumAspectRatio; /* Ofs: 0x8F0 Size: 0x4 - FloatProperty Engine.DrawFrustumComponent.FrustumAspectRatio */
	float FrustumStartDist; /* Ofs: 0x8F4 Size: 0x4 - FloatProperty Engine.DrawFrustumComponent.FrustumStartDist */
	float FrustumEndDist; /* Ofs: 0x8F8 Size: 0x4 - FloatProperty Engine.DrawFrustumComponent.FrustumEndDist */
	uint8_t UnknownData8FC[0x4];
	ExternalPtr<struct UTexture> Texture; /* Ofs: 0x900 Size: 0x8 - ObjectProperty Engine.DrawFrustumComponent.Texture */
	uint8_t UnknownData908[0x8];


//	inline bool SetFrustumColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x8E8, value); }
//	inline bool SetFrustumAngle(t_structHelper inst, float value) { inst.WriteOffset(0x8EC, value); }
	inline bool SetFrustumAspectRatio(t_structHelper inst, float value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetFrustumStartDist(t_structHelper inst, float value) { inst.WriteOffset(0x8F4, value); }
	inline bool SetFrustumEndDist(t_structHelper inst, float value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x900, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDrawFrustumComponent = sizeof(UDrawFrustumComponent); // 2320
    static_assert(sizeof(UDrawFrustumComponent) == 0x910, "Size of UDrawFrustumComponent is not correct.");
//	auto constexpr UDrawFrustumComponent_FrustumColor_Offset = offsetof(UDrawFrustumComponent, FrustumColor);
//	static_assert(UDrawFrustumComponent_FrustumColor_Offset == 0x8e8, "UDrawFrustumComponent::FrustumColor offset is not 8e8");
//	auto constexpr UDrawFrustumComponent_FrustumAngle_Offset = offsetof(UDrawFrustumComponent, FrustumAngle);
//	static_assert(UDrawFrustumComponent_FrustumAngle_Offset == 0x8ec, "UDrawFrustumComponent::FrustumAngle offset is not 8ec");
	auto constexpr UDrawFrustumComponent_FrustumAspectRatio_Offset = offsetof(UDrawFrustumComponent, FrustumAspectRatio);
	static_assert(UDrawFrustumComponent_FrustumAspectRatio_Offset == 0x8f0, "UDrawFrustumComponent::FrustumAspectRatio offset is not 8f0");
	auto constexpr UDrawFrustumComponent_FrustumStartDist_Offset = offsetof(UDrawFrustumComponent, FrustumStartDist);
	static_assert(UDrawFrustumComponent_FrustumStartDist_Offset == 0x8f4, "UDrawFrustumComponent::FrustumStartDist offset is not 8f4");
	auto constexpr UDrawFrustumComponent_FrustumEndDist_Offset = offsetof(UDrawFrustumComponent, FrustumEndDist);
	static_assert(UDrawFrustumComponent_FrustumEndDist_Offset == 0x8f8, "UDrawFrustumComponent::FrustumEndDist offset is not 8f8");
	auto constexpr UDrawFrustumComponent_Texture_Offset = offsetof(UDrawFrustumComponent, Texture);
	static_assert(UDrawFrustumComponent_Texture_Offset == 0x900, "UDrawFrustumComponent::Texture offset is not 900");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
