#pragma once
#include "EBTDecoratorLogic.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBTDecoratorLogic // Size: 0x4
{
public:
    TEnumAsByte<enum EBTDecoratorLogic> Operation; /* Ofs: 0x0 Size: 0x1 ByteProperty AIModule.BTDecoratorLogic.Operation */
    uint8_t UnknownData1[0x1];
    uint16_t Number; /* Ofs: 0x2 Size: 0x2 UInt16Property AIModule.BTDecoratorLogic.Number */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBTDecoratorLogic = sizeof(FBTDecoratorLogic); // 4
    static_assert(sizeof(FBTDecoratorLogic) == 0x4, "Size of FBTDecoratorLogic is not correct.");
	auto constexpr FBTDecoratorLogic_Operation_Offset = offsetof(FBTDecoratorLogic, Operation);
	static_assert(FBTDecoratorLogic_Operation_Offset == 0x0, "FBTDecoratorLogic::Operation offset is not 0");
	auto constexpr FBTDecoratorLogic_Number_Offset = offsetof(FBTDecoratorLogic, Number);
	static_assert(FBTDecoratorLogic_Number_Offset == 0x2, "FBTDecoratorLogic::Number offset is not 2");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
