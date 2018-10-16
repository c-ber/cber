#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeightedBlendable // Size: 0x10
{
public:
    float Weight; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.WeightedBlendable.Weight */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UObject> Object; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.WeightedBlendable.Object */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeightedBlendable = sizeof(FWeightedBlendable); // 16
    static_assert(sizeof(FWeightedBlendable) == 0x10, "Size of FWeightedBlendable is not correct.");
	auto constexpr FWeightedBlendable_Weight_Offset = offsetof(FWeightedBlendable, Weight);
	static_assert(FWeightedBlendable_Weight_Offset == 0x0, "FWeightedBlendable::Weight offset is not 0");
	auto constexpr FWeightedBlendable_Object_Offset = offsetof(FWeightedBlendable, Object);
	static_assert(FWeightedBlendable_Object_Offset == 0x8, "FWeightedBlendable::Object offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
