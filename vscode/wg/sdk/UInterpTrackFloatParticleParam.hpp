#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFloatParticleParam // Size: 0xA0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackFloatParticleParam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(805); // id32("Class Engine.InterpTrackFloatParticleParam")
		return ptr;
	}
	FName ParamName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackFloatParticleParam.ParamName */


	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFloatParticleParam = sizeof(UInterpTrackFloatParticleParam); // 160
    static_assert(sizeof(UInterpTrackFloatParticleParam) == 0xA0, "Size of UInterpTrackFloatParticleParam is not correct.");
	auto constexpr UInterpTrackFloatParticleParam_ParamName_Offset = offsetof(UInterpTrackFloatParticleParam, ParamName);
	static_assert(UInterpTrackFloatParticleParam_ParamName_Offset == 0x98, "UInterpTrackFloatParticleParam::ParamName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
