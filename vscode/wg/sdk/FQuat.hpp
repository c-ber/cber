#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FQuat // Size: 0x10
{
public:
    float X; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.Quat.X */
    float Y; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.Quat.Y */
    float Z; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.Quat.Z */
    float W; /* Ofs: 0xC Size: 0x4 FloatProperty CoreUObject.Quat.W */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFQuat = sizeof(FQuat); // 16
    static_assert(sizeof(FQuat) == 0x10, "Size of FQuat is not correct.");
	auto constexpr FQuat_X_Offset = offsetof(FQuat, X);
	static_assert(FQuat_X_Offset == 0x0, "FQuat::X offset is not 0");
	auto constexpr FQuat_Y_Offset = offsetof(FQuat, Y);
	static_assert(FQuat_Y_Offset == 0x4, "FQuat::Y offset is not 4");
	auto constexpr FQuat_Z_Offset = offsetof(FQuat, Z);
	static_assert(FQuat_Z_Offset == 0x8, "FQuat::Z offset is not 8");
	auto constexpr FQuat_W_Offset = offsetof(FQuat, W);
	static_assert(FQuat_W_Offset == 0xc, "FQuat::W offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
