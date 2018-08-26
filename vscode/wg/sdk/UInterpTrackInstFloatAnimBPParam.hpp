#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstFloatAnimBPParam // Size: 0x48
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstFloatAnimBPParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(829); // id32("Class Engine.InterpTrackInstFloatAnimBPParam")
		return ptr;
	}
	ExternalPtr<struct UAnimInstance> AnimScriptInstance; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.InterpTrackInstFloatAnimBPParam.AnimScriptInstance */
	float ResetFloat; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.InterpTrackInstFloatAnimBPParam.ResetFloat */
	uint8_t UnknownData3C[0xC];


	inline bool SetAnimScriptInstance(t_structHelper inst, ExternalPtr<struct UAnimInstance> value) { inst.WriteOffset(0x30, value); }
	inline bool SetResetFloat(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstFloatAnimBPParam = sizeof(UInterpTrackInstFloatAnimBPParam); // 72
    static_assert(sizeof(UInterpTrackInstFloatAnimBPParam) == 0x48, "Size of UInterpTrackInstFloatAnimBPParam is not correct.");
	auto constexpr UInterpTrackInstFloatAnimBPParam_AnimScriptInstance_Offset = offsetof(UInterpTrackInstFloatAnimBPParam, AnimScriptInstance);
	static_assert(UInterpTrackInstFloatAnimBPParam_AnimScriptInstance_Offset == 0x30, "UInterpTrackInstFloatAnimBPParam::AnimScriptInstance offset is not 30");
	auto constexpr UInterpTrackInstFloatAnimBPParam_ResetFloat_Offset = offsetof(UInterpTrackInstFloatAnimBPParam, ResetFloat);
	static_assert(UInterpTrackInstFloatAnimBPParam_ResetFloat_Offset == 0x38, "UInterpTrackInstFloatAnimBPParam::ResetFloat offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
