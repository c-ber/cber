#pragma once
#include "UPanelSlot.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUniformGridSlot // Size: 0x58
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UUniformGridSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(475); // id32("Class UMG.UniformGridSlot")
		return ptr;
	}
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x40 Size: 0x1 - ByteProperty UMG.UniformGridSlot.HorizontalAlignment */
	TEnumAsByte<enum EVerticalAlignment> VerticalAlignment; /* Ofs: 0x41 Size: 0x1 - ByteProperty UMG.UniformGridSlot.VerticalAlignment */
	uint8_t UnknownData42[0x2];
	int32_t Row; /* Ofs: 0x44 Size: 0x4 - IntProperty UMG.UniformGridSlot.Row */
	int32_t Column; /* Ofs: 0x48 Size: 0x4 - IntProperty UMG.UniformGridSlot.Column */
	uint8_t UnknownData4C[0xC];


	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x40, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x41, value); }
	inline bool SetRow(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetColumn(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUniformGridSlot = sizeof(UUniformGridSlot); // 88
    static_assert(sizeof(UUniformGridSlot) == 0x58, "Size of UUniformGridSlot is not correct.");
	auto constexpr UUniformGridSlot_HorizontalAlignment_Offset = offsetof(UUniformGridSlot, HorizontalAlignment);
	static_assert(UUniformGridSlot_HorizontalAlignment_Offset == 0x40, "UUniformGridSlot::HorizontalAlignment offset is not 40");
	auto constexpr UUniformGridSlot_VerticalAlignment_Offset = offsetof(UUniformGridSlot, VerticalAlignment);
	static_assert(UUniformGridSlot_VerticalAlignment_Offset == 0x41, "UUniformGridSlot::VerticalAlignment offset is not 41");
	auto constexpr UUniformGridSlot_Row_Offset = offsetof(UUniformGridSlot, Row);
	static_assert(UUniformGridSlot_Row_Offset == 0x44, "UUniformGridSlot::Row offset is not 44");
	auto constexpr UUniformGridSlot_Column_Offset = offsetof(UUniformGridSlot, Column);
	static_assert(UUniformGridSlot_Column_Offset == 0x48, "UUniformGridSlot::Column offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
