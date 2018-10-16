#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeQualityLevel // Size: 0x40
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeQualityLevel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1229); // id32("Class Engine.SoundNodeQualityLevel")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeQualityLevel = sizeof(USoundNodeQualityLevel); // 64
    static_assert(sizeof(USoundNodeQualityLevel) == 0x40, "Size of USoundNodeQualityLevel is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
