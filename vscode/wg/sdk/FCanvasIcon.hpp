#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCanvasIcon // Size: 0x18
{
public:
    ExternalPtr<struct UTexture> Texture; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.CanvasIcon.Texture */
    float U; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.CanvasIcon.U */
    float V; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.CanvasIcon.V */
    float UL; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.CanvasIcon.UL */
    float VL; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.CanvasIcon.VL */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCanvasIcon = sizeof(FCanvasIcon); // 24
    static_assert(sizeof(FCanvasIcon) == 0x18, "Size of FCanvasIcon is not correct.");
	auto constexpr FCanvasIcon_Texture_Offset = offsetof(FCanvasIcon, Texture);
	static_assert(FCanvasIcon_Texture_Offset == 0x0, "FCanvasIcon::Texture offset is not 0");
	auto constexpr FCanvasIcon_U_Offset = offsetof(FCanvasIcon, U);
	static_assert(FCanvasIcon_U_Offset == 0x8, "FCanvasIcon::U offset is not 8");
	auto constexpr FCanvasIcon_V_Offset = offsetof(FCanvasIcon, V);
	static_assert(FCanvasIcon_V_Offset == 0xc, "FCanvasIcon::V offset is not c");
	auto constexpr FCanvasIcon_UL_Offset = offsetof(FCanvasIcon, UL);
	static_assert(FCanvasIcon_UL_Offset == 0x10, "FCanvasIcon::UL offset is not 10");
	auto constexpr FCanvasIcon_VL_Offset = offsetof(FCanvasIcon, VL);
	static_assert(FCanvasIcon_VL_Offset == 0x14, "FCanvasIcon::VL offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
