#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstEvent // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(827); // id32("Class Engine.InterpTrackInstEvent")
		return ptr;
	}
	float LastUpdatePosition; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpTrackInstEvent.LastUpdatePosition */
	uint8_t UnknownData34[0x4];


	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstEvent = sizeof(UInterpTrackInstEvent); // 56
    static_assert(sizeof(UInterpTrackInstEvent) == 0x38, "Size of UInterpTrackInstEvent is not correct.");
	auto constexpr UInterpTrackInstEvent_LastUpdatePosition_Offset = offsetof(UInterpTrackInstEvent, LastUpdatePosition);
	static_assert(UInterpTrackInstEvent_LastUpdatePosition_Offset == 0x30, "UInterpTrackInstEvent::LastUpdatePosition offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
