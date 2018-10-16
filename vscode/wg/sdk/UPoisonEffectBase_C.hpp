#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPoisonEffectBase_C // Size: 0x418
	: public UActor // Size: 0x410
{
private:
	typedef UPoisonEffectBase_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(111902); // id32("BlueprintGeneratedClass PoisonEffectBase.PoisonEffectBase_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x410 Size: 0x8 - ObjectProperty PoisonEffectBase.PoisonEffectBase_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x410, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPoisonEffectBase_C = sizeof(UPoisonEffectBase_C); // 1048
    static_assert(sizeof(UPoisonEffectBase_C) == 0x418, "Size of UPoisonEffectBase_C is not correct.");
	auto constexpr UPoisonEffectBase_C_DefaultSceneRoot_Offset = offsetof(UPoisonEffectBase_C, DefaultSceneRoot);
	static_assert(UPoisonEffectBase_C_DefaultSceneRoot_Offset == 0x410, "UPoisonEffectBase_C::DefaultSceneRoot offset is not 410");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
