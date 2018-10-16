#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlockInputUserWidget // Size: 0x330
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UBlockInputUserWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1511); // id32("Class TslGame.BlockInputUserWidget")
		return ptr;
	}
	uint8_t boolField300;
	uint8_t UnknownData301[0x7];
	TArray<struct FBlockAction> BlockActions; /* Ofs: 0x308 Size: 0x10 - ArrayProperty TslGame.BlockInputUserWidget.BlockActions */
	TArray<struct FName> BlockAxises; /* Ofs: 0x318 Size: 0x10 - ArrayProperty TslGame.BlockInputUserWidget.BlockAxises */
	uint8_t boolField328;
	uint8_t boolField329;
	uint8_t UnknownData32A[0x6];


	inline bool bWhiteList()
	{
		return boolField300& 0x1;
	}
	inline bool SetbWhiteList(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x300, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBlockActions(t_structHelper inst, TArray<struct FBlockAction> value) { inst.WriteOffset(0x308, value); }
	inline bool SetBlockAxises(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x318, value); }
	inline bool bGenerateEventOnOpen()
	{
		return boolField328& 0x1;
	}
	inline bool SetbGenerateEventOnOpen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x328, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLockMouseCursorInViewport()
	{
		return boolField329& 0x1;
	}
	inline bool SetbLockMouseCursorInViewport(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x329, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlockInputUserWidget = sizeof(UBlockInputUserWidget); // 816
    static_assert(sizeof(UBlockInputUserWidget) == 0x330, "Size of UBlockInputUserWidget is not correct.");
	auto constexpr UBlockInputUserWidget_boolField300_Offset = offsetof(UBlockInputUserWidget, boolField300);
	static_assert(UBlockInputUserWidget_boolField300_Offset == 0x300, "UBlockInputUserWidget::boolField300 offset is not 300");
	auto constexpr UBlockInputUserWidget_BlockActions_Offset = offsetof(UBlockInputUserWidget, BlockActions);
	static_assert(UBlockInputUserWidget_BlockActions_Offset == 0x308, "UBlockInputUserWidget::BlockActions offset is not 308");
	auto constexpr UBlockInputUserWidget_BlockAxises_Offset = offsetof(UBlockInputUserWidget, BlockAxises);
	static_assert(UBlockInputUserWidget_BlockAxises_Offset == 0x318, "UBlockInputUserWidget::BlockAxises offset is not 318");
	auto constexpr UBlockInputUserWidget_boolField328_Offset = offsetof(UBlockInputUserWidget, boolField328);
	static_assert(UBlockInputUserWidget_boolField328_Offset == 0x328, "UBlockInputUserWidget::boolField328 offset is not 328");
	auto constexpr UBlockInputUserWidget_boolField329_Offset = offsetof(UBlockInputUserWidget, boolField329);
	static_assert(UBlockInputUserWidget_boolField329_Offset == 0x329, "UBlockInputUserWidget::boolField329 offset is not 329");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
