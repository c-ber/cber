#pragma once
#include "UUserWidget.hpp"
#include "FLevelSequencePlayerSnapshot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequenceBurnIn // Size: 0x2A0
	: public UUserWidget // Size: 0x248
{
private:
	typedef ULevelSequenceBurnIn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1625); // id32("Class LevelSequence.LevelSequenceBurnIn")
		return ptr;
	}
	FLevelSequencePlayerSnapshot FrameInformation; /* Ofs: 0x248 Size: 0x50 - StructProperty LevelSequence.LevelSequenceBurnIn.FrameInformation */
	ExternalPtr<struct ULevelSequenceActor> LevelSequenceActor; /* Ofs: 0x298 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceBurnIn.LevelSequenceActor */


	inline bool SetFrameInformation(t_structHelper inst, FLevelSequencePlayerSnapshot value) { inst.WriteOffset(0x248, value); }
	inline bool SetLevelSequenceActor(t_structHelper inst, ExternalPtr<struct ULevelSequenceActor> value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequenceBurnIn = sizeof(ULevelSequenceBurnIn); // 672
    static_assert(sizeof(ULevelSequenceBurnIn) == 0x2A0, "Size of ULevelSequenceBurnIn is not correct.");
	auto constexpr ULevelSequenceBurnIn_FrameInformation_Offset = offsetof(ULevelSequenceBurnIn, FrameInformation);
	static_assert(ULevelSequenceBurnIn_FrameInformation_Offset == 0x248, "ULevelSequenceBurnIn::FrameInformation offset is not 248");
	auto constexpr ULevelSequenceBurnIn_LevelSequenceActor_Offset = offsetof(ULevelSequenceBurnIn, LevelSequenceActor);
	static_assert(ULevelSequenceBurnIn_LevelSequenceActor_Offset == 0x298, "ULevelSequenceBurnIn::LevelSequenceActor offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
