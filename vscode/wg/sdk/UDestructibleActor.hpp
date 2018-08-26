#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDestructibleActor // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UDestructibleActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1735); // id32("Class Engine.DestructibleActor")
		return ptr;
	}
//	ExternalPtr<struct UDestructibleComponent> DestructibleComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.DestructibleActor.DestructibleComponent */
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	FScriptMulticastDelegate OnActorFracture; /* Ofs: 0x418 Size: 0x10 - MulticastDelegateProperty Engine.DestructibleActor.OnActorFracture */
	uint8_t UnknownData428[0x8];


//	inline bool SetDestructibleComponent(t_structHelper inst, ExternalPtr<struct UDestructibleComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool bAffectNavigation()
	{
		return boolField410& 0x1;
	}
	inline bool SetbAffectNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnActorFracture(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDestructibleActor = sizeof(UDestructibleActor); // 1072
    static_assert(sizeof(UDestructibleActor) == 0x430, "Size of UDestructibleActor is not correct.");
//	auto constexpr UDestructibleActor_DestructibleComponent_Offset = offsetof(UDestructibleActor, DestructibleComponent);
//	static_assert(UDestructibleActor_DestructibleComponent_Offset == 0x408, "UDestructibleActor::DestructibleComponent offset is not 408");
	auto constexpr UDestructibleActor_boolField410_Offset = offsetof(UDestructibleActor, boolField410);
	static_assert(UDestructibleActor_boolField410_Offset == 0x410, "UDestructibleActor::boolField410 offset is not 410");
	auto constexpr UDestructibleActor_OnActorFracture_Offset = offsetof(UDestructibleActor, OnActorFracture);
	static_assert(UDestructibleActor_OnActorFracture_Offset == 0x418, "UDestructibleActor::OnActorFracture offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
