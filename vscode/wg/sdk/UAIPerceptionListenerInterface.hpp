#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIPerceptionListenerInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UAIPerceptionListenerInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1666); // id32("Class AIModule.AIPerceptionListenerInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIPerceptionListenerInterface = sizeof(UAIPerceptionListenerInterface); // 48
    static_assert(sizeof(UAIPerceptionListenerInterface) == 0x30, "Size of UAIPerceptionListenerInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
