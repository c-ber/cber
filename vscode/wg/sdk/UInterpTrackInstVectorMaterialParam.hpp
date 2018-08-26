#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstVectorMaterialParam // Size: 0x68
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstVectorMaterialParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(843); // id32("Class Engine.InterpTrackInstVectorMaterialParam")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInstanceDynamic>> MaterialInstances; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InterpTrackInstVectorMaterialParam.MaterialInstances */
	TArray<struct FVector> ResetVectors; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.InterpTrackInstVectorMaterialParam.ResetVectors */
	TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.InterpTrackInstVectorMaterialParam.PrimitiveMaterialRefs */
	ExternalPtr<struct UInterpTrackVectorMaterialParam> InstancedTrack; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.InterpTrackInstVectorMaterialParam.InstancedTrack */


	inline bool SetMaterialInstances(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInstanceDynamic>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetResetVectors(t_structHelper inst, TArray<struct FVector> value) { inst.WriteOffset(0x40, value); }
	inline bool SetPrimitiveMaterialRefs(t_structHelper inst, TArray<struct FPrimitiveMaterialRef> value) { inst.WriteOffset(0x50, value); }
	inline bool SetInstancedTrack(t_structHelper inst, ExternalPtr<struct UInterpTrackVectorMaterialParam> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstVectorMaterialParam = sizeof(UInterpTrackInstVectorMaterialParam); // 104
    static_assert(sizeof(UInterpTrackInstVectorMaterialParam) == 0x68, "Size of UInterpTrackInstVectorMaterialParam is not correct.");
	auto constexpr UInterpTrackInstVectorMaterialParam_MaterialInstances_Offset = offsetof(UInterpTrackInstVectorMaterialParam, MaterialInstances);
	static_assert(UInterpTrackInstVectorMaterialParam_MaterialInstances_Offset == 0x30, "UInterpTrackInstVectorMaterialParam::MaterialInstances offset is not 30");
	auto constexpr UInterpTrackInstVectorMaterialParam_ResetVectors_Offset = offsetof(UInterpTrackInstVectorMaterialParam, ResetVectors);
	static_assert(UInterpTrackInstVectorMaterialParam_ResetVectors_Offset == 0x40, "UInterpTrackInstVectorMaterialParam::ResetVectors offset is not 40");
	auto constexpr UInterpTrackInstVectorMaterialParam_PrimitiveMaterialRefs_Offset = offsetof(UInterpTrackInstVectorMaterialParam, PrimitiveMaterialRefs);
	static_assert(UInterpTrackInstVectorMaterialParam_PrimitiveMaterialRefs_Offset == 0x50, "UInterpTrackInstVectorMaterialParam::PrimitiveMaterialRefs offset is not 50");
	auto constexpr UInterpTrackInstVectorMaterialParam_InstancedTrack_Offset = offsetof(UInterpTrackInstVectorMaterialParam, InstancedTrack);
	static_assert(UInterpTrackInstVectorMaterialParam_InstancedTrack_Offset == 0x60, "UInterpTrackInstVectorMaterialParam::InstancedTrack offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
