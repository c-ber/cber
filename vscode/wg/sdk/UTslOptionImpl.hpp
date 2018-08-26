#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslOptionImpl // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UTslOptionImpl t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1434); // id32("Class TslGame.TslOptionImpl")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslOptionImpl = sizeof(UTslOptionImpl); // 48
    static_assert(sizeof(UTslOptionImpl) == 0x30, "Size of UTslOptionImpl is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
