#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavLocalGridManager // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UNavLocalGridManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(655); // id32("Class AIModule.NavLocalGridManager")
		return ptr;
	}
	uint8_t UnknownData30[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavLocalGridManager = sizeof(UNavLocalGridManager); // 96
    static_assert(sizeof(UNavLocalGridManager) == 0x60, "Size of UNavLocalGridManager is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
