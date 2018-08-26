#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackColorScale // Size: 0x98
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackColorScale t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(817); // id32("Class Engine.InterpTrackColorScale")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackColorScale = sizeof(UInterpTrackColorScale); // 152
    static_assert(sizeof(UInterpTrackColorScale) == 0x98, "Size of UInterpTrackColorScale is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
