#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_SmokeChild_C // Size: 0x438
	: public UActor // Size: 0x410
{
private:
	typedef UBP_SmokeChild_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125666); // id32("BlueprintGeneratedClass BP_SmokeChild.BP_SmokeChild_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_SmokeChild.BP_SmokeChild_C.UberGraphFrame */
	ExternalPtr<struct UCapsuleComponent> Capsule; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_SmokeChild.BP_SmokeChild_C.Capsule */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_SmokeChild.BP_SmokeChild_C.DefaultSceneRoot */
	FVector TargetLocation; /* Ofs: 0x428 Size: 0xC - StructProperty BP_SmokeChild.BP_SmokeChild_C.TargetLocation */
	float HalfHeight; /* Ofs: 0x434 Size: 0x4 - FloatProperty BP_SmokeChild.BP_SmokeChild_C.HalfHeight */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetCapsule(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTargetLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x428, value); }
	inline bool SetHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_SmokeChild_C = sizeof(UBP_SmokeChild_C); // 1080
    static_assert(sizeof(UBP_SmokeChild_C) == 0x438, "Size of UBP_SmokeChild_C is not correct.");
	auto constexpr UBP_SmokeChild_C_UberGraphFrame_Offset = offsetof(UBP_SmokeChild_C, UberGraphFrame);
	static_assert(UBP_SmokeChild_C_UberGraphFrame_Offset == 0x410, "UBP_SmokeChild_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_SmokeChild_C_Capsule_Offset = offsetof(UBP_SmokeChild_C, Capsule);
	static_assert(UBP_SmokeChild_C_Capsule_Offset == 0x418, "UBP_SmokeChild_C::Capsule offset is not 418");
	auto constexpr UBP_SmokeChild_C_DefaultSceneRoot_Offset = offsetof(UBP_SmokeChild_C, DefaultSceneRoot);
	static_assert(UBP_SmokeChild_C_DefaultSceneRoot_Offset == 0x420, "UBP_SmokeChild_C::DefaultSceneRoot offset is not 420");
	auto constexpr UBP_SmokeChild_C_TargetLocation_Offset = offsetof(UBP_SmokeChild_C, TargetLocation);
	static_assert(UBP_SmokeChild_C_TargetLocation_Offset == 0x428, "UBP_SmokeChild_C::TargetLocation offset is not 428");
	auto constexpr UBP_SmokeChild_C_HalfHeight_Offset = offsetof(UBP_SmokeChild_C, HalfHeight);
	static_assert(UBP_SmokeChild_C_HalfHeight_Offset == 0x434, "UBP_SmokeChild_C::HalfHeight offset is not 434");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
