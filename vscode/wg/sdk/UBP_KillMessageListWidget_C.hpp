#pragma once
#include "UTslKillMessageListWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_KillMessageListWidget_C // Size: 0x330
	: public UTslKillMessageListWidget // Size: 0x320
{
private:
	typedef UBP_KillMessageListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194946); // id32("WidgetBlueprintGeneratedClass BP_KillMessageListWidget.BP_KillMessageListWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x320 Size: 0x8 - StructProperty BP_KillMessageListWidget.BP_KillMessageListWidget_C.UberGraphFrame */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_KillMessageListWidget.BP_KillMessageListWidget_C.VerticalBox_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x320, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x328, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_KillMessageListWidget_C = sizeof(UBP_KillMessageListWidget_C); // 816
    static_assert(sizeof(UBP_KillMessageListWidget_C) == 0x330, "Size of UBP_KillMessageListWidget_C is not correct.");
	auto constexpr UBP_KillMessageListWidget_C_UberGraphFrame_Offset = offsetof(UBP_KillMessageListWidget_C, UberGraphFrame);
	static_assert(UBP_KillMessageListWidget_C_UberGraphFrame_Offset == 0x320, "UBP_KillMessageListWidget_C::UberGraphFrame offset is not 320");
	auto constexpr UBP_KillMessageListWidget_C_VerticalBox_1_Offset = offsetof(UBP_KillMessageListWidget_C, VerticalBox_1);
	static_assert(UBP_KillMessageListWidget_C_VerticalBox_1_Offset == 0x328, "UBP_KillMessageListWidget_C::VerticalBox_1 offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
