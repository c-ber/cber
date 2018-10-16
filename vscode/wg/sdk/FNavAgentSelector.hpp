#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavAgentSelector // Size: 0x4
{
public:
    bool bSupportsAgent0 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAgentSelector.bSupportsAgent0 */
    bool bSupportsAgent1 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAgentSelector.bSupportsAgent1 */
    bool bSupportsAgent2 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAgentSelector.bSupportsAgent2 */
    bool bSupportsAgent3 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAgentSelector.bSupportsAgent3 */
    bool bSupportsAgent4 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAgentSelector.bSupportsAgent4 */
    bool bSupportsAgent5 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAgentSelector.bSupportsAgent5 */
    bool bSupportsAgent6 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAgentSelector.bSupportsAgent6 */
    bool bSupportsAgent7 : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAgentSelector.bSupportsAgent7 */
    bool bSupportsAgent8 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.NavAgentSelector.bSupportsAgent8 */
    bool bSupportsAgent9 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 02 BoolProperty Engine.NavAgentSelector.bSupportsAgent9 */
    bool bSupportsAgent10 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 04 BoolProperty Engine.NavAgentSelector.bSupportsAgent10 */
    bool bSupportsAgent11 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 08 BoolProperty Engine.NavAgentSelector.bSupportsAgent11 */
    bool bSupportsAgent12 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 10 BoolProperty Engine.NavAgentSelector.bSupportsAgent12 */
    bool bSupportsAgent13 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 20 BoolProperty Engine.NavAgentSelector.bSupportsAgent13 */
    bool bSupportsAgent14 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 40 BoolProperty Engine.NavAgentSelector.bSupportsAgent14 */
    bool bSupportsAgent15 : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 80 BoolProperty Engine.NavAgentSelector.bSupportsAgent15 */
    uint8_t UnknownData2[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavAgentSelector = sizeof(FNavAgentSelector); // 4
    static_assert(sizeof(FNavAgentSelector) == 0x4, "Size of FNavAgentSelector is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
