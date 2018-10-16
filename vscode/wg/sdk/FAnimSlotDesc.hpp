#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSlotDesc // Size: 0x10
{
public:
    FName SlotName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimSlotDesc.SlotName */
    int32_t NumChannels; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.AnimSlotDesc.NumChannels */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSlotDesc = sizeof(FAnimSlotDesc); // 16
    static_assert(sizeof(FAnimSlotDesc) == 0x10, "Size of FAnimSlotDesc is not correct.");
	auto constexpr FAnimSlotDesc_SlotName_Offset = offsetof(FAnimSlotDesc, SlotName);
	static_assert(FAnimSlotDesc_SlotName_Offset == 0x0, "FAnimSlotDesc::SlotName offset is not 0");
	auto constexpr FAnimSlotDesc_NumChannels_Offset = offsetof(FAnimSlotDesc, NumChannels);
	static_assert(FAnimSlotDesc_NumChannels_Offset == 0x8, "FAnimSlotDesc::NumChannels offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
