#pragma once
#include "UContentWidget.hpp"
#include "EMenuPlacement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMenuAnchor // Size: 0x188
	: public UContentWidget // Size: 0x148
{
private:
	typedef UMenuAnchor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(500); // id32("Class UMG.MenuAnchor")
		return ptr;
	}
	ExternalPtr<struct UClass> MenuClass; /* Ofs: 0x148 Size: 0x8 - ClassProperty UMG.MenuAnchor.MenuClass */
	FScriptDelegate OnGetMenuContentEvent; /* Ofs: 0x150 Size: 0x10 - DelegateProperty UMG.MenuAnchor.OnGetMenuContentEvent */
	TEnumAsByte<enum EMenuPlacement> Placement; /* Ofs: 0x160 Size: 0x1 - ByteProperty UMG.MenuAnchor.Placement */
	uint8_t boolField161;
	uint8_t boolField162;
	uint8_t UnknownData163[0x5];
	FScriptMulticastDelegate OnMenuOpenChanged; /* Ofs: 0x168 Size: 0x10 - MulticastDelegateProperty UMG.MenuAnchor.OnMenuOpenChanged */
	uint8_t UnknownData178[0x10];


	inline bool SetMenuClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x148, value); }
	inline bool SetOnGetMenuContentEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x150, value); }
	inline bool SetPlacement(t_structHelper inst, TEnumAsByte<enum EMenuPlacement> value) { inst.WriteOffset(0x160, value); }
	inline bool ShouldDeferPaintingAfterWindowContent()
	{
		return boolField161& 0x1;
	}
	inline bool SetShouldDeferPaintingAfterWindowContent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x161, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool UseApplicationMenuStack()
	{
		return boolField162& 0x1;
	}
	inline bool SetUseApplicationMenuStack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x162, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnMenuOpenChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x168, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMenuAnchor = sizeof(UMenuAnchor); // 392
    static_assert(sizeof(UMenuAnchor) == 0x188, "Size of UMenuAnchor is not correct.");
	auto constexpr UMenuAnchor_MenuClass_Offset = offsetof(UMenuAnchor, MenuClass);
	static_assert(UMenuAnchor_MenuClass_Offset == 0x148, "UMenuAnchor::MenuClass offset is not 148");
	auto constexpr UMenuAnchor_OnGetMenuContentEvent_Offset = offsetof(UMenuAnchor, OnGetMenuContentEvent);
	static_assert(UMenuAnchor_OnGetMenuContentEvent_Offset == 0x150, "UMenuAnchor::OnGetMenuContentEvent offset is not 150");
	auto constexpr UMenuAnchor_Placement_Offset = offsetof(UMenuAnchor, Placement);
	static_assert(UMenuAnchor_Placement_Offset == 0x160, "UMenuAnchor::Placement offset is not 160");
	auto constexpr UMenuAnchor_boolField161_Offset = offsetof(UMenuAnchor, boolField161);
	static_assert(UMenuAnchor_boolField161_Offset == 0x161, "UMenuAnchor::boolField161 offset is not 161");
	auto constexpr UMenuAnchor_boolField162_Offset = offsetof(UMenuAnchor, boolField162);
	static_assert(UMenuAnchor_boolField162_Offset == 0x162, "UMenuAnchor::boolField162 offset is not 162");
	auto constexpr UMenuAnchor_OnMenuOpenChanged_Offset = offsetof(UMenuAnchor, OnMenuOpenChanged);
	static_assert(UMenuAnchor_OnMenuOpenChanged_Offset == 0x168, "UMenuAnchor::OnMenuOpenChanged offset is not 168");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
