#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EVerticalAlignment.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNewMessageBorderWidget_C // Size: 0x2ED
	: public UUserWidget // Size: 0x248
{
private:
	typedef UNewMessageBorderWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163793); // id32("WidgetBlueprintGeneratedClass NewMessageBorderWidget.NewMessageBorderWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty NewMessageBorderWidget.NewMessageBorderWidget_C.UberGraphFrame */
	ExternalPtr<struct UOverlay> Bottom; /* Ofs: 0x250 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.Bottom */
	ExternalPtr<struct UCanvasPanel> MessageCanvas; /* Ofs: 0x258 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MessageCanvas */
	ExternalPtr<struct UVerticalBox> MessageLog; /* Ofs: 0x260 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MessageLog */
	ExternalPtr<struct UOverlay> Top; /* Ofs: 0x268 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.Top */
	int32_t NumofMaxMessge; /* Ofs: 0x270 Size: 0x4 - IntProperty NewMessageBorderWidget.NewMessageBorderWidget_C.NumofMaxMessge */
	uint8_t boolField274;
	TEnumAsByte<enum EVerticalAlignment> MessageAlignment; /* Ofs: 0x275 Size: 0x1 - ByteProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MessageAlignment */
	uint8_t UnknownData276[0x2];
	TArray<ExternalPtr<struct UNewSystemMessageWidget_C>> DelayMessageArray; /* Ofs: 0x278 Size: 0x10 - ArrayProperty NewMessageBorderWidget.NewMessageBorderWidget_C.DelayMessageArray */
	TArray<ExternalPtr<struct UNewSystemMessageWidget_C>> CheckList; /* Ofs: 0x288 Size: 0x10 - ArrayProperty NewMessageBorderWidget.NewMessageBorderWidget_C.CheckList */
	TArray<struct FVector2D> WidgetPositionList; /* Ofs: 0x298 Size: 0x10 - ArrayProperty NewMessageBorderWidget.NewMessageBorderWidget_C.WidgetPositionList */
	FVector2D MessageSize; /* Ofs: 0x2A8 Size: 0x8 - StructProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MessageSize */
	FVector2D BorderSize; /* Ofs: 0x2B0 Size: 0x8 - StructProperty NewMessageBorderWidget.NewMessageBorderWidget_C.BorderSize */
	float MessageHeight; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MessageHeight */
	int32_t Count; /* Ofs: 0x2BC Size: 0x4 - IntProperty NewMessageBorderWidget.NewMessageBorderWidget_C.Count */
	FVector2D BasePosition; /* Ofs: 0x2C0 Size: 0x8 - StructProperty NewMessageBorderWidget.NewMessageBorderWidget_C.BasePosition */
	uint8_t boolField2C8;
	uint8_t UnknownData2C9[0x3];
	float TimeCheck; /* Ofs: 0x2CC Size: 0x4 - FloatProperty NewMessageBorderWidget.NewMessageBorderWidget_C.TimeCheck */
	ExternalPtr<struct UCurveFloat> MoveCurve; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MoveCurve */
	ExternalPtr<struct UNewSystemMessageWidget_C> LastMessageWidget; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty NewMessageBorderWidget.NewMessageBorderWidget_C.LastMessageWidget */
	uint8_t boolField2E0;
	uint8_t UnknownData2E1[0x3];
	FVector2D MoveVector; /* Ofs: 0x2E4 Size: 0x8 - StructProperty NewMessageBorderWidget.NewMessageBorderWidget_C.MoveVector */
	uint8_t boolField2EC;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBottom(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x250, value); }
	inline bool SetMessageCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMessageLog(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetTop(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x268, value); }
	inline bool SetNumofMaxMessge(t_structHelper inst, int32_t value) { inst.WriteOffset(0x270, value); }
	inline bool bForceAddMessage()
	{
		return boolField274& 0x1;
	}
	inline bool SetbForceAddMessage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x274, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMessageAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalAlignment> value) { inst.WriteOffset(0x275, value); }
	inline bool SetDelayMessageArray(t_structHelper inst, TArray<ExternalPtr<struct UNewSystemMessageWidget_C>> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCheckList(t_structHelper inst, TArray<ExternalPtr<struct UNewSystemMessageWidget_C>> value) { inst.WriteOffset(0x288, value); }
	inline bool SetWidgetPositionList(t_structHelper inst, TArray<struct FVector2D> value) { inst.WriteOffset(0x298, value); }
	inline bool SetMessageSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetBorderSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetMessageHeight(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetBasePosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x2C0, value); }
	inline bool bMove()
	{
		return boolField2C8& 0x1;
	}
	inline bool SetbMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x2CC, value); }
	inline bool SetMoveCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetLastMessageWidget(t_structHelper inst, ExternalPtr<struct UNewSystemMessageWidget_C> value) { inst.WriteOffset(0x2D8, value); }
	inline bool bUniqueCheck()
	{
		return boolField2E0& 0x1;
	}
	inline bool SetbUniqueCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMoveVector(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x2E4, value); }
	inline bool bOverrideCanvasInSize()
	{
		return boolField2EC& 0x1;
	}
	inline bool SetbOverrideCanvasInSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2EC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNewMessageBorderWidget_C = sizeof(UNewMessageBorderWidget_C); // 749
    static_assert(sizeof(UNewMessageBorderWidget_C) == 0x2ED, "Size of UNewMessageBorderWidget_C is not correct.");
	auto constexpr UNewMessageBorderWidget_C_UberGraphFrame_Offset = offsetof(UNewMessageBorderWidget_C, UberGraphFrame);
	static_assert(UNewMessageBorderWidget_C_UberGraphFrame_Offset == 0x248, "UNewMessageBorderWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UNewMessageBorderWidget_C_Bottom_Offset = offsetof(UNewMessageBorderWidget_C, Bottom);
	static_assert(UNewMessageBorderWidget_C_Bottom_Offset == 0x250, "UNewMessageBorderWidget_C::Bottom offset is not 250");
	auto constexpr UNewMessageBorderWidget_C_MessageCanvas_Offset = offsetof(UNewMessageBorderWidget_C, MessageCanvas);
	static_assert(UNewMessageBorderWidget_C_MessageCanvas_Offset == 0x258, "UNewMessageBorderWidget_C::MessageCanvas offset is not 258");
	auto constexpr UNewMessageBorderWidget_C_MessageLog_Offset = offsetof(UNewMessageBorderWidget_C, MessageLog);
	static_assert(UNewMessageBorderWidget_C_MessageLog_Offset == 0x260, "UNewMessageBorderWidget_C::MessageLog offset is not 260");
	auto constexpr UNewMessageBorderWidget_C_Top_Offset = offsetof(UNewMessageBorderWidget_C, Top);
	static_assert(UNewMessageBorderWidget_C_Top_Offset == 0x268, "UNewMessageBorderWidget_C::Top offset is not 268");
	auto constexpr UNewMessageBorderWidget_C_NumofMaxMessge_Offset = offsetof(UNewMessageBorderWidget_C, NumofMaxMessge);
	static_assert(UNewMessageBorderWidget_C_NumofMaxMessge_Offset == 0x270, "UNewMessageBorderWidget_C::NumofMaxMessge offset is not 270");
	auto constexpr UNewMessageBorderWidget_C_boolField274_Offset = offsetof(UNewMessageBorderWidget_C, boolField274);
	static_assert(UNewMessageBorderWidget_C_boolField274_Offset == 0x274, "UNewMessageBorderWidget_C::boolField274 offset is not 274");
	auto constexpr UNewMessageBorderWidget_C_MessageAlignment_Offset = offsetof(UNewMessageBorderWidget_C, MessageAlignment);
	static_assert(UNewMessageBorderWidget_C_MessageAlignment_Offset == 0x275, "UNewMessageBorderWidget_C::MessageAlignment offset is not 275");
	auto constexpr UNewMessageBorderWidget_C_DelayMessageArray_Offset = offsetof(UNewMessageBorderWidget_C, DelayMessageArray);
	static_assert(UNewMessageBorderWidget_C_DelayMessageArray_Offset == 0x278, "UNewMessageBorderWidget_C::DelayMessageArray offset is not 278");
	auto constexpr UNewMessageBorderWidget_C_CheckList_Offset = offsetof(UNewMessageBorderWidget_C, CheckList);
	static_assert(UNewMessageBorderWidget_C_CheckList_Offset == 0x288, "UNewMessageBorderWidget_C::CheckList offset is not 288");
	auto constexpr UNewMessageBorderWidget_C_WidgetPositionList_Offset = offsetof(UNewMessageBorderWidget_C, WidgetPositionList);
	static_assert(UNewMessageBorderWidget_C_WidgetPositionList_Offset == 0x298, "UNewMessageBorderWidget_C::WidgetPositionList offset is not 298");
	auto constexpr UNewMessageBorderWidget_C_MessageSize_Offset = offsetof(UNewMessageBorderWidget_C, MessageSize);
	static_assert(UNewMessageBorderWidget_C_MessageSize_Offset == 0x2a8, "UNewMessageBorderWidget_C::MessageSize offset is not 2a8");
	auto constexpr UNewMessageBorderWidget_C_BorderSize_Offset = offsetof(UNewMessageBorderWidget_C, BorderSize);
	static_assert(UNewMessageBorderWidget_C_BorderSize_Offset == 0x2b0, "UNewMessageBorderWidget_C::BorderSize offset is not 2b0");
	auto constexpr UNewMessageBorderWidget_C_MessageHeight_Offset = offsetof(UNewMessageBorderWidget_C, MessageHeight);
	static_assert(UNewMessageBorderWidget_C_MessageHeight_Offset == 0x2b8, "UNewMessageBorderWidget_C::MessageHeight offset is not 2b8");
	auto constexpr UNewMessageBorderWidget_C_Count_Offset = offsetof(UNewMessageBorderWidget_C, Count);
	static_assert(UNewMessageBorderWidget_C_Count_Offset == 0x2bc, "UNewMessageBorderWidget_C::Count offset is not 2bc");
	auto constexpr UNewMessageBorderWidget_C_BasePosition_Offset = offsetof(UNewMessageBorderWidget_C, BasePosition);
	static_assert(UNewMessageBorderWidget_C_BasePosition_Offset == 0x2c0, "UNewMessageBorderWidget_C::BasePosition offset is not 2c0");
	auto constexpr UNewMessageBorderWidget_C_boolField2C8_Offset = offsetof(UNewMessageBorderWidget_C, boolField2C8);
	static_assert(UNewMessageBorderWidget_C_boolField2C8_Offset == 0x2c8, "UNewMessageBorderWidget_C::boolField2C8 offset is not 2c8");
	auto constexpr UNewMessageBorderWidget_C_TimeCheck_Offset = offsetof(UNewMessageBorderWidget_C, TimeCheck);
	static_assert(UNewMessageBorderWidget_C_TimeCheck_Offset == 0x2cc, "UNewMessageBorderWidget_C::TimeCheck offset is not 2cc");
	auto constexpr UNewMessageBorderWidget_C_MoveCurve_Offset = offsetof(UNewMessageBorderWidget_C, MoveCurve);
	static_assert(UNewMessageBorderWidget_C_MoveCurve_Offset == 0x2d0, "UNewMessageBorderWidget_C::MoveCurve offset is not 2d0");
	auto constexpr UNewMessageBorderWidget_C_LastMessageWidget_Offset = offsetof(UNewMessageBorderWidget_C, LastMessageWidget);
	static_assert(UNewMessageBorderWidget_C_LastMessageWidget_Offset == 0x2d8, "UNewMessageBorderWidget_C::LastMessageWidget offset is not 2d8");
	auto constexpr UNewMessageBorderWidget_C_boolField2E0_Offset = offsetof(UNewMessageBorderWidget_C, boolField2E0);
	static_assert(UNewMessageBorderWidget_C_boolField2E0_Offset == 0x2e0, "UNewMessageBorderWidget_C::boolField2E0 offset is not 2e0");
	auto constexpr UNewMessageBorderWidget_C_MoveVector_Offset = offsetof(UNewMessageBorderWidget_C, MoveVector);
	static_assert(UNewMessageBorderWidget_C_MoveVector_Offset == 0x2e4, "UNewMessageBorderWidget_C::MoveVector offset is not 2e4");
	auto constexpr UNewMessageBorderWidget_C_boolField2EC_Offset = offsetof(UNewMessageBorderWidget_C, boolField2EC);
	static_assert(UNewMessageBorderWidget_C_boolField2EC_Offset == 0x2ec, "UNewMessageBorderWidget_C::boolField2EC offset is not 2ec");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
