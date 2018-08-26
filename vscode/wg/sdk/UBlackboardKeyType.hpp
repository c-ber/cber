#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UBlackboardKeyType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(555); // id32("Class AIModule.BlackboardKeyType")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType = sizeof(UBlackboardKeyType); // 56
    static_assert(sizeof(UBlackboardKeyType) == 0x38, "Size of UBlackboardKeyType is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
