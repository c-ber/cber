#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractionInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UInteractionInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1873); // id32("Class TslGame.InteractionInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractionInterface = sizeof(UInteractionInterface); // 48
    static_assert(sizeof(UInteractionInterface) == 0x30, "Size of UInteractionInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
