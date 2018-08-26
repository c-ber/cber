#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPreviewMeshCollection // Size: 0x50
	: public UDataAsset // Size: 0x38
{
private:
	typedef UPreviewMeshCollection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(712); // id32("Class Engine.PreviewMeshCollection")
		return ptr;
	}
	ExternalPtr<struct USkeleton> Skeleton; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.PreviewMeshCollection.Skeleton */
	TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.PreviewMeshCollection.SkeletalMeshes */


	inline bool SetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSkeletalMeshes(t_structHelper inst, TArray<struct FPreviewMeshCollectionEntry> value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPreviewMeshCollection = sizeof(UPreviewMeshCollection); // 80
    static_assert(sizeof(UPreviewMeshCollection) == 0x50, "Size of UPreviewMeshCollection is not correct.");
	auto constexpr UPreviewMeshCollection_Skeleton_Offset = offsetof(UPreviewMeshCollection, Skeleton);
	static_assert(UPreviewMeshCollection_Skeleton_Offset == 0x38, "UPreviewMeshCollection::Skeleton offset is not 38");
	auto constexpr UPreviewMeshCollection_SkeletalMeshes_Offset = offsetof(UPreviewMeshCollection, SkeletalMeshes);
	static_assert(UPreviewMeshCollection_SkeletalMeshes_Offset == 0x40, "UPreviewMeshCollection::SkeletalMeshes offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
