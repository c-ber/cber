#pragma once
#include "UBTCompositeNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTComposite_Sequence // Size: 0xD0
	: public UBTCompositeNode // Size: 0xD0
{
private:
	typedef UBTComposite_Sequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(594); // id32("Class AIModule.BTComposite_Sequence")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTComposite_Sequence = sizeof(UBTComposite_Sequence); // 208
    static_assert(sizeof(UBTComposite_Sequence) == 0xD0, "Size of UBTComposite_Sequence is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
