#pragma once
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceColorCurve // Size: 0x1F0
	: public UNiagaraDataInterfaceCurveBase // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceColorCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(14); // id32("Class Niagara.NiagaraDataInterfaceColorCurve")
		return ptr;
	}
	FRichCurve RedCurve; /* Ofs: 0x30 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceColorCurve.RedCurve */
	FRichCurve GreenCurve; /* Ofs: 0xA0 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceColorCurve.GreenCurve */
	FRichCurve BlueCurve; /* Ofs: 0x110 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceColorCurve.BlueCurve */
	FRichCurve AlphaCurve; /* Ofs: 0x180 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceColorCurve.AlphaCurve */


	inline bool SetRedCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x30, value); }
	inline bool SetGreenCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xA0, value); }
	inline bool SetBlueCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x110, value); }
	inline bool SetAlphaCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x180, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceColorCurve = sizeof(UNiagaraDataInterfaceColorCurve); // 496
    static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x1F0, "Size of UNiagaraDataInterfaceColorCurve is not correct.");
	auto constexpr UNiagaraDataInterfaceColorCurve_RedCurve_Offset = offsetof(UNiagaraDataInterfaceColorCurve, RedCurve);
	static_assert(UNiagaraDataInterfaceColorCurve_RedCurve_Offset == 0x30, "UNiagaraDataInterfaceColorCurve::RedCurve offset is not 30");
	auto constexpr UNiagaraDataInterfaceColorCurve_GreenCurve_Offset = offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve);
	static_assert(UNiagaraDataInterfaceColorCurve_GreenCurve_Offset == 0xa0, "UNiagaraDataInterfaceColorCurve::GreenCurve offset is not a0");
	auto constexpr UNiagaraDataInterfaceColorCurve_BlueCurve_Offset = offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve);
	static_assert(UNiagaraDataInterfaceColorCurve_BlueCurve_Offset == 0x110, "UNiagaraDataInterfaceColorCurve::BlueCurve offset is not 110");
	auto constexpr UNiagaraDataInterfaceColorCurve_AlphaCurve_Offset = offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve);
	static_assert(UNiagaraDataInterfaceColorCurve_AlphaCurve_Offset == 0x180, "UNiagaraDataInterfaceColorCurve::AlphaCurve offset is not 180");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
