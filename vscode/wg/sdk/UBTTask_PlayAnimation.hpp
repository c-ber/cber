#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_PlayAnimation // Size: 0xF0
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_PlayAnimation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(605); // id32("Class AIModule.BTTask_PlayAnimation")
		return ptr;
	}
	ExternalPtr<struct UAnimationAsset> AnimationToPlay; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTTask_PlayAnimation.AnimationToPlay */
	uint8_t boolField80;
	uint8_t UnknownData81[0x7];
	ExternalPtr<struct UBehaviorTreeComponent> MyOwnerComp; /* Ofs: 0x88 Size: 0x8 - ObjectProperty AIModule.BTTask_PlayAnimation.MyOwnerComp */
	ExternalPtr<struct USkeletalMeshComponent> CachedSkelMesh; /* Ofs: 0x90 Size: 0x8 - ObjectProperty AIModule.BTTask_PlayAnimation.CachedSkelMesh */
	uint8_t UnknownData98[0x58];


	inline bool SetAnimationToPlay(t_structHelper inst, ExternalPtr<struct UAnimationAsset> value) { inst.WriteOffset(0x78, value); }
	inline bool bLooping()
	{
		return boolField80& 0x1;
	}
	inline bool SetbLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNonBlocking()
	{
		return boolField80& 0x2;
	}
	inline bool SetbNonBlocking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMyOwnerComp(t_structHelper inst, ExternalPtr<struct UBehaviorTreeComponent> value) { inst.WriteOffset(0x88, value); }
	inline bool SetCachedSkelMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_PlayAnimation = sizeof(UBTTask_PlayAnimation); // 240
    static_assert(sizeof(UBTTask_PlayAnimation) == 0xF0, "Size of UBTTask_PlayAnimation is not correct.");
	auto constexpr UBTTask_PlayAnimation_AnimationToPlay_Offset = offsetof(UBTTask_PlayAnimation, AnimationToPlay);
	static_assert(UBTTask_PlayAnimation_AnimationToPlay_Offset == 0x78, "UBTTask_PlayAnimation::AnimationToPlay offset is not 78");
	auto constexpr UBTTask_PlayAnimation_boolField80_Offset = offsetof(UBTTask_PlayAnimation, boolField80);
	static_assert(UBTTask_PlayAnimation_boolField80_Offset == 0x80, "UBTTask_PlayAnimation::boolField80 offset is not 80");
	auto constexpr UBTTask_PlayAnimation_MyOwnerComp_Offset = offsetof(UBTTask_PlayAnimation, MyOwnerComp);
	static_assert(UBTTask_PlayAnimation_MyOwnerComp_Offset == 0x88, "UBTTask_PlayAnimation::MyOwnerComp offset is not 88");
	auto constexpr UBTTask_PlayAnimation_CachedSkelMesh_Offset = offsetof(UBTTask_PlayAnimation, CachedSkelMesh);
	static_assert(UBTTask_PlayAnimation_CachedSkelMesh_Offset == 0x90, "UBTTask_PlayAnimation::CachedSkelMesh offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
