#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavModifierVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UNavModifierVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1718); // id32("Class Engine.NavModifierVolume")
		return ptr;
	}
	uint8_t UnknownData440[0x8];
	ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x448 Size: 0x8 - ClassProperty Engine.NavModifierVolume.AreaClass */


	inline bool SetAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavModifierVolume = sizeof(UNavModifierVolume); // 1104
    static_assert(sizeof(UNavModifierVolume) == 0x450, "Size of UNavModifierVolume is not correct.");
	auto constexpr UNavModifierVolume_AreaClass_Offset = offsetof(UNavModifierVolume, AreaClass);
	static_assert(UNavModifierVolume_AreaClass_Offset == 0x448, "UNavModifierVolume::AreaClass offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
