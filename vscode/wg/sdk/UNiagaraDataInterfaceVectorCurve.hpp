#pragma once
#include "UNiagaraDataInterfaceCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraDataInterfaceVectorCurve // Size: 0x180
	: public UNiagaraDataInterfaceCurveBase // Size: 0x30
{
private:
	typedef UNiagaraDataInterfaceVectorCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(13); // id32("Class Niagara.NiagaraDataInterfaceVectorCurve")
		return ptr;
	}
	FRichCurve XCurve; /* Ofs: 0x30 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceVectorCurve.XCurve */
	FRichCurve YCurve; /* Ofs: 0xA0 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceVectorCurve.YCurve */
	FRichCurve ZCurve; /* Ofs: 0x110 Size: 0x70 - StructProperty Niagara.NiagaraDataInterfaceVectorCurve.ZCurve */


	inline bool SetXCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x30, value); }
	inline bool SetYCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xA0, value); }
	inline bool SetZCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x110, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraDataInterfaceVectorCurve = sizeof(UNiagaraDataInterfaceVectorCurve); // 384
    static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x180, "Size of UNiagaraDataInterfaceVectorCurve is not correct.");
	auto constexpr UNiagaraDataInterfaceVectorCurve_XCurve_Offset = offsetof(UNiagaraDataInterfaceVectorCurve, XCurve);
	static_assert(UNiagaraDataInterfaceVectorCurve_XCurve_Offset == 0x30, "UNiagaraDataInterfaceVectorCurve::XCurve offset is not 30");
	auto constexpr UNiagaraDataInterfaceVectorCurve_YCurve_Offset = offsetof(UNiagaraDataInterfaceVectorCurve, YCurve);
	static_assert(UNiagaraDataInterfaceVectorCurve_YCurve_Offset == 0xa0, "UNiagaraDataInterfaceVectorCurve::YCurve offset is not a0");
	auto constexpr UNiagaraDataInterfaceVectorCurve_ZCurve_Offset = offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve);
	static_assert(UNiagaraDataInterfaceVectorCurve_ZCurve_Offset == 0x110, "UNiagaraDataInterfaceVectorCurve::ZCurve offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
