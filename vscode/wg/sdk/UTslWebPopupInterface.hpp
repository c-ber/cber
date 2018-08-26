#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWebPopupInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslWebPopupInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(41); // id32("Class TslGame.TslWebPopupInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWebPopupInterface = sizeof(UTslWebPopupInterface); // 48
    static_assert(sizeof(UTslWebPopupInterface) == 0x30, "Size of UTslWebPopupInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
