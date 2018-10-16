#pragma once
#include "EEdGraphPinDirection.hpp"
#include "FEdGraphPinType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEdGraphPin_Deprecated // Size: 0x148
	: public UObject // Size: 0x30
{
private:
	typedef UEdGraphPin_Deprecated t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1701); // id32("Class Engine.EdGraphPin_Deprecated")
		return ptr;
	}
	FString PinName; /* Ofs: 0x30 Size: 0x10 - StrProperty Engine.EdGraphPin_Deprecated.PinName */
	FString PinToolTip; /* Ofs: 0x40 Size: 0x10 - StrProperty Engine.EdGraphPin_Deprecated.PinToolTip */
	TEnumAsByte<enum EEdGraphPinDirection> Direction; /* Ofs: 0x50 Size: 0x1 - ByteProperty Engine.EdGraphPin_Deprecated.Direction */
	uint8_t UnknownData51[0x7];
	FEdGraphPinType PinType; /* Ofs: 0x58 Size: 0x80 - StructProperty Engine.EdGraphPin_Deprecated.PinType */
	FString DefaultValue; /* Ofs: 0xD8 Size: 0x10 - StrProperty Engine.EdGraphPin_Deprecated.DefaultValue */
	FString AutogeneratedDefaultValue; /* Ofs: 0xE8 Size: 0x10 - StrProperty Engine.EdGraphPin_Deprecated.AutogeneratedDefaultValue */
	ExternalPtr<struct UObject> DefaultObject; /* Ofs: 0xF8 Size: 0x8 - ObjectProperty Engine.EdGraphPin_Deprecated.DefaultObject */
	FText DefaultTextValue; /* Ofs: 0x100 Size: 0x18 - TextProperty Engine.EdGraphPin_Deprecated.DefaultTextValue */
	TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> LinkedTo; /* Ofs: 0x118 Size: 0x10 - ArrayProperty Engine.EdGraphPin_Deprecated.LinkedTo */
	TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> SubPins; /* Ofs: 0x128 Size: 0x10 - ArrayProperty Engine.EdGraphPin_Deprecated.SubPins */
	ExternalPtr<struct UEdGraphPin_Deprecated> ParentPin; /* Ofs: 0x138 Size: 0x8 - ObjectProperty Engine.EdGraphPin_Deprecated.ParentPin */
	ExternalPtr<struct UEdGraphPin_Deprecated> ReferencePassThroughConnection; /* Ofs: 0x140 Size: 0x8 - ObjectProperty Engine.EdGraphPin_Deprecated.ReferencePassThroughConnection */


	inline bool SetPinName(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetPinToolTip(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetDirection(t_structHelper inst, TEnumAsByte<enum EEdGraphPinDirection> value) { inst.WriteOffset(0x50, value); }
	inline bool SetPinType(t_structHelper inst, FEdGraphPinType value) { inst.WriteOffset(0x58, value); }
	inline bool SetDefaultValue(t_structHelper inst, FString value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAutogeneratedDefaultValue(t_structHelper inst, FString value) { inst.WriteOffset(0xE8, value); }
	inline bool SetDefaultObject(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetDefaultTextValue(t_structHelper inst, FText value) { inst.WriteOffset(0x100, value); }
	inline bool SetLinkedTo(t_structHelper inst, TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> value) { inst.WriteOffset(0x118, value); }
	inline bool SetSubPins(t_structHelper inst, TArray<ExternalPtr<struct UEdGraphPin_Deprecated>> value) { inst.WriteOffset(0x128, value); }
	inline bool SetParentPin(t_structHelper inst, ExternalPtr<struct UEdGraphPin_Deprecated> value) { inst.WriteOffset(0x138, value); }
	inline bool SetReferencePassThroughConnection(t_structHelper inst, ExternalPtr<struct UEdGraphPin_Deprecated> value) { inst.WriteOffset(0x140, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEdGraphPin_Deprecated = sizeof(UEdGraphPin_Deprecated); // 328
    static_assert(sizeof(UEdGraphPin_Deprecated) == 0x148, "Size of UEdGraphPin_Deprecated is not correct.");
	auto constexpr UEdGraphPin_Deprecated_PinName_Offset = offsetof(UEdGraphPin_Deprecated, PinName);
	static_assert(UEdGraphPin_Deprecated_PinName_Offset == 0x30, "UEdGraphPin_Deprecated::PinName offset is not 30");
	auto constexpr UEdGraphPin_Deprecated_PinToolTip_Offset = offsetof(UEdGraphPin_Deprecated, PinToolTip);
	static_assert(UEdGraphPin_Deprecated_PinToolTip_Offset == 0x40, "UEdGraphPin_Deprecated::PinToolTip offset is not 40");
	auto constexpr UEdGraphPin_Deprecated_Direction_Offset = offsetof(UEdGraphPin_Deprecated, Direction);
	static_assert(UEdGraphPin_Deprecated_Direction_Offset == 0x50, "UEdGraphPin_Deprecated::Direction offset is not 50");
	auto constexpr UEdGraphPin_Deprecated_PinType_Offset = offsetof(UEdGraphPin_Deprecated, PinType);
	static_assert(UEdGraphPin_Deprecated_PinType_Offset == 0x58, "UEdGraphPin_Deprecated::PinType offset is not 58");
	auto constexpr UEdGraphPin_Deprecated_DefaultValue_Offset = offsetof(UEdGraphPin_Deprecated, DefaultValue);
	static_assert(UEdGraphPin_Deprecated_DefaultValue_Offset == 0xd8, "UEdGraphPin_Deprecated::DefaultValue offset is not d8");
	auto constexpr UEdGraphPin_Deprecated_AutogeneratedDefaultValue_Offset = offsetof(UEdGraphPin_Deprecated, AutogeneratedDefaultValue);
	static_assert(UEdGraphPin_Deprecated_AutogeneratedDefaultValue_Offset == 0xe8, "UEdGraphPin_Deprecated::AutogeneratedDefaultValue offset is not e8");
	auto constexpr UEdGraphPin_Deprecated_DefaultObject_Offset = offsetof(UEdGraphPin_Deprecated, DefaultObject);
	static_assert(UEdGraphPin_Deprecated_DefaultObject_Offset == 0xf8, "UEdGraphPin_Deprecated::DefaultObject offset is not f8");
	auto constexpr UEdGraphPin_Deprecated_DefaultTextValue_Offset = offsetof(UEdGraphPin_Deprecated, DefaultTextValue);
	static_assert(UEdGraphPin_Deprecated_DefaultTextValue_Offset == 0x100, "UEdGraphPin_Deprecated::DefaultTextValue offset is not 100");
	auto constexpr UEdGraphPin_Deprecated_LinkedTo_Offset = offsetof(UEdGraphPin_Deprecated, LinkedTo);
	static_assert(UEdGraphPin_Deprecated_LinkedTo_Offset == 0x118, "UEdGraphPin_Deprecated::LinkedTo offset is not 118");
	auto constexpr UEdGraphPin_Deprecated_SubPins_Offset = offsetof(UEdGraphPin_Deprecated, SubPins);
	static_assert(UEdGraphPin_Deprecated_SubPins_Offset == 0x128, "UEdGraphPin_Deprecated::SubPins offset is not 128");
	auto constexpr UEdGraphPin_Deprecated_ParentPin_Offset = offsetof(UEdGraphPin_Deprecated, ParentPin);
	static_assert(UEdGraphPin_Deprecated_ParentPin_Offset == 0x138, "UEdGraphPin_Deprecated::ParentPin offset is not 138");
	auto constexpr UEdGraphPin_Deprecated_ReferencePassThroughConnection_Offset = offsetof(UEdGraphPin_Deprecated, ReferencePassThroughConnection);
	static_assert(UEdGraphPin_Deprecated_ReferencePassThroughConnection_Offset == 0x140, "UEdGraphPin_Deprecated::ReferencePassThroughConnection offset is not 140");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
