#pragma once
#include "UPawnAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnAction_BlueprintBase // Size: 0xD0
	: public UPawnAction // Size: 0xD0
{
private:
	typedef UPawnAction_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(660); // id32("Class AIModule.PawnAction_BlueprintBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnAction_BlueprintBase = sizeof(UPawnAction_BlueprintBase); // 208
    static_assert(sizeof(UPawnAction_BlueprintBase) == 0xD0, "Size of UPawnAction_BlueprintBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
