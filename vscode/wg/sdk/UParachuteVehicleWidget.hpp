#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicleWidget // Size: 0x310
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UParachuteVehicleWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1542); // id32("Class TslGame.ParachuteVehicleWidget")
		return ptr;
	}
	ExternalPtr<struct UParachuteVehicle> SavedParachuteVehicle; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicleWidget.SavedParachuteVehicle */
	uint8_t boolField308;
	uint8_t UnknownData309[0x7];


	inline bool SetSavedParachuteVehicle(t_structHelper inst, ExternalPtr<struct UParachuteVehicle> value) { inst.WriteOffset(0x300, value); }
	inline bool bSavedShow()
	{
		return boolField308& 0x1;
	}
	inline bool SetbSavedShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x308, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicleWidget = sizeof(UParachuteVehicleWidget); // 784
    static_assert(sizeof(UParachuteVehicleWidget) == 0x310, "Size of UParachuteVehicleWidget is not correct.");
	auto constexpr UParachuteVehicleWidget_SavedParachuteVehicle_Offset = offsetof(UParachuteVehicleWidget, SavedParachuteVehicle);
	static_assert(UParachuteVehicleWidget_SavedParachuteVehicle_Offset == 0x300, "UParachuteVehicleWidget::SavedParachuteVehicle offset is not 300");
	auto constexpr UParachuteVehicleWidget_boolField308_Offset = offsetof(UParachuteVehicleWidget, boolField308);
	static_assert(UParachuteVehicleWidget_boolField308_Offset == 0x308, "UParachuteVehicleWidget::boolField308 offset is not 308");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
