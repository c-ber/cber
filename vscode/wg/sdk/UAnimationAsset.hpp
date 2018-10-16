#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimationAsset // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef UAnimationAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(246); // id32("Class Engine.AnimationAsset")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct USkeleton> Skeleton; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.AnimationAsset.Skeleton */
	uint8_t UnknownData40[0x20];
	TArray<ExternalPtr<struct UAnimMetaData>> MetaData; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.AnimationAsset.MetaData */
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.AnimationAsset.AssetUserData */


	inline bool SetSkeleton(t_structHelper inst, ExternalPtr<struct USkeleton> value) { inst.WriteOffset(0x38, value); }
	inline bool SetMetaData(t_structHelper inst, TArray<ExternalPtr<struct UAnimMetaData>> value) { inst.WriteOffset(0x60, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimationAsset = sizeof(UAnimationAsset); // 128
    static_assert(sizeof(UAnimationAsset) == 0x80, "Size of UAnimationAsset is not correct.");
	auto constexpr UAnimationAsset_Skeleton_Offset = offsetof(UAnimationAsset, Skeleton);
	static_assert(UAnimationAsset_Skeleton_Offset == 0x38, "UAnimationAsset::Skeleton offset is not 38");
	auto constexpr UAnimationAsset_MetaData_Offset = offsetof(UAnimationAsset, MetaData);
	static_assert(UAnimationAsset_MetaData_Offset == 0x60, "UAnimationAsset::MetaData offset is not 60");
	auto constexpr UAnimationAsset_AssetUserData_Offset = offsetof(UAnimationAsset, AssetUserData);
	static_assert(UAnimationAsset_AssetUserData_Offset == 0x70, "UAnimationAsset::AssetUserData offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
