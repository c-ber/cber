#pragma once
#include "FGuid.hpp"
#include "FSmartNameContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeleton // Size: 0x3A0
	: public UObject // Size: 0x30
{
private:
	typedef USkeleton t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(285); // id32("Class Engine.Skeleton")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TArray<struct FBoneNode> BoneTree; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.Skeleton.BoneTree */
	TArray<struct FTransform> RefLocalPoses; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.Skeleton.RefLocalPoses */
	uint8_t UnknownData58[0x110];
	FGuid VirtualBoneGuid; /* Ofs: 0x168 Size: 0x10 - StructProperty Engine.Skeleton.VirtualBoneGuid */
	TArray<struct FVirtualBone> VirtualBones; /* Ofs: 0x178 Size: 0x10 - ArrayProperty Engine.Skeleton.VirtualBones */
	TArray<struct FSkeletonToMeshLinkup> LinkupCache; /* Ofs: 0x188 Size: 0x10 - ArrayProperty Engine.Skeleton.LinkupCache */
	TArray<ExternalPtr<struct USkeletalMeshSocket>> Sockets; /* Ofs: 0x198 Size: 0x10 - ArrayProperty Engine.Skeleton.Sockets */
	uint8_t UnknownData1A8[0x50];
	FSmartNameContainer SmartNames; /* Ofs: 0x1F8 Size: 0x50 - StructProperty Engine.Skeleton.SmartNames */
	uint8_t UnknownData248[0x18];
	TArray<ExternalPtr<struct UBlendProfile>> BlendProfiles; /* Ofs: 0x260 Size: 0x10 - ArrayProperty Engine.Skeleton.BlendProfiles */
	TArray<struct FAnimSlotGroup> SlotGroups; /* Ofs: 0x270 Size: 0x10 - ArrayProperty Engine.Skeleton.SlotGroups */
	uint8_t UnknownData280[0x110];
	TArray<ExternalPtr<struct UAssetUserData>> AssetUserData; /* Ofs: 0x390 Size: 0x10 - ArrayProperty Engine.Skeleton.AssetUserData */


	inline bool SetBoneTree(t_structHelper inst, TArray<struct FBoneNode> value) { inst.WriteOffset(0x38, value); }
	inline bool SetRefLocalPoses(t_structHelper inst, TArray<struct FTransform> value) { inst.WriteOffset(0x48, value); }
	inline bool SetVirtualBoneGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x168, value); }
	inline bool SetVirtualBones(t_structHelper inst, TArray<struct FVirtualBone> value) { inst.WriteOffset(0x178, value); }
	inline bool SetLinkupCache(t_structHelper inst, TArray<struct FSkeletonToMeshLinkup> value) { inst.WriteOffset(0x188, value); }
	inline bool SetSockets(t_structHelper inst, TArray<ExternalPtr<struct USkeletalMeshSocket>> value) { inst.WriteOffset(0x198, value); }
	inline bool SetSmartNames(t_structHelper inst, FSmartNameContainer value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetBlendProfiles(t_structHelper inst, TArray<ExternalPtr<struct UBlendProfile>> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSlotGroups(t_structHelper inst, TArray<struct FAnimSlotGroup> value) { inst.WriteOffset(0x270, value); }
	inline bool SetAssetUserData(t_structHelper inst, TArray<ExternalPtr<struct UAssetUserData>> value) { inst.WriteOffset(0x390, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeleton = sizeof(USkeleton); // 928
    static_assert(sizeof(USkeleton) == 0x3A0, "Size of USkeleton is not correct.");
	auto constexpr USkeleton_BoneTree_Offset = offsetof(USkeleton, BoneTree);
	static_assert(USkeleton_BoneTree_Offset == 0x38, "USkeleton::BoneTree offset is not 38");
	auto constexpr USkeleton_RefLocalPoses_Offset = offsetof(USkeleton, RefLocalPoses);
	static_assert(USkeleton_RefLocalPoses_Offset == 0x48, "USkeleton::RefLocalPoses offset is not 48");
	auto constexpr USkeleton_VirtualBoneGuid_Offset = offsetof(USkeleton, VirtualBoneGuid);
	static_assert(USkeleton_VirtualBoneGuid_Offset == 0x168, "USkeleton::VirtualBoneGuid offset is not 168");
	auto constexpr USkeleton_VirtualBones_Offset = offsetof(USkeleton, VirtualBones);
	static_assert(USkeleton_VirtualBones_Offset == 0x178, "USkeleton::VirtualBones offset is not 178");
	auto constexpr USkeleton_LinkupCache_Offset = offsetof(USkeleton, LinkupCache);
	static_assert(USkeleton_LinkupCache_Offset == 0x188, "USkeleton::LinkupCache offset is not 188");
	auto constexpr USkeleton_Sockets_Offset = offsetof(USkeleton, Sockets);
	static_assert(USkeleton_Sockets_Offset == 0x198, "USkeleton::Sockets offset is not 198");
	auto constexpr USkeleton_SmartNames_Offset = offsetof(USkeleton, SmartNames);
	static_assert(USkeleton_SmartNames_Offset == 0x1f8, "USkeleton::SmartNames offset is not 1f8");
	auto constexpr USkeleton_BlendProfiles_Offset = offsetof(USkeleton, BlendProfiles);
	static_assert(USkeleton_BlendProfiles_Offset == 0x260, "USkeleton::BlendProfiles offset is not 260");
	auto constexpr USkeleton_SlotGroups_Offset = offsetof(USkeleton, SlotGroups);
	static_assert(USkeleton_SlotGroups_Offset == 0x270, "USkeleton::SlotGroups offset is not 270");
	auto constexpr USkeleton_AssetUserData_Offset = offsetof(USkeleton, AssetUserData);
	static_assert(USkeleton_AssetUserData_Offset == 0x390, "USkeleton::AssetUserData offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
