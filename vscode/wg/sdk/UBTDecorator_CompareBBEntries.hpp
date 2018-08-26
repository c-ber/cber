#pragma once
#include "UBTDecorator.hpp"
#include "EBlackBoardEntryComparison.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_CompareBBEntries // Size: 0xC8
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_CompareBBEntries t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(577); // id32("Class AIModule.BTDecorator_CompareBBEntries")
		return ptr;
	}
	TEnumAsByte<enum EBlackBoardEntryComparison> Operator; /* Ofs: 0x70 Size: 0x1 - ByteProperty AIModule.BTDecorator_CompareBBEntries.Operator */
	uint8_t UnknownData71[0x7];
	FBlackboardKeySelector BlackboardKeyA; /* Ofs: 0x78 Size: 0x28 - StructProperty AIModule.BTDecorator_CompareBBEntries.BlackboardKeyA */
	FBlackboardKeySelector BlackboardKeyB; /* Ofs: 0xA0 Size: 0x28 - StructProperty AIModule.BTDecorator_CompareBBEntries.BlackboardKeyB */


	inline bool SetOperator(t_structHelper inst, TEnumAsByte<enum EBlackBoardEntryComparison> value) { inst.WriteOffset(0x70, value); }
	inline bool SetBlackboardKeyA(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x78, value); }
	inline bool SetBlackboardKeyB(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_CompareBBEntries = sizeof(UBTDecorator_CompareBBEntries); // 200
    static_assert(sizeof(UBTDecorator_CompareBBEntries) == 0xC8, "Size of UBTDecorator_CompareBBEntries is not correct.");
	auto constexpr UBTDecorator_CompareBBEntries_Operator_Offset = offsetof(UBTDecorator_CompareBBEntries, Operator);
	static_assert(UBTDecorator_CompareBBEntries_Operator_Offset == 0x70, "UBTDecorator_CompareBBEntries::Operator offset is not 70");
	auto constexpr UBTDecorator_CompareBBEntries_BlackboardKeyA_Offset = offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA);
	static_assert(UBTDecorator_CompareBBEntries_BlackboardKeyA_Offset == 0x78, "UBTDecorator_CompareBBEntries::BlackboardKeyA offset is not 78");
	auto constexpr UBTDecorator_CompareBBEntries_BlackboardKeyB_Offset = offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB);
	static_assert(UBTDecorator_CompareBBEntries_BlackboardKeyB_Offset == 0xa0, "UBTDecorator_CompareBBEntries::BlackboardKeyB offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
