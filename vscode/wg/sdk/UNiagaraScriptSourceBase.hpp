#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraScriptSourceBase // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraScriptSourceBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(30); // id32("Class Niagara.NiagaraScriptSourceBase")
		return ptr;
	}
	uint8_t UnknownData30[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraScriptSourceBase = sizeof(UNiagaraScriptSourceBase); // 80
    static_assert(sizeof(UNiagaraScriptSourceBase) == 0x50, "Size of UNiagaraScriptSourceBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
