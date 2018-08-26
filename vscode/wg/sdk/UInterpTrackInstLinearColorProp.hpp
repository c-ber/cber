#pragma once
#include "UInterpTrackInstProperty.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstLinearColorProp // Size: 0x58
	: public UInterpTrackInstProperty // Size: 0x40
{
private:
	typedef UInterpTrackInstLinearColorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(838); // id32("Class Engine.InterpTrackInstLinearColorProp")
		return ptr;
	}
	uint8_t UnknownData40[0x8];
	FLinearColor ResetColor; /* Ofs: 0x48 Size: 0x10 - StructProperty Engine.InterpTrackInstLinearColorProp.ResetColor */


	inline bool SetResetColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstLinearColorProp = sizeof(UInterpTrackInstLinearColorProp); // 88
    static_assert(sizeof(UInterpTrackInstLinearColorProp) == 0x58, "Size of UInterpTrackInstLinearColorProp is not correct.");
	auto constexpr UInterpTrackInstLinearColorProp_ResetColor_Offset = offsetof(UInterpTrackInstLinearColorProp, ResetColor);
	static_assert(UInterpTrackInstLinearColorProp_ResetColor_Offset == 0x48, "UInterpTrackInstLinearColorProp::ResetColor offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
