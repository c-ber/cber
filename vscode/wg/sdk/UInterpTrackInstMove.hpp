#pragma once
#include "UInterpTrackInst.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstMove // Size: 0x48
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstMove t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(832); // id32("Class Engine.InterpTrackInstMove")
		return ptr;
	}
	FVector ResetLocation; /* Ofs: 0x30 Size: 0xC - StructProperty Engine.InterpTrackInstMove.ResetLocation */
	FRotator ResetRotation; /* Ofs: 0x3C Size: 0xC - StructProperty Engine.InterpTrackInstMove.ResetRotation */


	inline bool SetResetLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x30, value); }
	inline bool SetResetRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x3C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstMove = sizeof(UInterpTrackInstMove); // 72
    static_assert(sizeof(UInterpTrackInstMove) == 0x48, "Size of UInterpTrackInstMove is not correct.");
	auto constexpr UInterpTrackInstMove_ResetLocation_Offset = offsetof(UInterpTrackInstMove, ResetLocation);
	static_assert(UInterpTrackInstMove_ResetLocation_Offset == 0x30, "UInterpTrackInstMove::ResetLocation offset is not 30");
	auto constexpr UInterpTrackInstMove_ResetRotation_Offset = offsetof(UInterpTrackInstMove, ResetRotation);
	static_assert(UInterpTrackInstMove_ResetRotation_Offset == 0x3c, "UInterpTrackInstMove::ResetRotation offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
