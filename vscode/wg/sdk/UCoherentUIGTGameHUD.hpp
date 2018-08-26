#pragma once
#include "UHUD.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTGameHUD // Size: 0x580
	: public UHUD // Size: 0x4F0
{
private:
	typedef UCoherentUIGTGameHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2075); // id32("Class CoherentUIGTPlugin.CoherentUIGTGameHUD")
		return ptr;
	}
	ExternalPtr<struct UCoherentUIGTHUD> CoherentUIGTHUD; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty CoherentUIGTPlugin.CoherentUIGTGameHUD.CoherentUIGTHUD */
	uint8_t UnknownData4F8[0x88];


	inline bool SetCoherentUIGTHUD(t_structHelper inst, ExternalPtr<struct UCoherentUIGTHUD> value) { inst.WriteOffset(0x4F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTGameHUD = sizeof(UCoherentUIGTGameHUD); // 1408
    static_assert(sizeof(UCoherentUIGTGameHUD) == 0x580, "Size of UCoherentUIGTGameHUD is not correct.");
	auto constexpr UCoherentUIGTGameHUD_CoherentUIGTHUD_Offset = offsetof(UCoherentUIGTGameHUD, CoherentUIGTHUD);
	static_assert(UCoherentUIGTGameHUD_CoherentUIGTHUD_Offset == 0x4f0, "UCoherentUIGTGameHUD::CoherentUIGTHUD offset is not 4f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
