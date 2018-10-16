#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslKillMessageWidget // Size: 0x350
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslKillMessageWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1578); // id32("Class TslGame.TslKillMessageWidget")
		return ptr;
	}
	FScriptMulticastDelegate OnVanishAnimationFinished; /* Ofs: 0x300 Size: 0x10 - MulticastDelegateProperty TslGame.TslKillMessageWidget.OnVanishAnimationFinished */
	FUmgWidgetBinder_Animation Vanish_Binder; /* Ofs: 0x310 Size: 0x20 - StructProperty TslGame.TslKillMessageWidget.Vanish_Binder */
	TArray<struct FCauseOfDeathData> CauseOfDeathDatas; /* Ofs: 0x330 Size: 0x10 - ArrayProperty TslGame.TslKillMessageWidget.CauseOfDeathDatas */
	TArray<struct FConditionOfDeathData> ConditionOfDeathDatas; /* Ofs: 0x340 Size: 0x10 - ArrayProperty TslGame.TslKillMessageWidget.ConditionOfDeathDatas */


	inline bool SetOnVanishAnimationFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x300, value); }
	inline bool SetVanish_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x310, value); }
	inline bool SetCauseOfDeathDatas(t_structHelper inst, TArray<struct FCauseOfDeathData> value) { inst.WriteOffset(0x330, value); }
	inline bool SetConditionOfDeathDatas(t_structHelper inst, TArray<struct FConditionOfDeathData> value) { inst.WriteOffset(0x340, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslKillMessageWidget = sizeof(UTslKillMessageWidget); // 848
    static_assert(sizeof(UTslKillMessageWidget) == 0x350, "Size of UTslKillMessageWidget is not correct.");
	auto constexpr UTslKillMessageWidget_OnVanishAnimationFinished_Offset = offsetof(UTslKillMessageWidget, OnVanishAnimationFinished);
	static_assert(UTslKillMessageWidget_OnVanishAnimationFinished_Offset == 0x300, "UTslKillMessageWidget::OnVanishAnimationFinished offset is not 300");
	auto constexpr UTslKillMessageWidget_Vanish_Binder_Offset = offsetof(UTslKillMessageWidget, Vanish_Binder);
	static_assert(UTslKillMessageWidget_Vanish_Binder_Offset == 0x310, "UTslKillMessageWidget::Vanish_Binder offset is not 310");
	auto constexpr UTslKillMessageWidget_CauseOfDeathDatas_Offset = offsetof(UTslKillMessageWidget, CauseOfDeathDatas);
	static_assert(UTslKillMessageWidget_CauseOfDeathDatas_Offset == 0x330, "UTslKillMessageWidget::CauseOfDeathDatas offset is not 330");
	auto constexpr UTslKillMessageWidget_ConditionOfDeathDatas_Offset = offsetof(UTslKillMessageWidget, ConditionOfDeathDatas);
	static_assert(UTslKillMessageWidget_ConditionOfDeathDatas_Offset == 0x340, "UTslKillMessageWidget::ConditionOfDeathDatas offset is not 340");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
