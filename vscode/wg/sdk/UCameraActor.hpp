#pragma once
#include "UActor.hpp"
#include "EAutoReceiveInput.hpp"
#include "FPostProcessSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraActor // Size: 0x970
	: public UActor // Size: 0x410
{
private:
	typedef UCameraActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1268); // id32("Class Engine.CameraActor")
		return ptr;
	}
//	TEnumAsByte<enum EAutoReceiveInput> AutoActivateForPlayer; /* Ofs: 0x408 Size: 0x1 - ByteProperty Engine.CameraActor.AutoActivateForPlayer */
	ExternalPtr<struct UCameraComponent> CameraComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.CameraActor.CameraComponent */
	ExternalPtr<struct USceneComponent> SceneComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.CameraActor.SceneComponent */
	uint8_t UnknownData420[0x8];
	uint8_t boolField428;
	uint8_t UnknownData429[0x3];
	float AspectRatio; /* Ofs: 0x42C Size: 0x4 - FloatProperty Engine.CameraActor.AspectRatio */
	float FOVAngle; /* Ofs: 0x430 Size: 0x4 - FloatProperty Engine.CameraActor.FOVAngle */
	float PostProcessBlendWeight; /* Ofs: 0x434 Size: 0x4 - FloatProperty Engine.CameraActor.PostProcessBlendWeight */
	uint8_t UnknownData438[0x8];
	FPostProcessSettings PostProcessSettings; /* Ofs: 0x440 Size: 0x530 - StructProperty Engine.CameraActor.PostProcessSettings */


//	inline bool SetAutoActivateForPlayer(t_structHelper inst, TEnumAsByte<enum EAutoReceiveInput> value) { inst.WriteOffset(0x408, value); }
	inline bool SetCameraComponent(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSceneComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool bConstrainAspectRatio()
	{
		return boolField428& 0x1;
	}
	inline bool SetbConstrainAspectRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAspectRatio(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetFOVAngle(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetPostProcessBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetPostProcessSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraActor = sizeof(UCameraActor); // 2416
    static_assert(sizeof(UCameraActor) == 0x970, "Size of UCameraActor is not correct.");
//	auto constexpr UCameraActor_AutoActivateForPlayer_Offset = offsetof(UCameraActor, AutoActivateForPlayer);
//	static_assert(UCameraActor_AutoActivateForPlayer_Offset == 0x408, "UCameraActor::AutoActivateForPlayer offset is not 408");
	auto constexpr UCameraActor_CameraComponent_Offset = offsetof(UCameraActor, CameraComponent);
	static_assert(UCameraActor_CameraComponent_Offset == 0x410, "UCameraActor::CameraComponent offset is not 410");
	auto constexpr UCameraActor_SceneComponent_Offset = offsetof(UCameraActor, SceneComponent);
	static_assert(UCameraActor_SceneComponent_Offset == 0x418, "UCameraActor::SceneComponent offset is not 418");
	auto constexpr UCameraActor_boolField428_Offset = offsetof(UCameraActor, boolField428);
	static_assert(UCameraActor_boolField428_Offset == 0x428, "UCameraActor::boolField428 offset is not 428");
	auto constexpr UCameraActor_AspectRatio_Offset = offsetof(UCameraActor, AspectRatio);
	static_assert(UCameraActor_AspectRatio_Offset == 0x42c, "UCameraActor::AspectRatio offset is not 42c");
	auto constexpr UCameraActor_FOVAngle_Offset = offsetof(UCameraActor, FOVAngle);
	static_assert(UCameraActor_FOVAngle_Offset == 0x430, "UCameraActor::FOVAngle offset is not 430");
	auto constexpr UCameraActor_PostProcessBlendWeight_Offset = offsetof(UCameraActor, PostProcessBlendWeight);
	static_assert(UCameraActor_PostProcessBlendWeight_Offset == 0x434, "UCameraActor::PostProcessBlendWeight offset is not 434");
	auto constexpr UCameraActor_PostProcessSettings_Offset = offsetof(UCameraActor, PostProcessSettings);
	static_assert(UCameraActor_PostProcessSettings_Offset == 0x440, "UCameraActor::PostProcessSettings offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
