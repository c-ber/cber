#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequenceBurnInInitSettings // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef ULevelSequenceBurnInInitSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1622); // id32("Class LevelSequence.LevelSequenceBurnInInitSettings")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequenceBurnInInitSettings = sizeof(ULevelSequenceBurnInInitSettings); // 48
    static_assert(sizeof(ULevelSequenceBurnInInitSettings) == 0x30, "Size of ULevelSequenceBurnInInitSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
