#pragma once
#include "FBoneReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlendProfileBoneEntry // Size: 0x20
{
public:
    FBoneReference BoneReference; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.BlendProfileBoneEntry.BoneReference */
    float BlendScale; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.BlendProfileBoneEntry.BlendScale */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlendProfileBoneEntry = sizeof(FBlendProfileBoneEntry); // 32
    static_assert(sizeof(FBlendProfileBoneEntry) == 0x20, "Size of FBlendProfileBoneEntry is not correct.");
	auto constexpr FBlendProfileBoneEntry_BoneReference_Offset = offsetof(FBlendProfileBoneEntry, BoneReference);
	static_assert(FBlendProfileBoneEntry_BoneReference_Offset == 0x0, "FBlendProfileBoneEntry::BoneReference offset is not 0");
	auto constexpr FBlendProfileBoneEntry_BlendScale_Offset = offsetof(FBlendProfileBoneEntry, BlendScale);
	static_assert(FBlendProfileBoneEntry_BlendScale_Offset == 0x18, "FBlendProfileBoneEntry::BlendScale offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
