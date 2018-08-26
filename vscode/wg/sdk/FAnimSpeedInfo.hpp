#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSpeedInfo // Size: 0x20
{
public:
    float F; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.F */
    float L; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.L */
    float R; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.R */
    float B; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.B */
    float FL; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.FL */
    float FR; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.FR */
    float BL; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.BL */
    float BR; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.AnimSpeedInfo.BR */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSpeedInfo = sizeof(FAnimSpeedInfo); // 32
    static_assert(sizeof(FAnimSpeedInfo) == 0x20, "Size of FAnimSpeedInfo is not correct.");
	auto constexpr FAnimSpeedInfo_F_Offset = offsetof(FAnimSpeedInfo, F);
	static_assert(FAnimSpeedInfo_F_Offset == 0x0, "FAnimSpeedInfo::F offset is not 0");
	auto constexpr FAnimSpeedInfo_L_Offset = offsetof(FAnimSpeedInfo, L);
	static_assert(FAnimSpeedInfo_L_Offset == 0x4, "FAnimSpeedInfo::L offset is not 4");
	auto constexpr FAnimSpeedInfo_R_Offset = offsetof(FAnimSpeedInfo, R);
	static_assert(FAnimSpeedInfo_R_Offset == 0x8, "FAnimSpeedInfo::R offset is not 8");
	auto constexpr FAnimSpeedInfo_B_Offset = offsetof(FAnimSpeedInfo, B);
	static_assert(FAnimSpeedInfo_B_Offset == 0xc, "FAnimSpeedInfo::B offset is not c");
	auto constexpr FAnimSpeedInfo_FL_Offset = offsetof(FAnimSpeedInfo, FL);
	static_assert(FAnimSpeedInfo_FL_Offset == 0x10, "FAnimSpeedInfo::FL offset is not 10");
	auto constexpr FAnimSpeedInfo_FR_Offset = offsetof(FAnimSpeedInfo, FR);
	static_assert(FAnimSpeedInfo_FR_Offset == 0x14, "FAnimSpeedInfo::FR offset is not 14");
	auto constexpr FAnimSpeedInfo_BL_Offset = offsetof(FAnimSpeedInfo, BL);
	static_assert(FAnimSpeedInfo_BL_Offset == 0x18, "FAnimSpeedInfo::BL offset is not 18");
	auto constexpr FAnimSpeedInfo_BR_Offset = offsetof(FAnimSpeedInfo, BR);
	static_assert(FAnimSpeedInfo_BR_Offset == 0x1c, "FAnimSpeedInfo::BR offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
