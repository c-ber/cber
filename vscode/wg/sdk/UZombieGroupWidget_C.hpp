#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZombieGroupWidget_C // Size: 0x280
	: public UUserWidget // Size: 0x248
{
private:
	typedef UZombieGroupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(164863); // id32("WidgetBlueprintGeneratedClass ZombieGroupWidget.ZombieGroupWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_7; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ZombieGroupWidget.ZombieGroupWidget_C.Image_7 */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ZombieGroupWidget.ZombieGroupWidget_C.VerticalBox_1 */
	ExternalPtr<struct UVerticalBox> VerticalBox_12; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ZombieGroupWidget.ZombieGroupWidget_C.VerticalBox_12 */
	TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos; /* Ofs: 0x260 Size: 0x10 - ArrayProperty ZombieGroupWidget.ZombieGroupWidget_C.PlayerMatchResultInfos */
	TArray<ExternalPtr<struct UZombieMatchResultNameWidget_C>> ZombieMatchResultNameWidgets; /* Ofs: 0x270 Size: 0x10 - ArrayProperty ZombieGroupWidget.ZombieGroupWidget_C.ZombieMatchResultNameWidgets */


	inline bool SetImage_7(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetVerticalBox_12(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPlayerMatchResultInfos(t_structHelper inst, TArray<struct FTslPlayerMatchResultInfo> value) { inst.WriteOffset(0x260, value); }
	inline bool SetZombieMatchResultNameWidgets(t_structHelper inst, TArray<ExternalPtr<struct UZombieMatchResultNameWidget_C>> value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZombieGroupWidget_C = sizeof(UZombieGroupWidget_C); // 640
    static_assert(sizeof(UZombieGroupWidget_C) == 0x280, "Size of UZombieGroupWidget_C is not correct.");
	auto constexpr UZombieGroupWidget_C_Image_7_Offset = offsetof(UZombieGroupWidget_C, Image_7);
	static_assert(UZombieGroupWidget_C_Image_7_Offset == 0x248, "UZombieGroupWidget_C::Image_7 offset is not 248");
	auto constexpr UZombieGroupWidget_C_VerticalBox_1_Offset = offsetof(UZombieGroupWidget_C, VerticalBox_1);
	static_assert(UZombieGroupWidget_C_VerticalBox_1_Offset == 0x250, "UZombieGroupWidget_C::VerticalBox_1 offset is not 250");
	auto constexpr UZombieGroupWidget_C_VerticalBox_12_Offset = offsetof(UZombieGroupWidget_C, VerticalBox_12);
	static_assert(UZombieGroupWidget_C_VerticalBox_12_Offset == 0x258, "UZombieGroupWidget_C::VerticalBox_12 offset is not 258");
	auto constexpr UZombieGroupWidget_C_PlayerMatchResultInfos_Offset = offsetof(UZombieGroupWidget_C, PlayerMatchResultInfos);
	static_assert(UZombieGroupWidget_C_PlayerMatchResultInfos_Offset == 0x260, "UZombieGroupWidget_C::PlayerMatchResultInfos offset is not 260");
	auto constexpr UZombieGroupWidget_C_ZombieMatchResultNameWidgets_Offset = offsetof(UZombieGroupWidget_C, ZombieMatchResultNameWidgets);
	static_assert(UZombieGroupWidget_C_ZombieMatchResultNameWidgets_Offset == 0x270, "UZombieGroupWidget_C::ZombieMatchResultNameWidgets offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
