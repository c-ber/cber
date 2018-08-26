#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateVectorArtData // Size: 0x68
	: public UObject // Size: 0x30
{
private:
	typedef USlateVectorArtData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1648); // id32("Class UMG.SlateVectorArtData")
		return ptr;
	}
	TArray<struct FSlateMeshVertex> VertexData; /* Ofs: 0x30 Size: 0x10 - ArrayProperty UMG.SlateVectorArtData.VertexData */
	TArray<uint32_t> IndexData; /* Ofs: 0x40 Size: 0x10 - ArrayProperty UMG.SlateVectorArtData.IndexData */
	ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x50 Size: 0x8 - ObjectProperty UMG.SlateVectorArtData.Material */
	FVector2D ExtentMin; /* Ofs: 0x58 Size: 0x8 - StructProperty UMG.SlateVectorArtData.ExtentMin */
	FVector2D ExtentMax; /* Ofs: 0x60 Size: 0x8 - StructProperty UMG.SlateVectorArtData.ExtentMax */


	inline bool SetVertexData(t_structHelper inst, TArray<struct FSlateMeshVertex> value) { inst.WriteOffset(0x30, value); }
	inline bool SetIndexData(t_structHelper inst, TArray<uint32_t> value) { inst.WriteOffset(0x40, value); }
	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x50, value); }
	inline bool SetExtentMin(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x58, value); }
	inline bool SetExtentMax(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateVectorArtData = sizeof(USlateVectorArtData); // 104
    static_assert(sizeof(USlateVectorArtData) == 0x68, "Size of USlateVectorArtData is not correct.");
	auto constexpr USlateVectorArtData_VertexData_Offset = offsetof(USlateVectorArtData, VertexData);
	static_assert(USlateVectorArtData_VertexData_Offset == 0x30, "USlateVectorArtData::VertexData offset is not 30");
	auto constexpr USlateVectorArtData_IndexData_Offset = offsetof(USlateVectorArtData, IndexData);
	static_assert(USlateVectorArtData_IndexData_Offset == 0x40, "USlateVectorArtData::IndexData offset is not 40");
	auto constexpr USlateVectorArtData_Material_Offset = offsetof(USlateVectorArtData, Material);
	static_assert(USlateVectorArtData_Material_Offset == 0x50, "USlateVectorArtData::Material offset is not 50");
	auto constexpr USlateVectorArtData_ExtentMin_Offset = offsetof(USlateVectorArtData, ExtentMin);
	static_assert(USlateVectorArtData_ExtentMin_Offset == 0x58, "USlateVectorArtData::ExtentMin offset is not 58");
	auto constexpr USlateVectorArtData_ExtentMax_Offset = offsetof(USlateVectorArtData, ExtentMax);
	static_assert(USlateVectorArtData_ExtentMax_Offset == 0x60, "USlateVectorArtData::ExtentMax offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
