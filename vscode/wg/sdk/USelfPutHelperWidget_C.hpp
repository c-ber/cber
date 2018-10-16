#pragma once
#include "UUserWidget.hpp"
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USelfPutHelperWidget_C // Size: 0x291
	: public UUserWidget // Size: 0x248
{
private:
	typedef USelfPutHelperWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(63410); // id32("WidgetBlueprintGeneratedClass SelfPutHelperWidget.SelfPutHelperWidget_C")
		return ptr;
	}
	TScriptInterface<ExternalPtr<struct USlotInterface>> SlotInterface; /* Ofs: 0x248 Size: 0x10 - InterfaceProperty SelfPutHelperWidget.SelfPutHelperWidget_C.SlotInterface */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> SlotContainer; /* Ofs: 0x258 Size: 0x10 - InterfaceProperty SelfPutHelperWidget.SelfPutHelperWidget_C.SlotContainer */
	TArray<int32_t> EnableSelfPutIndexList; /* Ofs: 0x268 Size: 0x10 - ArrayProperty SelfPutHelperWidget.SelfPutHelperWidget_C.EnableSelfPutIndexList */
	int32_t SelectSelfPutIndex; /* Ofs: 0x278 Size: 0x4 - IntProperty SelfPutHelperWidget.SelfPutHelperWidget_C.SelectSelfPutIndex */
	uint8_t boolField27C;
	uint8_t UnknownData27D[0x3];
	FScriptMulticastDelegate OnNotifySelfPut; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut */
	TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x290 Size: 0x1 - EnumProperty SelfPutHelperWidget.SelfPutHelperWidget_C.AttachmentSlotID */


	inline bool SetSlotInterface(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x248, value); }
	inline bool SetSlotContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x258, value); }
	inline bool SetEnableSelfPutIndexList(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSelectSelfPutIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x278, value); }
	inline bool bIsSelfPutMode()
	{
		return boolField27C& 0x1;
	}
	inline bool SetbIsSelfPutMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x27C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnNotifySelfPut(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
	inline bool SetAttachmentSlotID(t_structHelper inst, TEnumAsByte<enum EWeaponAttachmentSlotID> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSelfPutHelperWidget_C = sizeof(USelfPutHelperWidget_C); // 657
    static_assert(sizeof(USelfPutHelperWidget_C) == 0x291, "Size of USelfPutHelperWidget_C is not correct.");
	auto constexpr USelfPutHelperWidget_C_SlotInterface_Offset = offsetof(USelfPutHelperWidget_C, SlotInterface);
	static_assert(USelfPutHelperWidget_C_SlotInterface_Offset == 0x248, "USelfPutHelperWidget_C::SlotInterface offset is not 248");
	auto constexpr USelfPutHelperWidget_C_SlotContainer_Offset = offsetof(USelfPutHelperWidget_C, SlotContainer);
	static_assert(USelfPutHelperWidget_C_SlotContainer_Offset == 0x258, "USelfPutHelperWidget_C::SlotContainer offset is not 258");
	auto constexpr USelfPutHelperWidget_C_EnableSelfPutIndexList_Offset = offsetof(USelfPutHelperWidget_C, EnableSelfPutIndexList);
	static_assert(USelfPutHelperWidget_C_EnableSelfPutIndexList_Offset == 0x268, "USelfPutHelperWidget_C::EnableSelfPutIndexList offset is not 268");
	auto constexpr USelfPutHelperWidget_C_SelectSelfPutIndex_Offset = offsetof(USelfPutHelperWidget_C, SelectSelfPutIndex);
	static_assert(USelfPutHelperWidget_C_SelectSelfPutIndex_Offset == 0x278, "USelfPutHelperWidget_C::SelectSelfPutIndex offset is not 278");
	auto constexpr USelfPutHelperWidget_C_boolField27C_Offset = offsetof(USelfPutHelperWidget_C, boolField27C);
	static_assert(USelfPutHelperWidget_C_boolField27C_Offset == 0x27c, "USelfPutHelperWidget_C::boolField27C offset is not 27c");
	auto constexpr USelfPutHelperWidget_C_OnNotifySelfPut_Offset = offsetof(USelfPutHelperWidget_C, OnNotifySelfPut);
	static_assert(USelfPutHelperWidget_C_OnNotifySelfPut_Offset == 0x280, "USelfPutHelperWidget_C::OnNotifySelfPut offset is not 280");
	auto constexpr USelfPutHelperWidget_C_AttachmentSlotID_Offset = offsetof(USelfPutHelperWidget_C, AttachmentSlotID);
	static_assert(USelfPutHelperWidget_C_AttachmentSlotID_Offset == 0x290, "USelfPutHelperWidget_C::AttachmentSlotID offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
