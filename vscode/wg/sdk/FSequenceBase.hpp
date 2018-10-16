#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSequenceBase // Size: 0x98
{
public:
    uint8_t UnknownData0[0x18];
    ExternalPtr<struct UUserWidget> Widget; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.SequenceBase.Widget */
    uint8_t UnknownData20[0x78];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSequenceBase = sizeof(FSequenceBase); // 152
    static_assert(sizeof(FSequenceBase) == 0x98, "Size of FSequenceBase is not correct.");
	auto constexpr FSequenceBase_Widget_Offset = offsetof(FSequenceBase, Widget);
	static_assert(FSequenceBase_Widget_Offset == 0x18, "FSequenceBase::Widget offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
