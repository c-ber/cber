#pragma once
#include "USceneComponent.hpp"
#include "ECameraProjectionMode.hpp"
#include "FPostProcessSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraComponent // Size: 0xA40
	: public USceneComponent // Size: 0x490
{
private:
	typedef UCameraComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1270); // id32("Class Engine.CameraComponent")
		return ptr;
	}
	float FieldOfView; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.CameraComponent.FieldOfView */
	float OrthoWidth; /* Ofs: 0x494 Size: 0x4 - FloatProperty Engine.CameraComponent.OrthoWidth */
	float OrthoNearClipPlane; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.CameraComponent.OrthoNearClipPlane */
	float OrthoFarClipPlane; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.CameraComponent.OrthoFarClipPlane */
	float AspectRatio; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.CameraComponent.AspectRatio */
	uint8_t boolField4A4;
	uint8_t UnknownData4A5[0x3];
	TEnumAsByte<enum ECameraProjectionMode> ProjectionMode; /* Ofs: 0x4A8 Size: 0x1 - ByteProperty Engine.CameraComponent.ProjectionMode */
	uint8_t UnknownData4A9[0x3];
	float PostProcessBlendWeight; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.CameraComponent.PostProcessBlendWeight */
	FPostProcessSettings PostProcessSettings; /* Ofs: 0x4B0 Size: 0x530 - StructProperty Engine.CameraComponent.PostProcessSettings */
	uint8_t UnknownData9E0[0x58];
	uint8_t boolFieldA38;
	uint8_t UnknownDataA39[0x7];


	inline bool SetFieldOfView(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetOrthoWidth(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetOrthoNearClipPlane(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetOrthoFarClipPlane(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetAspectRatio(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool bConstrainAspectRatio()
	{
		return boolField4A4& 0x1;
	}
	inline bool SetbConstrainAspectRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseFieldOfViewForLOD()
	{
		return boolField4A4& 0x2;
	}
	inline bool SetbUseFieldOfViewForLOD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bLockToHmd()
	{
		return boolField4A4& 0x4;
	}
	inline bool SetbLockToHmd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUsePawnControlRotation()
	{
		return boolField4A4& 0x8;
	}
	inline bool SetbUsePawnControlRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetProjectionMode(t_structHelper inst, TEnumAsByte<enum ECameraProjectionMode> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetPostProcessBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetPostProcessSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x4B0, value); }
	inline bool bUseControllerViewRotation()
	{
		return boolFieldA38& 0x1;
	}
	inline bool SetbUseControllerViewRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraComponent = sizeof(UCameraComponent); // 2624
    static_assert(sizeof(UCameraComponent) == 0xA40, "Size of UCameraComponent is not correct.");
	auto constexpr UCameraComponent_FieldOfView_Offset = offsetof(UCameraComponent, FieldOfView);
	static_assert(UCameraComponent_FieldOfView_Offset == 0x490, "UCameraComponent::FieldOfView offset is not 490");
	auto constexpr UCameraComponent_OrthoWidth_Offset = offsetof(UCameraComponent, OrthoWidth);
	static_assert(UCameraComponent_OrthoWidth_Offset == 0x494, "UCameraComponent::OrthoWidth offset is not 494");
	auto constexpr UCameraComponent_OrthoNearClipPlane_Offset = offsetof(UCameraComponent, OrthoNearClipPlane);
	static_assert(UCameraComponent_OrthoNearClipPlane_Offset == 0x498, "UCameraComponent::OrthoNearClipPlane offset is not 498");
	auto constexpr UCameraComponent_OrthoFarClipPlane_Offset = offsetof(UCameraComponent, OrthoFarClipPlane);
	static_assert(UCameraComponent_OrthoFarClipPlane_Offset == 0x49c, "UCameraComponent::OrthoFarClipPlane offset is not 49c");
	auto constexpr UCameraComponent_AspectRatio_Offset = offsetof(UCameraComponent, AspectRatio);
	static_assert(UCameraComponent_AspectRatio_Offset == 0x4a0, "UCameraComponent::AspectRatio offset is not 4a0");
	auto constexpr UCameraComponent_boolField4A4_Offset = offsetof(UCameraComponent, boolField4A4);
	static_assert(UCameraComponent_boolField4A4_Offset == 0x4a4, "UCameraComponent::boolField4A4 offset is not 4a4");
	auto constexpr UCameraComponent_ProjectionMode_Offset = offsetof(UCameraComponent, ProjectionMode);
	static_assert(UCameraComponent_ProjectionMode_Offset == 0x4a8, "UCameraComponent::ProjectionMode offset is not 4a8");
	auto constexpr UCameraComponent_PostProcessBlendWeight_Offset = offsetof(UCameraComponent, PostProcessBlendWeight);
	static_assert(UCameraComponent_PostProcessBlendWeight_Offset == 0x4ac, "UCameraComponent::PostProcessBlendWeight offset is not 4ac");
	auto constexpr UCameraComponent_PostProcessSettings_Offset = offsetof(UCameraComponent, PostProcessSettings);
	static_assert(UCameraComponent_PostProcessSettings_Offset == 0x4b0, "UCameraComponent::PostProcessSettings offset is not 4b0");
	auto constexpr UCameraComponent_boolFieldA38_Offset = offsetof(UCameraComponent, boolFieldA38);
	static_assert(UCameraComponent_boolFieldA38_Offset == 0xa38, "UCameraComponent::boolFieldA38 offset is not a38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
