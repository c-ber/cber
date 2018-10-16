#pragma once
#include "UNiagaraEffectRendererProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraMeshRendererProperties // Size: 0x38
	: public UNiagaraEffectRendererProperties // Size: 0x30
{
private:
	typedef UNiagaraMeshRendererProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(21); // id32("Class Niagara.NiagaraMeshRendererProperties")
		return ptr;
	}
	ExternalPtr<struct UStaticMesh> ParticleMesh; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Niagara.NiagaraMeshRendererProperties.ParticleMesh */


	inline bool SetParticleMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraMeshRendererProperties = sizeof(UNiagaraMeshRendererProperties); // 56
    static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x38, "Size of UNiagaraMeshRendererProperties is not correct.");
	auto constexpr UNiagaraMeshRendererProperties_ParticleMesh_Offset = offsetof(UNiagaraMeshRendererProperties, ParticleMesh);
	static_assert(UNiagaraMeshRendererProperties_ParticleMesh_Offset == 0x30, "UNiagaraMeshRendererProperties::ParticleMesh offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
