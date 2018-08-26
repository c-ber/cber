#pragma once
#include "UActorComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnNoiseEmitterComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPawnNoiseEmitterComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1809); // id32("Class Engine.PawnNoiseEmitterComponent")
		return ptr;
	}
//	uint8_t boolField1E8;
//	FVector LastRemoteNoisePosition; /* Ofs: 0x1EC Size: 0xC - StructProperty Engine.PawnNoiseEmitterComponent.LastRemoteNoisePosition */
	uint8_t UnknownData1F0[0x8];
	float NoiseLifetime; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty Engine.PawnNoiseEmitterComponent.NoiseLifetime */
	float LastRemoteNoiseVolume; /* Ofs: 0x1FC Size: 0x4 - FloatProperty Engine.PawnNoiseEmitterComponent.LastRemoteNoiseVolume */
	float LastRemoteNoiseTime; /* Ofs: 0x200 Size: 0x4 - FloatProperty Engine.PawnNoiseEmitterComponent.LastRemoteNoiseTime */
	float LastLocalNoiseVolume; /* Ofs: 0x204 Size: 0x4 - FloatProperty Engine.PawnNoiseEmitterComponent.LastLocalNoiseVolume */
	float LastLocalNoiseTime; /* Ofs: 0x208 Size: 0x4 - FloatProperty Engine.PawnNoiseEmitterComponent.LastLocalNoiseTime */
	uint8_t UnknownData20C[0x4];


//	inline bool SetLastRemoteNoisePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x1EC, value); }
	inline bool SetNoiseLifetime(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetLastRemoteNoiseVolume(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetLastRemoteNoiseTime(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetLastLocalNoiseVolume(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetLastLocalNoiseTime(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnNoiseEmitterComponent = sizeof(UPawnNoiseEmitterComponent); // 528
    static_assert(sizeof(UPawnNoiseEmitterComponent) == 0x210, "Size of UPawnNoiseEmitterComponent is not correct.");
//	auto constexpr UPawnNoiseEmitterComponent_boolField1E8_Offset = offsetof(UPawnNoiseEmitterComponent, boolField1E8);
//	static_assert(UPawnNoiseEmitterComponent_boolField1E8_Offset == 0x1e8, "UPawnNoiseEmitterComponent::boolField1E8 offset is not 1e8");
//	auto constexpr UPawnNoiseEmitterComponent_LastRemoteNoisePosition_Offset = offsetof(UPawnNoiseEmitterComponent, LastRemoteNoisePosition);
//	static_assert(UPawnNoiseEmitterComponent_LastRemoteNoisePosition_Offset == 0x1ec, "UPawnNoiseEmitterComponent::LastRemoteNoisePosition offset is not 1ec");
	auto constexpr UPawnNoiseEmitterComponent_NoiseLifetime_Offset = offsetof(UPawnNoiseEmitterComponent, NoiseLifetime);
	static_assert(UPawnNoiseEmitterComponent_NoiseLifetime_Offset == 0x1f8, "UPawnNoiseEmitterComponent::NoiseLifetime offset is not 1f8");
	auto constexpr UPawnNoiseEmitterComponent_LastRemoteNoiseVolume_Offset = offsetof(UPawnNoiseEmitterComponent, LastRemoteNoiseVolume);
	static_assert(UPawnNoiseEmitterComponent_LastRemoteNoiseVolume_Offset == 0x1fc, "UPawnNoiseEmitterComponent::LastRemoteNoiseVolume offset is not 1fc");
	auto constexpr UPawnNoiseEmitterComponent_LastRemoteNoiseTime_Offset = offsetof(UPawnNoiseEmitterComponent, LastRemoteNoiseTime);
	static_assert(UPawnNoiseEmitterComponent_LastRemoteNoiseTime_Offset == 0x200, "UPawnNoiseEmitterComponent::LastRemoteNoiseTime offset is not 200");
	auto constexpr UPawnNoiseEmitterComponent_LastLocalNoiseVolume_Offset = offsetof(UPawnNoiseEmitterComponent, LastLocalNoiseVolume);
	static_assert(UPawnNoiseEmitterComponent_LastLocalNoiseVolume_Offset == 0x204, "UPawnNoiseEmitterComponent::LastLocalNoiseVolume offset is not 204");
	auto constexpr UPawnNoiseEmitterComponent_LastLocalNoiseTime_Offset = offsetof(UPawnNoiseEmitterComponent, LastLocalNoiseTime);
	static_assert(UPawnNoiseEmitterComponent_LastLocalNoiseTime_Offset == 0x208, "UPawnNoiseEmitterComponent::LastLocalNoiseTime offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
