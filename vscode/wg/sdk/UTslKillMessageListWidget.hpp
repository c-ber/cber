#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKillMessageListWidget // Size: 0x320
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslKillMessageListWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1577); // id32("Class TslGame.TslKillMessageListWidget")
		return ptr;
	}
	ExternalPtr<struct UClass> KillMessageWidgetClass; /* Ofs: 0x300 Size: 0x8 - ClassProperty TslGame.TslKillMessageListWidget.KillMessageWidgetClass */
	TArray<ExternalPtr<struct UTslKillMessageWidget>> KillMessageWidgetArray; /* Ofs: 0x308 Size: 0x10 - ArrayProperty TslGame.TslKillMessageListWidget.KillMessageWidgetArray */
	float FadeoutStartTime; /* Ofs: 0x318 Size: 0x4 - FloatProperty TslGame.TslKillMessageListWidget.FadeoutStartTime */
	uint8_t UnknownData31C[0x4];


	inline bool SetKillMessageWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x300, value); }
	inline bool SetKillMessageWidgetArray(t_structHelper inst, TArray<ExternalPtr<struct UTslKillMessageWidget>> value) { inst.WriteOffset(0x308, value); }
	inline bool SetFadeoutStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKillMessageListWidget = sizeof(UTslKillMessageListWidget); // 800
    static_assert(sizeof(UTslKillMessageListWidget) == 0x320, "Size of UTslKillMessageListWidget is not correct.");
	auto constexpr UTslKillMessageListWidget_KillMessageWidgetClass_Offset = offsetof(UTslKillMessageListWidget, KillMessageWidgetClass);
	static_assert(UTslKillMessageListWidget_KillMessageWidgetClass_Offset == 0x300, "UTslKillMessageListWidget::KillMessageWidgetClass offset is not 300");
	auto constexpr UTslKillMessageListWidget_KillMessageWidgetArray_Offset = offsetof(UTslKillMessageListWidget, KillMessageWidgetArray);
	static_assert(UTslKillMessageListWidget_KillMessageWidgetArray_Offset == 0x308, "UTslKillMessageListWidget::KillMessageWidgetArray offset is not 308");
	auto constexpr UTslKillMessageListWidget_FadeoutStartTime_Offset = offsetof(UTslKillMessageListWidget, FadeoutStartTime);
	static_assert(UTslKillMessageListWidget_FadeoutStartTime_Offset == 0x318, "UTslKillMessageListWidget::FadeoutStartTime offset is not 318");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
