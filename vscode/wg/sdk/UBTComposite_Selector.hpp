#pragma once
#include "UBTCompositeNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTComposite_Selector // Size: 0xD0
	: public UBTCompositeNode // Size: 0xD0
{
private:
	typedef UBTComposite_Selector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(593); // id32("Class AIModule.BTComposite_Selector")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTComposite_Selector = sizeof(UBTComposite_Selector); // 208
    static_assert(sizeof(UBTComposite_Selector) == 0xD0, "Size of UBTComposite_Selector is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
