#pragma once
#include "UInterpTrackInstProperty.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstBoolProp // Size: 0x58
	: public UInterpTrackInstProperty // Size: 0x40
{
private:
	typedef UInterpTrackInstBoolProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(835); // id32("Class Engine.InterpTrackInstBoolProp")
		return ptr;
	}
	uint8_t UnknownData40[0x8];
	ExternalPtr<struct UBoolProperty> BoolProperty; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.InterpTrackInstBoolProp.BoolProperty */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetBoolProperty(t_structHelper inst, ExternalPtr<struct UBoolProperty> value) { inst.WriteOffset(0x48, value); }
	inline bool ResetBool()
	{
		return boolField50& 0x1;
	}
	inline bool SetResetBool(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstBoolProp = sizeof(UInterpTrackInstBoolProp); // 88
    static_assert(sizeof(UInterpTrackInstBoolProp) == 0x58, "Size of UInterpTrackInstBoolProp is not correct.");
	auto constexpr UInterpTrackInstBoolProp_BoolProperty_Offset = offsetof(UInterpTrackInstBoolProp, BoolProperty);
	static_assert(UInterpTrackInstBoolProp_BoolProperty_Offset == 0x48, "UInterpTrackInstBoolProp::BoolProperty offset is not 48");
	auto constexpr UInterpTrackInstBoolProp_boolField50_Offset = offsetof(UInterpTrackInstBoolProp, boolField50);
	static_assert(UInterpTrackInstBoolProp_boolField50_Offset == 0x50, "UInterpTrackInstBoolProp::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
