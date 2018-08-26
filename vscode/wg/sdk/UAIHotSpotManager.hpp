#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIHotSpotManager // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UAIHotSpotManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1673); // id32("Class AIModule.AIHotSpotManager")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIHotSpotManager = sizeof(UAIHotSpotManager); // 48
    static_assert(sizeof(UAIHotSpotManager) == 0x30, "Size of UAIHotSpotManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
