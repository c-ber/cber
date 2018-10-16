#pragma once
#include "FStringClassReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequenceBurnInOptions // Size: 0x50
	: public UObject // Size: 0x30
{
private:
	typedef ULevelSequenceBurnInOptions t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1623); // id32("Class LevelSequence.LevelSequenceBurnInOptions")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	FStringClassReference BurnInClass; /* Ofs: 0x38 Size: 0x10 - StructProperty LevelSequence.LevelSequenceBurnInOptions.BurnInClass */
	ExternalPtr<struct ULevelSequenceBurnInInitSettings> Settings; /* Ofs: 0x48 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceBurnInOptions.Settings */


	inline bool bUseBurnIn()
	{
		return boolField30& 0x1;
	}
	inline bool SetbUseBurnIn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBurnInClass(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x38, value); }
	inline bool SetSettings(t_structHelper inst, ExternalPtr<struct ULevelSequenceBurnInInitSettings> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequenceBurnInOptions = sizeof(ULevelSequenceBurnInOptions); // 80
    static_assert(sizeof(ULevelSequenceBurnInOptions) == 0x50, "Size of ULevelSequenceBurnInOptions is not correct.");
	auto constexpr ULevelSequenceBurnInOptions_boolField30_Offset = offsetof(ULevelSequenceBurnInOptions, boolField30);
	static_assert(ULevelSequenceBurnInOptions_boolField30_Offset == 0x30, "ULevelSequenceBurnInOptions::boolField30 offset is not 30");
	auto constexpr ULevelSequenceBurnInOptions_BurnInClass_Offset = offsetof(ULevelSequenceBurnInOptions, BurnInClass);
	static_assert(ULevelSequenceBurnInOptions_BurnInClass_Offset == 0x38, "ULevelSequenceBurnInOptions::BurnInClass offset is not 38");
	auto constexpr ULevelSequenceBurnInOptions_Settings_Offset = offsetof(ULevelSequenceBurnInOptions, Settings);
	static_assert(ULevelSequenceBurnInOptions_Settings_Offset == 0x48, "ULevelSequenceBurnInOptions::Settings offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
