#pragma once
#include "UMiniMapBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_MiniMapWidget_C // Size: 0x338
	: public UMiniMapBaseWidget // Size: 0x328
{
private:
	typedef UBP_MiniMapWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190060); // id32("WidgetBlueprintGeneratedClass BP_MiniMapWidget.BP_MiniMapWidget_C")
		return ptr;
	}
	ExternalPtr<struct UMapGridWidget_C> MapGridWidget; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_MiniMapWidget.BP_MiniMapWidget_C.MapGridWidget */
	ExternalPtr<struct UTslCharacter> Character; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_MiniMapWidget.BP_MiniMapWidget_C.Character */


	inline bool SetMapGridWidget(t_structHelper inst, ExternalPtr<struct UMapGridWidget_C> value) { inst.WriteOffset(0x328, value); }
	inline bool SetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_MiniMapWidget_C = sizeof(UBP_MiniMapWidget_C); // 824
    static_assert(sizeof(UBP_MiniMapWidget_C) == 0x338, "Size of UBP_MiniMapWidget_C is not correct.");
	auto constexpr UBP_MiniMapWidget_C_MapGridWidget_Offset = offsetof(UBP_MiniMapWidget_C, MapGridWidget);
	static_assert(UBP_MiniMapWidget_C_MapGridWidget_Offset == 0x328, "UBP_MiniMapWidget_C::MapGridWidget offset is not 328");
	auto constexpr UBP_MiniMapWidget_C_Character_Offset = offsetof(UBP_MiniMapWidget_C, Character);
	static_assert(UBP_MiniMapWidget_C_Character_Offset == 0x330, "UBP_MiniMapWidget_C::Character offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
