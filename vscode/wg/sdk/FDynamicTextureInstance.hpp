#pragma once
#include "FStreamableTextureInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDynamicTextureInstance // Size: 0x38
 : public FStreamableTextureInstance // Size: 0x28
{
public:
    ExternalPtr<struct UTexture2D> Texture; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.DynamicTextureInstance.Texture */
    bool bAttached; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.DynamicTextureInstance.bAttached */
    uint8_t UnknownData31[0x3];
    float OriginalRadius; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.DynamicTextureInstance.OriginalRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDynamicTextureInstance = sizeof(FDynamicTextureInstance); // 56
    static_assert(sizeof(FDynamicTextureInstance) == 0x38, "Size of FDynamicTextureInstance is not correct.");
	auto constexpr FDynamicTextureInstance_Texture_Offset = offsetof(FDynamicTextureInstance, Texture);
	static_assert(FDynamicTextureInstance_Texture_Offset == 0x28, "FDynamicTextureInstance::Texture offset is not 28");
	auto constexpr FDynamicTextureInstance_OriginalRadius_Offset = offsetof(FDynamicTextureInstance, OriginalRadius);
	static_assert(FDynamicTextureInstance_OriginalRadius_Offset == 0x34, "FDynamicTextureInstance::OriginalRadius offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
