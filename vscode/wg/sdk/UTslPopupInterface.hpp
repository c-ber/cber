#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPopupInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslPopupInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(402); // id32("Class TslGame.TslPopupInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPopupInterface = sizeof(UTslPopupInterface); // 48
    static_assert(sizeof(UTslPopupInterface) == 0x30, "Size of UTslPopupInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
