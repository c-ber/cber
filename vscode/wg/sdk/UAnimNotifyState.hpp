#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotifyState // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef UAnimNotifyState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(275); // id32("Class Engine.AnimNotifyState")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotifyState = sizeof(UAnimNotifyState); // 56
    static_assert(sizeof(UAnimNotifyState) == 0x38, "Size of UAnimNotifyState is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
