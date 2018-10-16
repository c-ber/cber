#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWindDirectionalSource // Size: 0x410
	: public UInfo // Size: 0x410
{
private:
	typedef UWindDirectionalSource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1745); // id32("Class Engine.WindDirectionalSource")
		return ptr;
	}
//	ExternalPtr<struct UWindDirectionalSourceComponent> Component; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.WindDirectionalSource.Component */


//	inline bool SetComponent(t_structHelper inst, ExternalPtr<struct UWindDirectionalSourceComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWindDirectionalSource = sizeof(UWindDirectionalSource); // 1040
    static_assert(sizeof(UWindDirectionalSource) == 0x410, "Size of UWindDirectionalSource is not correct.");
//	auto constexpr UWindDirectionalSource_Component_Offset = offsetof(UWindDirectionalSource, Component);
//	static_assert(UWindDirectionalSource_Component_Offset == 0x408, "UWindDirectionalSource::Component offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
