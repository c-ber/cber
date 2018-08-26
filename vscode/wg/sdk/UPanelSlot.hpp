#pragma once
#include "UVisual.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPanelSlot // Size: 0x40
	: public UVisual // Size: 0x30
{
private:
	typedef UPanelSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(463); // id32("Class UMG.PanelSlot")
		return ptr;
	}
	ExternalPtr<struct UPanelWidget> Parent; /* Ofs: 0x30 Size: 0x8 - ObjectProperty UMG.PanelSlot.Parent */
	ExternalPtr<struct UWidget> Content; /* Ofs: 0x38 Size: 0x8 - ObjectProperty UMG.PanelSlot.Content */


	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UPanelWidget> value) { inst.WriteOffset(0x30, value); }
	inline bool SetContent(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPanelSlot = sizeof(UPanelSlot); // 64
    static_assert(sizeof(UPanelSlot) == 0x40, "Size of UPanelSlot is not correct.");
	auto constexpr UPanelSlot_Parent_Offset = offsetof(UPanelSlot, Parent);
	static_assert(UPanelSlot_Parent_Offset == 0x30, "UPanelSlot::Parent offset is not 30");
	auto constexpr UPanelSlot_Content_Offset = offsetof(UPanelSlot, Content);
	static_assert(UPanelSlot_Content_Offset == 0x38, "UPanelSlot::Content offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
