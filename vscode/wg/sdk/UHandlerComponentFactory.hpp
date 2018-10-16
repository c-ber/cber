#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHandlerComponentFactory // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UHandlerComponentFactory t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(384); // id32("Class PacketHandler.HandlerComponentFactory")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHandlerComponentFactory = sizeof(UHandlerComponentFactory); // 48
    static_assert(sizeof(UHandlerComponentFactory) == 0x30, "Size of UHandlerComponentFactory is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
