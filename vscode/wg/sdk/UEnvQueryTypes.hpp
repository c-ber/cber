#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(548); // id32("Class AIModule.EnvQueryTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTypes = sizeof(UEnvQueryTypes); // 48
    static_assert(sizeof(UEnvQueryTypes) == 0x30, "Size of UEnvQueryTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
