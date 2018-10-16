#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavRelevantInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavRelevantInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1717); // id32("Class Engine.NavRelevantInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavRelevantInterface = sizeof(UNavRelevantInterface); // 48
    static_assert(sizeof(UNavRelevantInterface) == 0x30, "Size of UNavRelevantInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
