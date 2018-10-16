#pragma once
#include "FAnimNode_BlendListBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendListByEnum // Size: 0xE0
 : public FAnimNode_BlendListBase // Size: 0xC8
{
public:
    TArray<int32_t> EnumToPoseIndex; /* Ofs: 0xC8 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendListByEnum.EnumToPoseIndex */
    uint8_t ActiveEnumValue; /* Ofs: 0xD8 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_BlendListByEnum.ActiveEnumValue */
    uint8_t UnknownDataD9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendListByEnum = sizeof(FAnimNode_BlendListByEnum); // 224
    static_assert(sizeof(FAnimNode_BlendListByEnum) == 0xE0, "Size of FAnimNode_BlendListByEnum is not correct.");
	auto constexpr FAnimNode_BlendListByEnum_EnumToPoseIndex_Offset = offsetof(FAnimNode_BlendListByEnum, EnumToPoseIndex);
	static_assert(FAnimNode_BlendListByEnum_EnumToPoseIndex_Offset == 0xc8, "FAnimNode_BlendListByEnum::EnumToPoseIndex offset is not c8");
	auto constexpr FAnimNode_BlendListByEnum_ActiveEnumValue_Offset = offsetof(FAnimNode_BlendListByEnum, ActiveEnumValue);
	static_assert(FAnimNode_BlendListByEnum_ActiveEnumValue_Offset == 0xd8, "FAnimNode_BlendListByEnum::ActiveEnumValue offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
