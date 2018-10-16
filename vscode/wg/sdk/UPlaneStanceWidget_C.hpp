#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlaneStanceWidget_C // Size: 0x5AC
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPlaneStanceWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(156773); // id32("WidgetBlueprintGeneratedClass PlaneStanceWidget.PlaneStanceWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty PlaneStanceWidget.PlaneStanceWidget_C.UberGraphFrame */
	ExternalPtr<struct UInvalidationBox> InvalidationBox_Img; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.InvalidationBox_Img */
	ExternalPtr<struct UImage> PlaneImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneImage */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_01A; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_01A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_01B; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_01B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_01C; /* Ofs: 0x270 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_01C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_01D; /* Ofs: 0x278 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_01D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_02A; /* Ofs: 0x280 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_02A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_02B; /* Ofs: 0x288 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_02B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_02C; /* Ofs: 0x290 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_02C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_02D; /* Ofs: 0x298 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_02D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_03A; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_03A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_03B; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_03B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_03C; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_03C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_03D; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_03D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_04A; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_04A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_04B; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_04B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_04C; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_04C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_04D; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_04D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_05A; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_05A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_05B; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_05B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_05C; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_05C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_05D; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_05D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_06A; /* Ofs: 0x300 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_06A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_06B; /* Ofs: 0x308 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_06B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_06C; /* Ofs: 0x310 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_06C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_06D; /* Ofs: 0x318 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_06D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_07A; /* Ofs: 0x320 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_07A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_07B; /* Ofs: 0x328 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_07B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_07C; /* Ofs: 0x330 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_07C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_07D; /* Ofs: 0x338 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_07D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_08A; /* Ofs: 0x340 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_08A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_08B; /* Ofs: 0x348 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_08B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_08C; /* Ofs: 0x350 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_08C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_08D; /* Ofs: 0x358 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_08D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_09A; /* Ofs: 0x360 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_09A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_09B; /* Ofs: 0x368 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_09B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_09C; /* Ofs: 0x370 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_09C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_09D; /* Ofs: 0x378 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_09D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_10A; /* Ofs: 0x380 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_10A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_10B; /* Ofs: 0x388 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_10B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_10C; /* Ofs: 0x390 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_10C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_10D; /* Ofs: 0x398 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_10D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_11A; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_11A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_11B; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_11B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_11C; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_11C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_11D; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_11D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_12A; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_12A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_12B; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_12B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_12C; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_12C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_12D; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_12D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_13A; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_13A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_13B; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_13B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_13C; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_13C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_13D; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_13D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_14A; /* Ofs: 0x400 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_14A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_14B; /* Ofs: 0x408 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_14B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_14C; /* Ofs: 0x410 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_14C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_14D; /* Ofs: 0x418 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_14D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_15A; /* Ofs: 0x420 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_15A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_15B; /* Ofs: 0x428 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_15B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_15C; /* Ofs: 0x430 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_15C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_15D; /* Ofs: 0x438 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_15D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_16A; /* Ofs: 0x440 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_16A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_16B; /* Ofs: 0x448 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_16B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_16C; /* Ofs: 0x450 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_16C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_16D; /* Ofs: 0x458 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_16D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_17A; /* Ofs: 0x460 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_17A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_17B; /* Ofs: 0x468 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_17B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_17C; /* Ofs: 0x470 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_17C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_17D; /* Ofs: 0x478 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_17D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_18A; /* Ofs: 0x480 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_18A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_18B; /* Ofs: 0x488 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_18B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_18C; /* Ofs: 0x490 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_18C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_18D; /* Ofs: 0x498 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_18D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_19A; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_19A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_19B; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_19B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_19C; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_19C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_19D; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_19D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_20A; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_20A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_20B; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_20B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_20C; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_20C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_20D; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_20D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_21A; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_21A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_21B; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_21B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_21C; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_21C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_21D; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_21D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_22A; /* Ofs: 0x500 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_22A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_22B; /* Ofs: 0x508 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_22B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_22C; /* Ofs: 0x510 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_22C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_22D; /* Ofs: 0x518 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_22D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_23A; /* Ofs: 0x520 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_23A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_23B; /* Ofs: 0x528 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_23B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_23C; /* Ofs: 0x530 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_23C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_23D; /* Ofs: 0x538 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_23D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_24A; /* Ofs: 0x540 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_24A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_24B; /* Ofs: 0x548 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_24B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_24C; /* Ofs: 0x550 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_24C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_24D; /* Ofs: 0x558 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_24D */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_25A; /* Ofs: 0x560 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_25A */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_25B; /* Ofs: 0x568 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_25B */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_25C; /* Ofs: 0x570 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_25C */
	ExternalPtr<struct UPlaneSeatInfoWidget_C> PlaneSeat_25D; /* Ofs: 0x578 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.PlaneSeat_25D */
	ExternalPtr<struct UCanvasPanel> SeatPanel; /* Ofs: 0x580 Size: 0x8 - ObjectProperty PlaneStanceWidget.PlaneStanceWidget_C.SeatPanel */
	TArray<ExternalPtr<struct UPlaneSeatInfoWidget_C>> CachedSeatWidgets; /* Ofs: 0x588 Size: 0x10 - ArrayProperty PlaneStanceWidget.PlaneStanceWidget_C.CachedSeatWidgets */
	TArray<ExternalPtr<struct UPlaneSeatInfoWidget_C>> bNeedSet; /* Ofs: 0x598 Size: 0x10 - ArrayProperty PlaneStanceWidget.PlaneStanceWidget_C.bNeedSet */
	int32_t PrevRiderCount; /* Ofs: 0x5A8 Size: 0x4 - IntProperty PlaneStanceWidget.PlaneStanceWidget_C.PrevRiderCount */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetInvalidationBox_Img(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetPlaneImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPlaneSeat_01A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPlaneSeat_01B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetPlaneSeat_01C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x270, value); }
	inline bool SetPlaneSeat_01D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x278, value); }
	inline bool SetPlaneSeat_02A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x280, value); }
	inline bool SetPlaneSeat_02B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x288, value); }
	inline bool SetPlaneSeat_02C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x290, value); }
	inline bool SetPlaneSeat_02D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x298, value); }
	inline bool SetPlaneSeat_03A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetPlaneSeat_03B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetPlaneSeat_03C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetPlaneSeat_03D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetPlaneSeat_04A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetPlaneSeat_04B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetPlaneSeat_04C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetPlaneSeat_04D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetPlaneSeat_05A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetPlaneSeat_05B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetPlaneSeat_05C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetPlaneSeat_05D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetPlaneSeat_06A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x300, value); }
	inline bool SetPlaneSeat_06B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x308, value); }
	inline bool SetPlaneSeat_06C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetPlaneSeat_06D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x318, value); }
	inline bool SetPlaneSeat_07A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x320, value); }
	inline bool SetPlaneSeat_07B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x328, value); }
	inline bool SetPlaneSeat_07C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x330, value); }
	inline bool SetPlaneSeat_07D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x338, value); }
	inline bool SetPlaneSeat_08A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x340, value); }
	inline bool SetPlaneSeat_08B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x348, value); }
	inline bool SetPlaneSeat_08C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x350, value); }
	inline bool SetPlaneSeat_08D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x358, value); }
	inline bool SetPlaneSeat_09A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x360, value); }
	inline bool SetPlaneSeat_09B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x368, value); }
	inline bool SetPlaneSeat_09C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetPlaneSeat_09D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x378, value); }
	inline bool SetPlaneSeat_10A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetPlaneSeat_10B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x388, value); }
	inline bool SetPlaneSeat_10C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x390, value); }
	inline bool SetPlaneSeat_10D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x398, value); }
	inline bool SetPlaneSeat_11A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetPlaneSeat_11B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetPlaneSeat_11C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetPlaneSeat_11D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetPlaneSeat_12A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetPlaneSeat_12B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetPlaneSeat_12C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetPlaneSeat_12D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetPlaneSeat_13A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetPlaneSeat_13B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetPlaneSeat_13C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetPlaneSeat_13D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetPlaneSeat_14A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetPlaneSeat_14B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetPlaneSeat_14C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetPlaneSeat_14D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetPlaneSeat_15A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetPlaneSeat_15B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetPlaneSeat_15C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x430, value); }
	inline bool SetPlaneSeat_15D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetPlaneSeat_16A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x440, value); }
	inline bool SetPlaneSeat_16B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetPlaneSeat_16C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x450, value); }
	inline bool SetPlaneSeat_16D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x458, value); }
	inline bool SetPlaneSeat_17A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x460, value); }
	inline bool SetPlaneSeat_17B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x468, value); }
	inline bool SetPlaneSeat_17C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x470, value); }
	inline bool SetPlaneSeat_17D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x478, value); }
	inline bool SetPlaneSeat_18A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x480, value); }
	inline bool SetPlaneSeat_18B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x488, value); }
	inline bool SetPlaneSeat_18C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x490, value); }
	inline bool SetPlaneSeat_18D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x498, value); }
	inline bool SetPlaneSeat_19A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetPlaneSeat_19B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetPlaneSeat_19C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetPlaneSeat_19D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetPlaneSeat_20A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetPlaneSeat_20B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetPlaneSeat_20C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetPlaneSeat_20D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPlaneSeat_21A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetPlaneSeat_21B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetPlaneSeat_21C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetPlaneSeat_21D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetPlaneSeat_22A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x500, value); }
	inline bool SetPlaneSeat_22B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x508, value); }
	inline bool SetPlaneSeat_22C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x510, value); }
	inline bool SetPlaneSeat_22D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x518, value); }
	inline bool SetPlaneSeat_23A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x520, value); }
	inline bool SetPlaneSeat_23B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x528, value); }
	inline bool SetPlaneSeat_23C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x530, value); }
	inline bool SetPlaneSeat_23D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x538, value); }
	inline bool SetPlaneSeat_24A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x540, value); }
	inline bool SetPlaneSeat_24B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x548, value); }
	inline bool SetPlaneSeat_24C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x550, value); }
	inline bool SetPlaneSeat_24D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x558, value); }
	inline bool SetPlaneSeat_25A(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x560, value); }
	inline bool SetPlaneSeat_25B(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x568, value); }
	inline bool SetPlaneSeat_25C(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x570, value); }
	inline bool SetPlaneSeat_25D(t_structHelper inst, ExternalPtr<struct UPlaneSeatInfoWidget_C> value) { inst.WriteOffset(0x578, value); }
	inline bool SetSeatPanel(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x580, value); }
	inline bool SetCachedSeatWidgets(t_structHelper inst, TArray<ExternalPtr<struct UPlaneSeatInfoWidget_C>> value) { inst.WriteOffset(0x588, value); }
	inline bool SetbNeedSet(t_structHelper inst, TArray<ExternalPtr<struct UPlaneSeatInfoWidget_C>> value) { inst.WriteOffset(0x598, value); }
	inline bool SetPrevRiderCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlaneStanceWidget_C = sizeof(UPlaneStanceWidget_C); // 1452
    static_assert(sizeof(UPlaneStanceWidget_C) == 0x5AC, "Size of UPlaneStanceWidget_C is not correct.");
	auto constexpr UPlaneStanceWidget_C_UberGraphFrame_Offset = offsetof(UPlaneStanceWidget_C, UberGraphFrame);
	static_assert(UPlaneStanceWidget_C_UberGraphFrame_Offset == 0x248, "UPlaneStanceWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UPlaneStanceWidget_C_InvalidationBox_Img_Offset = offsetof(UPlaneStanceWidget_C, InvalidationBox_Img);
	static_assert(UPlaneStanceWidget_C_InvalidationBox_Img_Offset == 0x250, "UPlaneStanceWidget_C::InvalidationBox_Img offset is not 250");
	auto constexpr UPlaneStanceWidget_C_PlaneImage_Offset = offsetof(UPlaneStanceWidget_C, PlaneImage);
	static_assert(UPlaneStanceWidget_C_PlaneImage_Offset == 0x258, "UPlaneStanceWidget_C::PlaneImage offset is not 258");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_01A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_01A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_01A_Offset == 0x260, "UPlaneStanceWidget_C::PlaneSeat_01A offset is not 260");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_01B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_01B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_01B_Offset == 0x268, "UPlaneStanceWidget_C::PlaneSeat_01B offset is not 268");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_01C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_01C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_01C_Offset == 0x270, "UPlaneStanceWidget_C::PlaneSeat_01C offset is not 270");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_01D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_01D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_01D_Offset == 0x278, "UPlaneStanceWidget_C::PlaneSeat_01D offset is not 278");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_02A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_02A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_02A_Offset == 0x280, "UPlaneStanceWidget_C::PlaneSeat_02A offset is not 280");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_02B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_02B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_02B_Offset == 0x288, "UPlaneStanceWidget_C::PlaneSeat_02B offset is not 288");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_02C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_02C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_02C_Offset == 0x290, "UPlaneStanceWidget_C::PlaneSeat_02C offset is not 290");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_02D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_02D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_02D_Offset == 0x298, "UPlaneStanceWidget_C::PlaneSeat_02D offset is not 298");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_03A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_03A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_03A_Offset == 0x2a0, "UPlaneStanceWidget_C::PlaneSeat_03A offset is not 2a0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_03B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_03B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_03B_Offset == 0x2a8, "UPlaneStanceWidget_C::PlaneSeat_03B offset is not 2a8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_03C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_03C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_03C_Offset == 0x2b0, "UPlaneStanceWidget_C::PlaneSeat_03C offset is not 2b0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_03D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_03D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_03D_Offset == 0x2b8, "UPlaneStanceWidget_C::PlaneSeat_03D offset is not 2b8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_04A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_04A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_04A_Offset == 0x2c0, "UPlaneStanceWidget_C::PlaneSeat_04A offset is not 2c0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_04B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_04B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_04B_Offset == 0x2c8, "UPlaneStanceWidget_C::PlaneSeat_04B offset is not 2c8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_04C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_04C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_04C_Offset == 0x2d0, "UPlaneStanceWidget_C::PlaneSeat_04C offset is not 2d0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_04D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_04D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_04D_Offset == 0x2d8, "UPlaneStanceWidget_C::PlaneSeat_04D offset is not 2d8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_05A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_05A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_05A_Offset == 0x2e0, "UPlaneStanceWidget_C::PlaneSeat_05A offset is not 2e0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_05B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_05B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_05B_Offset == 0x2e8, "UPlaneStanceWidget_C::PlaneSeat_05B offset is not 2e8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_05C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_05C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_05C_Offset == 0x2f0, "UPlaneStanceWidget_C::PlaneSeat_05C offset is not 2f0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_05D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_05D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_05D_Offset == 0x2f8, "UPlaneStanceWidget_C::PlaneSeat_05D offset is not 2f8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_06A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_06A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_06A_Offset == 0x300, "UPlaneStanceWidget_C::PlaneSeat_06A offset is not 300");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_06B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_06B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_06B_Offset == 0x308, "UPlaneStanceWidget_C::PlaneSeat_06B offset is not 308");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_06C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_06C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_06C_Offset == 0x310, "UPlaneStanceWidget_C::PlaneSeat_06C offset is not 310");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_06D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_06D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_06D_Offset == 0x318, "UPlaneStanceWidget_C::PlaneSeat_06D offset is not 318");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_07A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_07A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_07A_Offset == 0x320, "UPlaneStanceWidget_C::PlaneSeat_07A offset is not 320");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_07B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_07B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_07B_Offset == 0x328, "UPlaneStanceWidget_C::PlaneSeat_07B offset is not 328");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_07C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_07C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_07C_Offset == 0x330, "UPlaneStanceWidget_C::PlaneSeat_07C offset is not 330");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_07D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_07D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_07D_Offset == 0x338, "UPlaneStanceWidget_C::PlaneSeat_07D offset is not 338");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_08A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_08A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_08A_Offset == 0x340, "UPlaneStanceWidget_C::PlaneSeat_08A offset is not 340");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_08B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_08B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_08B_Offset == 0x348, "UPlaneStanceWidget_C::PlaneSeat_08B offset is not 348");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_08C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_08C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_08C_Offset == 0x350, "UPlaneStanceWidget_C::PlaneSeat_08C offset is not 350");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_08D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_08D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_08D_Offset == 0x358, "UPlaneStanceWidget_C::PlaneSeat_08D offset is not 358");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_09A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_09A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_09A_Offset == 0x360, "UPlaneStanceWidget_C::PlaneSeat_09A offset is not 360");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_09B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_09B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_09B_Offset == 0x368, "UPlaneStanceWidget_C::PlaneSeat_09B offset is not 368");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_09C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_09C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_09C_Offset == 0x370, "UPlaneStanceWidget_C::PlaneSeat_09C offset is not 370");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_09D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_09D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_09D_Offset == 0x378, "UPlaneStanceWidget_C::PlaneSeat_09D offset is not 378");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_10A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_10A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_10A_Offset == 0x380, "UPlaneStanceWidget_C::PlaneSeat_10A offset is not 380");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_10B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_10B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_10B_Offset == 0x388, "UPlaneStanceWidget_C::PlaneSeat_10B offset is not 388");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_10C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_10C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_10C_Offset == 0x390, "UPlaneStanceWidget_C::PlaneSeat_10C offset is not 390");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_10D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_10D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_10D_Offset == 0x398, "UPlaneStanceWidget_C::PlaneSeat_10D offset is not 398");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_11A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_11A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_11A_Offset == 0x3a0, "UPlaneStanceWidget_C::PlaneSeat_11A offset is not 3a0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_11B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_11B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_11B_Offset == 0x3a8, "UPlaneStanceWidget_C::PlaneSeat_11B offset is not 3a8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_11C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_11C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_11C_Offset == 0x3b0, "UPlaneStanceWidget_C::PlaneSeat_11C offset is not 3b0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_11D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_11D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_11D_Offset == 0x3b8, "UPlaneStanceWidget_C::PlaneSeat_11D offset is not 3b8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_12A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_12A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_12A_Offset == 0x3c0, "UPlaneStanceWidget_C::PlaneSeat_12A offset is not 3c0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_12B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_12B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_12B_Offset == 0x3c8, "UPlaneStanceWidget_C::PlaneSeat_12B offset is not 3c8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_12C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_12C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_12C_Offset == 0x3d0, "UPlaneStanceWidget_C::PlaneSeat_12C offset is not 3d0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_12D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_12D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_12D_Offset == 0x3d8, "UPlaneStanceWidget_C::PlaneSeat_12D offset is not 3d8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_13A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_13A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_13A_Offset == 0x3e0, "UPlaneStanceWidget_C::PlaneSeat_13A offset is not 3e0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_13B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_13B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_13B_Offset == 0x3e8, "UPlaneStanceWidget_C::PlaneSeat_13B offset is not 3e8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_13C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_13C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_13C_Offset == 0x3f0, "UPlaneStanceWidget_C::PlaneSeat_13C offset is not 3f0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_13D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_13D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_13D_Offset == 0x3f8, "UPlaneStanceWidget_C::PlaneSeat_13D offset is not 3f8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_14A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_14A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_14A_Offset == 0x400, "UPlaneStanceWidget_C::PlaneSeat_14A offset is not 400");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_14B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_14B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_14B_Offset == 0x408, "UPlaneStanceWidget_C::PlaneSeat_14B offset is not 408");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_14C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_14C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_14C_Offset == 0x410, "UPlaneStanceWidget_C::PlaneSeat_14C offset is not 410");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_14D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_14D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_14D_Offset == 0x418, "UPlaneStanceWidget_C::PlaneSeat_14D offset is not 418");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_15A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_15A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_15A_Offset == 0x420, "UPlaneStanceWidget_C::PlaneSeat_15A offset is not 420");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_15B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_15B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_15B_Offset == 0x428, "UPlaneStanceWidget_C::PlaneSeat_15B offset is not 428");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_15C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_15C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_15C_Offset == 0x430, "UPlaneStanceWidget_C::PlaneSeat_15C offset is not 430");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_15D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_15D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_15D_Offset == 0x438, "UPlaneStanceWidget_C::PlaneSeat_15D offset is not 438");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_16A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_16A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_16A_Offset == 0x440, "UPlaneStanceWidget_C::PlaneSeat_16A offset is not 440");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_16B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_16B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_16B_Offset == 0x448, "UPlaneStanceWidget_C::PlaneSeat_16B offset is not 448");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_16C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_16C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_16C_Offset == 0x450, "UPlaneStanceWidget_C::PlaneSeat_16C offset is not 450");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_16D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_16D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_16D_Offset == 0x458, "UPlaneStanceWidget_C::PlaneSeat_16D offset is not 458");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_17A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_17A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_17A_Offset == 0x460, "UPlaneStanceWidget_C::PlaneSeat_17A offset is not 460");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_17B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_17B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_17B_Offset == 0x468, "UPlaneStanceWidget_C::PlaneSeat_17B offset is not 468");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_17C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_17C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_17C_Offset == 0x470, "UPlaneStanceWidget_C::PlaneSeat_17C offset is not 470");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_17D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_17D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_17D_Offset == 0x478, "UPlaneStanceWidget_C::PlaneSeat_17D offset is not 478");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_18A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_18A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_18A_Offset == 0x480, "UPlaneStanceWidget_C::PlaneSeat_18A offset is not 480");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_18B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_18B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_18B_Offset == 0x488, "UPlaneStanceWidget_C::PlaneSeat_18B offset is not 488");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_18C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_18C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_18C_Offset == 0x490, "UPlaneStanceWidget_C::PlaneSeat_18C offset is not 490");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_18D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_18D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_18D_Offset == 0x498, "UPlaneStanceWidget_C::PlaneSeat_18D offset is not 498");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_19A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_19A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_19A_Offset == 0x4a0, "UPlaneStanceWidget_C::PlaneSeat_19A offset is not 4a0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_19B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_19B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_19B_Offset == 0x4a8, "UPlaneStanceWidget_C::PlaneSeat_19B offset is not 4a8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_19C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_19C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_19C_Offset == 0x4b0, "UPlaneStanceWidget_C::PlaneSeat_19C offset is not 4b0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_19D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_19D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_19D_Offset == 0x4b8, "UPlaneStanceWidget_C::PlaneSeat_19D offset is not 4b8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_20A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_20A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_20A_Offset == 0x4c0, "UPlaneStanceWidget_C::PlaneSeat_20A offset is not 4c0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_20B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_20B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_20B_Offset == 0x4c8, "UPlaneStanceWidget_C::PlaneSeat_20B offset is not 4c8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_20C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_20C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_20C_Offset == 0x4d0, "UPlaneStanceWidget_C::PlaneSeat_20C offset is not 4d0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_20D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_20D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_20D_Offset == 0x4d8, "UPlaneStanceWidget_C::PlaneSeat_20D offset is not 4d8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_21A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_21A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_21A_Offset == 0x4e0, "UPlaneStanceWidget_C::PlaneSeat_21A offset is not 4e0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_21B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_21B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_21B_Offset == 0x4e8, "UPlaneStanceWidget_C::PlaneSeat_21B offset is not 4e8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_21C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_21C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_21C_Offset == 0x4f0, "UPlaneStanceWidget_C::PlaneSeat_21C offset is not 4f0");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_21D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_21D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_21D_Offset == 0x4f8, "UPlaneStanceWidget_C::PlaneSeat_21D offset is not 4f8");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_22A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_22A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_22A_Offset == 0x500, "UPlaneStanceWidget_C::PlaneSeat_22A offset is not 500");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_22B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_22B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_22B_Offset == 0x508, "UPlaneStanceWidget_C::PlaneSeat_22B offset is not 508");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_22C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_22C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_22C_Offset == 0x510, "UPlaneStanceWidget_C::PlaneSeat_22C offset is not 510");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_22D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_22D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_22D_Offset == 0x518, "UPlaneStanceWidget_C::PlaneSeat_22D offset is not 518");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_23A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_23A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_23A_Offset == 0x520, "UPlaneStanceWidget_C::PlaneSeat_23A offset is not 520");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_23B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_23B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_23B_Offset == 0x528, "UPlaneStanceWidget_C::PlaneSeat_23B offset is not 528");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_23C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_23C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_23C_Offset == 0x530, "UPlaneStanceWidget_C::PlaneSeat_23C offset is not 530");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_23D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_23D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_23D_Offset == 0x538, "UPlaneStanceWidget_C::PlaneSeat_23D offset is not 538");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_24A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_24A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_24A_Offset == 0x540, "UPlaneStanceWidget_C::PlaneSeat_24A offset is not 540");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_24B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_24B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_24B_Offset == 0x548, "UPlaneStanceWidget_C::PlaneSeat_24B offset is not 548");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_24C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_24C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_24C_Offset == 0x550, "UPlaneStanceWidget_C::PlaneSeat_24C offset is not 550");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_24D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_24D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_24D_Offset == 0x558, "UPlaneStanceWidget_C::PlaneSeat_24D offset is not 558");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_25A_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_25A);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_25A_Offset == 0x560, "UPlaneStanceWidget_C::PlaneSeat_25A offset is not 560");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_25B_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_25B);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_25B_Offset == 0x568, "UPlaneStanceWidget_C::PlaneSeat_25B offset is not 568");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_25C_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_25C);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_25C_Offset == 0x570, "UPlaneStanceWidget_C::PlaneSeat_25C offset is not 570");
	auto constexpr UPlaneStanceWidget_C_PlaneSeat_25D_Offset = offsetof(UPlaneStanceWidget_C, PlaneSeat_25D);
	static_assert(UPlaneStanceWidget_C_PlaneSeat_25D_Offset == 0x578, "UPlaneStanceWidget_C::PlaneSeat_25D offset is not 578");
	auto constexpr UPlaneStanceWidget_C_SeatPanel_Offset = offsetof(UPlaneStanceWidget_C, SeatPanel);
	static_assert(UPlaneStanceWidget_C_SeatPanel_Offset == 0x580, "UPlaneStanceWidget_C::SeatPanel offset is not 580");
	auto constexpr UPlaneStanceWidget_C_CachedSeatWidgets_Offset = offsetof(UPlaneStanceWidget_C, CachedSeatWidgets);
	static_assert(UPlaneStanceWidget_C_CachedSeatWidgets_Offset == 0x588, "UPlaneStanceWidget_C::CachedSeatWidgets offset is not 588");
	auto constexpr UPlaneStanceWidget_C_bNeedSet_Offset = offsetof(UPlaneStanceWidget_C, bNeedSet);
	static_assert(UPlaneStanceWidget_C_bNeedSet_Offset == 0x598, "UPlaneStanceWidget_C::bNeedSet offset is not 598");
	auto constexpr UPlaneStanceWidget_C_PrevRiderCount_Offset = offsetof(UPlaneStanceWidget_C, PrevRiderCount);
	static_assert(UPlaneStanceWidget_C_PrevRiderCount_Offset == 0x5a8, "UPlaneStanceWidget_C::PrevRiderCount offset is not 5a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
