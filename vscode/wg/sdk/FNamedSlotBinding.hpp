#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedSlotBinding // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty UMG.NamedSlotBinding.Name */
    ExternalPtr<struct UWidget> Content; /* Ofs: 0x8 Size: 0x8 ObjectProperty UMG.NamedSlotBinding.Content */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedSlotBinding = sizeof(FNamedSlotBinding); // 16
    static_assert(sizeof(FNamedSlotBinding) == 0x10, "Size of FNamedSlotBinding is not correct.");
	auto constexpr FNamedSlotBinding_Name_Offset = offsetof(FNamedSlotBinding, Name);
	static_assert(FNamedSlotBinding_Name_Offset == 0x0, "FNamedSlotBinding::Name offset is not 0");
	auto constexpr FNamedSlotBinding_Content_Offset = offsetof(FNamedSlotBinding, Content);
	static_assert(FNamedSlotBinding_Content_Offset == 0x8, "FNamedSlotBinding::Content offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
