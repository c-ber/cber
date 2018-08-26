#pragma once
#include "FAnimNode_AssetPlayerBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_PoseHandler // Size: 0xA0
 : public FAnimNode_AssetPlayerBase // Size: 0x58
{
public:
    ExternalPtr<struct UPoseAsset> PoseAsset; /* Ofs: 0x58 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_PoseHandler.PoseAsset */
    uint8_t UnknownData60[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_PoseHandler = sizeof(FAnimNode_PoseHandler); // 160
    static_assert(sizeof(FAnimNode_PoseHandler) == 0xA0, "Size of FAnimNode_PoseHandler is not correct.");
	auto constexpr FAnimNode_PoseHandler_PoseAsset_Offset = offsetof(FAnimNode_PoseHandler, PoseAsset);
	static_assert(FAnimNode_PoseHandler_PoseAsset_Offset == 0x58, "FAnimNode_PoseHandler::PoseAsset offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
