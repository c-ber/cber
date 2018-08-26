#pragma once
#include "UActor.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UViewModeStudio // Size: 0x470
	: public UActor // Size: 0x410
{
private:
	typedef UViewModeStudio t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(58); // id32("Class TslGame.ViewModeStudio")
		return ptr;
	}
//	ExternalPtr<struct UCameraComponent> CameraComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.ViewModeStudio.CameraComponent */
	ExternalPtr<struct USceneCaptureComponent2D> SceneCaptureComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.ViewModeStudio.SceneCaptureComponent */
	uint8_t UnknownData418[0x8];
	FTransform DefaultCameraSocketTransform; /* Ofs: 0x420 Size: 0x30 - StructProperty TslGame.ViewModeStudio.DefaultCameraSocketTransform */
	ExternalPtr<struct UTextureRenderTarget2D> TextureTarget; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.ViewModeStudio.TextureTarget */
	FName CameraSocketName; /* Ofs: 0x458 Size: 0x8 - NameProperty TslGame.ViewModeStudio.CameraSocketName */
	float MaxViewDistance; /* Ofs: 0x460 Size: 0x4 - FloatProperty TslGame.ViewModeStudio.MaxViewDistance */
	float ViewSlaveLocationDuration; /* Ofs: 0x464 Size: 0x4 - FloatProperty TslGame.ViewModeStudio.ViewSlaveLocationDuration */
	float ViewSlaveLocationDurationCheckTime; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.ViewModeStudio.ViewSlaveLocationDurationCheckTime */
	uint8_t UnknownData46C[0x4];


//	inline bool SetCameraComponent(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSceneCaptureComponent(t_structHelper inst, ExternalPtr<struct USceneCaptureComponent2D> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultCameraSocketTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0x420, value); }
	inline bool SetTextureTarget(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x450, value); }
	inline bool SetCameraSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x458, value); }
	inline bool SetMaxViewDistance(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetViewSlaveLocationDuration(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetViewSlaveLocationDurationCheckTime(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUViewModeStudio = sizeof(UViewModeStudio); // 1136
    static_assert(sizeof(UViewModeStudio) == 0x470, "Size of UViewModeStudio is not correct.");
//	auto constexpr UViewModeStudio_CameraComponent_Offset = offsetof(UViewModeStudio, CameraComponent);
//	static_assert(UViewModeStudio_CameraComponent_Offset == 0x408, "UViewModeStudio::CameraComponent offset is not 408");
	auto constexpr UViewModeStudio_SceneCaptureComponent_Offset = offsetof(UViewModeStudio, SceneCaptureComponent);
	static_assert(UViewModeStudio_SceneCaptureComponent_Offset == 0x410, "UViewModeStudio::SceneCaptureComponent offset is not 410");
	auto constexpr UViewModeStudio_DefaultCameraSocketTransform_Offset = offsetof(UViewModeStudio, DefaultCameraSocketTransform);
	static_assert(UViewModeStudio_DefaultCameraSocketTransform_Offset == 0x420, "UViewModeStudio::DefaultCameraSocketTransform offset is not 420");
	auto constexpr UViewModeStudio_TextureTarget_Offset = offsetof(UViewModeStudio, TextureTarget);
	static_assert(UViewModeStudio_TextureTarget_Offset == 0x450, "UViewModeStudio::TextureTarget offset is not 450");
	auto constexpr UViewModeStudio_CameraSocketName_Offset = offsetof(UViewModeStudio, CameraSocketName);
	static_assert(UViewModeStudio_CameraSocketName_Offset == 0x458, "UViewModeStudio::CameraSocketName offset is not 458");
	auto constexpr UViewModeStudio_MaxViewDistance_Offset = offsetof(UViewModeStudio, MaxViewDistance);
	static_assert(UViewModeStudio_MaxViewDistance_Offset == 0x460, "UViewModeStudio::MaxViewDistance offset is not 460");
	auto constexpr UViewModeStudio_ViewSlaveLocationDuration_Offset = offsetof(UViewModeStudio, ViewSlaveLocationDuration);
	static_assert(UViewModeStudio_ViewSlaveLocationDuration_Offset == 0x464, "UViewModeStudio::ViewSlaveLocationDuration offset is not 464");
	auto constexpr UViewModeStudio_ViewSlaveLocationDurationCheckTime_Offset = offsetof(UViewModeStudio, ViewSlaveLocationDurationCheckTime);
	static_assert(UViewModeStudio_ViewSlaveLocationDurationCheckTime_Offset == 0x468, "UViewModeStudio::ViewSlaveLocationDurationCheckTime offset is not 468");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
