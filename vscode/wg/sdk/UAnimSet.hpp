#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimSet // Size: 0xF8
	: public UObject // Size: 0x30
{
private:
	typedef UAnimSet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(279); // id32("Class Engine.AnimSet")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	TArray<struct FName> TrackBoneNames; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.AnimSet.TrackBoneNames */
	TArray<struct FAnimSetMeshLinkup> LinkupCache; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.AnimSet.LinkupCache */
	TArray<uint8_t> BoneUseAnimTranslation; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.AnimSet.BoneUseAnimTranslation */
	TArray<uint8_t> ForceUseMeshTranslation; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.AnimSet.ForceUseMeshTranslation */
	TArray<struct FName> UseTranslationBoneNames; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.AnimSet.UseTranslationBoneNames */
	TArray<struct FName> ForceMeshTranslationBoneNames; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.AnimSet.ForceMeshTranslationBoneNames */
	FName PreviewSkelMeshName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.AnimSet.PreviewSkelMeshName */
	FName BestRatioSkelMeshName; /* Ofs: 0xA0 Size: 0x8 - NameProperty Engine.AnimSet.BestRatioSkelMeshName */
	uint8_t UnknownDataA8[0x50];


	inline bool bAnimRotationOnly()
	{
		return boolField30& 0x1;
	}
	inline bool SetbAnimRotationOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTrackBoneNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x38, value); }
	inline bool SetLinkupCache(t_structHelper inst, TArray<struct FAnimSetMeshLinkup> value) { inst.WriteOffset(0x48, value); }
	inline bool SetBoneUseAnimTranslation(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x58, value); }
	inline bool SetForceUseMeshTranslation(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x68, value); }
	inline bool SetUseTranslationBoneNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x78, value); }
	inline bool SetForceMeshTranslationBoneNames(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x88, value); }
	inline bool SetPreviewSkelMeshName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
	inline bool SetBestRatioSkelMeshName(t_structHelper inst, FName value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimSet = sizeof(UAnimSet); // 248
    static_assert(sizeof(UAnimSet) == 0xF8, "Size of UAnimSet is not correct.");
	auto constexpr UAnimSet_boolField30_Offset = offsetof(UAnimSet, boolField30);
	static_assert(UAnimSet_boolField30_Offset == 0x30, "UAnimSet::boolField30 offset is not 30");
	auto constexpr UAnimSet_TrackBoneNames_Offset = offsetof(UAnimSet, TrackBoneNames);
	static_assert(UAnimSet_TrackBoneNames_Offset == 0x38, "UAnimSet::TrackBoneNames offset is not 38");
	auto constexpr UAnimSet_LinkupCache_Offset = offsetof(UAnimSet, LinkupCache);
	static_assert(UAnimSet_LinkupCache_Offset == 0x48, "UAnimSet::LinkupCache offset is not 48");
	auto constexpr UAnimSet_BoneUseAnimTranslation_Offset = offsetof(UAnimSet, BoneUseAnimTranslation);
	static_assert(UAnimSet_BoneUseAnimTranslation_Offset == 0x58, "UAnimSet::BoneUseAnimTranslation offset is not 58");
	auto constexpr UAnimSet_ForceUseMeshTranslation_Offset = offsetof(UAnimSet, ForceUseMeshTranslation);
	static_assert(UAnimSet_ForceUseMeshTranslation_Offset == 0x68, "UAnimSet::ForceUseMeshTranslation offset is not 68");
	auto constexpr UAnimSet_UseTranslationBoneNames_Offset = offsetof(UAnimSet, UseTranslationBoneNames);
	static_assert(UAnimSet_UseTranslationBoneNames_Offset == 0x78, "UAnimSet::UseTranslationBoneNames offset is not 78");
	auto constexpr UAnimSet_ForceMeshTranslationBoneNames_Offset = offsetof(UAnimSet, ForceMeshTranslationBoneNames);
	static_assert(UAnimSet_ForceMeshTranslationBoneNames_Offset == 0x88, "UAnimSet::ForceMeshTranslationBoneNames offset is not 88");
	auto constexpr UAnimSet_PreviewSkelMeshName_Offset = offsetof(UAnimSet, PreviewSkelMeshName);
	static_assert(UAnimSet_PreviewSkelMeshName_Offset == 0x98, "UAnimSet::PreviewSkelMeshName offset is not 98");
	auto constexpr UAnimSet_BestRatioSkelMeshName_Offset = offsetof(UAnimSet, BestRatioSkelMeshName);
	static_assert(UAnimSet_BestRatioSkelMeshName_Offset == 0xa0, "UAnimSet::BestRatioSkelMeshName offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
