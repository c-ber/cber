#pragma once
#include "FAnimNode_Base.hpp"
#include "EAnimGroupRole.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_AssetPlayerBase // Size: 0x58
 : public FAnimNode_Base // Size: 0x30
{
public:
    bool bIgnoreForRelevancyTest; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNode_AssetPlayerBase.bIgnoreForRelevancyTest */
    uint8_t UnknownData31[0x3];
    int32_t GroupIndex; /* Ofs: 0x34 Size: 0x4 IntProperty Engine.AnimNode_AssetPlayerBase.GroupIndex */
    TEnumAsByte<enum EAnimGroupRole> GroupRole; /* Ofs: 0x38 Size: 0x1 ByteProperty Engine.AnimNode_AssetPlayerBase.GroupRole */
    uint8_t UnknownData39[0x3];
    float BlendWeight; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.AnimNode_AssetPlayerBase.BlendWeight */
    float InternalTimeAccumulator; /* Ofs: 0x40 Size: 0x4 FloatProperty Engine.AnimNode_AssetPlayerBase.InternalTimeAccumulator */
    uint8_t UnknownData44[0x14];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_AssetPlayerBase = sizeof(FAnimNode_AssetPlayerBase); // 88
    static_assert(sizeof(FAnimNode_AssetPlayerBase) == 0x58, "Size of FAnimNode_AssetPlayerBase is not correct.");
	auto constexpr FAnimNode_AssetPlayerBase_GroupIndex_Offset = offsetof(FAnimNode_AssetPlayerBase, GroupIndex);
	static_assert(FAnimNode_AssetPlayerBase_GroupIndex_Offset == 0x34, "FAnimNode_AssetPlayerBase::GroupIndex offset is not 34");
	auto constexpr FAnimNode_AssetPlayerBase_GroupRole_Offset = offsetof(FAnimNode_AssetPlayerBase, GroupRole);
	static_assert(FAnimNode_AssetPlayerBase_GroupRole_Offset == 0x38, "FAnimNode_AssetPlayerBase::GroupRole offset is not 38");
	auto constexpr FAnimNode_AssetPlayerBase_BlendWeight_Offset = offsetof(FAnimNode_AssetPlayerBase, BlendWeight);
	static_assert(FAnimNode_AssetPlayerBase_BlendWeight_Offset == 0x3c, "FAnimNode_AssetPlayerBase::BlendWeight offset is not 3c");
	auto constexpr FAnimNode_AssetPlayerBase_InternalTimeAccumulator_Offset = offsetof(FAnimNode_AssetPlayerBase, InternalTimeAccumulator);
	static_assert(FAnimNode_AssetPlayerBase_InternalTimeAccumulator_Offset == 0x40, "FAnimNode_AssetPlayerBase::InternalTimeAccumulator offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
