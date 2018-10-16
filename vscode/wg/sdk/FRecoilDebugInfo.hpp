#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRecoilDebugInfo // Size: 0x28
{
public:
    float RecoilValue; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilValue */
    float RecoilVertical; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilVertical */
    float RecoilHorizontal; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilHorizontal */
    float RecoilTargetPitch; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilTargetPitch */
    float RecoilTargetYaw; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilTargetYaw */
    float RecoilRecoveryTarget; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilRecoveryTarget */
    float RecoilVerticalDelta; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilVerticalDelta */
    float RecoilHorizontalDelta; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilHorizontalDelta */
    float RecoilCharacterPitch; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilCharacterPitch */
    float RecoilWeaponPitch; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.RecoilDebugInfo.RecoilWeaponPitch */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRecoilDebugInfo = sizeof(FRecoilDebugInfo); // 40
    static_assert(sizeof(FRecoilDebugInfo) == 0x28, "Size of FRecoilDebugInfo is not correct.");
	auto constexpr FRecoilDebugInfo_RecoilValue_Offset = offsetof(FRecoilDebugInfo, RecoilValue);
	static_assert(FRecoilDebugInfo_RecoilValue_Offset == 0x0, "FRecoilDebugInfo::RecoilValue offset is not 0");
	auto constexpr FRecoilDebugInfo_RecoilVertical_Offset = offsetof(FRecoilDebugInfo, RecoilVertical);
	static_assert(FRecoilDebugInfo_RecoilVertical_Offset == 0x4, "FRecoilDebugInfo::RecoilVertical offset is not 4");
	auto constexpr FRecoilDebugInfo_RecoilHorizontal_Offset = offsetof(FRecoilDebugInfo, RecoilHorizontal);
	static_assert(FRecoilDebugInfo_RecoilHorizontal_Offset == 0x8, "FRecoilDebugInfo::RecoilHorizontal offset is not 8");
	auto constexpr FRecoilDebugInfo_RecoilTargetPitch_Offset = offsetof(FRecoilDebugInfo, RecoilTargetPitch);
	static_assert(FRecoilDebugInfo_RecoilTargetPitch_Offset == 0xc, "FRecoilDebugInfo::RecoilTargetPitch offset is not c");
	auto constexpr FRecoilDebugInfo_RecoilTargetYaw_Offset = offsetof(FRecoilDebugInfo, RecoilTargetYaw);
	static_assert(FRecoilDebugInfo_RecoilTargetYaw_Offset == 0x10, "FRecoilDebugInfo::RecoilTargetYaw offset is not 10");
	auto constexpr FRecoilDebugInfo_RecoilRecoveryTarget_Offset = offsetof(FRecoilDebugInfo, RecoilRecoveryTarget);
	static_assert(FRecoilDebugInfo_RecoilRecoveryTarget_Offset == 0x14, "FRecoilDebugInfo::RecoilRecoveryTarget offset is not 14");
	auto constexpr FRecoilDebugInfo_RecoilVerticalDelta_Offset = offsetof(FRecoilDebugInfo, RecoilVerticalDelta);
	static_assert(FRecoilDebugInfo_RecoilVerticalDelta_Offset == 0x18, "FRecoilDebugInfo::RecoilVerticalDelta offset is not 18");
	auto constexpr FRecoilDebugInfo_RecoilHorizontalDelta_Offset = offsetof(FRecoilDebugInfo, RecoilHorizontalDelta);
	static_assert(FRecoilDebugInfo_RecoilHorizontalDelta_Offset == 0x1c, "FRecoilDebugInfo::RecoilHorizontalDelta offset is not 1c");
	auto constexpr FRecoilDebugInfo_RecoilCharacterPitch_Offset = offsetof(FRecoilDebugInfo, RecoilCharacterPitch);
	static_assert(FRecoilDebugInfo_RecoilCharacterPitch_Offset == 0x20, "FRecoilDebugInfo::RecoilCharacterPitch offset is not 20");
	auto constexpr FRecoilDebugInfo_RecoilWeaponPitch_Offset = offsetof(FRecoilDebugInfo, RecoilWeaponPitch);
	static_assert(FRecoilDebugInfo_RecoilWeaponPitch_Offset == 0x24, "FRecoilDebugInfo::RecoilWeaponPitch offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
