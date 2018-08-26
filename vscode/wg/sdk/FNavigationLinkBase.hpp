#pragma once
#include "ENavLinkDirection.hpp"
#include "FNavAgentSelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationLinkBase // Size: 0x38
{
public:
    float LeftProjectHeight; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.NavigationLinkBase.LeftProjectHeight */
    float MaxFallDownLength; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.NavigationLinkBase.MaxFallDownLength */
    TEnumAsByte<enum ENavLinkDirection> Direction; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.NavigationLinkBase.Direction */
    uint8_t UnknownData9[0x7];
    float SnapRadius; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.NavigationLinkBase.SnapRadius */
    float SnapHeight; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.NavigationLinkBase.SnapHeight */
    FNavAgentSelector SupportedAgents; /* Ofs: 0x18 Size: 0x4 StructProperty Engine.NavigationLinkBase.SupportedAgents */
    bool bSupportsAgent0 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationLinkBase.bSupportsAgent0 */
    bool bSupportsAgent1 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationLinkBase.bSupportsAgent1 */
    bool bSupportsAgent2 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationLinkBase.bSupportsAgent2 */
    bool bSupportsAgent3 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 08 BoolProperty Engine.NavigationLinkBase.bSupportsAgent3 */
    bool bSupportsAgent4 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 10 BoolProperty Engine.NavigationLinkBase.bSupportsAgent4 */
    bool bSupportsAgent5 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 20 BoolProperty Engine.NavigationLinkBase.bSupportsAgent5 */
    bool bSupportsAgent6 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 40 BoolProperty Engine.NavigationLinkBase.bSupportsAgent6 */
    bool bSupportsAgent7 : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 80 BoolProperty Engine.NavigationLinkBase.bSupportsAgent7 */
    bool bSupportsAgent8 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationLinkBase.bSupportsAgent8 */
    bool bSupportsAgent9 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationLinkBase.bSupportsAgent9 */
    bool bSupportsAgent10 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationLinkBase.bSupportsAgent10 */
    bool bSupportsAgent11 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 08 BoolProperty Engine.NavigationLinkBase.bSupportsAgent11 */
    bool bSupportsAgent12 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 10 BoolProperty Engine.NavigationLinkBase.bSupportsAgent12 */
    bool bSupportsAgent13 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 20 BoolProperty Engine.NavigationLinkBase.bSupportsAgent13 */
    bool bSupportsAgent14 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 40 BoolProperty Engine.NavigationLinkBase.bSupportsAgent14 */
    bool bSupportsAgent15 : 1; /* Ofs: 0x1D Size: 0x1 BitMask: 80 BoolProperty Engine.NavigationLinkBase.bSupportsAgent15 */
    uint8_t UnknownData1E[0x2];
    bool bUseSnapHeight : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationLinkBase.bUseSnapHeight */
    bool bSnapToCheapestArea : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationLinkBase.bSnapToCheapestArea */
    bool bCustomFlag0 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 04 BoolProperty Engine.NavigationLinkBase.bCustomFlag0 */
    bool bCustomFlag1 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 08 BoolProperty Engine.NavigationLinkBase.bCustomFlag1 */
    bool bCustomFlag2 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 10 BoolProperty Engine.NavigationLinkBase.bCustomFlag2 */
    bool bCustomFlag3 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 20 BoolProperty Engine.NavigationLinkBase.bCustomFlag3 */
    bool bCustomFlag4 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 40 BoolProperty Engine.NavigationLinkBase.bCustomFlag4 */
    bool bCustomFlag5 : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 80 BoolProperty Engine.NavigationLinkBase.bCustomFlag5 */
    bool bCustomFlag6 : 1; /* Ofs: 0x21 Size: 0x1 BitMask: 01 BoolProperty Engine.NavigationLinkBase.bCustomFlag6 */
    bool bCustomFlag7 : 1; /* Ofs: 0x21 Size: 0x1 BitMask: 02 BoolProperty Engine.NavigationLinkBase.bCustomFlag7 */
    uint8_t UnknownData22[0x6];
    ExternalPtr<struct UClass> AreaClass; /* Ofs: 0x28 Size: 0x8 ClassProperty Engine.NavigationLinkBase.AreaClass */
    uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationLinkBase = sizeof(FNavigationLinkBase); // 56
    static_assert(sizeof(FNavigationLinkBase) == 0x38, "Size of FNavigationLinkBase is not correct.");
	auto constexpr FNavigationLinkBase_LeftProjectHeight_Offset = offsetof(FNavigationLinkBase, LeftProjectHeight);
	static_assert(FNavigationLinkBase_LeftProjectHeight_Offset == 0x0, "FNavigationLinkBase::LeftProjectHeight offset is not 0");
	auto constexpr FNavigationLinkBase_MaxFallDownLength_Offset = offsetof(FNavigationLinkBase, MaxFallDownLength);
	static_assert(FNavigationLinkBase_MaxFallDownLength_Offset == 0x4, "FNavigationLinkBase::MaxFallDownLength offset is not 4");
	auto constexpr FNavigationLinkBase_Direction_Offset = offsetof(FNavigationLinkBase, Direction);
	static_assert(FNavigationLinkBase_Direction_Offset == 0x8, "FNavigationLinkBase::Direction offset is not 8");
	auto constexpr FNavigationLinkBase_SnapRadius_Offset = offsetof(FNavigationLinkBase, SnapRadius);
	static_assert(FNavigationLinkBase_SnapRadius_Offset == 0x10, "FNavigationLinkBase::SnapRadius offset is not 10");
	auto constexpr FNavigationLinkBase_SnapHeight_Offset = offsetof(FNavigationLinkBase, SnapHeight);
	static_assert(FNavigationLinkBase_SnapHeight_Offset == 0x14, "FNavigationLinkBase::SnapHeight offset is not 14");
	auto constexpr FNavigationLinkBase_SupportedAgents_Offset = offsetof(FNavigationLinkBase, SupportedAgents);
	static_assert(FNavigationLinkBase_SupportedAgents_Offset == 0x18, "FNavigationLinkBase::SupportedAgents offset is not 18");
	auto constexpr FNavigationLinkBase_AreaClass_Offset = offsetof(FNavigationLinkBase, AreaClass);
	static_assert(FNavigationLinkBase_AreaClass_Offset == 0x28, "FNavigationLinkBase::AreaClass offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
