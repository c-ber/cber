#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstDirector // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstDirector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(826); // id32("Class Engine.InterpTrackInstDirector")
		return ptr;
	}
	ExternalPtr<struct UActor> OldViewTarget; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.InterpTrackInstDirector.OldViewTarget */


	inline bool SetOldViewTarget(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstDirector = sizeof(UInterpTrackInstDirector); // 56
    static_assert(sizeof(UInterpTrackInstDirector) == 0x38, "Size of UInterpTrackInstDirector is not correct.");
	auto constexpr UInterpTrackInstDirector_OldViewTarget_Offset = offsetof(UInterpTrackInstDirector, OldViewTarget);
	static_assert(UInterpTrackInstDirector_OldViewTarget_Offset == 0x30, "UInterpTrackInstDirector::OldViewTarget offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
