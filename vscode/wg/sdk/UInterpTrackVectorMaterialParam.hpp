#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackVectorMaterialParam // Size: 0xB0
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackVectorMaterialParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(819); // id32("Class Engine.InterpTrackVectorMaterialParam")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInterface>> TargetMaterials; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.InterpTrackVectorMaterialParam.TargetMaterials */
	FName ParamName; /* Ofs: 0xA8 Size: 0x8 - NameProperty Engine.InterpTrackVectorMaterialParam.ParamName */


	inline bool SetTargetMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x98, value); }
	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackVectorMaterialParam = sizeof(UInterpTrackVectorMaterialParam); // 176
    static_assert(sizeof(UInterpTrackVectorMaterialParam) == 0xB0, "Size of UInterpTrackVectorMaterialParam is not correct.");
	auto constexpr UInterpTrackVectorMaterialParam_TargetMaterials_Offset = offsetof(UInterpTrackVectorMaterialParam, TargetMaterials);
	static_assert(UInterpTrackVectorMaterialParam_TargetMaterials_Offset == 0x98, "UInterpTrackVectorMaterialParam::TargetMaterials offset is not 98");
	auto constexpr UInterpTrackVectorMaterialParam_ParamName_Offset = offsetof(UInterpTrackVectorMaterialParam, ParamName);
	static_assert(UInterpTrackVectorMaterialParam_ParamName_Offset == 0xa8, "UInterpTrackVectorMaterialParam::ParamName offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
