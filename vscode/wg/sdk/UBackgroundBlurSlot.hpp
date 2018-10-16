#pragma once
#include "UPanelSlot.hpp"
#include "FMargin.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBackgroundBlurSlot // Size: 0x68
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UBackgroundBlurSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(464); // id32("Class UMG.BackgroundBlurSlot")
		return ptr;
	}
	FMargin Padding; /* Ofs: 0x40 Size: 0x10 - StructProperty UMG.BackgroundBlurSlot.Padding */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x50 Size: 0x1 - ByteProperty UMG.BackgroundBlurSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x51 Size: 0x1 - ByteProperty UMG.BackgroundBlurSlot.VerticalAlignment */
	uint8_t UnknownData52[0x16];


	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x40, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x50, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x51, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBackgroundBlurSlot = sizeof(UBackgroundBlurSlot); // 104
    static_assert(sizeof(UBackgroundBlurSlot) == 0x68, "Size of UBackgroundBlurSlot is not correct.");
	auto constexpr UBackgroundBlurSlot_Padding_Offset = offsetof(UBackgroundBlurSlot, Padding);
	static_assert(UBackgroundBlurSlot_Padding_Offset == 0x40, "UBackgroundBlurSlot::Padding offset is not 40");
	auto constexpr UBackgroundBlurSlot_HorizontalAlignment_Offset = offsetof(UBackgroundBlurSlot, HorizontalAlignment);
	static_assert(UBackgroundBlurSlot_HorizontalAlignment_Offset == 0x50, "UBackgroundBlurSlot::HorizontalAlignment offset is not 50");
	auto constexpr UBackgroundBlurSlot_VerticalAlignment_Offset = offsetof(UBackgroundBlurSlot, VerticalAlignment);
	static_assert(UBackgroundBlurSlot_VerticalAlignment_Offset == 0x51, "UBackgroundBlurSlot::VerticalAlignment offset is not 51");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
