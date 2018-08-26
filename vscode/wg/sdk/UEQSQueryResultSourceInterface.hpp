#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEQSQueryResultSourceInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UEQSQueryResultSourceInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(619); // id32("Class AIModule.EQSQueryResultSourceInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEQSQueryResultSourceInterface = sizeof(UEQSQueryResultSourceInterface); // 48
    static_assert(sizeof(UEQSQueryResultSourceInterface) == 0x30, "Size of UEQSQueryResultSourceInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
