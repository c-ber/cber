#pragma once
#include "USceneCaptureComponent.hpp"
#include "ECameraProjectionMode.hpp"
#include "ESceneCaptureSource.hpp"
#include "ESceneCaptureCompositeMode.hpp"
#include "FPostProcessSettings.hpp"
#include "FMatrix.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneCaptureComponent2D // Size: 0xAE0
	: public USceneCaptureComponent // Size: 0x510
{
private:
	typedef USceneCaptureComponent2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(239); // id32("Class Engine.SceneCaptureComponent2D")
		return ptr;
	}
	TEnumAsByte<enum ECameraProjectionMode> ProjectionType; /* Ofs: 0x510 Size: 0x1 - ByteProperty Engine.SceneCaptureComponent2D.ProjectionType */
	uint8_t UnknownData511[0x3];
	float FOVAngle; /* Ofs: 0x514 Size: 0x4 - FloatProperty Engine.SceneCaptureComponent2D.FOVAngle */
	uint8_t boolField518;
	uint8_t UnknownData519[0x3];
	float NearClippingValue; /* Ofs: 0x51C Size: 0x4 - FloatProperty Engine.SceneCaptureComponent2D.NearClippingValue */
	float OrthoWidth; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.SceneCaptureComponent2D.OrthoWidth */
	uint8_t UnknownData524[0x4];
	ExternalPtr<struct UTextureRenderTarget2D> TextureTarget; /* Ofs: 0x528 Size: 0x8 - ObjectProperty Engine.SceneCaptureComponent2D.TextureTarget */
	TEnumAsByte<enum ESceneCaptureSource> CaptureSource; /* Ofs: 0x530 Size: 0x1 - ByteProperty Engine.SceneCaptureComponent2D.CaptureSource */
	TEnumAsByte<enum ESceneCaptureCompositeMode> CompositeMode; /* Ofs: 0x531 Size: 0x1 - ByteProperty Engine.SceneCaptureComponent2D.CompositeMode */
	uint8_t UnknownData532[0xE];
	FPostProcessSettings PostProcessSettings; /* Ofs: 0x540 Size: 0x530 - StructProperty Engine.SceneCaptureComponent2D.PostProcessSettings */
	float PostProcessBlendWeight; /* Ofs: 0xA70 Size: 0x4 - FloatProperty Engine.SceneCaptureComponent2D.PostProcessBlendWeight */
	uint8_t boolFieldA74;
	uint8_t UnknownDataA75[0xB];
	FMatrix CustomProjectionMatrix; /* Ofs: 0xA80 Size: 0x40 - StructProperty Engine.SceneCaptureComponent2D.CustomProjectionMatrix */
	uint8_t boolFieldAC0;
	uint8_t UnknownDataAC1[0x3];
	FVector ClipPlaneBase; /* Ofs: 0xAC4 Size: 0xC - StructProperty Engine.SceneCaptureComponent2D.ClipPlaneBase */
	FVector ClipPlaneNormal; /* Ofs: 0xAD0 Size: 0xC - StructProperty Engine.SceneCaptureComponent2D.ClipPlaneNormal */
	uint8_t UnknownDataADC[0x4];


	inline bool SetProjectionType(t_structHelper inst, TEnumAsByte<enum ECameraProjectionMode> value) { inst.WriteOffset(0x510, value); }
	inline bool SetFOVAngle(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool bUseNearClippingValue()
	{
		return boolField518& 0x1;
	}
	inline bool SetbUseNearClippingValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x518, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNearClippingValue(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetOrthoWidth(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetTextureTarget(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x528, value); }
	inline bool SetCaptureSource(t_structHelper inst, TEnumAsByte<enum ESceneCaptureSource> value) { inst.WriteOffset(0x530, value); }
	inline bool SetCompositeMode(t_structHelper inst, TEnumAsByte<enum ESceneCaptureCompositeMode> value) { inst.WriteOffset(0x531, value); }
	inline bool SetPostProcessSettings(t_structHelper inst, FPostProcessSettings value) { inst.WriteOffset(0x540, value); }
	inline bool SetPostProcessBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0xA70, value); }
	inline bool bUseCustomProjectionMatrix()
	{
		return boolFieldA74& 0x1;
	}
	inline bool SetbUseCustomProjectionMatrix(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCustomProjectionMatrix(t_structHelper inst, FMatrix value) { inst.WriteOffset(0xA80, value); }
	inline bool bEnableClipPlane()
	{
		return boolFieldAC0& 0x1;
	}
	inline bool SetbEnableClipPlane(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetClipPlaneBase(t_structHelper inst, FVector value) { inst.WriteOffset(0xAC4, value); }
	inline bool SetClipPlaneNormal(t_structHelper inst, FVector value) { inst.WriteOffset(0xAD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneCaptureComponent2D = sizeof(USceneCaptureComponent2D); // 2784
    static_assert(sizeof(USceneCaptureComponent2D) == 0xAE0, "Size of USceneCaptureComponent2D is not correct.");
	auto constexpr USceneCaptureComponent2D_ProjectionType_Offset = offsetof(USceneCaptureComponent2D, ProjectionType);
	static_assert(USceneCaptureComponent2D_ProjectionType_Offset == 0x510, "USceneCaptureComponent2D::ProjectionType offset is not 510");
	auto constexpr USceneCaptureComponent2D_FOVAngle_Offset = offsetof(USceneCaptureComponent2D, FOVAngle);
	static_assert(USceneCaptureComponent2D_FOVAngle_Offset == 0x514, "USceneCaptureComponent2D::FOVAngle offset is not 514");
	auto constexpr USceneCaptureComponent2D_boolField518_Offset = offsetof(USceneCaptureComponent2D, boolField518);
	static_assert(USceneCaptureComponent2D_boolField518_Offset == 0x518, "USceneCaptureComponent2D::boolField518 offset is not 518");
	auto constexpr USceneCaptureComponent2D_NearClippingValue_Offset = offsetof(USceneCaptureComponent2D, NearClippingValue);
	static_assert(USceneCaptureComponent2D_NearClippingValue_Offset == 0x51c, "USceneCaptureComponent2D::NearClippingValue offset is not 51c");
	auto constexpr USceneCaptureComponent2D_OrthoWidth_Offset = offsetof(USceneCaptureComponent2D, OrthoWidth);
	static_assert(USceneCaptureComponent2D_OrthoWidth_Offset == 0x520, "USceneCaptureComponent2D::OrthoWidth offset is not 520");
	auto constexpr USceneCaptureComponent2D_TextureTarget_Offset = offsetof(USceneCaptureComponent2D, TextureTarget);
	static_assert(USceneCaptureComponent2D_TextureTarget_Offset == 0x528, "USceneCaptureComponent2D::TextureTarget offset is not 528");
	auto constexpr USceneCaptureComponent2D_CaptureSource_Offset = offsetof(USceneCaptureComponent2D, CaptureSource);
	static_assert(USceneCaptureComponent2D_CaptureSource_Offset == 0x530, "USceneCaptureComponent2D::CaptureSource offset is not 530");
	auto constexpr USceneCaptureComponent2D_CompositeMode_Offset = offsetof(USceneCaptureComponent2D, CompositeMode);
	static_assert(USceneCaptureComponent2D_CompositeMode_Offset == 0x531, "USceneCaptureComponent2D::CompositeMode offset is not 531");
	auto constexpr USceneCaptureComponent2D_PostProcessSettings_Offset = offsetof(USceneCaptureComponent2D, PostProcessSettings);
	static_assert(USceneCaptureComponent2D_PostProcessSettings_Offset == 0x540, "USceneCaptureComponent2D::PostProcessSettings offset is not 540");
	auto constexpr USceneCaptureComponent2D_PostProcessBlendWeight_Offset = offsetof(USceneCaptureComponent2D, PostProcessBlendWeight);
	static_assert(USceneCaptureComponent2D_PostProcessBlendWeight_Offset == 0xa70, "USceneCaptureComponent2D::PostProcessBlendWeight offset is not a70");
	auto constexpr USceneCaptureComponent2D_boolFieldA74_Offset = offsetof(USceneCaptureComponent2D, boolFieldA74);
	static_assert(USceneCaptureComponent2D_boolFieldA74_Offset == 0xa74, "USceneCaptureComponent2D::boolFieldA74 offset is not a74");
	auto constexpr USceneCaptureComponent2D_CustomProjectionMatrix_Offset = offsetof(USceneCaptureComponent2D, CustomProjectionMatrix);
	static_assert(USceneCaptureComponent2D_CustomProjectionMatrix_Offset == 0xa80, "USceneCaptureComponent2D::CustomProjectionMatrix offset is not a80");
	auto constexpr USceneCaptureComponent2D_boolFieldAC0_Offset = offsetof(USceneCaptureComponent2D, boolFieldAC0);
	static_assert(USceneCaptureComponent2D_boolFieldAC0_Offset == 0xac0, "USceneCaptureComponent2D::boolFieldAC0 offset is not ac0");
	auto constexpr USceneCaptureComponent2D_ClipPlaneBase_Offset = offsetof(USceneCaptureComponent2D, ClipPlaneBase);
	static_assert(USceneCaptureComponent2D_ClipPlaneBase_Offset == 0xac4, "USceneCaptureComponent2D::ClipPlaneBase offset is not ac4");
	auto constexpr USceneCaptureComponent2D_ClipPlaneNormal_Offset = offsetof(USceneCaptureComponent2D, ClipPlaneNormal);
	static_assert(USceneCaptureComponent2D_ClipPlaneNormal_Offset == 0xad0, "USceneCaptureComponent2D::ClipPlaneNormal offset is not ad0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
