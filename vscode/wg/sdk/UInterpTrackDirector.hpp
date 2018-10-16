#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackDirector // Size: 0x90
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackDirector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(798); // id32("Class Engine.InterpTrackDirector")
		return ptr;
	}
	TArray<struct FDirectorTrackCut> CutTrack; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackDirector.CutTrack */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetCutTrack(t_structHelper inst, TArray<struct FDirectorTrackCut> value) { inst.WriteOffset(0x78, value); }
	inline bool bSimulateCameraCutsOnClients()
	{
		return boolField88& 0x1;
	}
	inline bool SetbSimulateCameraCutsOnClients(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackDirector = sizeof(UInterpTrackDirector); // 144
    static_assert(sizeof(UInterpTrackDirector) == 0x90, "Size of UInterpTrackDirector is not correct.");
	auto constexpr UInterpTrackDirector_CutTrack_Offset = offsetof(UInterpTrackDirector, CutTrack);
	static_assert(UInterpTrackDirector_CutTrack_Offset == 0x78, "UInterpTrackDirector::CutTrack offset is not 78");
	auto constexpr UInterpTrackDirector_boolField88_Offset = offsetof(UInterpTrackDirector, boolField88);
	static_assert(UInterpTrackDirector_boolField88_Offset == 0x88, "UInterpTrackDirector::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
