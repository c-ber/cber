#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineEngineInterface // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UOnlineEngineInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1048); // id32("Class Engine.OnlineEngineInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineEngineInterface = sizeof(UOnlineEngineInterface); // 48
    static_assert(sizeof(UOnlineEngineInterface) == 0x30, "Size of UOnlineEngineInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
