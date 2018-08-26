#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGroggyCircleWidget // Size: 0x360
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGroggyCircleWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1572); // id32("Class TslGame.TslGroggyCircleWidget")
		return ptr;
	}
	ExternalPtr<struct UMaterialInstanceDynamic> MID_ProgressCircle; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslGroggyCircleWidget.MID_ProgressCircle */
	ExternalPtr<struct UMaterialInterface> MI_ProgressCircle; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslGroggyCircleWidget.MI_ProgressCircle */
	FUmgWidgetBinder_Image CircleImageBinder; /* Ofs: 0x310 Size: 0x28 - StructProperty TslGame.TslGroggyCircleWidget.CircleImageBinder */
	FUmgWidgetBinder_Image CrossImageBinder; /* Ofs: 0x338 Size: 0x28 - StructProperty TslGame.TslGroggyCircleWidget.CrossImageBinder */


	inline bool SetMID_ProgressCircle(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x300, value); }
	inline bool SetMI_ProgressCircle(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x308, value); }
	inline bool SetCircleImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x310, value); }
	inline bool SetCrossImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGroggyCircleWidget = sizeof(UTslGroggyCircleWidget); // 864
    static_assert(sizeof(UTslGroggyCircleWidget) == 0x360, "Size of UTslGroggyCircleWidget is not correct.");
	auto constexpr UTslGroggyCircleWidget_MID_ProgressCircle_Offset = offsetof(UTslGroggyCircleWidget, MID_ProgressCircle);
	static_assert(UTslGroggyCircleWidget_MID_ProgressCircle_Offset == 0x300, "UTslGroggyCircleWidget::MID_ProgressCircle offset is not 300");
	auto constexpr UTslGroggyCircleWidget_MI_ProgressCircle_Offset = offsetof(UTslGroggyCircleWidget, MI_ProgressCircle);
	static_assert(UTslGroggyCircleWidget_MI_ProgressCircle_Offset == 0x308, "UTslGroggyCircleWidget::MI_ProgressCircle offset is not 308");
	auto constexpr UTslGroggyCircleWidget_CircleImageBinder_Offset = offsetof(UTslGroggyCircleWidget, CircleImageBinder);
	static_assert(UTslGroggyCircleWidget_CircleImageBinder_Offset == 0x310, "UTslGroggyCircleWidget::CircleImageBinder offset is not 310");
	auto constexpr UTslGroggyCircleWidget_CrossImageBinder_Offset = offsetof(UTslGroggyCircleWidget, CrossImageBinder);
	static_assert(UTslGroggyCircleWidget_CrossImageBinder_Offset == 0x338, "UTslGroggyCircleWidget::CrossImageBinder offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
