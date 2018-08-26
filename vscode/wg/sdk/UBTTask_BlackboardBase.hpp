#pragma once
#include "UBTTaskNode.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_BlackboardBase // Size: 0xA0
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_BlackboardBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(422); // id32("Class AIModule.BTTask_BlackboardBase")
		return ptr;
	}
	FBlackboardKeySelector BlackboardKey; /* Ofs: 0x78 Size: 0x28 - StructProperty AIModule.BTTask_BlackboardBase.BlackboardKey */


	inline bool SetBlackboardKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_BlackboardBase = sizeof(UBTTask_BlackboardBase); // 160
    static_assert(sizeof(UBTTask_BlackboardBase) == 0xA0, "Size of UBTTask_BlackboardBase is not correct.");
	auto constexpr UBTTask_BlackboardBase_BlackboardKey_Offset = offsetof(UBTTask_BlackboardBase, BlackboardKey);
	static_assert(UBTTask_BlackboardBase_BlackboardKey_Offset == 0x78, "UBTTask_BlackboardBase::BlackboardKey offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
