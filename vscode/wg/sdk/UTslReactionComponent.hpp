#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReactionComponent // Size: 0xAE0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UTslReactionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1378); // id32("Class TslGame.TslReactionComponent")
		return ptr;
	}
	uint8_t UnknownDataA80[0x10];
	uint8_t boolFieldA90;
	uint8_t UnknownDataA91[0x7];
	ExternalPtr<struct UTslReactionData> ReactionData; /* Ofs: 0xA98 Size: 0x8 - ObjectProperty TslGame.TslReactionComponent.ReactionData */
	ExternalPtr<struct UDestructibleMesh> ReactionDM; /* Ofs: 0xAA0 Size: 0x8 - ObjectProperty TslGame.TslReactionComponent.ReactionDM */
	uint8_t UnknownDataAA8[0x8];
	ExternalPtr<struct UDestructibleComponent> ReactionDestructible; /* Ofs: 0xAB0 Size: 0x8 - ObjectProperty TslGame.TslReactionComponent.ReactionDestructible */
	ExternalPtr<struct UStaticMeshComponent> ReactionStaticMeshComponent; /* Ofs: 0xAB8 Size: 0x8 - ObjectProperty TslGame.TslReactionComponent.ReactionStaticMeshComponent */
	uint8_t UnknownDataAC0[0x20];


	inline bool bPendingDestroy()
	{
		return boolFieldA90& 0x1;
	}
	inline bool SetbPendingDestroy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReactionData(t_structHelper inst, ExternalPtr<struct UTslReactionData> value) { inst.WriteOffset(0xA98, value); }
	inline bool SetReactionDM(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetReactionDestructible(t_structHelper inst, ExternalPtr<struct UDestructibleComponent> value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetReactionStaticMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0xAB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReactionComponent = sizeof(UTslReactionComponent); // 2784
    static_assert(sizeof(UTslReactionComponent) == 0xAE0, "Size of UTslReactionComponent is not correct.");
	auto constexpr UTslReactionComponent_boolFieldA90_Offset = offsetof(UTslReactionComponent, boolFieldA90);
	static_assert(UTslReactionComponent_boolFieldA90_Offset == 0xa90, "UTslReactionComponent::boolFieldA90 offset is not a90");
	auto constexpr UTslReactionComponent_ReactionData_Offset = offsetof(UTslReactionComponent, ReactionData);
	static_assert(UTslReactionComponent_ReactionData_Offset == 0xa98, "UTslReactionComponent::ReactionData offset is not a98");
	auto constexpr UTslReactionComponent_ReactionDM_Offset = offsetof(UTslReactionComponent, ReactionDM);
	static_assert(UTslReactionComponent_ReactionDM_Offset == 0xaa0, "UTslReactionComponent::ReactionDM offset is not aa0");
	auto constexpr UTslReactionComponent_ReactionDestructible_Offset = offsetof(UTslReactionComponent, ReactionDestructible);
	static_assert(UTslReactionComponent_ReactionDestructible_Offset == 0xab0, "UTslReactionComponent::ReactionDestructible offset is not ab0");
	auto constexpr UTslReactionComponent_ReactionStaticMeshComponent_Offset = offsetof(UTslReactionComponent, ReactionStaticMeshComponent);
	static_assert(UTslReactionComponent_ReactionStaticMeshComponent_Offset == 0xab8, "UTslReactionComponent::ReactionStaticMeshComponent offset is not ab8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
