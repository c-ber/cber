#pragma once
#include "UEnvQueryGenerator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator_Composite // Size: 0x70
	: public UEnvQueryGenerator // Size: 0x58
{
private:
	typedef UEnvQueryGenerator_Composite t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(631); // id32("Class AIModule.EnvQueryGenerator_Composite")
		return ptr;
	}
	TArray<ExternalPtr<struct UEnvQueryGenerator>> Generators; /* Ofs: 0x58 Size: 0x10 - ArrayProperty AIModule.EnvQueryGenerator_Composite.Generators */
	uint8_t boolField68;
	uint8_t UnknownData69[0x7];


	inline bool SetGenerators(t_structHelper inst, TArray<ExternalPtr<struct UEnvQueryGenerator>> value) { inst.WriteOffset(0x58, value); }
	inline bool bHasMatchingItemType()
	{
		return boolField68& 0x1;
	}
	inline bool SetbHasMatchingItemType(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator_Composite = sizeof(UEnvQueryGenerator_Composite); // 112
    static_assert(sizeof(UEnvQueryGenerator_Composite) == 0x70, "Size of UEnvQueryGenerator_Composite is not correct.");
	auto constexpr UEnvQueryGenerator_Composite_Generators_Offset = offsetof(UEnvQueryGenerator_Composite, Generators);
	static_assert(UEnvQueryGenerator_Composite_Generators_Offset == 0x58, "UEnvQueryGenerator_Composite::Generators offset is not 58");
	auto constexpr UEnvQueryGenerator_Composite_boolField68_Offset = offsetof(UEnvQueryGenerator_Composite, boolField68);
	static_assert(UEnvQueryGenerator_Composite_boolField68_Offset == 0x68, "UEnvQueryGenerator_Composite::boolField68 offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
