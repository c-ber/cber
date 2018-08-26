#pragma once
#include "ECollisionEnabled.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollisionResponseTemplate // Size: 0x60
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CollisionResponseTemplate.Name */
    TEnumAsByte<enum ECollisionEnabled> CollisionEnabled; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.CollisionResponseTemplate.CollisionEnabled */
    uint8_t UnknownData9[0x7];
    FName ObjectTypeName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.CollisionResponseTemplate.ObjectTypeName */
    TArray<struct FResponseChannel> CustomResponses; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.CollisionResponseTemplate.CustomResponses */
    FString HelpMessage; /* Ofs: 0x28 Size: 0x10 StrProperty Engine.CollisionResponseTemplate.HelpMessage */
    bool bCanModify; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.CollisionResponseTemplate.bCanModify */
    uint8_t UnknownData39[0x27];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollisionResponseTemplate = sizeof(FCollisionResponseTemplate); // 96
    static_assert(sizeof(FCollisionResponseTemplate) == 0x60, "Size of FCollisionResponseTemplate is not correct.");
	auto constexpr FCollisionResponseTemplate_Name_Offset = offsetof(FCollisionResponseTemplate, Name);
	static_assert(FCollisionResponseTemplate_Name_Offset == 0x0, "FCollisionResponseTemplate::Name offset is not 0");
	auto constexpr FCollisionResponseTemplate_CollisionEnabled_Offset = offsetof(FCollisionResponseTemplate, CollisionEnabled);
	static_assert(FCollisionResponseTemplate_CollisionEnabled_Offset == 0x8, "FCollisionResponseTemplate::CollisionEnabled offset is not 8");
	auto constexpr FCollisionResponseTemplate_ObjectTypeName_Offset = offsetof(FCollisionResponseTemplate, ObjectTypeName);
	static_assert(FCollisionResponseTemplate_ObjectTypeName_Offset == 0x10, "FCollisionResponseTemplate::ObjectTypeName offset is not 10");
	auto constexpr FCollisionResponseTemplate_CustomResponses_Offset = offsetof(FCollisionResponseTemplate, CustomResponses);
	static_assert(FCollisionResponseTemplate_CustomResponses_Offset == 0x18, "FCollisionResponseTemplate::CustomResponses offset is not 18");
	auto constexpr FCollisionResponseTemplate_HelpMessage_Offset = offsetof(FCollisionResponseTemplate, HelpMessage);
	static_assert(FCollisionResponseTemplate_HelpMessage_Offset == 0x28, "FCollisionResponseTemplate::HelpMessage offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
