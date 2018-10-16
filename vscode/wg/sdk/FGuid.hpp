#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGuid // Size: 0x10
{
public:
    int32_t A; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.Guid.A */
    int32_t B; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.Guid.B */
    int32_t C; /* Ofs: 0x8 Size: 0x4 IntProperty CoreUObject.Guid.C */
    int32_t D; /* Ofs: 0xC Size: 0x4 IntProperty CoreUObject.Guid.D */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGuid = sizeof(FGuid); // 16
    static_assert(sizeof(FGuid) == 0x10, "Size of FGuid is not correct.");
	auto constexpr FGuid_A_Offset = offsetof(FGuid, A);
	static_assert(FGuid_A_Offset == 0x0, "FGuid::A offset is not 0");
	auto constexpr FGuid_B_Offset = offsetof(FGuid, B);
	static_assert(FGuid_B_Offset == 0x4, "FGuid::B offset is not 4");
	auto constexpr FGuid_C_Offset = offsetof(FGuid, C);
	static_assert(FGuid_C_Offset == 0x8, "FGuid::C offset is not 8");
	auto constexpr FGuid_D_Offset = offsetof(FGuid, D);
	static_assert(FGuid_D_Offset == 0xc, "FGuid::D offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
