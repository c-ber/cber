#pragma once
#include "UNiagaraEffectRendererProperties.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraLightRendererProperties // Size: 0x40
	: public UNiagaraEffectRendererProperties // Size: 0x30
{
private:
	typedef UNiagaraLightRendererProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(20); // id32("Class Niagara.NiagaraLightRendererProperties")
		return ptr;
	}
	float RadiusScale; /* Ofs: 0x30 Size: 0x4 - FloatProperty Niagara.NiagaraLightRendererProperties.RadiusScale */
	FVector ColorAdd; /* Ofs: 0x34 Size: 0xC - StructProperty Niagara.NiagaraLightRendererProperties.ColorAdd */


	inline bool SetRadiusScale(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetColorAdd(t_structHelper inst, FVector value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraLightRendererProperties = sizeof(UNiagaraLightRendererProperties); // 64
    static_assert(sizeof(UNiagaraLightRendererProperties) == 0x40, "Size of UNiagaraLightRendererProperties is not correct.");
	auto constexpr UNiagaraLightRendererProperties_RadiusScale_Offset = offsetof(UNiagaraLightRendererProperties, RadiusScale);
	static_assert(UNiagaraLightRendererProperties_RadiusScale_Offset == 0x30, "UNiagaraLightRendererProperties::RadiusScale offset is not 30");
	auto constexpr UNiagaraLightRendererProperties_ColorAdd_Offset = offsetof(UNiagaraLightRendererProperties, ColorAdd);
	static_assert(UNiagaraLightRendererProperties_ColorAdd_Offset == 0x34, "UNiagaraLightRendererProperties::ColorAdd offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
