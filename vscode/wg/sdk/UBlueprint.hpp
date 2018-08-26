#pragma once
#include "UBlueprintCore.hpp"
#include "EBlueprintType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprint // Size: 0x1A0
	: public UBlueprintCore // Size: 0x58
{
private:
	typedef UBlueprint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(289); // id32("Class Engine.Blueprint")
		return ptr;
	}
	uint8_t boolField58;
	uint8_t UnknownData59[0x7];
	ExternalPtr<struct UClass> ParentClass; /* Ofs: 0x60 Size: 0x8 - ClassProperty Engine.Blueprint.ParentClass */
	ExternalPtr<struct UObject> PRIVATE_InnermostPreviousCDO; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.Blueprint.PRIVATE_InnermostPreviousCDO */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];
	ExternalPtr<struct USimpleConstructionScript> SimpleConstructionScript; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.Blueprint.SimpleConstructionScript */
	TArray<ExternalPtr<struct UActorComponent>> ComponentTemplates; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.Blueprint.ComponentTemplates */
	TArray<ExternalPtr<struct UTimelineTemplate>> Timelines; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.Blueprint.Timelines */
	ExternalPtr<struct UInheritableComponentHandler> InheritableComponentHandler; /* Ofs: 0xA0 Size: 0x8 - ObjectProperty Engine.Blueprint.InheritableComponentHandler */
	TEnumAsByte<enum EBlueprintType> BlueprintType; /* Ofs: 0xA8 Size: 0x1 - ByteProperty Engine.Blueprint.BlueprintType */
	uint8_t UnknownDataA9[0x3];
	int32_t BlueprintSystemVersion; /* Ofs: 0xAC Size: 0x4 - IntProperty Engine.Blueprint.BlueprintSystemVersion */
	uint8_t UnknownDataB0[0xE0];
	uint8_t boolField190;
	uint8_t UnknownData191[0xF];


	inline bool bRecompileOnLoad()
	{
		return boolField58& 0x1;
	}
	inline bool SetbRecompileOnLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetParentClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x60, value); }
	inline bool SetPRIVATE_InnermostPreviousCDO(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x68, value); }
	inline bool bHasBeenRegenerated()
	{
		return boolField70& 0x1;
	}
	inline bool SetbHasBeenRegenerated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsRegeneratingOnLoad()
	{
		return boolField70& 0x2;
	}
	inline bool SetbIsRegeneratingOnLoad(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetSimpleConstructionScript(t_structHelper inst, ExternalPtr<struct USimpleConstructionScript> value) { inst.WriteOffset(0x78, value); }
	inline bool SetComponentTemplates(t_structHelper inst, TArray<ExternalPtr<struct UActorComponent>> value) { inst.WriteOffset(0x80, value); }
	inline bool SetTimelines(t_structHelper inst, TArray<ExternalPtr<struct UTimelineTemplate>> value) { inst.WriteOffset(0x90, value); }
	inline bool SetInheritableComponentHandler(t_structHelper inst, ExternalPtr<struct UInheritableComponentHandler> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetBlueprintType(t_structHelper inst, TEnumAsByte<enum EBlueprintType> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetBlueprintSystemVersion(t_structHelper inst, int32_t value) { inst.WriteOffset(0xAC, value); }
	inline bool bNativize()
	{
		return boolField190& 0x1;
	}
	inline bool SetbNativize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x190, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprint = sizeof(UBlueprint); // 416
    static_assert(sizeof(UBlueprint) == 0x1A0, "Size of UBlueprint is not correct.");
	auto constexpr UBlueprint_boolField58_Offset = offsetof(UBlueprint, boolField58);
	static_assert(UBlueprint_boolField58_Offset == 0x58, "UBlueprint::boolField58 offset is not 58");
	auto constexpr UBlueprint_ParentClass_Offset = offsetof(UBlueprint, ParentClass);
	static_assert(UBlueprint_ParentClass_Offset == 0x60, "UBlueprint::ParentClass offset is not 60");
	auto constexpr UBlueprint_PRIVATE_InnermostPreviousCDO_Offset = offsetof(UBlueprint, PRIVATE_InnermostPreviousCDO);
	static_assert(UBlueprint_PRIVATE_InnermostPreviousCDO_Offset == 0x68, "UBlueprint::PRIVATE_InnermostPreviousCDO offset is not 68");
	auto constexpr UBlueprint_boolField70_Offset = offsetof(UBlueprint, boolField70);
	static_assert(UBlueprint_boolField70_Offset == 0x70, "UBlueprint::boolField70 offset is not 70");
	auto constexpr UBlueprint_SimpleConstructionScript_Offset = offsetof(UBlueprint, SimpleConstructionScript);
	static_assert(UBlueprint_SimpleConstructionScript_Offset == 0x78, "UBlueprint::SimpleConstructionScript offset is not 78");
	auto constexpr UBlueprint_ComponentTemplates_Offset = offsetof(UBlueprint, ComponentTemplates);
	static_assert(UBlueprint_ComponentTemplates_Offset == 0x80, "UBlueprint::ComponentTemplates offset is not 80");
	auto constexpr UBlueprint_Timelines_Offset = offsetof(UBlueprint, Timelines);
	static_assert(UBlueprint_Timelines_Offset == 0x90, "UBlueprint::Timelines offset is not 90");
	auto constexpr UBlueprint_InheritableComponentHandler_Offset = offsetof(UBlueprint, InheritableComponentHandler);
	static_assert(UBlueprint_InheritableComponentHandler_Offset == 0xa0, "UBlueprint::InheritableComponentHandler offset is not a0");
	auto constexpr UBlueprint_BlueprintType_Offset = offsetof(UBlueprint, BlueprintType);
	static_assert(UBlueprint_BlueprintType_Offset == 0xa8, "UBlueprint::BlueprintType offset is not a8");
	auto constexpr UBlueprint_BlueprintSystemVersion_Offset = offsetof(UBlueprint, BlueprintSystemVersion);
	static_assert(UBlueprint_BlueprintSystemVersion_Offset == 0xac, "UBlueprint::BlueprintSystemVersion offset is not ac");
	auto constexpr UBlueprint_boolField190_Offset = offsetof(UBlueprint, boolField190);
	static_assert(UBlueprint_boolField190_Offset == 0x190, "UBlueprint::boolField190 offset is not 190");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
