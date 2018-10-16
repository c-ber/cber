#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstAnimControl // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstAnimControl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(823); // id32("Class Engine.InterpTrackInstAnimControl")
		return ptr;
	}
	float LastUpdatePosition; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpTrackInstAnimControl.LastUpdatePosition */
	uint8_t UnknownData34[0x4];


	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstAnimControl = sizeof(UInterpTrackInstAnimControl); // 56
    static_assert(sizeof(UInterpTrackInstAnimControl) == 0x38, "Size of UInterpTrackInstAnimControl is not correct.");
	auto constexpr UInterpTrackInstAnimControl_LastUpdatePosition_Offset = offsetof(UInterpTrackInstAnimControl, LastUpdatePosition);
	static_assert(UInterpTrackInstAnimControl_LastUpdatePosition_Offset == 0x30, "UInterpTrackInstAnimControl::LastUpdatePosition offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
