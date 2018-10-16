#pragma once
#include "UTslConsoleGuideWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsoleGuideWidget_v3_C // Size: 0x318
	: public UTslConsoleGuideWidget // Size: 0x300
{
private:
	typedef UConsoleGuideWidget_v3_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(63957); // id32("WidgetBlueprintGeneratedClass ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x300 Size: 0x8 - StructProperty ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.UberGraphFrame */
	ExternalPtr<struct UConsoleGuideLineWidget_C> ConsoleGuideLineWidgetLower; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ConsoleGuideLineWidgetLower */
	ExternalPtr<struct UConsoleGuideLineWidget_C> ConsoleGuideLineWidgetUpper; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ConsoleGuideLineWidgetUpper */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x300, value); }
	inline bool SetConsoleGuideLineWidgetLower(t_structHelper inst, ExternalPtr<struct UConsoleGuideLineWidget_C> value) { inst.WriteOffset(0x308, value); }
	inline bool SetConsoleGuideLineWidgetUpper(t_structHelper inst, ExternalPtr<struct UConsoleGuideLineWidget_C> value) { inst.WriteOffset(0x310, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsoleGuideWidget_v3_C = sizeof(UConsoleGuideWidget_v3_C); // 792
    static_assert(sizeof(UConsoleGuideWidget_v3_C) == 0x318, "Size of UConsoleGuideWidget_v3_C is not correct.");
	auto constexpr UConsoleGuideWidget_v3_C_UberGraphFrame_Offset = offsetof(UConsoleGuideWidget_v3_C, UberGraphFrame);
	static_assert(UConsoleGuideWidget_v3_C_UberGraphFrame_Offset == 0x300, "UConsoleGuideWidget_v3_C::UberGraphFrame offset is not 300");
	auto constexpr UConsoleGuideWidget_v3_C_ConsoleGuideLineWidgetLower_Offset = offsetof(UConsoleGuideWidget_v3_C, ConsoleGuideLineWidgetLower);
	static_assert(UConsoleGuideWidget_v3_C_ConsoleGuideLineWidgetLower_Offset == 0x308, "UConsoleGuideWidget_v3_C::ConsoleGuideLineWidgetLower offset is not 308");
	auto constexpr UConsoleGuideWidget_v3_C_ConsoleGuideLineWidgetUpper_Offset = offsetof(UConsoleGuideWidget_v3_C, ConsoleGuideLineWidgetUpper);
	static_assert(UConsoleGuideWidget_v3_C_ConsoleGuideLineWidgetUpper_Offset == 0x310, "UConsoleGuideWidget_v3_C::ConsoleGuideLineWidgetUpper offset is not 310");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
