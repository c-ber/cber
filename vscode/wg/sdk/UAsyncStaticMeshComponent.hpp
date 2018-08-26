#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAsyncStaticMeshComponent // Size: 0xAF0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UAsyncStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(413); // id32("Class TslGame.AsyncStaticMeshComponent")
		return ptr;
	}
	FScriptMulticastDelegate OnStaticMeshLoaded; /* Ofs: 0xA80 Size: 0x10 - MulticastDelegateProperty TslGame.AsyncStaticMeshComponent.OnStaticMeshLoaded */
	TAssetPtr<ExternalPtr<struct UStaticMesh>> StaticMeshAsset; /* Ofs: 0xA90 Size: 0x1C - AssetObjectProperty TslGame.AsyncStaticMeshComponent.StaticMeshAsset */
	uint8_t UnknownDataAAC[0xC];
	ExternalPtr<struct UStaticMesh> ErrorStaticMesh; /* Ofs: 0xAB8 Size: 0x8 - ObjectProperty TslGame.AsyncStaticMeshComponent.ErrorStaticMesh */
	FName ClientCollisionProfileNameOverride; /* Ofs: 0xAC0 Size: 0x8 - NameProperty TslGame.AsyncStaticMeshComponent.ClientCollisionProfileNameOverride */
	TAssetPtr<ExternalPtr<struct UStaticMesh>> PendingStaticMeshAsset; /* Ofs: 0xAC8 Size: 0x1C - AssetObjectProperty TslGame.AsyncStaticMeshComponent.PendingStaticMeshAsset */
	uint8_t UnknownDataAE4[0xC];


	inline bool SetOnStaticMeshLoaded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xA80, value); }
	inline bool SetStaticMeshAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetErrorStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetClientCollisionProfileNameOverride(t_structHelper inst, FName value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetPendingStaticMeshAsset(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0xAC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAsyncStaticMeshComponent = sizeof(UAsyncStaticMeshComponent); // 2800
    static_assert(sizeof(UAsyncStaticMeshComponent) == 0xAF0, "Size of UAsyncStaticMeshComponent is not correct.");
	auto constexpr UAsyncStaticMeshComponent_OnStaticMeshLoaded_Offset = offsetof(UAsyncStaticMeshComponent, OnStaticMeshLoaded);
	static_assert(UAsyncStaticMeshComponent_OnStaticMeshLoaded_Offset == 0xa80, "UAsyncStaticMeshComponent::OnStaticMeshLoaded offset is not a80");
	auto constexpr UAsyncStaticMeshComponent_StaticMeshAsset_Offset = offsetof(UAsyncStaticMeshComponent, StaticMeshAsset);
	static_assert(UAsyncStaticMeshComponent_StaticMeshAsset_Offset == 0xa90, "UAsyncStaticMeshComponent::StaticMeshAsset offset is not a90");
	auto constexpr UAsyncStaticMeshComponent_ErrorStaticMesh_Offset = offsetof(UAsyncStaticMeshComponent, ErrorStaticMesh);
	static_assert(UAsyncStaticMeshComponent_ErrorStaticMesh_Offset == 0xab8, "UAsyncStaticMeshComponent::ErrorStaticMesh offset is not ab8");
	auto constexpr UAsyncStaticMeshComponent_ClientCollisionProfileNameOverride_Offset = offsetof(UAsyncStaticMeshComponent, ClientCollisionProfileNameOverride);
	static_assert(UAsyncStaticMeshComponent_ClientCollisionProfileNameOverride_Offset == 0xac0, "UAsyncStaticMeshComponent::ClientCollisionProfileNameOverride offset is not ac0");
	auto constexpr UAsyncStaticMeshComponent_PendingStaticMeshAsset_Offset = offsetof(UAsyncStaticMeshComponent, PendingStaticMeshAsset);
	static_assert(UAsyncStaticMeshComponent_PendingStaticMeshAsset_Offset == 0xac8, "UAsyncStaticMeshComponent::PendingStaticMeshAsset offset is not ac8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
