#pragma once
#include "URedZoneController.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URedZoneController_Def_C // Size: 0x5F8
	: public URedZoneController // Size: 0x5F0
{
private:
	typedef URedZoneController_Def_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125129); // id32("BlueprintGeneratedClass RedZoneController_Def.RedZoneController_Def_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5F0 Size: 0x8 - StructProperty RedZoneController_Def.RedZoneController_Def_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURedZoneController_Def_C = sizeof(URedZoneController_Def_C); // 1528
    static_assert(sizeof(URedZoneController_Def_C) == 0x5F8, "Size of URedZoneController_Def_C is not correct.");
	auto constexpr URedZoneController_Def_C_UberGraphFrame_Offset = offsetof(URedZoneController_Def_C, UberGraphFrame);
	static_assert(URedZoneController_Def_C_UberGraphFrame_Offset == 0x5f0, "URedZoneController_Def_C::UberGraphFrame offset is not 5f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
