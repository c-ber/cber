#pragma once
#include "UMatchPreparer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNormalMatchPreparer // Size: 0x78
	: public UMatchPreparer // Size: 0x60
{
private:
	typedef UNormalMatchPreparer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1928); // id32("Class TslGame.NormalMatchPreparer")
		return ptr;
	}
	uint8_t UnknownData60[0x10];
	int32_t AvailablePlayerStartCount; /* Ofs: 0x70 Size: 0x4 - IntProperty TslGame.NormalMatchPreparer.AvailablePlayerStartCount */
	uint8_t UnknownData74[0x4];


	inline bool SetAvailablePlayerStartCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNormalMatchPreparer = sizeof(UNormalMatchPreparer); // 120
    static_assert(sizeof(UNormalMatchPreparer) == 0x78, "Size of UNormalMatchPreparer is not correct.");
	auto constexpr UNormalMatchPreparer_AvailablePlayerStartCount_Offset = offsetof(UNormalMatchPreparer, AvailablePlayerStartCount);
	static_assert(UNormalMatchPreparer_AvailablePlayerStartCount_Offset == 0x70, "UNormalMatchPreparer::AvailablePlayerStartCount offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
