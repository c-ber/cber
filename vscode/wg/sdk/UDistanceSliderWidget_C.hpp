#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDistanceSliderWidget_C // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UDistanceSliderWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191456); // id32("WidgetBlueprintGeneratedClass DistanceSliderWidget.DistanceSliderWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty DistanceSliderWidget.DistanceSliderWidget_C.UberGraphFrame */
	ExternalPtr<struct USlider> DistanceSlider; /* Ofs: 0x250 Size: 0x8 - ObjectProperty DistanceSliderWidget.DistanceSliderWidget_C.DistanceSlider */
	float MinDistance; /* Ofs: 0x258 Size: 0x4 - FloatProperty DistanceSliderWidget.DistanceSliderWidget_C.MinDistance */
	float MaxDistance; /* Ofs: 0x25C Size: 0x4 - FloatProperty DistanceSliderWidget.DistanceSliderWidget_C.MaxDistance */
	FScriptMulticastDelegate ChagedDistance; /* Ofs: 0x260 Size: 0x10 - MulticastDelegateProperty DistanceSliderWidget.DistanceSliderWidget_C.ChagedDistance */
	ExternalPtr<struct UCurveFloat> DistanceCurve; /* Ofs: 0x270 Size: 0x8 - ObjectProperty DistanceSliderWidget.DistanceSliderWidget_C.DistanceCurve */
	float Position; /* Ofs: 0x278 Size: 0x4 - FloatProperty DistanceSliderWidget.DistanceSliderWidget_C.Position */
	uint8_t UnknownData27C[0x4];
	ExternalPtr<struct UTslSpectatorPawn> TslSpectatorPawn; /* Ofs: 0x280 Size: 0x8 - ObjectProperty DistanceSliderWidget.DistanceSliderWidget_C.TslSpectatorPawn */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetDistanceSlider(t_structHelper inst, ExternalPtr<struct USlider> value) { inst.WriteOffset(0x250, value); }
	inline bool SetMinDistance(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetChagedDistance(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x260, value); }
	inline bool SetDistanceCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x270, value); }
	inline bool SetPosition(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetTslSpectatorPawn(t_structHelper inst, ExternalPtr<struct UTslSpectatorPawn> value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDistanceSliderWidget_C = sizeof(UDistanceSliderWidget_C); // 648
    static_assert(sizeof(UDistanceSliderWidget_C) == 0x288, "Size of UDistanceSliderWidget_C is not correct.");
	auto constexpr UDistanceSliderWidget_C_UberGraphFrame_Offset = offsetof(UDistanceSliderWidget_C, UberGraphFrame);
	static_assert(UDistanceSliderWidget_C_UberGraphFrame_Offset == 0x248, "UDistanceSliderWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UDistanceSliderWidget_C_DistanceSlider_Offset = offsetof(UDistanceSliderWidget_C, DistanceSlider);
	static_assert(UDistanceSliderWidget_C_DistanceSlider_Offset == 0x250, "UDistanceSliderWidget_C::DistanceSlider offset is not 250");
	auto constexpr UDistanceSliderWidget_C_MinDistance_Offset = offsetof(UDistanceSliderWidget_C, MinDistance);
	static_assert(UDistanceSliderWidget_C_MinDistance_Offset == 0x258, "UDistanceSliderWidget_C::MinDistance offset is not 258");
	auto constexpr UDistanceSliderWidget_C_MaxDistance_Offset = offsetof(UDistanceSliderWidget_C, MaxDistance);
	static_assert(UDistanceSliderWidget_C_MaxDistance_Offset == 0x25c, "UDistanceSliderWidget_C::MaxDistance offset is not 25c");
	auto constexpr UDistanceSliderWidget_C_ChagedDistance_Offset = offsetof(UDistanceSliderWidget_C, ChagedDistance);
	static_assert(UDistanceSliderWidget_C_ChagedDistance_Offset == 0x260, "UDistanceSliderWidget_C::ChagedDistance offset is not 260");
	auto constexpr UDistanceSliderWidget_C_DistanceCurve_Offset = offsetof(UDistanceSliderWidget_C, DistanceCurve);
	static_assert(UDistanceSliderWidget_C_DistanceCurve_Offset == 0x270, "UDistanceSliderWidget_C::DistanceCurve offset is not 270");
	auto constexpr UDistanceSliderWidget_C_Position_Offset = offsetof(UDistanceSliderWidget_C, Position);
	static_assert(UDistanceSliderWidget_C_Position_Offset == 0x278, "UDistanceSliderWidget_C::Position offset is not 278");
	auto constexpr UDistanceSliderWidget_C_TslSpectatorPawn_Offset = offsetof(UDistanceSliderWidget_C, TslSpectatorPawn);
	static_assert(UDistanceSliderWidget_C_TslSpectatorPawn_Offset == 0x280, "UDistanceSliderWidget_C::TslSpectatorPawn offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
