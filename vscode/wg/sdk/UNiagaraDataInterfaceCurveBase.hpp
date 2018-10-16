#pragma once
#include "UNiagaraDataInterface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceCurveBase // Size: 0x30
	: public UNiagaraDataInterface // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceCurveBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(11); // id32("Class Niagara.NiagaraDataInterfaceCurveBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceCurveBase = sizeof(UNiagaraDataInterfaceCurveBase); // 48
    static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x30, "Size of UNiagaraDataInterfaceCurveBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
