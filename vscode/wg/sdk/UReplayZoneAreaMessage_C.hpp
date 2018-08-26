#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayZoneAreaMessage_C // Size: 0x25C
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReplayZoneAreaMessage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191050); // id32("WidgetBlueprintGeneratedClass ReplayZoneAreaMessage.ReplayZoneAreaMessage_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UberGraphFrame */
	ExternalPtr<struct UBorder> BorderReplayZoneArea; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.BorderReplayZoneArea */
	float SpanTime; /* Ofs: 0x258 Size: 0x4 - FloatProperty ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.SpanTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBorderReplayZoneArea(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x250, value); }
	inline bool SetSpanTime(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayZoneAreaMessage_C = sizeof(UReplayZoneAreaMessage_C); // 604
    static_assert(sizeof(UReplayZoneAreaMessage_C) == 0x25C, "Size of UReplayZoneAreaMessage_C is not correct.");
	auto constexpr UReplayZoneAreaMessage_C_UberGraphFrame_Offset = offsetof(UReplayZoneAreaMessage_C, UberGraphFrame);
	static_assert(UReplayZoneAreaMessage_C_UberGraphFrame_Offset == 0x248, "UReplayZoneAreaMessage_C::UberGraphFrame offset is not 248");
	auto constexpr UReplayZoneAreaMessage_C_BorderReplayZoneArea_Offset = offsetof(UReplayZoneAreaMessage_C, BorderReplayZoneArea);
	static_assert(UReplayZoneAreaMessage_C_BorderReplayZoneArea_Offset == 0x250, "UReplayZoneAreaMessage_C::BorderReplayZoneArea offset is not 250");
	auto constexpr UReplayZoneAreaMessage_C_SpanTime_Offset = offsetof(UReplayZoneAreaMessage_C, SpanTime);
	static_assert(UReplayZoneAreaMessage_C_SpanTime_Offset == 0x258, "UReplayZoneAreaMessage_C::SpanTime offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
