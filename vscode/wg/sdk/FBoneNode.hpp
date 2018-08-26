#pragma once
#include "EBoneTranslationRetargetingMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneNode // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BoneNode.Name */
    int32_t ParentIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.BoneNode.ParentIndex */
    TEnumAsByte<enum EBoneTranslationRetargetingMode> TranslationRetargetingMode; /* Ofs: 0xC Size: 0x1 ByteProperty Engine.BoneNode.TranslationRetargetingMode */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneNode = sizeof(FBoneNode); // 16
    static_assert(sizeof(FBoneNode) == 0x10, "Size of FBoneNode is not correct.");
	auto constexpr FBoneNode_Name_Offset = offsetof(FBoneNode, Name);
	static_assert(FBoneNode_Name_Offset == 0x0, "FBoneNode::Name offset is not 0");
	auto constexpr FBoneNode_ParentIndex_Offset = offsetof(FBoneNode, ParentIndex);
	static_assert(FBoneNode_ParentIndex_Offset == 0x8, "FBoneNode::ParentIndex offset is not 8");
	auto constexpr FBoneNode_TranslationRetargetingMode_Offset = offsetof(FBoneNode, TranslationRetargetingMode);
	static_assert(FBoneNode_TranslationRetargetingMode_Offset == 0xc, "FBoneNode::TranslationRetargetingMode offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
