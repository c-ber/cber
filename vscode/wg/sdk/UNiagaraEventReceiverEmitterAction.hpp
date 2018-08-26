#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraEventReceiverEmitterAction // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraEventReceiverEmitterAction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(25); // id32("Class Niagara.NiagaraEventReceiverEmitterAction")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraEventReceiverEmitterAction = sizeof(UNiagaraEventReceiverEmitterAction); // 48
    static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x30, "Size of UNiagaraEventReceiverEmitterAction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
