#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableObjectSystem // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UCustomizableObjectSystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2020); // id32("Class CustomizableObject.CustomizableObjectSystem")
		return ptr;
	}
	ExternalPtr<struct UCustomizableObjectImageProviderArray> PreviewExternalImageProvider; /* Ofs: 0x30 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableObjectSystem.PreviewExternalImageProvider */
	uint8_t UnknownData38[0x10];
	TArray<ExternalPtr<struct UTexture2D>> ProtectedCachedTextures; /* Ofs: 0x48 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectSystem.ProtectedCachedTextures */
	TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; /* Ofs: 0x58 Size: 0x10 - ArrayProperty CustomizableObject.CustomizableObjectSystem.PendingReleaseSkeletalMesh */
	uint8_t UnknownData68[0x10];


	inline bool SetPreviewExternalImageProvider(t_structHelper inst, ExternalPtr<struct UCustomizableObjectImageProviderArray> value) { inst.WriteOffset(0x30, value); }
	inline bool SetProtectedCachedTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x48, value); }
	inline bool SetPendingReleaseSkeletalMesh(t_structHelper inst, TArray<struct FPendingReleaseSkeletalMeshInfo> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableObjectSystem = sizeof(UCustomizableObjectSystem); // 120
    static_assert(sizeof(UCustomizableObjectSystem) == 0x78, "Size of UCustomizableObjectSystem is not correct.");
	auto constexpr UCustomizableObjectSystem_PreviewExternalImageProvider_Offset = offsetof(UCustomizableObjectSystem, PreviewExternalImageProvider);
	static_assert(UCustomizableObjectSystem_PreviewExternalImageProvider_Offset == 0x30, "UCustomizableObjectSystem::PreviewExternalImageProvider offset is not 30");
	auto constexpr UCustomizableObjectSystem_ProtectedCachedTextures_Offset = offsetof(UCustomizableObjectSystem, ProtectedCachedTextures);
	static_assert(UCustomizableObjectSystem_ProtectedCachedTextures_Offset == 0x48, "UCustomizableObjectSystem::ProtectedCachedTextures offset is not 48");
	auto constexpr UCustomizableObjectSystem_PendingReleaseSkeletalMesh_Offset = offsetof(UCustomizableObjectSystem, PendingReleaseSkeletalMesh);
	static_assert(UCustomizableObjectSystem_PendingReleaseSkeletalMesh_Offset == 0x58, "UCustomizableObjectSystem::PendingReleaseSkeletalMesh offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
