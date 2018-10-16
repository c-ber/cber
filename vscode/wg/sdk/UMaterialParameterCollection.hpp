#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialParameterCollection // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UMaterialParameterCollection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1023); // id32("Class Engine.MaterialParameterCollection")
		return ptr;
	}
	FGuid StateId; /* Ofs: 0x30 Size: 0x10 - StructProperty Engine.MaterialParameterCollection.StateId */
	TArray<struct FCollectionScalarParameter> ScalarParameters; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.MaterialParameterCollection.ScalarParameters */
	TArray<struct FCollectionVectorParameter> VectorParameters; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.MaterialParameterCollection.VectorParameters */
	uint8_t UnknownData60[0x10];


	inline bool SetStateId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x30, value); }
	inline bool SetScalarParameters(t_structHelper inst, TArray<struct FCollectionScalarParameter> value) { inst.WriteOffset(0x40, value); }
	inline bool SetVectorParameters(t_structHelper inst, TArray<struct FCollectionVectorParameter> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialParameterCollection = sizeof(UMaterialParameterCollection); // 112
    static_assert(sizeof(UMaterialParameterCollection) == 0x70, "Size of UMaterialParameterCollection is not correct.");
	auto constexpr UMaterialParameterCollection_StateId_Offset = offsetof(UMaterialParameterCollection, StateId);
	static_assert(UMaterialParameterCollection_StateId_Offset == 0x30, "UMaterialParameterCollection::StateId offset is not 30");
	auto constexpr UMaterialParameterCollection_ScalarParameters_Offset = offsetof(UMaterialParameterCollection, ScalarParameters);
	static_assert(UMaterialParameterCollection_ScalarParameters_Offset == 0x40, "UMaterialParameterCollection::ScalarParameters offset is not 40");
	auto constexpr UMaterialParameterCollection_VectorParameters_Offset = offsetof(UMaterialParameterCollection, VectorParameters);
	static_assert(UMaterialParameterCollection_VectorParameters_Offset == 0x50, "UMaterialParameterCollection::VectorParameters offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
