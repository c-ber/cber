#pragma once
#include "UInterpTrackLinearColorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackLinearColorProp // Size: 0xA0
	: public UInterpTrackLinearColorBase // Size: 0x98
{
private:
	typedef UInterpTrackLinearColorProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(811); // id32("Class Engine.InterpTrackLinearColorProp")
		return ptr;
	}
	FName PropertyName; /* Ofs: 0x98 Size: 0x8 - NameProperty Engine.InterpTrackLinearColorProp.PropertyName */


	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackLinearColorProp = sizeof(UInterpTrackLinearColorProp); // 160
    static_assert(sizeof(UInterpTrackLinearColorProp) == 0xA0, "Size of UInterpTrackLinearColorProp is not correct.");
	auto constexpr UInterpTrackLinearColorProp_PropertyName_Offset = offsetof(UInterpTrackLinearColorProp, PropertyName);
	static_assert(UInterpTrackLinearColorProp_PropertyName_Offset == 0x98, "UInterpTrackLinearColorProp::PropertyName offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
