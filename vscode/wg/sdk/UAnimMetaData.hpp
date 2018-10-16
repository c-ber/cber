#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimMetaData // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UAnimMetaData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(271); // id32("Class Engine.AnimMetaData")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimMetaData = sizeof(UAnimMetaData); // 48
    static_assert(sizeof(UAnimMetaData) == 0x30, "Size of UAnimMetaData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
