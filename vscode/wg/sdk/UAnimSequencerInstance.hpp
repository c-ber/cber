#pragma once
#include "UAnimInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimSequencerInstance // Size: 0x380
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UAnimSequencerInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1616); // id32("Class AnimGraphRuntime.AnimSequencerInstance")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimSequencerInstance = sizeof(UAnimSequencerInstance); // 896
    static_assert(sizeof(UAnimSequencerInstance) == 0x380, "Size of UAnimSequencerInstance is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
