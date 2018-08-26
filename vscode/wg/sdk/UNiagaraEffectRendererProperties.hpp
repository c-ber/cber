#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraEffectRendererProperties // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraEffectRendererProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(19); // id32("Class Niagara.NiagaraEffectRendererProperties")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraEffectRendererProperties = sizeof(UNiagaraEffectRendererProperties); // 48
    static_assert(sizeof(UNiagaraEffectRendererProperties) == 0x30, "Size of UNiagaraEffectRendererProperties is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
