#pragma once
#include "ECollisionResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCollisionResponseContainer // Size: 0x20
{
public:
    TEnumAsByte<enum ECollisionResponse> WorldStatic; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.WorldStatic */
    TEnumAsByte<enum ECollisionResponse> WorldDynamic; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.WorldDynamic */
    TEnumAsByte<enum ECollisionResponse> Pawn; /* Ofs: 0x2 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.Pawn */
    TEnumAsByte<enum ECollisionResponse> Visibility; /* Ofs: 0x3 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.Visibility */
    TEnumAsByte<enum ECollisionResponse> Camera; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.Camera */
    TEnumAsByte<enum ECollisionResponse> PhysicsBody; /* Ofs: 0x5 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.PhysicsBody */
    TEnumAsByte<enum ECollisionResponse> Vehicle; /* Ofs: 0x6 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.Vehicle */
    TEnumAsByte<enum ECollisionResponse> Destructible; /* Ofs: 0x7 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.Destructible */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel1; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel1 */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel2; /* Ofs: 0x9 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel2 */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel3; /* Ofs: 0xA Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel3 */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel4; /* Ofs: 0xB Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel4 */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel5; /* Ofs: 0xC Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel5 */
    TEnumAsByte<enum ECollisionResponse> EngineTraceChannel6; /* Ofs: 0xD Size: 0x1 ByteProperty Engine.CollisionResponseContainer.EngineTraceChannel6 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel1; /* Ofs: 0xE Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel1 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel2; /* Ofs: 0xF Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel2 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel3; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel3 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel4; /* Ofs: 0x11 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel4 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel5; /* Ofs: 0x12 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel5 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel6; /* Ofs: 0x13 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel6 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel7; /* Ofs: 0x14 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel7 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel8; /* Ofs: 0x15 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel8 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel9; /* Ofs: 0x16 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel9 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel10; /* Ofs: 0x17 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel10 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel11; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel11 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel12; /* Ofs: 0x19 Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel12 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel13; /* Ofs: 0x1A Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel13 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel14; /* Ofs: 0x1B Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel14 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel15; /* Ofs: 0x1C Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel15 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel16; /* Ofs: 0x1D Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel16 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel17; /* Ofs: 0x1E Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel17 */
    TEnumAsByte<enum ECollisionResponse> GameTraceChannel18; /* Ofs: 0x1F Size: 0x1 ByteProperty Engine.CollisionResponseContainer.GameTraceChannel18 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCollisionResponseContainer = sizeof(FCollisionResponseContainer); // 32
    static_assert(sizeof(FCollisionResponseContainer) == 0x20, "Size of FCollisionResponseContainer is not correct.");
	auto constexpr FCollisionResponseContainer_WorldStatic_Offset = offsetof(FCollisionResponseContainer, WorldStatic);
	static_assert(FCollisionResponseContainer_WorldStatic_Offset == 0x0, "FCollisionResponseContainer::WorldStatic offset is not 0");
	auto constexpr FCollisionResponseContainer_WorldDynamic_Offset = offsetof(FCollisionResponseContainer, WorldDynamic);
	static_assert(FCollisionResponseContainer_WorldDynamic_Offset == 0x1, "FCollisionResponseContainer::WorldDynamic offset is not 1");
	auto constexpr FCollisionResponseContainer_Pawn_Offset = offsetof(FCollisionResponseContainer, Pawn);
	static_assert(FCollisionResponseContainer_Pawn_Offset == 0x2, "FCollisionResponseContainer::Pawn offset is not 2");
	auto constexpr FCollisionResponseContainer_Visibility_Offset = offsetof(FCollisionResponseContainer, Visibility);
	static_assert(FCollisionResponseContainer_Visibility_Offset == 0x3, "FCollisionResponseContainer::Visibility offset is not 3");
	auto constexpr FCollisionResponseContainer_Camera_Offset = offsetof(FCollisionResponseContainer, Camera);
	static_assert(FCollisionResponseContainer_Camera_Offset == 0x4, "FCollisionResponseContainer::Camera offset is not 4");
	auto constexpr FCollisionResponseContainer_PhysicsBody_Offset = offsetof(FCollisionResponseContainer, PhysicsBody);
	static_assert(FCollisionResponseContainer_PhysicsBody_Offset == 0x5, "FCollisionResponseContainer::PhysicsBody offset is not 5");
	auto constexpr FCollisionResponseContainer_Vehicle_Offset = offsetof(FCollisionResponseContainer, Vehicle);
	static_assert(FCollisionResponseContainer_Vehicle_Offset == 0x6, "FCollisionResponseContainer::Vehicle offset is not 6");
	auto constexpr FCollisionResponseContainer_Destructible_Offset = offsetof(FCollisionResponseContainer, Destructible);
	static_assert(FCollisionResponseContainer_Destructible_Offset == 0x7, "FCollisionResponseContainer::Destructible offset is not 7");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel1_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel1);
	static_assert(FCollisionResponseContainer_EngineTraceChannel1_Offset == 0x8, "FCollisionResponseContainer::EngineTraceChannel1 offset is not 8");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel2_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel2);
	static_assert(FCollisionResponseContainer_EngineTraceChannel2_Offset == 0x9, "FCollisionResponseContainer::EngineTraceChannel2 offset is not 9");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel3_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel3);
	static_assert(FCollisionResponseContainer_EngineTraceChannel3_Offset == 0xa, "FCollisionResponseContainer::EngineTraceChannel3 offset is not a");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel4_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel4);
	static_assert(FCollisionResponseContainer_EngineTraceChannel4_Offset == 0xb, "FCollisionResponseContainer::EngineTraceChannel4 offset is not b");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel5_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel5);
	static_assert(FCollisionResponseContainer_EngineTraceChannel5_Offset == 0xc, "FCollisionResponseContainer::EngineTraceChannel5 offset is not c");
	auto constexpr FCollisionResponseContainer_EngineTraceChannel6_Offset = offsetof(FCollisionResponseContainer, EngineTraceChannel6);
	static_assert(FCollisionResponseContainer_EngineTraceChannel6_Offset == 0xd, "FCollisionResponseContainer::EngineTraceChannel6 offset is not d");
	auto constexpr FCollisionResponseContainer_GameTraceChannel1_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel1);
	static_assert(FCollisionResponseContainer_GameTraceChannel1_Offset == 0xe, "FCollisionResponseContainer::GameTraceChannel1 offset is not e");
	auto constexpr FCollisionResponseContainer_GameTraceChannel2_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel2);
	static_assert(FCollisionResponseContainer_GameTraceChannel2_Offset == 0xf, "FCollisionResponseContainer::GameTraceChannel2 offset is not f");
	auto constexpr FCollisionResponseContainer_GameTraceChannel3_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel3);
	static_assert(FCollisionResponseContainer_GameTraceChannel3_Offset == 0x10, "FCollisionResponseContainer::GameTraceChannel3 offset is not 10");
	auto constexpr FCollisionResponseContainer_GameTraceChannel4_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel4);
	static_assert(FCollisionResponseContainer_GameTraceChannel4_Offset == 0x11, "FCollisionResponseContainer::GameTraceChannel4 offset is not 11");
	auto constexpr FCollisionResponseContainer_GameTraceChannel5_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel5);
	static_assert(FCollisionResponseContainer_GameTraceChannel5_Offset == 0x12, "FCollisionResponseContainer::GameTraceChannel5 offset is not 12");
	auto constexpr FCollisionResponseContainer_GameTraceChannel6_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel6);
	static_assert(FCollisionResponseContainer_GameTraceChannel6_Offset == 0x13, "FCollisionResponseContainer::GameTraceChannel6 offset is not 13");
	auto constexpr FCollisionResponseContainer_GameTraceChannel7_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel7);
	static_assert(FCollisionResponseContainer_GameTraceChannel7_Offset == 0x14, "FCollisionResponseContainer::GameTraceChannel7 offset is not 14");
	auto constexpr FCollisionResponseContainer_GameTraceChannel8_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel8);
	static_assert(FCollisionResponseContainer_GameTraceChannel8_Offset == 0x15, "FCollisionResponseContainer::GameTraceChannel8 offset is not 15");
	auto constexpr FCollisionResponseContainer_GameTraceChannel9_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel9);
	static_assert(FCollisionResponseContainer_GameTraceChannel9_Offset == 0x16, "FCollisionResponseContainer::GameTraceChannel9 offset is not 16");
	auto constexpr FCollisionResponseContainer_GameTraceChannel10_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel10);
	static_assert(FCollisionResponseContainer_GameTraceChannel10_Offset == 0x17, "FCollisionResponseContainer::GameTraceChannel10 offset is not 17");
	auto constexpr FCollisionResponseContainer_GameTraceChannel11_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel11);
	static_assert(FCollisionResponseContainer_GameTraceChannel11_Offset == 0x18, "FCollisionResponseContainer::GameTraceChannel11 offset is not 18");
	auto constexpr FCollisionResponseContainer_GameTraceChannel12_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel12);
	static_assert(FCollisionResponseContainer_GameTraceChannel12_Offset == 0x19, "FCollisionResponseContainer::GameTraceChannel12 offset is not 19");
	auto constexpr FCollisionResponseContainer_GameTraceChannel13_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel13);
	static_assert(FCollisionResponseContainer_GameTraceChannel13_Offset == 0x1a, "FCollisionResponseContainer::GameTraceChannel13 offset is not 1a");
	auto constexpr FCollisionResponseContainer_GameTraceChannel14_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel14);
	static_assert(FCollisionResponseContainer_GameTraceChannel14_Offset == 0x1b, "FCollisionResponseContainer::GameTraceChannel14 offset is not 1b");
	auto constexpr FCollisionResponseContainer_GameTraceChannel15_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel15);
	static_assert(FCollisionResponseContainer_GameTraceChannel15_Offset == 0x1c, "FCollisionResponseContainer::GameTraceChannel15 offset is not 1c");
	auto constexpr FCollisionResponseContainer_GameTraceChannel16_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel16);
	static_assert(FCollisionResponseContainer_GameTraceChannel16_Offset == 0x1d, "FCollisionResponseContainer::GameTraceChannel16 offset is not 1d");
	auto constexpr FCollisionResponseContainer_GameTraceChannel17_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel17);
	static_assert(FCollisionResponseContainer_GameTraceChannel17_Offset == 0x1e, "FCollisionResponseContainer::GameTraceChannel17 offset is not 1e");
	auto constexpr FCollisionResponseContainer_GameTraceChannel18_Offset = offsetof(FCollisionResponseContainer, GameTraceChannel18);
	static_assert(FCollisionResponseContainer_GameTraceChannel18_Offset == 0x1f, "FCollisionResponseContainer::GameTraceChannel18 offset is not 1f");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
