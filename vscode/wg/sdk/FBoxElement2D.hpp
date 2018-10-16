#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoxElement2D // Size: 0x14
{
public:
    FVector2D Center; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.BoxElement2D.Center */
    float Width; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.BoxElement2D.Width */
    float Height; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.BoxElement2D.Height */
    float Angle; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.BoxElement2D.Angle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoxElement2D = sizeof(FBoxElement2D); // 20
    static_assert(sizeof(FBoxElement2D) == 0x14, "Size of FBoxElement2D is not correct.");
	auto constexpr FBoxElement2D_Center_Offset = offsetof(FBoxElement2D, Center);
	static_assert(FBoxElement2D_Center_Offset == 0x0, "FBoxElement2D::Center offset is not 0");
	auto constexpr FBoxElement2D_Width_Offset = offsetof(FBoxElement2D, Width);
	static_assert(FBoxElement2D_Width_Offset == 0x8, "FBoxElement2D::Width offset is not 8");
	auto constexpr FBoxElement2D_Height_Offset = offsetof(FBoxElement2D, Height);
	static_assert(FBoxElement2D_Height_Offset == 0xc, "FBoxElement2D::Height offset is not c");
	auto constexpr FBoxElement2D_Angle_Offset = offsetof(FBoxElement2D, Angle);
	static_assert(FBoxElement2D_Angle_Offset == 0x10, "FBoxElement2D::Angle offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
