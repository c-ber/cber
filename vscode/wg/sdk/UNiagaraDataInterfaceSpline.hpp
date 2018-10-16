#pragma once
#include "UNiagaraDataInterface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceSpline // Size: 0xC0
	: public UNiagaraDataInterface // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceSpline t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(16); // id32("Class Niagara.NiagaraDataInterfaceSpline")
		return ptr;
	}
	ExternalPtr<struct UActor> Source; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Niagara.NiagaraDataInterfaceSpline.Source */
	uint8_t UnknownData38[0x88];


	inline bool SetSource(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceSpline = sizeof(UNiagaraDataInterfaceSpline); // 192
    static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0xC0, "Size of UNiagaraDataInterfaceSpline is not correct.");
	auto constexpr UNiagaraDataInterfaceSpline_Source_Offset = offsetof(UNiagaraDataInterfaceSpline, Source);
	static_assert(UNiagaraDataInterfaceSpline_Source_Offset == 0x30, "UNiagaraDataInterfaceSpline::Source offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
