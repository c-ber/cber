#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCircleElement2D // Size: 0xC
{
public:
    FVector2D Center; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.CircleElement2D.Center */
    float Radius; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.CircleElement2D.Radius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCircleElement2D = sizeof(FCircleElement2D); // 12
    static_assert(sizeof(FCircleElement2D) == 0xC, "Size of FCircleElement2D is not correct.");
	auto constexpr FCircleElement2D_Center_Offset = offsetof(FCircleElement2D, Center);
	static_assert(FCircleElement2D_Center_Offset == 0x0, "FCircleElement2D::Center offset is not 0");
	auto constexpr FCircleElement2D_Radius_Offset = offsetof(FCircleElement2D, Radius);
	static_assert(FCircleElement2D_Radius_Offset == 0x8, "FCircleElement2D::Radius offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
