#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Warmode_PointFeedback_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBP_Warmode_PointFeedback_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193314); // id32("WidgetBlueprintGeneratedClass BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> Test; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C.Test */
	ExternalPtr<struct UWidgetAnimation> PointNegativeAnim; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C.PointNegativeAnim */
	ExternalPtr<struct UWidgetAnimation> PointPositiveAnim; /* Ofs: 0x260 Size: 0x8 - ObjectProperty BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C.PointPositiveAnim */
	ExternalPtr<struct UTextBlock> PointFeedbackText; /* Ofs: 0x268 Size: 0x8 - ObjectProperty BP_Warmode_PointFeedback.BP_Warmode_PointFeedback_C.PointFeedbackText */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetTest(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetPointNegativeAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPointPositiveAnim(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPointFeedbackText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Warmode_PointFeedback_C = sizeof(UBP_Warmode_PointFeedback_C); // 624
    static_assert(sizeof(UBP_Warmode_PointFeedback_C) == 0x270, "Size of UBP_Warmode_PointFeedback_C is not correct.");
	auto constexpr UBP_Warmode_PointFeedback_C_UberGraphFrame_Offset = offsetof(UBP_Warmode_PointFeedback_C, UberGraphFrame);
	static_assert(UBP_Warmode_PointFeedback_C_UberGraphFrame_Offset == 0x248, "UBP_Warmode_PointFeedback_C::UberGraphFrame offset is not 248");
	auto constexpr UBP_Warmode_PointFeedback_C_Test_Offset = offsetof(UBP_Warmode_PointFeedback_C, Test);
	static_assert(UBP_Warmode_PointFeedback_C_Test_Offset == 0x250, "UBP_Warmode_PointFeedback_C::Test offset is not 250");
	auto constexpr UBP_Warmode_PointFeedback_C_PointNegativeAnim_Offset = offsetof(UBP_Warmode_PointFeedback_C, PointNegativeAnim);
	static_assert(UBP_Warmode_PointFeedback_C_PointNegativeAnim_Offset == 0x258, "UBP_Warmode_PointFeedback_C::PointNegativeAnim offset is not 258");
	auto constexpr UBP_Warmode_PointFeedback_C_PointPositiveAnim_Offset = offsetof(UBP_Warmode_PointFeedback_C, PointPositiveAnim);
	static_assert(UBP_Warmode_PointFeedback_C_PointPositiveAnim_Offset == 0x260, "UBP_Warmode_PointFeedback_C::PointPositiveAnim offset is not 260");
	auto constexpr UBP_Warmode_PointFeedback_C_PointFeedbackText_Offset = offsetof(UBP_Warmode_PointFeedback_C, PointFeedbackText);
	static_assert(UBP_Warmode_PointFeedback_C_PointFeedbackText_Offset == 0x268, "UBP_Warmode_PointFeedback_C::PointFeedbackText offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
