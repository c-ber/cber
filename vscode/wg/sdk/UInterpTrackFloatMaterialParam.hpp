#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFloatMaterialParam // Size: 0xB0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackFloatMaterialParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(804); // id32("Class Engine.InterpTrackFloatMaterialParam")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInterface>> TargetMaterials; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.InterpTrackFloatMaterialParam.TargetMaterials */
	FName ParamName; /* Ofs: 0xA8 Size: 0x8 - NameProperty Engine.InterpTrackFloatMaterialParam.ParamName */


	inline bool SetTargetMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x98, value); }
	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFloatMaterialParam = sizeof(UInterpTrackFloatMaterialParam); // 176
    static_assert(sizeof(UInterpTrackFloatMaterialParam) == 0xB0, "Size of UInterpTrackFloatMaterialParam is not correct.");
	auto constexpr UInterpTrackFloatMaterialParam_TargetMaterials_Offset = offsetof(UInterpTrackFloatMaterialParam, TargetMaterials);
	static_assert(UInterpTrackFloatMaterialParam_TargetMaterials_Offset == 0x98, "UInterpTrackFloatMaterialParam::TargetMaterials offset is not 98");
	auto constexpr UInterpTrackFloatMaterialParam_ParamName_Offset = offsetof(UInterpTrackFloatMaterialParam, ParamName);
	static_assert(UInterpTrackFloatMaterialParam_ParamName_Offset == 0xa8, "UInterpTrackFloatMaterialParam::ParamName offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
