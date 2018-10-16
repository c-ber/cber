#pragma once
#include "UEnvQueryGenerator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_BlueprintBase // Size: 0x88
	: public UEnvQueryGenerator // Size: 0x58
{
private:
	typedef UEnvQueryGenerator_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(630); // id32("Class AIModule.EnvQueryGenerator_BlueprintBase")
		return ptr;
	}
	FText GeneratorsActionDescription; /* Ofs: 0x58 Size: 0x18 - TextProperty AIModule.EnvQueryGenerator_BlueprintBase.GeneratorsActionDescription */
	ExternalPtr<struct UClass> Context; /* Ofs: 0x70 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_BlueprintBase.Context */
	ExternalPtr<struct UClass> GeneratedItemType; /* Ofs: 0x78 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator_BlueprintBase.GeneratedItemType */
	uint8_t UnknownData80[0x8];


	inline bool SetGeneratorsActionDescription(t_structHelper inst, FText value) { inst.WriteOffset(0x58, value); }
	inline bool SetContext(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x70, value); }
	inline bool SetGeneratedItemType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_BlueprintBase = sizeof(UEnvQueryGenerator_BlueprintBase); // 136
    static_assert(sizeof(UEnvQueryGenerator_BlueprintBase) == 0x88, "Size of UEnvQueryGenerator_BlueprintBase is not correct.");
	auto constexpr UEnvQueryGenerator_BlueprintBase_GeneratorsActionDescription_Offset = offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription);
	static_assert(UEnvQueryGenerator_BlueprintBase_GeneratorsActionDescription_Offset == 0x58, "UEnvQueryGenerator_BlueprintBase::GeneratorsActionDescription offset is not 58");
	auto constexpr UEnvQueryGenerator_BlueprintBase_Context_Offset = offsetof(UEnvQueryGenerator_BlueprintBase, Context);
	static_assert(UEnvQueryGenerator_BlueprintBase_Context_Offset == 0x70, "UEnvQueryGenerator_BlueprintBase::Context offset is not 70");
	auto constexpr UEnvQueryGenerator_BlueprintBase_GeneratedItemType_Offset = offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType);
	static_assert(UEnvQueryGenerator_BlueprintBase_GeneratedItemType_Offset == 0x78, "UEnvQueryGenerator_BlueprintBase::GeneratedItemType offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
