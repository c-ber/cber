#pragma once
#include "UBTService.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTService_BlackboardBase // Size: 0xA0
	: public UBTService // Size: 0x78
{
private:
	typedef UBTService_BlackboardBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(589); // id32("Class AIModule.BTService_BlackboardBase")
		return ptr;
	}
	FBlackboardKeySelector BlackboardKey; /* Ofs: 0x78 Size: 0x28 - StructProperty AIModule.BTService_BlackboardBase.BlackboardKey */


	inline bool SetBlackboardKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTService_BlackboardBase = sizeof(UBTService_BlackboardBase); // 160
    static_assert(sizeof(UBTService_BlackboardBase) == 0xA0, "Size of UBTService_BlackboardBase is not correct.");
	auto constexpr UBTService_BlackboardBase_BlackboardKey_Offset = offsetof(UBTService_BlackboardBase, BlackboardKey);
	static_assert(UBTService_BlackboardBase_BlackboardKey_Offset == 0x78, "UBTService_BlackboardBase::BlackboardKey offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
