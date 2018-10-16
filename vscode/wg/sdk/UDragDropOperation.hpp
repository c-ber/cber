#pragma once
#include "EDragPivot.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDragDropOperation // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef UDragDropOperation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1627); // id32("Class UMG.DragDropOperation")
		return ptr;
	}
	FString Tag; /* Ofs: 0x30 Size: 0x10 - StrProperty UMG.DragDropOperation.Tag */
	ExternalPtr<struct UObject> payload; /* Ofs: 0x40 Size: 0x8 - ObjectProperty UMG.DragDropOperation.payload */
	ExternalPtr<struct UWidget> DefaultDragVisual; /* Ofs: 0x48 Size: 0x8 - ObjectProperty UMG.DragDropOperation.DefaultDragVisual */
	TEnumAsByte<enum EDragPivot> Pivot; /* Ofs: 0x50 Size: 0x1 - EnumProperty UMG.DragDropOperation.Pivot */
	uint8_t UnknownData51[0x3];
	FVector2D Offset; /* Ofs: 0x54 Size: 0x8 - StructProperty UMG.DragDropOperation.Offset */
	uint8_t UnknownData5C[0x4];
	FScriptMulticastDelegate OnDrop; /* Ofs: 0x60 Size: 0x10 - MulticastDelegateProperty UMG.DragDropOperation.OnDrop */
	FScriptMulticastDelegate OnDragCancelled; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty UMG.DragDropOperation.OnDragCancelled */
	FScriptMulticastDelegate OnDragged; /* Ofs: 0x80 Size: 0x10 - MulticastDelegateProperty UMG.DragDropOperation.OnDragged */


	inline bool SetTag(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool Setpayload(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultDragVisual(t_structHelper inst, ExternalPtr<struct UWidget> value) { inst.WriteOffset(0x48, value); }
	inline bool SetPivot(t_structHelper inst, TEnumAsByte<enum EDragPivot> value) { inst.WriteOffset(0x50, value); }
	inline bool SetOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x54, value); }
	inline bool SetOnDrop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x60, value); }
	inline bool SetOnDragCancelled(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
	inline bool SetOnDragged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDragDropOperation = sizeof(UDragDropOperation); // 144
    static_assert(sizeof(UDragDropOperation) == 0x90, "Size of UDragDropOperation is not correct.");
	auto constexpr UDragDropOperation_Tag_Offset = offsetof(UDragDropOperation, Tag);
	static_assert(UDragDropOperation_Tag_Offset == 0x30, "UDragDropOperation::Tag offset is not 30");
	auto constexpr UDragDropOperation_payload_Offset = offsetof(UDragDropOperation, payload);
	static_assert(UDragDropOperation_payload_Offset == 0x40, "UDragDropOperation::payload offset is not 40");
	auto constexpr UDragDropOperation_DefaultDragVisual_Offset = offsetof(UDragDropOperation, DefaultDragVisual);
	static_assert(UDragDropOperation_DefaultDragVisual_Offset == 0x48, "UDragDropOperation::DefaultDragVisual offset is not 48");
	auto constexpr UDragDropOperation_Pivot_Offset = offsetof(UDragDropOperation, Pivot);
	static_assert(UDragDropOperation_Pivot_Offset == 0x50, "UDragDropOperation::Pivot offset is not 50");
	auto constexpr UDragDropOperation_Offset_Offset = offsetof(UDragDropOperation, Offset);
	static_assert(UDragDropOperation_Offset_Offset == 0x54, "UDragDropOperation::Offset offset is not 54");
	auto constexpr UDragDropOperation_OnDrop_Offset = offsetof(UDragDropOperation, OnDrop);
	static_assert(UDragDropOperation_OnDrop_Offset == 0x60, "UDragDropOperation::OnDrop offset is not 60");
	auto constexpr UDragDropOperation_OnDragCancelled_Offset = offsetof(UDragDropOperation, OnDragCancelled);
	static_assert(UDragDropOperation_OnDragCancelled_Offset == 0x70, "UDragDropOperation::OnDragCancelled offset is not 70");
	auto constexpr UDragDropOperation_OnDragged_Offset = offsetof(UDragDropOperation, OnDragged);
	static_assert(UDragDropOperation_OnDragged_Offset == 0x80, "UDragDropOperation::OnDragged offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
