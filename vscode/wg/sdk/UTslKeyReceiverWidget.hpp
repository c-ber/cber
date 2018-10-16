#pragma once
#include "UUmgBaseWidget.hpp"
#include "FTslInputKey.hpp"
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKeyReceiverWidget // Size: 0x3A0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslKeyReceiverWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1576); // id32("Class TslGame.TslKeyReceiverWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnKeyReceived; /* Ofs: 0x300 Size: 0x10 - MulticastDelegateProperty TslGame.TslKeyReceiverWidget.OnKeyReceived */
	FTslInputKey OriginKey; /* Ofs: 0x310 Size: 0x20 - StructProperty TslGame.TslKeyReceiverWidget.OriginKey */
	FKey FirstDownKey; /* Ofs: 0x330 Size: 0x18 - StructProperty TslGame.TslKeyReceiverWidget.FirstDownKey */
	FTslInputKey CurrentDownKey; /* Ofs: 0x348 Size: 0x20 - StructProperty TslGame.TslKeyReceiverWidget.CurrentDownKey */
	FTslInputKey LastDownedKey; /* Ofs: 0x368 Size: 0x20 - StructProperty TslGame.TslKeyReceiverWidget.LastDownedKey */
	uint8_t boolField388;
	uint8_t boolField389;
	uint8_t boolField38A;
	uint8_t boolField38B;
	float AxisScale; /* Ofs: 0x38C Size: 0x4 - FloatProperty TslGame.TslKeyReceiverWidget.AxisScale */
	TArray<struct FKey> MouseButtons; /* Ofs: 0x390 Size: 0x10 - ArrayProperty TslGame.TslKeyReceiverWidget.MouseButtons */


	inline bool SetOnKeyReceived(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x300, value); }
	inline bool SetOriginKey(t_structHelper inst, FTslInputKey value) { inst.WriteOffset(0x310, value); }
	inline bool SetFirstDownKey(t_structHelper inst, FKey value) { inst.WriteOffset(0x330, value); }
	inline bool SetCurrentDownKey(t_structHelper inst, FTslInputKey value) { inst.WriteOffset(0x348, value); }
	inline bool SetLastDownedKey(t_structHelper inst, FTslInputKey value) { inst.WriteOffset(0x368, value); }
	inline bool bFocused()
	{
		return boolField388& 0x1;
	}
	inline bool SetbFocused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x388, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableInput()
	{
		return boolField389& 0x1;
	}
	inline bool SetbEnableInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x389, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsKeyUp()
	{
		return boolField38A& 0x1;
	}
	inline bool SetbIsKeyUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAxisInput()
	{
		return boolField38B& 0x1;
	}
	inline bool SetbAxisInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAxisScale(t_structHelper inst, float value) { inst.WriteOffset(0x38C, value); }
	inline bool SetMouseButtons(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x390, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKeyReceiverWidget = sizeof(UTslKeyReceiverWidget); // 928
    static_assert(sizeof(UTslKeyReceiverWidget) == 0x3A0, "Size of UTslKeyReceiverWidget is not correct.");
	auto constexpr UTslKeyReceiverWidget_OnKeyReceived_Offset = offsetof(UTslKeyReceiverWidget, OnKeyReceived);
	static_assert(UTslKeyReceiverWidget_OnKeyReceived_Offset == 0x300, "UTslKeyReceiverWidget::OnKeyReceived offset is not 300");
	auto constexpr UTslKeyReceiverWidget_OriginKey_Offset = offsetof(UTslKeyReceiverWidget, OriginKey);
	static_assert(UTslKeyReceiverWidget_OriginKey_Offset == 0x310, "UTslKeyReceiverWidget::OriginKey offset is not 310");
	auto constexpr UTslKeyReceiverWidget_FirstDownKey_Offset = offsetof(UTslKeyReceiverWidget, FirstDownKey);
	static_assert(UTslKeyReceiverWidget_FirstDownKey_Offset == 0x330, "UTslKeyReceiverWidget::FirstDownKey offset is not 330");
	auto constexpr UTslKeyReceiverWidget_CurrentDownKey_Offset = offsetof(UTslKeyReceiverWidget, CurrentDownKey);
	static_assert(UTslKeyReceiverWidget_CurrentDownKey_Offset == 0x348, "UTslKeyReceiverWidget::CurrentDownKey offset is not 348");
	auto constexpr UTslKeyReceiverWidget_LastDownedKey_Offset = offsetof(UTslKeyReceiverWidget, LastDownedKey);
	static_assert(UTslKeyReceiverWidget_LastDownedKey_Offset == 0x368, "UTslKeyReceiverWidget::LastDownedKey offset is not 368");
	auto constexpr UTslKeyReceiverWidget_boolField388_Offset = offsetof(UTslKeyReceiverWidget, boolField388);
	static_assert(UTslKeyReceiverWidget_boolField388_Offset == 0x388, "UTslKeyReceiverWidget::boolField388 offset is not 388");
	auto constexpr UTslKeyReceiverWidget_boolField389_Offset = offsetof(UTslKeyReceiverWidget, boolField389);
	static_assert(UTslKeyReceiverWidget_boolField389_Offset == 0x389, "UTslKeyReceiverWidget::boolField389 offset is not 389");
	auto constexpr UTslKeyReceiverWidget_boolField38A_Offset = offsetof(UTslKeyReceiverWidget, boolField38A);
	static_assert(UTslKeyReceiverWidget_boolField38A_Offset == 0x38a, "UTslKeyReceiverWidget::boolField38A offset is not 38a");
	auto constexpr UTslKeyReceiverWidget_boolField38B_Offset = offsetof(UTslKeyReceiverWidget, boolField38B);
	static_assert(UTslKeyReceiverWidget_boolField38B_Offset == 0x38b, "UTslKeyReceiverWidget::boolField38B offset is not 38b");
	auto constexpr UTslKeyReceiverWidget_AxisScale_Offset = offsetof(UTslKeyReceiverWidget, AxisScale);
	static_assert(UTslKeyReceiverWidget_AxisScale_Offset == 0x38c, "UTslKeyReceiverWidget::AxisScale offset is not 38c");
	auto constexpr UTslKeyReceiverWidget_MouseButtons_Offset = offsetof(UTslKeyReceiverWidget, MouseButtons);
	static_assert(UTslKeyReceiverWidget_MouseButtons_Offset == 0x390, "UTslKeyReceiverWidget::MouseButtons offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
