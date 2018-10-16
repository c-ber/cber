#pragma once
#include "UInterpTrack.hpp"
#include "FInterpCurveFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFloatBase // Size: 0x98
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackFloatBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(800); // id32("Class Engine.InterpTrackFloatBase")
		return ptr;
	}
	FInterpCurveFloat FloatTrack; /* Ofs: 0x78 Size: 0x18 - StructProperty Engine.InterpTrackFloatBase.FloatTrack */
	float CurveTension; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.InterpTrackFloatBase.CurveTension */
	uint8_t UnknownData94[0x4];


	inline bool SetFloatTrack(t_structHelper inst, FInterpCurveFloat value) { inst.WriteOffset(0x78, value); }
	inline bool SetCurveTension(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFloatBase = sizeof(UInterpTrackFloatBase); // 152
    static_assert(sizeof(UInterpTrackFloatBase) == 0x98, "Size of UInterpTrackFloatBase is not correct.");
	auto constexpr UInterpTrackFloatBase_FloatTrack_Offset = offsetof(UInterpTrackFloatBase, FloatTrack);
	static_assert(UInterpTrackFloatBase_FloatTrack_Offset == 0x78, "UInterpTrackFloatBase::FloatTrack offset is not 78");
	auto constexpr UInterpTrackFloatBase_CurveTension_Offset = offsetof(UInterpTrackFloatBase, CurveTension);
	static_assert(UInterpTrackFloatBase_CurveTension_Offset == 0x90, "UInterpTrackFloatBase::CurveTension offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
