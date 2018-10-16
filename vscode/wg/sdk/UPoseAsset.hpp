#pragma once
#include "UAnimationAsset.hpp"
#include "FPoseDataContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPoseAsset // Size: 0x190
	: public UAnimationAsset // Size: 0x80
{
private:
	typedef UPoseAsset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(256); // id32("Class Engine.PoseAsset")
		return ptr;
	}
	FPoseDataContainer PoseContainer; /* Ofs: 0x80 Size: 0x90 - StructProperty Engine.PoseAsset.PoseContainer */
	uint8_t boolField110;
	uint8_t UnknownData111[0x3];
	int32_t BasePoseIndex; /* Ofs: 0x114 Size: 0x4 - IntProperty Engine.PoseAsset.BasePoseIndex */
	FName RetargetSource; /* Ofs: 0x118 Size: 0x8 - NameProperty Engine.PoseAsset.RetargetSource */
	uint8_t UnknownData120[0x70];


	inline bool SetPoseContainer(t_structHelper inst, FPoseDataContainer value) { inst.WriteOffset(0x80, value); }
	inline bool bAdditivePose()
	{
		return boolField110& 0x1;
	}
	inline bool SetbAdditivePose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x110, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBasePoseIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x114, value); }
	inline bool SetRetargetSource(t_structHelper inst, FName value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPoseAsset = sizeof(UPoseAsset); // 400
    static_assert(sizeof(UPoseAsset) == 0x190, "Size of UPoseAsset is not correct.");
	auto constexpr UPoseAsset_PoseContainer_Offset = offsetof(UPoseAsset, PoseContainer);
	static_assert(UPoseAsset_PoseContainer_Offset == 0x80, "UPoseAsset::PoseContainer offset is not 80");
	auto constexpr UPoseAsset_boolField110_Offset = offsetof(UPoseAsset, boolField110);
	static_assert(UPoseAsset_boolField110_Offset == 0x110, "UPoseAsset::boolField110 offset is not 110");
	auto constexpr UPoseAsset_BasePoseIndex_Offset = offsetof(UPoseAsset, BasePoseIndex);
	static_assert(UPoseAsset_BasePoseIndex_Offset == 0x114, "UPoseAsset::BasePoseIndex offset is not 114");
	auto constexpr UPoseAsset_RetargetSource_Offset = offsetof(UPoseAsset, RetargetSource);
	static_assert(UPoseAsset_RetargetSource_Offset == 0x118, "UPoseAsset::RetargetSource offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
