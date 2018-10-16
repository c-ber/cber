#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraSettings // Size: 0x90
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UNiagaraSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(32); // id32("Class Niagara.NiagaraSettings")
		return ptr;
	}
	FStringAssetReference DefaultEffect; /* Ofs: 0x40 Size: 0x10 - StructProperty Niagara.NiagaraSettings.DefaultEffect */
	FStringAssetReference DefaultEmitter; /* Ofs: 0x50 Size: 0x10 - StructProperty Niagara.NiagaraSettings.DefaultEmitter */
	FStringAssetReference DefaultScript; /* Ofs: 0x60 Size: 0x10 - StructProperty Niagara.NiagaraSettings.DefaultScript */
	TArray<struct FStringAssetReference> AdditionalParameterTypes; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Niagara.NiagaraSettings.AdditionalParameterTypes */
	TArray<struct FStringAssetReference> AdditionalPayloadTypes; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Niagara.NiagaraSettings.AdditionalPayloadTypes */


	inline bool SetDefaultEffect(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultEmitter(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x50, value); }
	inline bool SetDefaultScript(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x60, value); }
	inline bool SetAdditionalParameterTypes(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x70, value); }
	inline bool SetAdditionalPayloadTypes(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraSettings = sizeof(UNiagaraSettings); // 144
    static_assert(sizeof(UNiagaraSettings) == 0x90, "Size of UNiagaraSettings is not correct.");
	auto constexpr UNiagaraSettings_DefaultEffect_Offset = offsetof(UNiagaraSettings, DefaultEffect);
	static_assert(UNiagaraSettings_DefaultEffect_Offset == 0x40, "UNiagaraSettings::DefaultEffect offset is not 40");
	auto constexpr UNiagaraSettings_DefaultEmitter_Offset = offsetof(UNiagaraSettings, DefaultEmitter);
	static_assert(UNiagaraSettings_DefaultEmitter_Offset == 0x50, "UNiagaraSettings::DefaultEmitter offset is not 50");
	auto constexpr UNiagaraSettings_DefaultScript_Offset = offsetof(UNiagaraSettings, DefaultScript);
	static_assert(UNiagaraSettings_DefaultScript_Offset == 0x60, "UNiagaraSettings::DefaultScript offset is not 60");
	auto constexpr UNiagaraSettings_AdditionalParameterTypes_Offset = offsetof(UNiagaraSettings, AdditionalParameterTypes);
	static_assert(UNiagaraSettings_AdditionalParameterTypes_Offset == 0x70, "UNiagaraSettings::AdditionalParameterTypes offset is not 70");
	auto constexpr UNiagaraSettings_AdditionalPayloadTypes_Offset = offsetof(UNiagaraSettings, AdditionalPayloadTypes);
	static_assert(UNiagaraSettings_AdditionalPayloadTypes_Offset == 0x80, "UNiagaraSettings::AdditionalPayloadTypes offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
