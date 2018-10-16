#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExplorableItemInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UExplorableItemInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1843); // id32("Class TslGame.ExplorableItemInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExplorableItemInterface = sizeof(UExplorableItemInterface); // 48
    static_assert(sizeof(UExplorableItemInterface) == 0x30, "Size of UExplorableItemInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
