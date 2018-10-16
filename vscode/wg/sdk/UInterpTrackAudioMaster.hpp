#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackAudioMaster // Size: 0x98
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackAudioMaster t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(815); // id32("Class Engine.InterpTrackAudioMaster")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackAudioMaster = sizeof(UInterpTrackAudioMaster); // 152
    static_assert(sizeof(UInterpTrackAudioMaster) == 0x98, "Size of UInterpTrackAudioMaster is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
