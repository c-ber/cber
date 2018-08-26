#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDrawToRenderTargetContext // Size: 0x10
{
public:
    ExternalPtr<struct UTextureRenderTarget2D> RenderTarget; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.DrawToRenderTargetContext.RenderTarget */
    uint8_t UnknownData8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDrawToRenderTargetContext = sizeof(FDrawToRenderTargetContext); // 16
    static_assert(sizeof(FDrawToRenderTargetContext) == 0x10, "Size of FDrawToRenderTargetContext is not correct.");
	auto constexpr FDrawToRenderTargetContext_RenderTarget_Offset = offsetof(FDrawToRenderTargetContext, RenderTarget);
	static_assert(FDrawToRenderTargetContext_RenderTarget_Offset == 0x0, "FDrawToRenderTargetContext::RenderTarget offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
