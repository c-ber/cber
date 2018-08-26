#pragma once
#include "UStaticMeshComponent.hpp"
#include "FSplineMeshParams.hpp"
#include "FVector.hpp"
#include "ESplineMeshAxis.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USplineMeshComponent // Size: 0xB20
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef USplineMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(215); // id32("Class Engine.SplineMeshComponent")
		return ptr;
	}
	uint8_t UnknownDataA80[0x8];
	FSplineMeshParams SplineParams; /* Ofs: 0xA88 Size: 0x58 - StructProperty Engine.SplineMeshComponent.SplineParams */
	FVector SplineUpDir; /* Ofs: 0xAE0 Size: 0xC - StructProperty Engine.SplineMeshComponent.SplineUpDir */
	uint8_t boolFieldAEC;
	uint8_t UnknownDataAED[0x3];
	TEnumAsByte<enum ESplineMeshAxis> ForwardAxis; /* Ofs: 0xAF0 Size: 0x1 - ByteProperty Engine.SplineMeshComponent.ForwardAxis */
	uint8_t UnknownDataAF1[0x3];
	float SplineBoundaryMin; /* Ofs: 0xAF4 Size: 0x4 - FloatProperty Engine.SplineMeshComponent.SplineBoundaryMin */
	float SplineBoundaryMax; /* Ofs: 0xAF8 Size: 0x4 - FloatProperty Engine.SplineMeshComponent.SplineBoundaryMax */
	uint8_t UnknownDataAFC[0x4];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0xB00 Size: 0x8 - ObjectProperty Engine.SplineMeshComponent.BodySetup */
	FGuid CachedMeshBodySetupGuid; /* Ofs: 0xB08 Size: 0x10 - StructProperty Engine.SplineMeshComponent.CachedMeshBodySetupGuid */
	uint8_t boolFieldB18;
	uint8_t UnknownDataB19[0x7];


	inline bool SetSplineParams(t_structHelper inst, FSplineMeshParams value) { inst.WriteOffset(0xA88, value); }
	inline bool SetSplineUpDir(t_structHelper inst, FVector value) { inst.WriteOffset(0xAE0, value); }
	inline bool bAllowSplineEditingPerInstance()
	{
		return boolFieldAEC& 0x1;
	}
	inline bool SetbAllowSplineEditingPerInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAEC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSmoothInterpRollScale()
	{
		return boolFieldAEC& 0x2;
	}
	inline bool SetbSmoothInterpRollScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAEC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetForwardAxis(t_structHelper inst, TEnumAsByte<enum ESplineMeshAxis> value) { inst.WriteOffset(0xAF0, value); }
	inline bool SetSplineBoundaryMin(t_structHelper inst, float value) { inst.WriteOffset(0xAF4, value); }
	inline bool SetSplineBoundaryMax(t_structHelper inst, float value) { inst.WriteOffset(0xAF8, value); }
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xB00, value); }
	inline bool SetCachedMeshBodySetupGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xB08, value); }
	inline bool bMeshDirty()
	{
		return boolFieldB18& 0x1;
	}
	inline bool SetbMeshDirty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB18, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSplineMeshComponent = sizeof(USplineMeshComponent); // 2848
    static_assert(sizeof(USplineMeshComponent) == 0xB20, "Size of USplineMeshComponent is not correct.");
	auto constexpr USplineMeshComponent_SplineParams_Offset = offsetof(USplineMeshComponent, SplineParams);
	static_assert(USplineMeshComponent_SplineParams_Offset == 0xa88, "USplineMeshComponent::SplineParams offset is not a88");
	auto constexpr USplineMeshComponent_SplineUpDir_Offset = offsetof(USplineMeshComponent, SplineUpDir);
	static_assert(USplineMeshComponent_SplineUpDir_Offset == 0xae0, "USplineMeshComponent::SplineUpDir offset is not ae0");
	auto constexpr USplineMeshComponent_boolFieldAEC_Offset = offsetof(USplineMeshComponent, boolFieldAEC);
	static_assert(USplineMeshComponent_boolFieldAEC_Offset == 0xaec, "USplineMeshComponent::boolFieldAEC offset is not aec");
	auto constexpr USplineMeshComponent_ForwardAxis_Offset = offsetof(USplineMeshComponent, ForwardAxis);
	static_assert(USplineMeshComponent_ForwardAxis_Offset == 0xaf0, "USplineMeshComponent::ForwardAxis offset is not af0");
	auto constexpr USplineMeshComponent_SplineBoundaryMin_Offset = offsetof(USplineMeshComponent, SplineBoundaryMin);
	static_assert(USplineMeshComponent_SplineBoundaryMin_Offset == 0xaf4, "USplineMeshComponent::SplineBoundaryMin offset is not af4");
	auto constexpr USplineMeshComponent_SplineBoundaryMax_Offset = offsetof(USplineMeshComponent, SplineBoundaryMax);
	static_assert(USplineMeshComponent_SplineBoundaryMax_Offset == 0xaf8, "USplineMeshComponent::SplineBoundaryMax offset is not af8");
	auto constexpr USplineMeshComponent_BodySetup_Offset = offsetof(USplineMeshComponent, BodySetup);
	static_assert(USplineMeshComponent_BodySetup_Offset == 0xb00, "USplineMeshComponent::BodySetup offset is not b00");
	auto constexpr USplineMeshComponent_CachedMeshBodySetupGuid_Offset = offsetof(USplineMeshComponent, CachedMeshBodySetupGuid);
	static_assert(USplineMeshComponent_CachedMeshBodySetupGuid_Offset == 0xb08, "USplineMeshComponent::CachedMeshBodySetupGuid offset is not b08");
	auto constexpr USplineMeshComponent_boolFieldB18_Offset = offsetof(USplineMeshComponent, boolFieldB18);
	static_assert(USplineMeshComponent_boolFieldB18_Offset == 0xb18, "USplineMeshComponent::boolFieldB18 offset is not b18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
