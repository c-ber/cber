#pragma once
#include "UInterpTrackFloatBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackFloatProp // Size: 0xA0
	: public UInterpTrackFloatBase // Size: 0x98
{
private:
	typedef UInterpTrackFloatProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(806); // id32("Class Engine.InterpTrackFloatProp")
		return ptr;
	}
	FName PropertyName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackFloatProp.PropertyName */


	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackFloatProp = sizeof(UInterpTrackFloatProp); // 160
    static_assert(sizeof(UInterpTrackFloatProp) == 0xA0, "Size of UInterpTrackFloatProp is not correct.");
	auto constexpr UInterpTrackFloatProp_PropertyName_Offset = offsetof(UInterpTrackFloatProp, PropertyName);
	static_assert(UInterpTrackFloatProp_PropertyName_Offset == 0x98, "UInterpTrackFloatProp::PropertyName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
