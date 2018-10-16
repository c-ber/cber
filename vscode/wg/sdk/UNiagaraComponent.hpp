#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraComponent // Size: 0x940
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UNiagaraComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(9); // id32("Class Niagara.NiagaraComponent")
		return ptr;
	}
//	ExternalPtr<struct UNiagaraEffect> Asset; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Niagara.NiagaraComponent.Asset */
	uint8_t UnknownData8F0[0x10];
	TArray<struct FNiagaraVariable> EffectParameterLocalOverrides; /* Ofs: 0x900 Size: 0x10 - ArrayProperty Niagara.NiagaraComponent.EffectParameterLocalOverrides */
	TArray<struct FNiagaraScriptDataInterfaceInfo> EffectDataInterfaceLocalOverrides; /* Ofs: 0x910 Size: 0x10 - ArrayProperty Niagara.NiagaraComponent.EffectDataInterfaceLocalOverrides */
	TArray<ExternalPtr<struct UNiagaraDataInterface>> InstanceDataInterfaces; /* Ofs: 0x920 Size: 0x10 - ArrayProperty Niagara.NiagaraComponent.InstanceDataInterfaces */
	uint8_t boolField930;
	uint8_t UnknownData931[0xF];


//	inline bool SetAsset(t_structHelper inst, ExternalPtr<struct UNiagaraEffect> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetEffectParameterLocalOverrides(t_structHelper inst, TArray<struct FNiagaraVariable> value) { inst.WriteOffset(0x900, value); }
	inline bool SetEffectDataInterfaceLocalOverrides(t_structHelper inst, TArray<struct FNiagaraScriptDataInterfaceInfo> value) { inst.WriteOffset(0x910, value); }
	inline bool SetInstanceDataInterfaces(t_structHelper inst, TArray<ExternalPtr<struct UNiagaraDataInterface>> value) { inst.WriteOffset(0x920, value); }
	inline bool bRenderingEnabled()
	{
		return boolField930& 0x1;
	}
	inline bool SetbRenderingEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x930, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraComponent = sizeof(UNiagaraComponent); // 2368
    static_assert(sizeof(UNiagaraComponent) == 0x940, "Size of UNiagaraComponent is not correct.");
//	auto constexpr UNiagaraComponent_Asset_Offset = offsetof(UNiagaraComponent, Asset);
//	static_assert(UNiagaraComponent_Asset_Offset == 0x8e8, "UNiagaraComponent::Asset offset is not 8e8");
	auto constexpr UNiagaraComponent_EffectParameterLocalOverrides_Offset = offsetof(UNiagaraComponent, EffectParameterLocalOverrides);
	static_assert(UNiagaraComponent_EffectParameterLocalOverrides_Offset == 0x900, "UNiagaraComponent::EffectParameterLocalOverrides offset is not 900");
	auto constexpr UNiagaraComponent_EffectDataInterfaceLocalOverrides_Offset = offsetof(UNiagaraComponent, EffectDataInterfaceLocalOverrides);
	static_assert(UNiagaraComponent_EffectDataInterfaceLocalOverrides_Offset == 0x910, "UNiagaraComponent::EffectDataInterfaceLocalOverrides offset is not 910");
	auto constexpr UNiagaraComponent_InstanceDataInterfaces_Offset = offsetof(UNiagaraComponent, InstanceDataInterfaces);
	static_assert(UNiagaraComponent_InstanceDataInterfaces_Offset == 0x920, "UNiagaraComponent::InstanceDataInterfaces offset is not 920");
	auto constexpr UNiagaraComponent_boolField930_Offset = offsetof(UNiagaraComponent, boolField930);
	static_assert(UNiagaraComponent_boolField930_Offset == 0x930, "UNiagaraComponent::boolField930 offset is not 930");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
