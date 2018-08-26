#pragma once
#include "UBTNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTaskNode // Size: 0x78
	: public UBTNode // Size: 0x60
{
private:
	typedef UBTTaskNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(421); // id32("Class AIModule.BTTaskNode")
		return ptr;
	}
	TArray<ExternalPtr<struct UBTService>> Services; /* Ofs: 0x60 Size: 0x10 - ArrayProperty AIModule.BTTaskNode.Services */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetServices(t_structHelper inst, TArray<ExternalPtr<struct UBTService>> value) { inst.WriteOffset(0x60, value); }
	inline bool bIgnoreRestartSelf()
	{
		return boolField70& 0x1;
	}
	inline bool SetbIgnoreRestartSelf(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTaskNode = sizeof(UBTTaskNode); // 120
    static_assert(sizeof(UBTTaskNode) == 0x78, "Size of UBTTaskNode is not correct.");
	auto constexpr UBTTaskNode_Services_Offset = offsetof(UBTTaskNode, Services);
	static_assert(UBTTaskNode_Services_Offset == 0x60, "UBTTaskNode::Services offset is not 60");
	auto constexpr UBTTaskNode_boolField70_Offset = offsetof(UBTTaskNode, boolField70);
	static_assert(UBTTaskNode_boolField70_Offset == 0x70, "UBTTaskNode::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
