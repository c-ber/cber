#pragma once
#include "UTexture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextureRenderTarget // Size: 0xD8
	: public UTexture // Size: 0xD0
{
private:
	typedef UTextureRenderTarget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1245); // id32("Class Engine.TextureRenderTarget")
		return ptr;
	}
	float TargetGamma; /* Ofs: 0xD0 Size: 0x4 - FloatProperty Engine.TextureRenderTarget.TargetGamma */
	uint8_t UnknownDataD4[0x4];


	inline bool SetTargetGamma(t_structHelper inst, float value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextureRenderTarget = sizeof(UTextureRenderTarget); // 216
    static_assert(sizeof(UTextureRenderTarget) == 0xD8, "Size of UTextureRenderTarget is not correct.");
	auto constexpr UTextureRenderTarget_TargetGamma_Offset = offsetof(UTextureRenderTarget, TargetGamma);
	static_assert(UTextureRenderTarget_TargetGamma_Offset == 0xd0, "UTextureRenderTarget::TargetGamma offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
