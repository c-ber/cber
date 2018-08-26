#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemInitiator // Size: 0x10
{
public:
    ExternalPtr<struct UClass> ItemClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.ItemInitiator.ItemClass */
    int32_t StackCount; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.ItemInitiator.StackCount */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemInitiator = sizeof(FItemInitiator); // 16
    static_assert(sizeof(FItemInitiator) == 0x10, "Size of FItemInitiator is not correct.");
	auto constexpr FItemInitiator_ItemClass_Offset = offsetof(FItemInitiator, ItemClass);
	static_assert(FItemInitiator_ItemClass_Offset == 0x0, "FItemInitiator::ItemClass offset is not 0");
	auto constexpr FItemInitiator_StackCount_Offset = offsetof(FItemInitiator, StackCount);
	static_assert(FItemInitiator_StackCount_Offset == 0x8, "FItemInitiator::StackCount offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
