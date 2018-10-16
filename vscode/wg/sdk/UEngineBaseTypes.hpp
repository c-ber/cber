#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEngineBaseTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UEngineBaseTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1700); // id32("Class Engine.EngineBaseTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEngineBaseTypes = sizeof(UEngineBaseTypes); // 48
    static_assert(sizeof(UEngineBaseTypes) == 0x30, "Size of UEngineBaseTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
