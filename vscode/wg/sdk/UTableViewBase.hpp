#pragma once
#include "UWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTableViewBase // Size: 0x130
	: public UWidget // Size: 0x130
{
private:
	typedef UTableViewBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(520); // id32("Class UMG.TableViewBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTableViewBase = sizeof(UTableViewBase); // 304
    static_assert(sizeof(UTableViewBase) == 0x130, "Size of UTableViewBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
