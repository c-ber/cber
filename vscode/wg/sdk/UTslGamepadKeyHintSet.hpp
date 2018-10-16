#pragma once
#include "UUmgBaseWidget.hpp"
#include "EKeyHintType.hpp"
#include "FUmgWidgetBinder_Gerneral.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGamepadKeyHintSet // Size: 0x370
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslGamepadKeyHintSet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1568); // id32("Class TslGame.TslGamepadKeyHintSet")
		return ptr;
	}
	TEnumAsByte<enum EKeyHintType> KeyHintType; /* Ofs: 0x300 Size: 0x1 - EnumProperty TslGame.TslGamepadKeyHintSet.KeyHintType */
	uint8_t UnknownData301[0x7];
	TArray<struct FHintKeyInfo> HintKeys_1; /* Ofs: 0x308 Size: 0x10 - ArrayProperty TslGame.TslGamepadKeyHintSet.HintKeys_1 */
	TArray<struct FHintKeyInfo> HintKeys_2; /* Ofs: 0x318 Size: 0x10 - ArrayProperty TslGame.TslGamepadKeyHintSet.HintKeys_2 */
	ExternalPtr<struct UClass> KeyHintContentClass; /* Ofs: 0x328 Size: 0x8 - ClassProperty TslGame.TslGamepadKeyHintSet.KeyHintContentClass */
	FUmgWidgetBinder_Gerneral HintVerticalBox_Binder; /* Ofs: 0x330 Size: 0x20 - StructProperty TslGame.TslGamepadKeyHintSet.HintVerticalBox_Binder */
	FUmgWidgetBinder_Animation HintAnimation_Binder; /* Ofs: 0x350 Size: 0x20 - StructProperty TslGame.TslGamepadKeyHintSet.HintAnimation_Binder */


	inline bool SetKeyHintType(t_structHelper inst, TEnumAsByte<enum EKeyHintType> value) { inst.WriteOffset(0x300, value); }
	inline bool SetHintKeys_1(t_structHelper inst, TArray<struct FHintKeyInfo> value) { inst.WriteOffset(0x308, value); }
	inline bool SetHintKeys_2(t_structHelper inst, TArray<struct FHintKeyInfo> value) { inst.WriteOffset(0x318, value); }
	inline bool SetKeyHintContentClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x328, value); }
	inline bool SetHintVerticalBox_Binder(t_structHelper inst, FUmgWidgetBinder_Gerneral value) { inst.WriteOffset(0x330, value); }
	inline bool SetHintAnimation_Binder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGamepadKeyHintSet = sizeof(UTslGamepadKeyHintSet); // 880
    static_assert(sizeof(UTslGamepadKeyHintSet) == 0x370, "Size of UTslGamepadKeyHintSet is not correct.");
	auto constexpr UTslGamepadKeyHintSet_KeyHintType_Offset = offsetof(UTslGamepadKeyHintSet, KeyHintType);
	static_assert(UTslGamepadKeyHintSet_KeyHintType_Offset == 0x300, "UTslGamepadKeyHintSet::KeyHintType offset is not 300");
	auto constexpr UTslGamepadKeyHintSet_HintKeys_1_Offset = offsetof(UTslGamepadKeyHintSet, HintKeys_1);
	static_assert(UTslGamepadKeyHintSet_HintKeys_1_Offset == 0x308, "UTslGamepadKeyHintSet::HintKeys_1 offset is not 308");
	auto constexpr UTslGamepadKeyHintSet_HintKeys_2_Offset = offsetof(UTslGamepadKeyHintSet, HintKeys_2);
	static_assert(UTslGamepadKeyHintSet_HintKeys_2_Offset == 0x318, "UTslGamepadKeyHintSet::HintKeys_2 offset is not 318");
	auto constexpr UTslGamepadKeyHintSet_KeyHintContentClass_Offset = offsetof(UTslGamepadKeyHintSet, KeyHintContentClass);
	static_assert(UTslGamepadKeyHintSet_KeyHintContentClass_Offset == 0x328, "UTslGamepadKeyHintSet::KeyHintContentClass offset is not 328");
	auto constexpr UTslGamepadKeyHintSet_HintVerticalBox_Binder_Offset = offsetof(UTslGamepadKeyHintSet, HintVerticalBox_Binder);
	static_assert(UTslGamepadKeyHintSet_HintVerticalBox_Binder_Offset == 0x330, "UTslGamepadKeyHintSet::HintVerticalBox_Binder offset is not 330");
	auto constexpr UTslGamepadKeyHintSet_HintAnimation_Binder_Offset = offsetof(UTslGamepadKeyHintSet, HintAnimation_Binder);
	static_assert(UTslGamepadKeyHintSet_HintAnimation_Binder_Offset == 0x350, "UTslGamepadKeyHintSet::HintAnimation_Binder offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
