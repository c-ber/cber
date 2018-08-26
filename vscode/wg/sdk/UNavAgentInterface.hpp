#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavAgentInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavAgentInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1729); // id32("Class Engine.NavAgentInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavAgentInterface = sizeof(UNavAgentInterface); // 48
    static_assert(sizeof(UNavAgentInterface) == 0x30, "Size of UNavAgentInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
