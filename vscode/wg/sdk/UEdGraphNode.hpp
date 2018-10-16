#pragma once
#include "FGuid.hpp"
#include "ENodeAdvancedPins.hpp"
#include "ENodeEnabledState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEdGraphNode // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UEdGraphNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(764); // id32("Class Engine.EdGraphNode")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> DeprecatedPins; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.EdGraphNode.DeprecatedPins */
	int32_t NodePosX; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.EdGraphNode.NodePosX */
	int32_t NodePosY; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.EdGraphNode.NodePosY */
	int32_t NodeWidth; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.EdGraphNode.NodeWidth */
	int32_t NodeHeight; /* Ofs: 0x5C Size: 0x4 - IntProperty Engine.EdGraphNode.NodeHeight */
	uint8_t boolField60;
	uint8_t UnknownData61[0x7];
	FString NodeComment; /* Ofs: 0x68 Size: 0x10 - StrProperty Engine.EdGraphNode.NodeComment */
	uint8_t boolField78;
	uint8_t boolField79;
	uint8_t boolField7A;
	uint8_t UnknownData7B[0x1];
	int32_t ErrorType; /* Ofs: 0x7C Size: 0x4 - IntProperty Engine.EdGraphNode.ErrorType */
	FString ErrorMsg; /* Ofs: 0x80 Size: 0x10 - StrProperty Engine.EdGraphNode.ErrorMsg */
	FGuid NodeGuid; /* Ofs: 0x90 Size: 0x10 - StructProperty Engine.EdGraphNode.NodeGuid */
	TEnumAsByte<enum ENodeAdvancedPins> AdvancedPinDisplay; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.EdGraphNode.AdvancedPinDisplay */
	TEnumAsByte<enum ENodeEnabledState> EnabledState; /* Ofs: 0xA1 Size: 0x1 - EnumProperty Engine.EdGraphNode.EnabledState */
	uint8_t boolFieldA2;
	uint8_t boolFieldA3;
	uint8_t UnknownDataA4[0x4];


	inline bool SetDeprecatedPins(t_structHelper inst, TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetNodePosX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetNodePosY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetNodeWidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetNodeHeight(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool bHasCompilerMessage()
	{
		return boolField60& 0x1;
	}
	inline bool SetbHasCompilerMessage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNodeComment(t_structHelper inst, FString value) { inst.WriteOffset(0x68, value); }
	inline bool bCommentBubblePinned()
	{
		return boolField78& 0x1;
	}
	inline bool SetbCommentBubblePinned(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCommentBubbleVisible()
	{
		return boolField79& 0x1;
	}
	inline bool SetbCommentBubbleVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x79, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCommentBubbleMakeVisible()
	{
		return boolField7A& 0x1;
	}
	inline bool SetbCommentBubbleMakeVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetErrorType(t_structHelper inst, int32_t value) { inst.WriteOffset(0x7C, value); }
	inline bool SetErrorMsg(t_structHelper inst, FString value) { inst.WriteOffset(0x80, value); }
	inline bool SetNodeGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x90, value); }
	inline bool SetAdvancedPinDisplay(t_structHelper inst, TEnumAsByte<enum ENodeAdvancedPins> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetEnabledState(t_structHelper inst, TEnumAsByte<enum ENodeEnabledState> value) { inst.WriteOffset(0xA1, value); }
	inline bool bUserSetEnabledState()
	{
		return boolFieldA2& 0x1;
	}
	inline bool SetbUserSetEnabledState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsNodeEnabled()
	{
		return boolFieldA3& 0x1;
	}
	inline bool SetbIsNodeEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA3, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEdGraphNode = sizeof(UEdGraphNode); // 168
    static_assert(sizeof(UEdGraphNode) == 0xA8, "Size of UEdGraphNode is not correct.");
	auto constexpr UEdGraphNode_DeprecatedPins_Offset = offsetof(UEdGraphNode, DeprecatedPins);
	static_assert(UEdGraphNode_DeprecatedPins_Offset == 0x40, "UEdGraphNode::DeprecatedPins offset is not 40");
	auto constexpr UEdGraphNode_NodePosX_Offset = offsetof(UEdGraphNode, NodePosX);
	static_assert(UEdGraphNode_NodePosX_Offset == 0x50, "UEdGraphNode::NodePosX offset is not 50");
	auto constexpr UEdGraphNode_NodePosY_Offset = offsetof(UEdGraphNode, NodePosY);
	static_assert(UEdGraphNode_NodePosY_Offset == 0x54, "UEdGraphNode::NodePosY offset is not 54");
	auto constexpr UEdGraphNode_NodeWidth_Offset = offsetof(UEdGraphNode, NodeWidth);
	static_assert(UEdGraphNode_NodeWidth_Offset == 0x58, "UEdGraphNode::NodeWidth offset is not 58");
	auto constexpr UEdGraphNode_NodeHeight_Offset = offsetof(UEdGraphNode, NodeHeight);
	static_assert(UEdGraphNode_NodeHeight_Offset == 0x5c, "UEdGraphNode::NodeHeight offset is not 5c");
	auto constexpr UEdGraphNode_boolField60_Offset = offsetof(UEdGraphNode, boolField60);
	static_assert(UEdGraphNode_boolField60_Offset == 0x60, "UEdGraphNode::boolField60 offset is not 60");
	auto constexpr UEdGraphNode_NodeComment_Offset = offsetof(UEdGraphNode, NodeComment);
	static_assert(UEdGraphNode_NodeComment_Offset == 0x68, "UEdGraphNode::NodeComment offset is not 68");
	auto constexpr UEdGraphNode_boolField78_Offset = offsetof(UEdGraphNode, boolField78);
	static_assert(UEdGraphNode_boolField78_Offset == 0x78, "UEdGraphNode::boolField78 offset is not 78");
	auto constexpr UEdGraphNode_boolField79_Offset = offsetof(UEdGraphNode, boolField79);
	static_assert(UEdGraphNode_boolField79_Offset == 0x79, "UEdGraphNode::boolField79 offset is not 79");
	auto constexpr UEdGraphNode_boolField7A_Offset = offsetof(UEdGraphNode, boolField7A);
	static_assert(UEdGraphNode_boolField7A_Offset == 0x7a, "UEdGraphNode::boolField7A offset is not 7a");
	auto constexpr UEdGraphNode_ErrorType_Offset = offsetof(UEdGraphNode, ErrorType);
	static_assert(UEdGraphNode_ErrorType_Offset == 0x7c, "UEdGraphNode::ErrorType offset is not 7c");
	auto constexpr UEdGraphNode_ErrorMsg_Offset = offsetof(UEdGraphNode, ErrorMsg);
	static_assert(UEdGraphNode_ErrorMsg_Offset == 0x80, "UEdGraphNode::ErrorMsg offset is not 80");
	auto constexpr UEdGraphNode_NodeGuid_Offset = offsetof(UEdGraphNode, NodeGuid);
	static_assert(UEdGraphNode_NodeGuid_Offset == 0x90, "UEdGraphNode::NodeGuid offset is not 90");
	auto constexpr UEdGraphNode_AdvancedPinDisplay_Offset = offsetof(UEdGraphNode, AdvancedPinDisplay);
	static_assert(UEdGraphNode_AdvancedPinDisplay_Offset == 0xa0, "UEdGraphNode::AdvancedPinDisplay offset is not a0");
	auto constexpr UEdGraphNode_EnabledState_Offset = offsetof(UEdGraphNode, EnabledState);
	static_assert(UEdGraphNode_EnabledState_Offset == 0xa1, "UEdGraphNode::EnabledState offset is not a1");
	auto constexpr UEdGraphNode_boolFieldA2_Offset = offsetof(UEdGraphNode, boolFieldA2);
	static_assert(UEdGraphNode_boolFieldA2_Offset == 0xa2, "UEdGraphNode::boolFieldA2 offset is not a2");
	auto constexpr UEdGraphNode_boolFieldA3_Offset = offsetof(UEdGraphNode, boolFieldA3);
	static_assert(UEdGraphNode_boolFieldA3_Offset == 0xa3, "UEdGraphNode::boolFieldA3 offset is not a3");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
