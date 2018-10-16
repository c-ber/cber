#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWidgetTransform // Size: 0x1C
{
public:
    FVector2D Translation; /* Ofs: 0x0 Size: 0x8 StructProperty UMG.WidgetTransform.Translation */
    FVector2D Scale; /* Ofs: 0x8 Size: 0x8 StructProperty UMG.WidgetTransform.Scale */
    FVector2D Shear; /* Ofs: 0x10 Size: 0x8 StructProperty UMG.WidgetTransform.Shear */
    float Angle; /* Ofs: 0x18 Size: 0x4 FloatProperty UMG.WidgetTransform.Angle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWidgetTransform = sizeof(FWidgetTransform); // 28
    static_assert(sizeof(FWidgetTransform) == 0x1C, "Size of FWidgetTransform is not correct.");
	auto constexpr FWidgetTransform_Translation_Offset = offsetof(FWidgetTransform, Translation);
	static_assert(FWidgetTransform_Translation_Offset == 0x0, "FWidgetTransform::Translation offset is not 0");
	auto constexpr FWidgetTransform_Scale_Offset = offsetof(FWidgetTransform, Scale);
	static_assert(FWidgetTransform_Scale_Offset == 0x8, "FWidgetTransform::Scale offset is not 8");
	auto constexpr FWidgetTransform_Shear_Offset = offsetof(FWidgetTransform, Shear);
	static_assert(FWidgetTransform_Shear_Offset == 0x10, "FWidgetTransform::Shear offset is not 10");
	auto constexpr FWidgetTransform_Angle_Offset = offsetof(FWidgetTransform, Angle);
	static_assert(FWidgetTransform_Angle_Offset == 0x18, "FWidgetTransform::Angle offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
