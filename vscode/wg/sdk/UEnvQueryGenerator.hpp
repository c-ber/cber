#pragma once
#include "UEnvQueryNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryGenerator // Size: 0x58
	: public UEnvQueryNode // Size: 0x38
{
private:
	typedef UEnvQueryGenerator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(628); // id32("Class AIModule.EnvQueryGenerator")
		return ptr;
	}
	FString OptionName; /* Ofs: 0x38 Size: 0x10 - StrProperty AIModule.EnvQueryGenerator.OptionName */
	ExternalPtr<struct UClass> ItemType; /* Ofs: 0x48 Size: 0x8 - ClassProperty AIModule.EnvQueryGenerator.ItemType */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetOptionName(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetItemType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x48, value); }
	inline bool bAutoSortTests()
	{
		return boolField50& 0x1;
	}
	inline bool SetbAutoSortTests(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryGenerator = sizeof(UEnvQueryGenerator); // 88
    static_assert(sizeof(UEnvQueryGenerator) == 0x58, "Size of UEnvQueryGenerator is not correct.");
	auto constexpr UEnvQueryGenerator_OptionName_Offset = offsetof(UEnvQueryGenerator, OptionName);
	static_assert(UEnvQueryGenerator_OptionName_Offset == 0x38, "UEnvQueryGenerator::OptionName offset is not 38");
	auto constexpr UEnvQueryGenerator_ItemType_Offset = offsetof(UEnvQueryGenerator, ItemType);
	static_assert(UEnvQueryGenerator_ItemType_Offset == 0x48, "UEnvQueryGenerator::ItemType offset is not 48");
	auto constexpr UEnvQueryGenerator_boolField50_Offset = offsetof(UEnvQueryGenerator, boolField50);
	static_assert(UEnvQueryGenerator_boolField50_Offset == 0x50, "UEnvQueryGenerator::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
