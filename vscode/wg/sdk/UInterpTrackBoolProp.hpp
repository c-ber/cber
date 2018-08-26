#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackBoolProp // Size: 0x90
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackBoolProp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(797); // id32("Class Engine.InterpTrackBoolProp")
		return ptr;
	}
	TArray<struct FBoolTrackKey> BoolTrack; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackBoolProp.BoolTrack */
	FName PropertyName; /* Ofs: 0x88 Size: 0x8 - NameProperty Engine.InterpTrackBoolProp.PropertyName */


	inline bool SetBoolTrack(t_structHelper inst, TArray<struct FBoolTrackKey> value) { inst.WriteOffset(0x78, value); }
	inline bool SetPropertyName(t_structHelper inst, FName value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackBoolProp = sizeof(UInterpTrackBoolProp); // 144
    static_assert(sizeof(UInterpTrackBoolProp) == 0x90, "Size of UInterpTrackBoolProp is not correct.");
	auto constexpr UInterpTrackBoolProp_BoolTrack_Offset = offsetof(UInterpTrackBoolProp, BoolTrack);
	static_assert(UInterpTrackBoolProp_BoolTrack_Offset == 0x78, "UInterpTrackBoolProp::BoolTrack offset is not 78");
	auto constexpr UInterpTrackBoolProp_PropertyName_Offset = offsetof(UInterpTrackBoolProp, PropertyName);
	static_assert(UInterpTrackBoolProp_PropertyName_Offset == 0x88, "UInterpTrackBoolProp::PropertyName offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
