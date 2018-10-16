#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUmgWidgetBinder // Size: 0x18
{
public:
    uint8_t UnknownData0[0x8];
    FName Name; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.UmgWidgetBinder.Name */
    ExternalPtr<struct UUserWidget> Parent; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.UmgWidgetBinder.Parent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUmgWidgetBinder = sizeof(FUmgWidgetBinder); // 24
    static_assert(sizeof(FUmgWidgetBinder) == 0x18, "Size of FUmgWidgetBinder is not correct.");
	auto constexpr FUmgWidgetBinder_Name_Offset = offsetof(FUmgWidgetBinder, Name);
	static_assert(FUmgWidgetBinder_Name_Offset == 0x8, "FUmgWidgetBinder::Name offset is not 8");
	auto constexpr FUmgWidgetBinder_Parent_Offset = offsetof(FUmgWidgetBinder, Parent);
	static_assert(FUmgWidgetBinder_Parent_Offset == 0x10, "FUmgWidgetBinder::Parent offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
