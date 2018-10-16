#pragma once
#include "UInterpTrack.hpp"
#include "FInterpCurveLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackLinearColorBase // Size: 0x98
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackLinearColorBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(810); // id32("Class Engine.InterpTrackLinearColorBase")
		return ptr;
	}
	FInterpCurveLinearColor LinearColorTrack; /* Ofs: 0x78 Size: 0x18 - StructProperty Engine.InterpTrackLinearColorBase.LinearColorTrack */
	float CurveTension; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.InterpTrackLinearColorBase.CurveTension */
	uint8_t UnknownData94[0x4];


	inline bool SetLinearColorTrack(t_structHelper inst, FInterpCurveLinearColor value) { inst.WriteOffset(0x78, value); }
	inline bool SetCurveTension(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackLinearColorBase = sizeof(UInterpTrackLinearColorBase); // 152
    static_assert(sizeof(UInterpTrackLinearColorBase) == 0x98, "Size of UInterpTrackLinearColorBase is not correct.");
	auto constexpr UInterpTrackLinearColorBase_LinearColorTrack_Offset = offsetof(UInterpTrackLinearColorBase, LinearColorTrack);
	static_assert(UInterpTrackLinearColorBase_LinearColorTrack_Offset == 0x78, "UInterpTrackLinearColorBase::LinearColorTrack offset is not 78");
	auto constexpr UInterpTrackLinearColorBase_CurveTension_Offset = offsetof(UInterpTrackLinearColorBase, CurveTension);
	static_assert(UInterpTrackLinearColorBase_CurveTension_Offset == 0x90, "UInterpTrackLinearColorBase::CurveTension offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
