#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISightTargetInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UAISightTargetInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(538); // id32("Class AIModule.AISightTargetInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISightTargetInterface = sizeof(UAISightTargetInterface); // 48
    static_assert(sizeof(UAISightTargetInterface) == 0x30, "Size of UAISightTargetInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
