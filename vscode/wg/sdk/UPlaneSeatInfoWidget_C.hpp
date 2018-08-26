#pragma once
#include "UVehicleSeatInfoBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlaneSeatInfoWidget_C // Size: 0x351
	: public UVehicleSeatInfoBaseWidget // Size: 0x348
{
private:
	typedef UPlaneSeatInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(156530); // id32("WidgetBlueprintGeneratedClass PlaneSeatInfoWidget.PlaneSeatInfoWidget_C")
		return ptr;
	}
	ExternalPtr<struct UInvalidationBox> InvalidationBox_Main; /* Ofs: 0x348 Size: 0x8 - ObjectProperty PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.InvalidationBox_Main */
	uint8_t boolField350;


	inline bool SetInvalidationBox_Main(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x348, value); }
	inline bool bIsEmpty()
	{
		return boolField350& 0x1;
	}
	inline bool SetbIsEmpty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x350, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlaneSeatInfoWidget_C = sizeof(UPlaneSeatInfoWidget_C); // 849
    static_assert(sizeof(UPlaneSeatInfoWidget_C) == 0x351, "Size of UPlaneSeatInfoWidget_C is not correct.");
	auto constexpr UPlaneSeatInfoWidget_C_InvalidationBox_Main_Offset = offsetof(UPlaneSeatInfoWidget_C, InvalidationBox_Main);
	static_assert(UPlaneSeatInfoWidget_C_InvalidationBox_Main_Offset == 0x348, "UPlaneSeatInfoWidget_C::InvalidationBox_Main offset is not 348");
	auto constexpr UPlaneSeatInfoWidget_C_boolField350_Offset = offsetof(UPlaneSeatInfoWidget_C, boolField350);
	static_assert(UPlaneSeatInfoWidget_C_boolField350_Offset == 0x350, "UPlaneSeatInfoWidget_C::boolField350 offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
