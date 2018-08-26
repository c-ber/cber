#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEngineTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UEngineTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1699); // id32("Class Engine.EngineTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEngineTypes = sizeof(UEngineTypes); // 48
    static_assert(sizeof(UEngineTypes) == 0x30, "Size of UEngineTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
