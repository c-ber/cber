#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstFloatParticleParam // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstFloatParticleParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(831); // id32("Class Engine.InterpTrackInstFloatParticleParam")
		return ptr;
	}
	float ResetFloat; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpTrackInstFloatParticleParam.ResetFloat */
	uint8_t UnknownData34[0x4];


	inline bool SetResetFloat(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstFloatParticleParam = sizeof(UInterpTrackInstFloatParticleParam); // 56
    static_assert(sizeof(UInterpTrackInstFloatParticleParam) == 0x38, "Size of UInterpTrackInstFloatParticleParam is not correct.");
	auto constexpr UInterpTrackInstFloatParticleParam_ResetFloat_Offset = offsetof(UInterpTrackInstFloatParticleParam, ResetFloat);
	static_assert(UInterpTrackInstFloatParticleParam_ResetFloat_Offset == 0x30, "UInterpTrackInstFloatParticleParam::ResetFloat offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
