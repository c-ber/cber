#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEdGraph // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UEdGraph t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(763); // id32("Class Engine.EdGraph")
		return ptr;
	}
	ExternalPtr<struct UClass> Schema; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.EdGraph.Schema */
	TArray<ExternalPtr<struct UEdGraphNode>> Nodes; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.EdGraph.Nodes */
	uint8_t boolField48;
	uint8_t UnknownData49[0x77];


	inline bool SetSchema(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
	inline bool SetNodes(t_structHelper inst, TArray<ExternalPtr<struct UEdGraphNode>> value) { inst.WriteOffset(0x38, value); }
	inline bool bEditable()
	{
		return boolField48& 0x1;
	}
	inline bool SetbEditable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowDeletion()
	{
		return boolField48& 0x2;
	}
	inline bool SetbAllowDeletion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAllowRenaming()
	{
		return boolField48& 0x4;
	}
	inline bool SetbAllowRenaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEdGraph = sizeof(UEdGraph); // 192
    static_assert(sizeof(UEdGraph) == 0xC0, "Size of UEdGraph is not correct.");
	auto constexpr UEdGraph_Schema_Offset = offsetof(UEdGraph, Schema);
	static_assert(UEdGraph_Schema_Offset == 0x30, "UEdGraph::Schema offset is not 30");
	auto constexpr UEdGraph_Nodes_Offset = offsetof(UEdGraph, Nodes);
	static_assert(UEdGraph_Nodes_Offset == 0x38, "UEdGraph::Nodes offset is not 38");
	auto constexpr UEdGraph_boolField48_Offset = offsetof(UEdGraph, boolField48);
	static_assert(UEdGraph_boolField48_Offset == 0x48, "UEdGraph::boolField48 offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
