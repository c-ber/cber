#pragma once
#include "UNiagaraDataInterface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceCurlNoise // Size: 0x30
	: public UNiagaraDataInterface // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceCurlNoise t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(15); // id32("Class Niagara.NiagaraDataInterfaceCurlNoise")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceCurlNoise = sizeof(UNiagaraDataInterfaceCurlNoise); // 48
    static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x30, "Size of UNiagaraDataInterfaceCurlNoise is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
