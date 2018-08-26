#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstColorScale // Size: 0x30
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstColorScale t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(825); // id32("Class Engine.InterpTrackInstColorScale")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstColorScale = sizeof(UInterpTrackInstColorScale); // 48
    static_assert(sizeof(UInterpTrackInstColorScale) == 0x30, "Size of UInterpTrackInstColorScale is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
