#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprintGeneratedClass // Size: 0x3E0
	: public UClass // Size: 0x2D0
{
private:
	typedef UBlueprintGeneratedClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(673); // id32("Class Engine.BlueprintGeneratedClass")
		return ptr;
	}
	int32_t NumReplicatedProperties; /* Ofs: 0x2D0 Size: 0x4 - IntProperty Engine.BlueprintGeneratedClass.NumReplicatedProperties */
	uint8_t UnknownData2D4[0x4];
	TArray<ExternalPtr<struct UDynamicBlueprintBinding>> DynamicBindingObjects; /* Ofs: 0x2D8 Size: 0x10 - ArrayProperty Engine.BlueprintGeneratedClass.DynamicBindingObjects */
	TArray<ExternalPtr<struct UActorComponent>> ComponentTemplates; /* Ofs: 0x2E8 Size: 0x10 - ArrayProperty Engine.BlueprintGeneratedClass.ComponentTemplates */
	TArray<ExternalPtr<struct UTimelineTemplate>> Timelines; /* Ofs: 0x2F8 Size: 0x10 - ArrayProperty Engine.BlueprintGeneratedClass.Timelines */
	ExternalPtr<struct USimpleConstructionScript> SimpleConstructionScript; /* Ofs: 0x308 Size: 0x8 - ObjectProperty Engine.BlueprintGeneratedClass.SimpleConstructionScript */
	ExternalPtr<struct UInheritableComponentHandler> InheritableComponentHandler; /* Ofs: 0x310 Size: 0x8 - ObjectProperty Engine.BlueprintGeneratedClass.InheritableComponentHandler */
	ExternalPtr<struct UStructProperty> UberGraphFramePointerProperty; /* Ofs: 0x318 Size: 0x8 - ObjectProperty Engine.BlueprintGeneratedClass.UberGraphFramePointerProperty */
	ExternalPtr<struct UFunction> UberGraphFunction; /* Ofs: 0x320 Size: 0x8 - ObjectProperty Engine.BlueprintGeneratedClass.UberGraphFunction */
	TArray<struct FEventGraphFastCallPair> FastCallPairs; /* Ofs: 0x328 Size: 0x10 - ArrayProperty Engine.BlueprintGeneratedClass.FastCallPairs */
	uint8_t boolField338;
	uint8_t UnknownData339[0x7];
	TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; /* Ofs: 0x340 Size: 0x50 - MapProperty Engine.BlueprintGeneratedClass.CookedComponentInstancingData */
	uint8_t boolField390;
	uint8_t UnknownData391[0x4F];


	inline bool SetNumReplicatedProperties(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetDynamicBindingObjects(t_structHelper inst, TArray<ExternalPtr<struct UDynamicBlueprintBinding>> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetComponentTemplates(t_structHelper inst, TArray<ExternalPtr<struct UActorComponent>> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetTimelines(t_structHelper inst, TArray<ExternalPtr<struct UTimelineTemplate>> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetSimpleConstructionScript(t_structHelper inst, ExternalPtr<struct USimpleConstructionScript> value) { inst.WriteOffset(0x308, value); }
	inline bool SetInheritableComponentHandler(t_structHelper inst, ExternalPtr<struct UInheritableComponentHandler> value) { inst.WriteOffset(0x310, value); }
	inline bool SetUberGraphFramePointerProperty(t_structHelper inst, ExternalPtr<struct UStructProperty> value) { inst.WriteOffset(0x318, value); }
	inline bool SetUberGraphFunction(t_structHelper inst, ExternalPtr<struct UFunction> value) { inst.WriteOffset(0x320, value); }
	inline bool SetFastCallPairs(t_structHelper inst, TArray<struct FEventGraphFastCallPair> value) { inst.WriteOffset(0x328, value); }
	inline bool bHasInstrumentation()
	{
		return boolField338& 0x1;
	}
	inline bool SetbHasInstrumentation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x338, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCookedComponentInstancingData(t_structHelper inst, TMap<struct FName, struct FBlueprintCookedComponentInstancingData> value) { inst.WriteOffset(0x340, value); }
	inline bool bHasNativizedParent()
	{
		return boolField390& 0x1;
	}
	inline bool SetbHasNativizedParent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x390, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprintGeneratedClass = sizeof(UBlueprintGeneratedClass); // 992
    static_assert(sizeof(UBlueprintGeneratedClass) == 0x3E0, "Size of UBlueprintGeneratedClass is not correct.");
	auto constexpr UBlueprintGeneratedClass_NumReplicatedProperties_Offset = offsetof(UBlueprintGeneratedClass, NumReplicatedProperties);
	static_assert(UBlueprintGeneratedClass_NumReplicatedProperties_Offset == 0x2d0, "UBlueprintGeneratedClass::NumReplicatedProperties offset is not 2d0");
	auto constexpr UBlueprintGeneratedClass_DynamicBindingObjects_Offset = offsetof(UBlueprintGeneratedClass, DynamicBindingObjects);
	static_assert(UBlueprintGeneratedClass_DynamicBindingObjects_Offset == 0x2d8, "UBlueprintGeneratedClass::DynamicBindingObjects offset is not 2d8");
	auto constexpr UBlueprintGeneratedClass_ComponentTemplates_Offset = offsetof(UBlueprintGeneratedClass, ComponentTemplates);
	static_assert(UBlueprintGeneratedClass_ComponentTemplates_Offset == 0x2e8, "UBlueprintGeneratedClass::ComponentTemplates offset is not 2e8");
	auto constexpr UBlueprintGeneratedClass_Timelines_Offset = offsetof(UBlueprintGeneratedClass, Timelines);
	static_assert(UBlueprintGeneratedClass_Timelines_Offset == 0x2f8, "UBlueprintGeneratedClass::Timelines offset is not 2f8");
	auto constexpr UBlueprintGeneratedClass_SimpleConstructionScript_Offset = offsetof(UBlueprintGeneratedClass, SimpleConstructionScript);
	static_assert(UBlueprintGeneratedClass_SimpleConstructionScript_Offset == 0x308, "UBlueprintGeneratedClass::SimpleConstructionScript offset is not 308");
	auto constexpr UBlueprintGeneratedClass_InheritableComponentHandler_Offset = offsetof(UBlueprintGeneratedClass, InheritableComponentHandler);
	static_assert(UBlueprintGeneratedClass_InheritableComponentHandler_Offset == 0x310, "UBlueprintGeneratedClass::InheritableComponentHandler offset is not 310");
	auto constexpr UBlueprintGeneratedClass_UberGraphFramePointerProperty_Offset = offsetof(UBlueprintGeneratedClass, UberGraphFramePointerProperty);
	static_assert(UBlueprintGeneratedClass_UberGraphFramePointerProperty_Offset == 0x318, "UBlueprintGeneratedClass::UberGraphFramePointerProperty offset is not 318");
	auto constexpr UBlueprintGeneratedClass_UberGraphFunction_Offset = offsetof(UBlueprintGeneratedClass, UberGraphFunction);
	static_assert(UBlueprintGeneratedClass_UberGraphFunction_Offset == 0x320, "UBlueprintGeneratedClass::UberGraphFunction offset is not 320");
	auto constexpr UBlueprintGeneratedClass_FastCallPairs_Offset = offsetof(UBlueprintGeneratedClass, FastCallPairs);
	static_assert(UBlueprintGeneratedClass_FastCallPairs_Offset == 0x328, "UBlueprintGeneratedClass::FastCallPairs offset is not 328");
	auto constexpr UBlueprintGeneratedClass_boolField338_Offset = offsetof(UBlueprintGeneratedClass, boolField338);
	static_assert(UBlueprintGeneratedClass_boolField338_Offset == 0x338, "UBlueprintGeneratedClass::boolField338 offset is not 338");
	auto constexpr UBlueprintGeneratedClass_CookedComponentInstancingData_Offset = offsetof(UBlueprintGeneratedClass, CookedComponentInstancingData);
	static_assert(UBlueprintGeneratedClass_CookedComponentInstancingData_Offset == 0x340, "UBlueprintGeneratedClass::CookedComponentInstancingData offset is not 340");
	auto constexpr UBlueprintGeneratedClass_boolField390_Offset = offsetof(UBlueprintGeneratedClass, boolField390);
	static_assert(UBlueprintGeneratedClass_boolField390_Offset == 0x390, "UBlueprintGeneratedClass::boolField390 offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
