#pragma once
#include "FAnimSpeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimInfo // Size: 0x68
{
public:
    ExternalPtr<struct UBlendSpace> BlendSpaceRef; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.AnimInfo.BlendSpaceRef */
    ExternalPtr<struct UBlendSpace> BlendSpaceFPPRef; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.AnimInfo.BlendSpaceFPPRef */
    ExternalPtr<struct UBlendSpace> BlendSpaceRelaxedRef; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.AnimInfo.BlendSpaceRelaxedRef */
    ExternalPtr<struct UBlendSpace> BlendSpaceRelaxedFPPRef; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.AnimInfo.BlendSpaceRelaxedFPPRef */
    FAnimSpeedInfo AnimSpeed_Walk; /* Ofs: 0x20 Size: 0x20 StructProperty TslGame.AnimInfo.AnimSpeed_Walk */
    FAnimSpeedInfo AnimSpeed_Run; /* Ofs: 0x40 Size: 0x20 StructProperty TslGame.AnimInfo.AnimSpeed_Run */
    float AnimSpeed_Sprint; /* Ofs: 0x60 Size: 0x4 FloatProperty TslGame.AnimInfo.AnimSpeed_Sprint */
    uint8_t UnknownData64[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimInfo = sizeof(FAnimInfo); // 104
    static_assert(sizeof(FAnimInfo) == 0x68, "Size of FAnimInfo is not correct.");
	auto constexpr FAnimInfo_BlendSpaceRef_Offset = offsetof(FAnimInfo, BlendSpaceRef);
	static_assert(FAnimInfo_BlendSpaceRef_Offset == 0x0, "FAnimInfo::BlendSpaceRef offset is not 0");
	auto constexpr FAnimInfo_BlendSpaceFPPRef_Offset = offsetof(FAnimInfo, BlendSpaceFPPRef);
	static_assert(FAnimInfo_BlendSpaceFPPRef_Offset == 0x8, "FAnimInfo::BlendSpaceFPPRef offset is not 8");
	auto constexpr FAnimInfo_BlendSpaceRelaxedRef_Offset = offsetof(FAnimInfo, BlendSpaceRelaxedRef);
	static_assert(FAnimInfo_BlendSpaceRelaxedRef_Offset == 0x10, "FAnimInfo::BlendSpaceRelaxedRef offset is not 10");
	auto constexpr FAnimInfo_BlendSpaceRelaxedFPPRef_Offset = offsetof(FAnimInfo, BlendSpaceRelaxedFPPRef);
	static_assert(FAnimInfo_BlendSpaceRelaxedFPPRef_Offset == 0x18, "FAnimInfo::BlendSpaceRelaxedFPPRef offset is not 18");
	auto constexpr FAnimInfo_AnimSpeed_Walk_Offset = offsetof(FAnimInfo, AnimSpeed_Walk);
	static_assert(FAnimInfo_AnimSpeed_Walk_Offset == 0x20, "FAnimInfo::AnimSpeed_Walk offset is not 20");
	auto constexpr FAnimInfo_AnimSpeed_Run_Offset = offsetof(FAnimInfo, AnimSpeed_Run);
	static_assert(FAnimInfo_AnimSpeed_Run_Offset == 0x40, "FAnimInfo::AnimSpeed_Run offset is not 40");
	auto constexpr FAnimInfo_AnimSpeed_Sprint_Offset = offsetof(FAnimInfo, AnimSpeed_Sprint);
	static_assert(FAnimInfo_AnimSpeed_Sprint_Offset == 0x60, "FAnimInfo::AnimSpeed_Sprint offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
