#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIDataProvider // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UAIDataProvider t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1670); // id32("Class AIModule.AIDataProvider")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIDataProvider = sizeof(UAIDataProvider); // 48
    static_assert(sizeof(UAIDataProvider) == 0x30, "Size of UAIDataProvider is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
