#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UNiagaraActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(5); // id32("Class Niagara.NiagaraActor")
		return ptr;
	}
//	ExternalPtr<struct UNiagaraComponent> NiagaraComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Niagara.NiagaraActor.NiagaraComponent */


//	inline bool SetNiagaraComponent(t_structHelper inst, ExternalPtr<struct UNiagaraComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraActor = sizeof(UNiagaraActor); // 1040
    static_assert(sizeof(UNiagaraActor) == 0x410, "Size of UNiagaraActor is not correct.");
//	auto constexpr UNiagaraActor_NiagaraComponent_Offset = offsetof(UNiagaraActor, NiagaraComponent);
//	static_assert(UNiagaraActor_NiagaraComponent_Offset == 0x408, "UNiagaraActor::NiagaraComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
