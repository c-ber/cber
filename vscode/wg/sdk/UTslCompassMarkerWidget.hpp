#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCompassMarkerWidget // Size: 0x338
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslCompassMarkerWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1562); // id32("Class TslGame.TslCompassMarkerWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image CompassMarkerImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.TslCompassMarkerWidget.CompassMarkerImageBinder */
	int32_t MarkerNumber; /* Ofs: 0x328 Size: 0x4 - IntProperty TslGame.TslCompassMarkerWidget.MarkerNumber */
	float XViewSize; /* Ofs: 0x32C Size: 0x4 - FloatProperty TslGame.TslCompassMarkerWidget.XViewSize */
	uint8_t boolField330;
	uint8_t UnknownData331[0x7];


	inline bool SetCompassMarkerImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetMarkerNumber(t_structHelper inst, int32_t value) { inst.WriteOffset(0x328, value); }
	inline bool SetXViewSize(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool bShow()
	{
		return boolField330& 0x1;
	}
	inline bool SetbShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x330, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCompassMarkerWidget = sizeof(UTslCompassMarkerWidget); // 824
    static_assert(sizeof(UTslCompassMarkerWidget) == 0x338, "Size of UTslCompassMarkerWidget is not correct.");
	auto constexpr UTslCompassMarkerWidget_CompassMarkerImageBinder_Offset = offsetof(UTslCompassMarkerWidget, CompassMarkerImageBinder);
	static_assert(UTslCompassMarkerWidget_CompassMarkerImageBinder_Offset == 0x300, "UTslCompassMarkerWidget::CompassMarkerImageBinder offset is not 300");
	auto constexpr UTslCompassMarkerWidget_MarkerNumber_Offset = offsetof(UTslCompassMarkerWidget, MarkerNumber);
	static_assert(UTslCompassMarkerWidget_MarkerNumber_Offset == 0x328, "UTslCompassMarkerWidget::MarkerNumber offset is not 328");
	auto constexpr UTslCompassMarkerWidget_XViewSize_Offset = offsetof(UTslCompassMarkerWidget, XViewSize);
	static_assert(UTslCompassMarkerWidget_XViewSize_Offset == 0x32c, "UTslCompassMarkerWidget::XViewSize offset is not 32c");
	auto constexpr UTslCompassMarkerWidget_boolField330_Offset = offsetof(UTslCompassMarkerWidget, boolField330);
	static_assert(UTslCompassMarkerWidget_boolField330_Offset == 0x330, "UTslCompassMarkerWidget::boolField330 offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
