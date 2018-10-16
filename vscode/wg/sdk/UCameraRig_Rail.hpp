#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraRig_Rail // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UCameraRig_Rail t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1267); // id32("Class CinematicCamera.CameraRig_Rail")
		return ptr;
	}
//	float CurrentPositionOnRail; /* Ofs: 0x408 Size: 0x4 - FloatProperty CinematicCamera.CameraRig_Rail.CurrentPositionOnRail */
	ExternalPtr<struct USceneComponent> TransformComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Rail.TransformComponent */
	ExternalPtr<struct USplineComponent> RailSplineComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Rail.RailSplineComponent */
	ExternalPtr<struct USceneComponent> RailCameraMount; /* Ofs: 0x420 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Rail.RailCameraMount */
	uint8_t UnknownData428[0x8];


//	inline bool SetCurrentPositionOnRail(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
	inline bool SetTransformComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetRailSplineComponent(t_structHelper inst, ExternalPtr<struct USplineComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetRailCameraMount(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraRig_Rail = sizeof(UCameraRig_Rail); // 1072
    static_assert(sizeof(UCameraRig_Rail) == 0x430, "Size of UCameraRig_Rail is not correct.");
//	auto constexpr UCameraRig_Rail_CurrentPositionOnRail_Offset = offsetof(UCameraRig_Rail, CurrentPositionOnRail);
//	static_assert(UCameraRig_Rail_CurrentPositionOnRail_Offset == 0x408, "UCameraRig_Rail::CurrentPositionOnRail offset is not 408");
	auto constexpr UCameraRig_Rail_TransformComponent_Offset = offsetof(UCameraRig_Rail, TransformComponent);
	static_assert(UCameraRig_Rail_TransformComponent_Offset == 0x410, "UCameraRig_Rail::TransformComponent offset is not 410");
	auto constexpr UCameraRig_Rail_RailSplineComponent_Offset = offsetof(UCameraRig_Rail, RailSplineComponent);
	static_assert(UCameraRig_Rail_RailSplineComponent_Offset == 0x418, "UCameraRig_Rail::RailSplineComponent offset is not 418");
	auto constexpr UCameraRig_Rail_RailCameraMount_Offset = offsetof(UCameraRig_Rail, RailCameraMount);
	static_assert(UCameraRig_Rail_RailCameraMount_Offset == 0x420, "UCameraRig_Rail::RailCameraMount offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
