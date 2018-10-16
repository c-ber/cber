#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNote // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UNote t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1770); // id32("Class Engine.Note")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNote = sizeof(UNote); // 1040
    static_assert(sizeof(UNote) == 0x410, "Size of UNote is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
