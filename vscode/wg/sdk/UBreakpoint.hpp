#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBreakpoint // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UBreakpoint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(683); // id32("Class Engine.Breakpoint")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	ExternalPtr<struct UEdGraphNode> Node; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.Breakpoint.Node */
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];


	inline bool bEnabled()
	{
		return boolField30& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNode(t_structHelper inst, ExternalPtr<struct UEdGraphNode> value) { inst.WriteOffset(0x38, value); }
	inline bool bStepOnce()
	{
		return boolField40& 0x1;
	}
	inline bool SetbStepOnce(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStepOnce_WasPreviouslyDisabled()
	{
		return boolField40& 0x2;
	}
	inline bool SetbStepOnce_WasPreviouslyDisabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bStepOnce_RemoveAfterHit()
	{
		return boolField40& 0x4;
	}
	inline bool SetbStepOnce_RemoveAfterHit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBreakpoint = sizeof(UBreakpoint); // 72
    static_assert(sizeof(UBreakpoint) == 0x48, "Size of UBreakpoint is not correct.");
	auto constexpr UBreakpoint_boolField30_Offset = offsetof(UBreakpoint, boolField30);
	static_assert(UBreakpoint_boolField30_Offset == 0x30, "UBreakpoint::boolField30 offset is not 30");
	auto constexpr UBreakpoint_Node_Offset = offsetof(UBreakpoint, Node);
	static_assert(UBreakpoint_Node_Offset == 0x38, "UBreakpoint::Node offset is not 38");
	auto constexpr UBreakpoint_boolField40_Offset = offsetof(UBreakpoint, boolField40);
	static_assert(UBreakpoint_boolField40_Offset == 0x40, "UBreakpoint::boolField40 offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
