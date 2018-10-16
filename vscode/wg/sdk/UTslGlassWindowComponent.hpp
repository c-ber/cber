#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGlassWindowComponent // Size: 0xAC0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UTslGlassWindowComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1398); // id32("Class TslGame.TslGlassWindowComponent")
		return ptr;
	}
	ExternalPtr<struct UDestructibleMesh> DestructibleMesh; /* Ofs: 0xA80 Size: 0x8 - ObjectProperty TslGame.TslGlassWindowComponent.DestructibleMesh */
	float DestroyDelayAfterDestructed; /* Ofs: 0xA88 Size: 0x4 - FloatProperty TslGame.TslGlassWindowComponent.DestroyDelayAfterDestructed */
	uint8_t UnknownDataA8C[0x4];
	ExternalPtr<struct UAkAudioEvent> DestructSound; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty TslGame.TslGlassWindowComponent.DestructSound */
	float DestructSoundOcclusionRefreshInterval; /* Ofs: 0xA98 Size: 0x4 - FloatProperty TslGame.TslGlassWindowComponent.DestructSoundOcclusionRefreshInterval */
	uint8_t UnknownDataA9C[0x4];
	ExternalPtr<struct UDestructibleComponent> DestructibleComponent; /* Ofs: 0xAA0 Size: 0x8 - ObjectProperty TslGame.TslGlassWindowComponent.DestructibleComponent */
	uint8_t boolFieldAA8;
	uint8_t UnknownDataAA9[0x17];


	inline bool SetDestructibleMesh(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xA80, value); }
	inline bool SetDestroyDelayAfterDestructed(t_structHelper inst, float value) { inst.WriteOffset(0xA88, value); }
	inline bool SetDestructSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetDestructSoundOcclusionRefreshInterval(t_structHelper inst, float value) { inst.WriteOffset(0xA98, value); }
	inline bool SetDestructibleComponent(t_structHelper inst, ExternalPtr<struct UDestructibleComponent> value) { inst.WriteOffset(0xAA0, value); }
	inline bool bReplicatedOnClient()
	{
		return boolFieldAA8& 0x1;
	}
	inline bool SetbReplicatedOnClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDestroyed()
	{
		return boolFieldAA8& 0x2;
	}
	inline bool SetbDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGlassWindowComponent = sizeof(UTslGlassWindowComponent); // 2752
    static_assert(sizeof(UTslGlassWindowComponent) == 0xAC0, "Size of UTslGlassWindowComponent is not correct.");
	auto constexpr UTslGlassWindowComponent_DestructibleMesh_Offset = offsetof(UTslGlassWindowComponent, DestructibleMesh);
	static_assert(UTslGlassWindowComponent_DestructibleMesh_Offset == 0xa80, "UTslGlassWindowComponent::DestructibleMesh offset is not a80");
	auto constexpr UTslGlassWindowComponent_DestroyDelayAfterDestructed_Offset = offsetof(UTslGlassWindowComponent, DestroyDelayAfterDestructed);
	static_assert(UTslGlassWindowComponent_DestroyDelayAfterDestructed_Offset == 0xa88, "UTslGlassWindowComponent::DestroyDelayAfterDestructed offset is not a88");
	auto constexpr UTslGlassWindowComponent_DestructSound_Offset = offsetof(UTslGlassWindowComponent, DestructSound);
	static_assert(UTslGlassWindowComponent_DestructSound_Offset == 0xa90, "UTslGlassWindowComponent::DestructSound offset is not a90");
	auto constexpr UTslGlassWindowComponent_DestructSoundOcclusionRefreshInterval_Offset = offsetof(UTslGlassWindowComponent, DestructSoundOcclusionRefreshInterval);
	static_assert(UTslGlassWindowComponent_DestructSoundOcclusionRefreshInterval_Offset == 0xa98, "UTslGlassWindowComponent::DestructSoundOcclusionRefreshInterval offset is not a98");
	auto constexpr UTslGlassWindowComponent_DestructibleComponent_Offset = offsetof(UTslGlassWindowComponent, DestructibleComponent);
	static_assert(UTslGlassWindowComponent_DestructibleComponent_Offset == 0xaa0, "UTslGlassWindowComponent::DestructibleComponent offset is not aa0");
	auto constexpr UTslGlassWindowComponent_boolFieldAA8_Offset = offsetof(UTslGlassWindowComponent, boolFieldAA8);
	static_assert(UTslGlassWindowComponent_boolFieldAA8_Offset == 0xaa8, "UTslGlassWindowComponent::boolFieldAA8 offset is not aa8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
