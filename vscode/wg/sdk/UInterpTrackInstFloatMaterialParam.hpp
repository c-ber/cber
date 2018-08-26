#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstFloatMaterialParam // Size: 0x68
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstFloatMaterialParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(830); // id32("Class Engine.InterpTrackInstFloatMaterialParam")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInstanceDynamic>> MaterialInstances; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InterpTrackInstFloatMaterialParam.MaterialInstances */
	TArray<float> ResetFloats; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.InterpTrackInstFloatMaterialParam.ResetFloats */
	TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.InterpTrackInstFloatMaterialParam.PrimitiveMaterialRefs */
	ExternalPtr<struct UInterpTrackFloatMaterialParam> InstancedTrack; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.InterpTrackInstFloatMaterialParam.InstancedTrack */


	inline bool SetMaterialInstances(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInstanceDynamic>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetResetFloats(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x40, value); }
	inline bool SetPrimitiveMaterialRefs(t_structHelper inst, TArray<struct FPrimitiveMaterialRef> value) { inst.WriteOffset(0x50, value); }
	inline bool SetInstancedTrack(t_structHelper inst, ExternalPtr<struct UInterpTrackFloatMaterialParam> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstFloatMaterialParam = sizeof(UInterpTrackInstFloatMaterialParam); // 104
    static_assert(sizeof(UInterpTrackInstFloatMaterialParam) == 0x68, "Size of UInterpTrackInstFloatMaterialParam is not correct.");
	auto constexpr UInterpTrackInstFloatMaterialParam_MaterialInstances_Offset = offsetof(UInterpTrackInstFloatMaterialParam, MaterialInstances);
	static_assert(UInterpTrackInstFloatMaterialParam_MaterialInstances_Offset == 0x30, "UInterpTrackInstFloatMaterialParam::MaterialInstances offset is not 30");
	auto constexpr UInterpTrackInstFloatMaterialParam_ResetFloats_Offset = offsetof(UInterpTrackInstFloatMaterialParam, ResetFloats);
	static_assert(UInterpTrackInstFloatMaterialParam_ResetFloats_Offset == 0x40, "UInterpTrackInstFloatMaterialParam::ResetFloats offset is not 40");
	auto constexpr UInterpTrackInstFloatMaterialParam_PrimitiveMaterialRefs_Offset = offsetof(UInterpTrackInstFloatMaterialParam, PrimitiveMaterialRefs);
	static_assert(UInterpTrackInstFloatMaterialParam_PrimitiveMaterialRefs_Offset == 0x50, "UInterpTrackInstFloatMaterialParam::PrimitiveMaterialRefs offset is not 50");
	auto constexpr UInterpTrackInstFloatMaterialParam_InstancedTrack_Offset = offsetof(UInterpTrackInstFloatMaterialParam, InstancedTrack);
	static_assert(UInterpTrackInstFloatMaterialParam_InstancedTrack_Offset == 0x60, "UInterpTrackInstFloatMaterialParam::InstancedTrack offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
