#pragma once
#include "UTslInventoryCapacityWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_InventoryCapacityWidget_C // Size: 0x32D
	: public UTslInventoryCapacityWidget // Size: 0x310
{
private:
	typedef UBP_InventoryCapacityWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64277); // id32("WidgetBlueprintGeneratedClass BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x310 Size: 0x8 - StructProperty BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> CapacityImage; /* Ofs: 0x318 Size: 0x8 - ObjectProperty BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.CapacityImage */
	ExternalPtr<struct UImage> FeedbackImage; /* Ofs: 0x320 Size: 0x8 - ObjectProperty BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.FeedbackImage */
	float ConstGameMaxSpace; /* Ofs: 0x328 Size: 0x4 - FloatProperty BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ConstGameMaxSpace */
	uint8_t boolField32C;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x310, value); }
	inline bool SetCapacityImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x318, value); }
	inline bool SetFeedbackImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x320, value); }
	inline bool SetConstGameMaxSpace(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool bPendingRefresh()
	{
		return boolField32C& 0x1;
	}
	inline bool SetbPendingRefresh(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x32C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_InventoryCapacityWidget_C = sizeof(UBP_InventoryCapacityWidget_C); // 813
    static_assert(sizeof(UBP_InventoryCapacityWidget_C) == 0x32D, "Size of UBP_InventoryCapacityWidget_C is not correct.");
	auto constexpr UBP_InventoryCapacityWidget_C_UberGraphFrame_Offset = offsetof(UBP_InventoryCapacityWidget_C, UberGraphFrame);
	static_assert(UBP_InventoryCapacityWidget_C_UberGraphFrame_Offset == 0x310, "UBP_InventoryCapacityWidget_C::UberGraphFrame offset is not 310");
	auto constexpr UBP_InventoryCapacityWidget_C_CapacityImage_Offset = offsetof(UBP_InventoryCapacityWidget_C, CapacityImage);
	static_assert(UBP_InventoryCapacityWidget_C_CapacityImage_Offset == 0x318, "UBP_InventoryCapacityWidget_C::CapacityImage offset is not 318");
	auto constexpr UBP_InventoryCapacityWidget_C_FeedbackImage_Offset = offsetof(UBP_InventoryCapacityWidget_C, FeedbackImage);
	static_assert(UBP_InventoryCapacityWidget_C_FeedbackImage_Offset == 0x320, "UBP_InventoryCapacityWidget_C::FeedbackImage offset is not 320");
	auto constexpr UBP_InventoryCapacityWidget_C_ConstGameMaxSpace_Offset = offsetof(UBP_InventoryCapacityWidget_C, ConstGameMaxSpace);
	static_assert(UBP_InventoryCapacityWidget_C_ConstGameMaxSpace_Offset == 0x328, "UBP_InventoryCapacityWidget_C::ConstGameMaxSpace offset is not 328");
	auto constexpr UBP_InventoryCapacityWidget_C_boolField32C_Offset = offsetof(UBP_InventoryCapacityWidget_C, boolField32C);
	static_assert(UBP_InventoryCapacityWidget_C_boolField32C_Offset == 0x32c, "UBP_InventoryCapacityWidget_C::boolField32C offset is not 32c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
