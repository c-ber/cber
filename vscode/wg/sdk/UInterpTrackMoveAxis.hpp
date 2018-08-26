#pragma once
#include "UInterpTrackFloatBase.hpp"
#include "EInterpMoveAxis.hpp"
#include "FInterpLookupTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackMoveAxis // Size: 0xB0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackMoveAxis t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(808); // id32("Class Engine.InterpTrackMoveAxis")
		return ptr;
	}
	TEnumAsByte<enum EInterpMoveAxis> MoveAxis; /* Ofs: 0x98 Size: 0x1 - ByteProperty Engine.InterpTrackMoveAxis.MoveAxis */
	uint8_t UnknownData99[0x7];
	FInterpLookupTrack LookupTrack; /* Ofs: 0xA0 Size: 0x10 - StructProperty Engine.InterpTrackMoveAxis.LookupTrack */


	inline bool SetMoveAxis(t_structHelper inst, TEnumAsByte<enum EInterpMoveAxis> value) { inst.WriteOffset(0x98, value); }
	inline bool SetLookupTrack(t_structHelper inst, FInterpLookupTrack value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackMoveAxis = sizeof(UInterpTrackMoveAxis); // 176
    static_assert(sizeof(UInterpTrackMoveAxis) == 0xB0, "Size of UInterpTrackMoveAxis is not correct.");
	auto constexpr UInterpTrackMoveAxis_MoveAxis_Offset = offsetof(UInterpTrackMoveAxis, MoveAxis);
	static_assert(UInterpTrackMoveAxis_MoveAxis_Offset == 0x98, "UInterpTrackMoveAxis::MoveAxis offset is not 98");
	auto constexpr UInterpTrackMoveAxis_LookupTrack_Offset = offsetof(UInterpTrackMoveAxis, LookupTrack);
	static_assert(UInterpTrackMoveAxis_LookupTrack_Offset == 0xa0, "UInterpTrackMoveAxis::LookupTrack offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
