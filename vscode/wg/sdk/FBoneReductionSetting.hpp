#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneReductionSetting // Size: 0x10
{
public:
    TArray<struct FName> BonesToRemove; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.BoneReductionSetting.BonesToRemove */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneReductionSetting = sizeof(FBoneReductionSetting); // 16
    static_assert(sizeof(FBoneReductionSetting) == 0x10, "Size of FBoneReductionSetting is not correct.");
	auto constexpr FBoneReductionSetting_BonesToRemove_Offset = offsetof(FBoneReductionSetting, BonesToRemove);
	static_assert(FBoneReductionSetting_BonesToRemove_Offset == 0x0, "FBoneReductionSetting::BonesToRemove offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
