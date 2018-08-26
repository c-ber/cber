#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSlotInfo // Size: 0x18
{
public:
    FName SlotName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimSlotInfo.SlotName */
    TArray<float> ChannelWeights; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.AnimSlotInfo.ChannelWeights */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSlotInfo = sizeof(FAnimSlotInfo); // 24
    static_assert(sizeof(FAnimSlotInfo) == 0x18, "Size of FAnimSlotInfo is not correct.");
	auto constexpr FAnimSlotInfo_SlotName_Offset = offsetof(FAnimSlotInfo, SlotName);
	static_assert(FAnimSlotInfo_SlotName_Offset == 0x0, "FAnimSlotInfo::SlotName offset is not 0");
	auto constexpr FAnimSlotInfo_ChannelWeights_Offset = offsetof(FAnimSlotInfo, ChannelWeights);
	static_assert(FAnimSlotInfo_ChannelWeights_Offset == 0x8, "FAnimSlotInfo::ChannelWeights offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
