#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraEffect // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(18); // id32("Class Niagara.NiagaraEffect")
		return ptr;
	}
	TArray<struct FNiagaraEmitterHandle> EmitterHandles; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Niagara.NiagaraEffect.EmitterHandles */
	ExternalPtr<struct UNiagaraScript> EffectScript; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Niagara.NiagaraEffect.EffectScript */
	TArray<struct FNiagaraParameterBinding> ParameterBindings; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Niagara.NiagaraEffect.ParameterBindings */
	TArray<struct FNiagaraParameterBinding> DataInterfaceBindings; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Niagara.NiagaraEffect.DataInterfaceBindings */
	TArray<struct FNiagaraEmitterInternalVariableBinding> InternalEmitterVariableBindings; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Niagara.NiagaraEffect.InternalEmitterVariableBindings */


	inline bool SetEmitterHandles(t_structHelper inst, TArray<struct FNiagaraEmitterHandle> value) { inst.WriteOffset(0x30, value); }
	inline bool SetEffectScript(t_structHelper inst, ExternalPtr<struct UNiagaraScript> value) { inst.WriteOffset(0x40, value); }
	inline bool SetParameterBindings(t_structHelper inst, TArray<struct FNiagaraParameterBinding> value) { inst.WriteOffset(0x48, value); }
	inline bool SetDataInterfaceBindings(t_structHelper inst, TArray<struct FNiagaraParameterBinding> value) { inst.WriteOffset(0x58, value); }
	inline bool SetInternalEmitterVariableBindings(t_structHelper inst, TArray<struct FNiagaraEmitterInternalVariableBinding> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraEffect = sizeof(UNiagaraEffect); // 120
    static_assert(sizeof(UNiagaraEffect) == 0x78, "Size of UNiagaraEffect is not correct.");
	auto constexpr UNiagaraEffect_EmitterHandles_Offset = offsetof(UNiagaraEffect, EmitterHandles);
	static_assert(UNiagaraEffect_EmitterHandles_Offset == 0x30, "UNiagaraEffect::EmitterHandles offset is not 30");
	auto constexpr UNiagaraEffect_EffectScript_Offset = offsetof(UNiagaraEffect, EffectScript);
	static_assert(UNiagaraEffect_EffectScript_Offset == 0x40, "UNiagaraEffect::EffectScript offset is not 40");
	auto constexpr UNiagaraEffect_ParameterBindings_Offset = offsetof(UNiagaraEffect, ParameterBindings);
	static_assert(UNiagaraEffect_ParameterBindings_Offset == 0x48, "UNiagaraEffect::ParameterBindings offset is not 48");
	auto constexpr UNiagaraEffect_DataInterfaceBindings_Offset = offsetof(UNiagaraEffect, DataInterfaceBindings);
	static_assert(UNiagaraEffect_DataInterfaceBindings_Offset == 0x58, "UNiagaraEffect::DataInterfaceBindings offset is not 58");
	auto constexpr UNiagaraEffect_InternalEmitterVariableBindings_Offset = offsetof(UNiagaraEffect, InternalEmitterVariableBindings);
	static_assert(UNiagaraEffect_InternalEmitterVariableBindings_Offset == 0x68, "UNiagaraEffect::InternalEmitterVariableBindings offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
