#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_BlackboardBase // Size: 0x98
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_BlackboardBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(570); // id32("Class AIModule.BTDecorator_BlackboardBase")
		return ptr;
	}
	FBlackboardKeySelector BlackboardKey; /* Ofs: 0x70 Size: 0x28 - StructProperty AIModule.BTDecorator_BlackboardBase.BlackboardKey */


	inline bool SetBlackboardKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_BlackboardBase = sizeof(UBTDecorator_BlackboardBase); // 152
    static_assert(sizeof(UBTDecorator_BlackboardBase) == 0x98, "Size of UBTDecorator_BlackboardBase is not correct.");
	auto constexpr UBTDecorator_BlackboardBase_BlackboardKey_Offset = offsetof(UBTDecorator_BlackboardBase, BlackboardKey);
	static_assert(UBTDecorator_BlackboardBase_BlackboardKey_Offset == 0x70, "UBTDecorator_BlackboardBase::BlackboardKey offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
