#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UButtonSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UButtonSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(466); // id32("Class UMG.ButtonSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.ButtonSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.ButtonSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.ButtonSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUButtonSlot = sizeof(UButtonSlot); // 104
    static_assert(sizeof(UButtonSlot) == 0x68, "Size of UButtonSlot is not correct.");
	auto constexpr UButtonSlot_Padding_Offset = offsetof(UButtonSlot, Padding);
	static_assert(UButtonSlot_Padding_Offset == 0x40, "UButtonSlot::Padding offset is not 40");
	auto constexpr UButtonSlot_HorizontalAlignment_Offset = offsetof(UButtonSlot, HorizontalAlignment);
	static_assert(UButtonSlot_HorizontalAlignment_Offset == 0x50, "UButtonSlot::HorizontalAlignment offset is not 50");
	auto constexpr UButtonSlot_VerticalAlignment_Offset = offsetof(UButtonSlot, VerticalAlignment);
	static_assert(UButtonSlot_VerticalAlignment_Offset == 0x51, "UButtonSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
