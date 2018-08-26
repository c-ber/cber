#pragma once
#include "USkinnedMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDestructibleComponent // Size: 0xC40
	: public USkinnedMeshComponent // Size: 0xB80
{
private:
	typedef UDestructibleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(207); // id32("Class Engine.DestructibleComponent")
		return ptr;
	}
//	uint8_t boolFieldB78;
	TArray<struct FFractureEffect> FractureEffects; /* Ofs: 0xB80 Size: 0x10 - ArrayProperty Engine.DestructibleComponent.FractureEffects */
	uint8_t boolFieldB90;
	uint8_t UnknownDataB91[0x3];
	float LargeChunkThreshold; /* Ofs: 0xB94 Size: 0x4 - FloatProperty Engine.DestructibleComponent.LargeChunkThreshold */
	uint8_t UnknownDataB98[0x10];
	FScriptMulticastDelegate OnComponentFracture; /* Ofs: 0xBA8 Size: 0x10 - MulticastDelegateProperty Engine.DestructibleComponent.OnComponentFracture */
	uint8_t UnknownDataBB8[0x88];


	inline bool SetFractureEffects(t_structHelper inst, TArray<struct FFractureEffect> value) { inst.WriteOffset(0xB80, value); }
	inline bool bEnableHardSleeping()
	{
		return boolFieldB90& 0x1;
	}
	inline bool SetbEnableHardSleeping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLargeChunkThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xB94, value); }
	inline bool SetOnComponentFracture(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xBA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDestructibleComponent = sizeof(UDestructibleComponent); // 3136
    static_assert(sizeof(UDestructibleComponent) == 0xC40, "Size of UDestructibleComponent is not correct.");
//	auto constexpr UDestructibleComponent_boolFieldB78_Offset = offsetof(UDestructibleComponent, boolFieldB78);
//	static_assert(UDestructibleComponent_boolFieldB78_Offset == 0xb78, "UDestructibleComponent::boolFieldB78 offset is not b78");
	auto constexpr UDestructibleComponent_FractureEffects_Offset = offsetof(UDestructibleComponent, FractureEffects);
	static_assert(UDestructibleComponent_FractureEffects_Offset == 0xb80, "UDestructibleComponent::FractureEffects offset is not b80");
	auto constexpr UDestructibleComponent_boolFieldB90_Offset = offsetof(UDestructibleComponent, boolFieldB90);
	static_assert(UDestructibleComponent_boolFieldB90_Offset == 0xb90, "UDestructibleComponent::boolFieldB90 offset is not b90");
	auto constexpr UDestructibleComponent_LargeChunkThreshold_Offset = offsetof(UDestructibleComponent, LargeChunkThreshold);
	static_assert(UDestructibleComponent_LargeChunkThreshold_Offset == 0xb94, "UDestructibleComponent::LargeChunkThreshold offset is not b94");
	auto constexpr UDestructibleComponent_OnComponentFracture_Offset = offsetof(UDestructibleComponent, OnComponentFracture);
	static_assert(UDestructibleComponent_OnComponentFracture_Offset == 0xba8, "UDestructibleComponent::OnComponentFracture offset is not ba8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
