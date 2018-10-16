#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneReference // Size: 0x18
{
public:
    FName BoneName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BoneReference.BoneName */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneReference = sizeof(FBoneReference); // 24
    static_assert(sizeof(FBoneReference) == 0x18, "Size of FBoneReference is not correct.");
	auto constexpr FBoneReference_BoneName_Offset = offsetof(FBoneReference, BoneName);
	static_assert(FBoneReference_BoneName_Offset == 0x0, "FBoneReference::BoneName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
