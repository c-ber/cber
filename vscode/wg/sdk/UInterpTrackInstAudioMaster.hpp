#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstAudioMaster // Size: 0x30
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstAudioMaster t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(824); // id32("Class Engine.InterpTrackInstAudioMaster")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstAudioMaster = sizeof(UInterpTrackInstAudioMaster); // 48
    static_assert(sizeof(UInterpTrackInstAudioMaster) == 0x30, "Size of UInterpTrackInstAudioMaster is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
