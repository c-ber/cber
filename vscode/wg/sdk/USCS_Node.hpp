#pragma once
#include "FBlueprintCookedComponentInstancingData.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USCS_Node // Size: 0x150
	: public UObject // Size: 0x30
{
private:
	typedef USCS_Node t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1193); // id32("Class Engine.SCS_Node")
		return ptr;
	}
	ExternalPtr<struct UClass> ComponentClass; /* Ofs: 0x30 Size: 0x8 - ClassProperty Engine.SCS_Node.ComponentClass */
	ExternalPtr<struct UActorComponent> ComponentTemplate; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.SCS_Node.ComponentTemplate */
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.SCS_Node.CookedComponentInstancingData */
	FName VariableName; /* Ofs: 0x90 Size: 0x8 - NameProperty Engine.SCS_Node.VariableName */
	FName AttachToName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.SCS_Node.AttachToName */
	FName ParentComponentOrVariableName; /* Ofs: 0xA0 Size: 0x8 - NameProperty Engine.SCS_Node.ParentComponentOrVariableName */
	FName ParentComponentOwnerClassName; /* Ofs: 0xA8 Size: 0x8 - NameProperty Engine.SCS_Node.ParentComponentOwnerClassName */
	uint8_t boolFieldB0;
	uint8_t UnknownDataB1[0x7];
	TArray<ExternalPtr<struct USCS_Node>> ChildNodes; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty Engine.SCS_Node.ChildNodes */
	ExternalPtr<struct USCS_Node> LODParentNode; /* Ofs: 0xC8 Size: 0x8 - ObjectProperty Engine.SCS_Node.LODParentNode */
	TArray<struct FBPVariableMetaDataEntry> MetaDataArray; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty Engine.SCS_Node.MetaDataArray */
	FGuid VariableGuid; /* Ofs: 0xE0 Size: 0x10 - StructProperty Engine.SCS_Node.VariableGuid */
	uint8_t boolFieldF0;
	uint8_t boolFieldF1;
	uint8_t UnknownDataF2[0x6];
	FName NativeComponentName; /* Ofs: 0xF8 Size: 0x8 - NameProperty Engine.SCS_Node.NativeComponentName */
	uint8_t boolField100;
	uint8_t UnknownData101[0x7];
	FName InternalVariableName; /* Ofs: 0x108 Size: 0x8 - NameProperty Engine.SCS_Node.InternalVariableName */
	uint8_t UnknownData110[0x40];


	inline bool SetComponentClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x30, value); }
	inline bool SetComponentTemplate(t_structHelper inst, ExternalPtr<struct UActorComponent> value) { inst.WriteOffset(0x38, value); }
	inline bool SetCookedComponentInstancingData(t_structHelper inst, FBlueprintCookedComponentInstancingData value) { inst.WriteOffset(0x40, value); }
	inline bool SetVariableName(t_structHelper inst, FName value) { inst.WriteOffset(0x90, value); }
	inline bool SetAttachToName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
	inline bool SetParentComponentOrVariableName(t_structHelper inst, FName value) { inst.WriteOffset(0xA0, value); }
	inline bool SetParentComponentOwnerClassName(t_structHelper inst, FName value) { inst.WriteOffset(0xA8, value); }
	inline bool bIsParentComponentNative()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetbIsParentComponentNative(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetChildNodes(t_structHelper inst, TArray<ExternalPtr<struct USCS_Node>> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetLODParentNode(t_structHelper inst, ExternalPtr<struct USCS_Node> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetMetaDataArray(t_structHelper inst, TArray<struct FBPVariableMetaDataEntry> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetVariableGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xE0, value); }
	inline bool bIsFalseRoot()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbIsFalseRoot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsNative()
	{
		return boolFieldF1& 0x1;
	}
	inline bool SetbIsNative(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNativeComponentName(t_structHelper inst, FName value) { inst.WriteOffset(0xF8, value); }
	inline bool bVariableNameAutoGenerated()
	{
		return boolField100& 0x1;
	}
	inline bool SetbVariableNameAutoGenerated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x100, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInternalVariableName(t_structHelper inst, FName value) { inst.WriteOffset(0x108, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSCS_Node = sizeof(USCS_Node); // 336
    static_assert(sizeof(USCS_Node) == 0x150, "Size of USCS_Node is not correct.");
	auto constexpr USCS_Node_ComponentClass_Offset = offsetof(USCS_Node, ComponentClass);
	static_assert(USCS_Node_ComponentClass_Offset == 0x30, "USCS_Node::ComponentClass offset is not 30");
	auto constexpr USCS_Node_ComponentTemplate_Offset = offsetof(USCS_Node, ComponentTemplate);
	static_assert(USCS_Node_ComponentTemplate_Offset == 0x38, "USCS_Node::ComponentTemplate offset is not 38");
	auto constexpr USCS_Node_CookedComponentInstancingData_Offset = offsetof(USCS_Node, CookedComponentInstancingData);
	static_assert(USCS_Node_CookedComponentInstancingData_Offset == 0x40, "USCS_Node::CookedComponentInstancingData offset is not 40");
	auto constexpr USCS_Node_VariableName_Offset = offsetof(USCS_Node, VariableName);
	static_assert(USCS_Node_VariableName_Offset == 0x90, "USCS_Node::VariableName offset is not 90");
	auto constexpr USCS_Node_AttachToName_Offset = offsetof(USCS_Node, AttachToName);
	static_assert(USCS_Node_AttachToName_Offset == 0x98, "USCS_Node::AttachToName offset is not 98");
	auto constexpr USCS_Node_ParentComponentOrVariableName_Offset = offsetof(USCS_Node, ParentComponentOrVariableName);
	static_assert(USCS_Node_ParentComponentOrVariableName_Offset == 0xa0, "USCS_Node::ParentComponentOrVariableName offset is not a0");
	auto constexpr USCS_Node_ParentComponentOwnerClassName_Offset = offsetof(USCS_Node, ParentComponentOwnerClassName);
	static_assert(USCS_Node_ParentComponentOwnerClassName_Offset == 0xa8, "USCS_Node::ParentComponentOwnerClassName offset is not a8");
	auto constexpr USCS_Node_boolFieldB0_Offset = offsetof(USCS_Node, boolFieldB0);
	static_assert(USCS_Node_boolFieldB0_Offset == 0xb0, "USCS_Node::boolFieldB0 offset is not b0");
	auto constexpr USCS_Node_ChildNodes_Offset = offsetof(USCS_Node, ChildNodes);
	static_assert(USCS_Node_ChildNodes_Offset == 0xb8, "USCS_Node::ChildNodes offset is not b8");
	auto constexpr USCS_Node_LODParentNode_Offset = offsetof(USCS_Node, LODParentNode);
	static_assert(USCS_Node_LODParentNode_Offset == 0xc8, "USCS_Node::LODParentNode offset is not c8");
	auto constexpr USCS_Node_MetaDataArray_Offset = offsetof(USCS_Node, MetaDataArray);
	static_assert(USCS_Node_MetaDataArray_Offset == 0xd0, "USCS_Node::MetaDataArray offset is not d0");
	auto constexpr USCS_Node_VariableGuid_Offset = offsetof(USCS_Node, VariableGuid);
	static_assert(USCS_Node_VariableGuid_Offset == 0xe0, "USCS_Node::VariableGuid offset is not e0");
	auto constexpr USCS_Node_boolFieldF0_Offset = offsetof(USCS_Node, boolFieldF0);
	static_assert(USCS_Node_boolFieldF0_Offset == 0xf0, "USCS_Node::boolFieldF0 offset is not f0");
	auto constexpr USCS_Node_boolFieldF1_Offset = offsetof(USCS_Node, boolFieldF1);
	static_assert(USCS_Node_boolFieldF1_Offset == 0xf1, "USCS_Node::boolFieldF1 offset is not f1");
	auto constexpr USCS_Node_NativeComponentName_Offset = offsetof(USCS_Node, NativeComponentName);
	static_assert(USCS_Node_NativeComponentName_Offset == 0xf8, "USCS_Node::NativeComponentName offset is not f8");
	auto constexpr USCS_Node_boolField100_Offset = offsetof(USCS_Node, boolField100);
	static_assert(USCS_Node_boolField100_Offset == 0x100, "USCS_Node::boolField100 offset is not 100");
	auto constexpr USCS_Node_InternalVariableName_Offset = offsetof(USCS_Node, InternalVariableName);
	static_assert(USCS_Node_InternalVariableName_Offset == 0x108, "USCS_Node::InternalVariableName offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif