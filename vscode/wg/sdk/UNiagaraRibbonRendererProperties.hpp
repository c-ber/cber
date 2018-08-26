#pragma once
#include "UNiagaraEffectRendererProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraRibbonRendererProperties // Size: 0x30
	: public UNiagaraEffectRendererProperties // Size: 0x30
{
private:
	typedef UNiagaraRibbonRendererProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(22); // id32("Class Niagara.NiagaraRibbonRendererProperties")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraRibbonRendererProperties = sizeof(UNiagaraRibbonRendererProperties); // 48
    static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x30, "Size of UNiagaraRibbonRendererProperties is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
