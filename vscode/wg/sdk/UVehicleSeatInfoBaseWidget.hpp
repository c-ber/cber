#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatInfoBaseWidget // Size: 0x348
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UVehicleSeatInfoBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1590); // id32("Class TslGame.VehicleSeatInfoBaseWidget")
		return ptr;
	}
	int32_t SeatIndex; /* Ofs: 0x300 Size: 0x4 - IntProperty TslGame.VehicleSeatInfoBaseWidget.SeatIndex */
	uint8_t UnknownData304[0x4];
	FName StateParamName; /* Ofs: 0x308 Size: 0x8 - NameProperty TslGame.VehicleSeatInfoBaseWidget.StateParamName */
	FUmgWidgetBinder_Image SeatImageBinder; /* Ofs: 0x310 Size: 0x28 - StructProperty TslGame.VehicleSeatInfoBaseWidget.SeatImageBinder */
	ExternalPtr<struct UPawn> CachedVehiclePawn; /* Ofs: 0x338 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInfoBaseWidget.CachedVehiclePawn */
	ExternalPtr<struct UTslVehicleSeatComponent> CachedSeatComponent; /* Ofs: 0x340 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInfoBaseWidget.CachedSeatComponent */


	inline bool SetSeatIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetStateParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x308, value); }
	inline bool SetSeatImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x310, value); }
	inline bool SetCachedVehiclePawn(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x338, value); }
	inline bool SetCachedSeatComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSeatComponent> value) { inst.WriteOffset(0x340, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatInfoBaseWidget = sizeof(UVehicleSeatInfoBaseWidget); // 840
    static_assert(sizeof(UVehicleSeatInfoBaseWidget) == 0x348, "Size of UVehicleSeatInfoBaseWidget is not correct.");
	auto constexpr UVehicleSeatInfoBaseWidget_SeatIndex_Offset = offsetof(UVehicleSeatInfoBaseWidget, SeatIndex);
	static_assert(UVehicleSeatInfoBaseWidget_SeatIndex_Offset == 0x300, "UVehicleSeatInfoBaseWidget::SeatIndex offset is not 300");
	auto constexpr UVehicleSeatInfoBaseWidget_StateParamName_Offset = offsetof(UVehicleSeatInfoBaseWidget, StateParamName);
	static_assert(UVehicleSeatInfoBaseWidget_StateParamName_Offset == 0x308, "UVehicleSeatInfoBaseWidget::StateParamName offset is not 308");
	auto constexpr UVehicleSeatInfoBaseWidget_SeatImageBinder_Offset = offsetof(UVehicleSeatInfoBaseWidget, SeatImageBinder);
	static_assert(UVehicleSeatInfoBaseWidget_SeatImageBinder_Offset == 0x310, "UVehicleSeatInfoBaseWidget::SeatImageBinder offset is not 310");
	auto constexpr UVehicleSeatInfoBaseWidget_CachedVehiclePawn_Offset = offsetof(UVehicleSeatInfoBaseWidget, CachedVehiclePawn);
	static_assert(UVehicleSeatInfoBaseWidget_CachedVehiclePawn_Offset == 0x338, "UVehicleSeatInfoBaseWidget::CachedVehiclePawn offset is not 338");
	auto constexpr UVehicleSeatInfoBaseWidget_CachedSeatComponent_Offset = offsetof(UVehicleSeatInfoBaseWidget, CachedSeatComponent);
	static_assert(UVehicleSeatInfoBaseWidget_CachedSeatComponent_Offset == 0x340, "UVehicleSeatInfoBaseWidget::CachedSeatComponent offset is not 340");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
