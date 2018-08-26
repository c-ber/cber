#pragma once
#include "FAnimNode_PoseHandler.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_PoseByName // Size: 0xB0
 : public FAnimNode_PoseHandler // Size: 0xA0
{
public:
    FName PoseName; /* Ofs: 0xA0 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_PoseByName.PoseName */
    float PoseWeight; /* Ofs: 0xA8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_PoseByName.PoseWeight */
    uint8_t UnknownDataAC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_PoseByName = sizeof(FAnimNode_PoseByName); // 176
    static_assert(sizeof(FAnimNode_PoseByName) == 0xB0, "Size of FAnimNode_PoseByName is not correct.");
	auto constexpr FAnimNode_PoseByName_PoseName_Offset = offsetof(FAnimNode_PoseByName, PoseName);
	static_assert(FAnimNode_PoseByName_PoseName_Offset == 0xa0, "FAnimNode_PoseByName::PoseName offset is not a0");
	auto constexpr FAnimNode_PoseByName_PoseWeight_Offset = offsetof(FAnimNode_PoseByName, PoseWeight);
	static_assert(FAnimNode_PoseByName_PoseWeight_Offset == 0xa8, "FAnimNode_PoseByName::PoseWeight offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
