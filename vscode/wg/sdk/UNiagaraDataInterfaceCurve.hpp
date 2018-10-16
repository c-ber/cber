#pragma once
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceCurve // Size: 0xA0
	: public UNiagaraDataInterfaceCurveBase // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(12); // id32("Class Niagara.NiagaraDataInterfaceCurve")
		return ptr;
	}
	FRichCurve Curve; /* Ofs: 0x30 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceCurve.Curve */


	inline bool SetCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceCurve = sizeof(UNiagaraDataInterfaceCurve); // 160
    static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0xA0, "Size of UNiagaraDataInterfaceCurve is not correct.");
	auto constexpr UNiagaraDataInterfaceCurve_Curve_Offset = offsetof(UNiagaraDataInterfaceCurve, Curve);
	static_assert(UNiagaraDataInterfaceCurve_Curve_Offset == 0x30, "UNiagaraDataInterfaceCurve::Curve offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
