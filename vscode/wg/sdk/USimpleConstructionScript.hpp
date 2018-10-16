#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USimpleConstructionScript // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef USimpleConstructionScript t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1192); // id32("Class Engine.SimpleConstructionScript")
		return ptr;
	}
	TArray<ExternalPtr<struct USCS_Node>> RootNodes; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SimpleConstructionScript.RootNodes */
	TArray<ExternalPtr<struct USCS_Node>> AllNodes; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.SimpleConstructionScript.AllNodes */
	ExternalPtr<struct USCS_Node> DefaultSceneRootNode; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.SimpleConstructionScript.DefaultSceneRootNode */
	ExternalPtr<struct USCS_Node> RootNode; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.SimpleConstructionScript.RootNode */
	TArray<ExternalPtr<struct USCS_Node>> ActorComponentNodes; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.SimpleConstructionScript.ActorComponentNodes */
	uint8_t UnknownData70[0x50];


	inline bool SetRootNodes(t_structHelper inst, TArray<ExternalPtr<struct USCS_Node>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetAllNodes(t_structHelper inst, TArray<ExternalPtr<struct USCS_Node>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultSceneRootNode(t_structHelper inst, ExternalPtr<struct USCS_Node> value) { inst.WriteOffset(0x50, value); }
	inline bool SetRootNode(t_structHelper inst, ExternalPtr<struct USCS_Node> value) { inst.WriteOffset(0x58, value); }
	inline bool SetActorComponentNodes(t_structHelper inst, TArray<ExternalPtr<struct USCS_Node>> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSimpleConstructionScript = sizeof(USimpleConstructionScript); // 192
    static_assert(sizeof(USimpleConstructionScript) == 0xC0, "Size of USimpleConstructionScript is not correct.");
	auto constexpr USimpleConstructionScript_RootNodes_Offset = offsetof(USimpleConstructionScript, RootNodes);
	static_assert(USimpleConstructionScript_RootNodes_Offset == 0x30, "USimpleConstructionScript::RootNodes offset is not 30");
	auto constexpr USimpleConstructionScript_AllNodes_Offset = offsetof(USimpleConstructionScript, AllNodes);
	static_assert(USimpleConstructionScript_AllNodes_Offset == 0x40, "USimpleConstructionScript::AllNodes offset is not 40");
	auto constexpr USimpleConstructionScript_DefaultSceneRootNode_Offset = offsetof(USimpleConstructionScript, DefaultSceneRootNode);
	static_assert(USimpleConstructionScript_DefaultSceneRootNode_Offset == 0x50, "USimpleConstructionScript::DefaultSceneRootNode offset is not 50");
	auto constexpr USimpleConstructionScript_RootNode_Offset = offsetof(USimpleConstructionScript, RootNode);
	static_assert(USimpleConstructionScript_RootNode_Offset == 0x58, "USimpleConstructionScript::RootNode offset is not 58");
	auto constexpr USimpleConstructionScript_ActorComponentNodes_Offset = offsetof(USimpleConstructionScript, ActorComponentNodes);
	static_assert(USimpleConstructionScript_ActorComponentNodes_Offset == 0x60, "USimpleConstructionScript::ActorComponentNodes offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
