#pragma once
#include "UBTAuxiliaryNode.hpp"
#include "EBTFlowAbortMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator // Size: 0x70
	: public UBTAuxiliaryNode // Size: 0x68
{
private:
	typedef UBTDecorator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(419); // id32("Class AIModule.BTDecorator")
		return ptr;
	}
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	TEnumAsByte<enum EBTFlowAbortMode> FlowAbortMode; /* Ofs: 0x6C Size: 0x1 - ByteProperty AIModule.BTDecorator.FlowAbortMode */
	uint8_t UnknownData6D[0x3];


	inline bool bInverseCondition()
	{
		return boolField68& 0x80;
	}
	inline bool SetbInverseCondition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetFlowAbortMode(t_structHelper inst, TEnumAsByte<enum EBTFlowAbortMode> value) { inst.WriteOffset(0x6C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator = sizeof(UBTDecorator); // 112
    static_assert(sizeof(UBTDecorator) == 0x70, "Size of UBTDecorator is not correct.");
	auto constexpr UBTDecorator_boolField68_Offset = offsetof(UBTDecorator, boolField68);
	static_assert(UBTDecorator_boolField68_Offset == 0x68, "UBTDecorator::boolField68 offset is not 68");
	auto constexpr UBTDecorator_FlowAbortMode_Offset = offsetof(UBTDecorator, FlowAbortMode);
	static_assert(UBTDecorator_FlowAbortMode_Offset == 0x6c, "UBTDecorator::FlowAbortMode offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
