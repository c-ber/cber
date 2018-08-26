#pragma once
#include "UTexture2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureLightProfile // Size: 0x120
	: public UTexture2D // Size: 0x118
{
private:
	typedef UTextureLightProfile t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1242); // id32("Class Engine.TextureLightProfile")
		return ptr;
	}
	float Brightness; /* Ofs: 0x118 Size: 0x4 - FloatProperty Engine.TextureLightProfile.Brightness */
	float TextureMultiplier; /* Ofs: 0x11C Size: 0x4 - FloatProperty Engine.TextureLightProfile.TextureMultiplier */


	inline bool SetBrightness(t_structHelper inst, float value) { inst.WriteOffset(0x118, value); }
	inline bool SetTextureMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x11C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureLightProfile = sizeof(UTextureLightProfile); // 288
    static_assert(sizeof(UTextureLightProfile) == 0x120, "Size of UTextureLightProfile is not correct.");
	auto constexpr UTextureLightProfile_Brightness_Offset = offsetof(UTextureLightProfile, Brightness);
	static_assert(UTextureLightProfile_Brightness_Offset == 0x118, "UTextureLightProfile::Brightness offset is not 118");
	auto constexpr UTextureLightProfile_TextureMultiplier_Offset = offsetof(UTextureLightProfile, TextureMultiplier);
	static_assert(UTextureLightProfile_TextureMultiplier_Offset == 0x11c, "UTextureLightProfile::TextureMultiplier offset is not 11c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
