#pragma once
#include "UNiagaraDataInterface.hpp"
#include "FNDIStaticMeshSectionFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceStaticMesh // Size: 0x200
	: public UNiagaraDataInterface // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceStaticMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(17); // id32("Class Niagara.NiagaraDataInterfaceStaticMesh")
		return ptr;
	}
	ExternalPtr<struct UStaticMesh> DefaultMesh; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Niagara.NiagaraDataInterfaceStaticMesh.DefaultMesh */
	ExternalPtr<struct UActor> Source; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Niagara.NiagaraDataInterfaceStaticMesh.Source */
	FNDIStaticMeshSectionFilter SectionFilter; /* Ofs: 0x40 Size: 0x68 - StructProperty Niagara.NiagaraDataInterfaceStaticMesh.SectionFilter */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x157];


	inline bool SetDefaultMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x30, value); }
	inline bool SetSource(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSectionFilter(t_structHelper inst, FNDIStaticMeshSectionFilter value) { inst.WriteOffset(0x40, value); }
	inline bool bEnableVertexColorRangeSorting()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbEnableVertexColorRangeSorting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceStaticMesh = sizeof(UNiagaraDataInterfaceStaticMesh); // 512
    static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x200, "Size of UNiagaraDataInterfaceStaticMesh is not correct.");
	auto constexpr UNiagaraDataInterfaceStaticMesh_DefaultMesh_Offset = offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh);
	static_assert(UNiagaraDataInterfaceStaticMesh_DefaultMesh_Offset == 0x30, "UNiagaraDataInterfaceStaticMesh::DefaultMesh offset is not 30");
	auto constexpr UNiagaraDataInterfaceStaticMesh_Source_Offset = offsetof(UNiagaraDataInterfaceStaticMesh, Source);
	static_assert(UNiagaraDataInterfaceStaticMesh_Source_Offset == 0x38, "UNiagaraDataInterfaceStaticMesh::Source offset is not 38");
	auto constexpr UNiagaraDataInterfaceStaticMesh_SectionFilter_Offset = offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter);
	static_assert(UNiagaraDataInterfaceStaticMesh_SectionFilter_Offset == 0x40, "UNiagaraDataInterfaceStaticMesh::SectionFilter offset is not 40");
	auto constexpr UNiagaraDataInterfaceStaticMesh_boolFieldA8_Offset = offsetof(UNiagaraDataInterfaceStaticMesh, boolFieldA8);
	static_assert(UNiagaraDataInterfaceStaticMesh_boolFieldA8_Offset == 0xa8, "UNiagaraDataInterfaceStaticMesh::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
