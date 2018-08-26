#pragma once
#include "UBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVolume // Size: 0x440
	: public UBrush // Size: 0x440
{
private:
	typedef UVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(395); // id32("Class Engine.Volume")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVolume = sizeof(UVolume); // 1088
    static_assert(sizeof(UVolume) == 0x440, "Size of UVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
