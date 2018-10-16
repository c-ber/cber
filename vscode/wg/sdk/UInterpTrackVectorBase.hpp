#pragma once
#include "UInterpTrack.hpp"
#include "FInterpCurveVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackVectorBase // Size: 0x98
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackVectorBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(814); // id32("Class Engine.InterpTrackVectorBase")
		return ptr;
	}
	FInterpCurveVector VectorTrack; /* Ofs: 0x78 Size: 0x18 - StructProperty Engine.InterpTrackVectorBase.VectorTrack */
	float CurveTension; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.InterpTrackVectorBase.CurveTension */
	uint8_t UnknownData94[0x4];


	inline bool SetVectorTrack(t_structHelper inst, FInterpCurveVector value) { inst.WriteOffset(0x78, value); }
	inline bool SetCurveTension(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackVectorBase = sizeof(UInterpTrackVectorBase); // 152
    static_assert(sizeof(UInterpTrackVectorBase) == 0x98, "Size of UInterpTrackVectorBase is not correct.");
	auto constexpr UInterpTrackVectorBase_VectorTrack_Offset = offsetof(UInterpTrackVectorBase, VectorTrack);
	static_assert(UInterpTrackVectorBase_VectorTrack_Offset == 0x78, "UInterpTrackVectorBase::VectorTrack offset is not 78");
	auto constexpr UInterpTrackVectorBase_CurveTension_Offset = offsetof(UInterpTrackVectorBase, CurveTension);
	static_assert(UInterpTrackVectorBase_CurveTension_Offset == 0x90, "UInterpTrackVectorBase::CurveTension offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
