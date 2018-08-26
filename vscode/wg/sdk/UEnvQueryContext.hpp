#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryContext // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryContext t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(546); // id32("Class AIModule.EnvQueryContext")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryContext = sizeof(UEnvQueryContext); // 48
    static_assert(sizeof(UEnvQueryContext) == 0x30, "Size of UEnvQueryContext is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
