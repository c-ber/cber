#pragma once
#include "UPanelSlot.hpp"
#include "FAnchorData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCanvasPanelSlot // Size: 0x78
	: public UPanelSlot // Size: 0x40
{
private:
	typedef UCanvasPanelSlot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(467); // id32("Class UMG.CanvasPanelSlot")
		return ptr;
	}
	FAnchorData LayoutData; /* Ofs: 0x40 Size: 0x28 - StructProperty UMG.CanvasPanelSlot.LayoutData */
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	int32_t ZOrder; /* Ofs: 0x6C Size: 0x4 - IntProperty UMG.CanvasPanelSlot.ZOrder */
	uint8_t UnknownData70[0x8];


	inline bool SetLayoutData(t_structHelper inst, FAnchorData value) { inst.WriteOffset(0x40, value); }
	inline bool bAutoSize()
	{
		return boolField68& 0x1;
	}
	inline bool SetbAutoSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetZOrder(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCanvasPanelSlot = sizeof(UCanvasPanelSlot); // 120
    static_assert(sizeof(UCanvasPanelSlot) == 0x78, "Size of UCanvasPanelSlot is not correct.");
	auto constexpr UCanvasPanelSlot_LayoutData_Offset = offsetof(UCanvasPanelSlot, LayoutData);
	static_assert(UCanvasPanelSlot_LayoutData_Offset == 0x40, "UCanvasPanelSlot::LayoutData offset is not 40");
	auto constexpr UCanvasPanelSlot_boolField68_Offset = offsetof(UCanvasPanelSlot, boolField68);
	static_assert(UCanvasPanelSlot_boolField68_Offset == 0x68, "UCanvasPanelSlot::boolField68 offset is not 68");
	auto constexpr UCanvasPanelSlot_ZOrder_Offset = offsetof(UCanvasPanelSlot, ZOrder);
	static_assert(UCanvasPanelSlot_ZOrder_Offset == 0x6c, "UCanvasPanelSlot::ZOrder offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
