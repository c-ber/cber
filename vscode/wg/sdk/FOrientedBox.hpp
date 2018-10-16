#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOrientedBox // Size: 0x3C
{
public:
    FVector Center; /* Ofs: 0x0 Size: 0xC StructProperty CoreUObject.OrientedBox.Center */
    FVector AxisX; /* Ofs: 0xC Size: 0xC StructProperty CoreUObject.OrientedBox.AxisX */
    FVector AxisY; /* Ofs: 0x18 Size: 0xC StructProperty CoreUObject.OrientedBox.AxisY */
    FVector AxisZ; /* Ofs: 0x24 Size: 0xC StructProperty CoreUObject.OrientedBox.AxisZ */
    float ExtentX; /* Ofs: 0x30 Size: 0x4 FloatProperty CoreUObject.OrientedBox.ExtentX */
    float ExtentY; /* Ofs: 0x34 Size: 0x4 FloatProperty CoreUObject.OrientedBox.ExtentY */
    float ExtentZ; /* Ofs: 0x38 Size: 0x4 FloatProperty CoreUObject.OrientedBox.ExtentZ */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOrientedBox = sizeof(FOrientedBox); // 60
    static_assert(sizeof(FOrientedBox) == 0x3C, "Size of FOrientedBox is not correct.");
	auto constexpr FOrientedBox_Center_Offset = offsetof(FOrientedBox, Center);
	static_assert(FOrientedBox_Center_Offset == 0x0, "FOrientedBox::Center offset is not 0");
	auto constexpr FOrientedBox_AxisX_Offset = offsetof(FOrientedBox, AxisX);
	static_assert(FOrientedBox_AxisX_Offset == 0xc, "FOrientedBox::AxisX offset is not c");
	auto constexpr FOrientedBox_AxisY_Offset = offsetof(FOrientedBox, AxisY);
	static_assert(FOrientedBox_AxisY_Offset == 0x18, "FOrientedBox::AxisY offset is not 18");
	auto constexpr FOrientedBox_AxisZ_Offset = offsetof(FOrientedBox, AxisZ);
	static_assert(FOrientedBox_AxisZ_Offset == 0x24, "FOrientedBox::AxisZ offset is not 24");
	auto constexpr FOrientedBox_ExtentX_Offset = offsetof(FOrientedBox, ExtentX);
	static_assert(FOrientedBox_ExtentX_Offset == 0x30, "FOrientedBox::ExtentX offset is not 30");
	auto constexpr FOrientedBox_ExtentY_Offset = offsetof(FOrientedBox, ExtentY);
	static_assert(FOrientedBox_ExtentY_Offset == 0x34, "FOrientedBox::ExtentY offset is not 34");
	auto constexpr FOrientedBox_ExtentZ_Offset = offsetof(FOrientedBox, ExtentZ);
	static_assert(FOrientedBox_ExtentZ_Offset == 0x38, "FOrientedBox::ExtentZ offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
