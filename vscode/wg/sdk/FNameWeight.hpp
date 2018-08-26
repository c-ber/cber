#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNameWeight // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.NameWeight.Name */
    int32_t Weight; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.NameWeight.Weight */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNameWeight = sizeof(FNameWeight); // 16
    static_assert(sizeof(FNameWeight) == 0x10, "Size of FNameWeight is not correct.");
	auto constexpr FNameWeight_Name_Offset = offsetof(FNameWeight, Name);
	static_assert(FNameWeight_Name_Offset == 0x0, "FNameWeight::Name offset is not 0");
	auto constexpr FNameWeight_Weight_Offset = offsetof(FNameWeight, Weight);
	static_assert(FNameWeight_Weight_Offset == 0x8, "FNameWeight::Weight offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
