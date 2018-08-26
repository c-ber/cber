#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackColorProp // Size: 0xA0
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackColorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(816); // id32("Class Engine.InterpTrackColorProp")
		return ptr;
	}
	FName PropertyName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackColorProp.PropertyName */


	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackColorProp = sizeof(UInterpTrackColorProp); // 160
    static_assert(sizeof(UInterpTrackColorProp) == 0xA0, "Size of UInterpTrackColorProp is not correct.");
	auto constexpr UInterpTrackColorProp_PropertyName_Offset = offsetof(UInterpTrackColorProp, PropertyName);
	static_assert(UInterpTrackColorProp_PropertyName_Offset == 0x98, "UInterpTrackColorProp::PropertyName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
