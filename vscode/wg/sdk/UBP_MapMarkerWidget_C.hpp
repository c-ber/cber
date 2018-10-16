#pragma once
#include "UMapMarkerBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MapMarkerWidget_C // Size: 0x37D
	: public UMapMarkerBaseWidget // Size: 0x360
{
private:
	typedef UBP_MapMarkerWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67629); // id32("WidgetBlueprintGeneratedClass BP_MapMarkerWidget.BP_MapMarkerWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> MyMarkerEmerging; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_MapMarkerWidget.BP_MapMarkerWidget_C.MyMarkerEmerging */
	ExternalPtr<struct UImage> MarkerImage; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_MapMarkerWidget.BP_MapMarkerWidget_C.MarkerImage */
	ExternalPtr<struct UMaterialInstanceDynamic> MarkerMaterial; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_MapMarkerWidget.BP_MapMarkerWidget_C.MarkerMaterial */
	int32_t Number; /* Ofs: 0x378 Size: 0x4 - IntProperty BP_MapMarkerWidget.BP_MapMarkerWidget_C.Number */
	uint8_t boolField37C;


	inline bool SetMyMarkerEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x360, value); }
	inline bool SetMarkerImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetMarkerMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x370, value); }
	inline bool SetNumber(t_structHelper inst, int32_t value) { inst.WriteOffset(0x378, value); }
	inline bool bShow()
	{
		return boolField37C& 0x1;
	}
	inline bool SetbShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x37C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MapMarkerWidget_C = sizeof(UBP_MapMarkerWidget_C); // 893
    static_assert(sizeof(UBP_MapMarkerWidget_C) == 0x37D, "Size of UBP_MapMarkerWidget_C is not correct.");
	auto constexpr UBP_MapMarkerWidget_C_MyMarkerEmerging_Offset = offsetof(UBP_MapMarkerWidget_C, MyMarkerEmerging);
	static_assert(UBP_MapMarkerWidget_C_MyMarkerEmerging_Offset == 0x360, "UBP_MapMarkerWidget_C::MyMarkerEmerging offset is not 360");
	auto constexpr UBP_MapMarkerWidget_C_MarkerImage_Offset = offsetof(UBP_MapMarkerWidget_C, MarkerImage);
	static_assert(UBP_MapMarkerWidget_C_MarkerImage_Offset == 0x368, "UBP_MapMarkerWidget_C::MarkerImage offset is not 368");
	auto constexpr UBP_MapMarkerWidget_C_MarkerMaterial_Offset = offsetof(UBP_MapMarkerWidget_C, MarkerMaterial);
	static_assert(UBP_MapMarkerWidget_C_MarkerMaterial_Offset == 0x370, "UBP_MapMarkerWidget_C::MarkerMaterial offset is not 370");
	auto constexpr UBP_MapMarkerWidget_C_Number_Offset = offsetof(UBP_MapMarkerWidget_C, Number);
	static_assert(UBP_MapMarkerWidget_C_Number_Offset == 0x378, "UBP_MapMarkerWidget_C::Number offset is not 378");
	auto constexpr UBP_MapMarkerWidget_C_boolField37C_Offset = offsetof(UBP_MapMarkerWidget_C, boolField37C);
	static_assert(UBP_MapMarkerWidget_C_boolField37C_Offset == 0x37c, "UBP_MapMarkerWidget_C::boolField37C offset is not 37c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
