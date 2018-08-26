#pragma once
#include "UMovieScene3DConstraintSection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DAttachSection // Size: 0x100
	: public UMovieScene3DConstraintSection // Size: 0xE0
{
private:
	typedef UMovieScene3DAttachSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(80); // id32("Class MovieSceneTracks.MovieScene3DAttachSection")
		return ptr;
	}
	FName AttachSocketName; /* Ofs: 0xE0 Size: 0x8 - NameProperty MovieSceneTracks.MovieScene3DAttachSection.AttachSocketName */
	FName AttachComponentName; /* Ofs: 0xE8 Size: 0x8 - NameProperty MovieSceneTracks.MovieScene3DAttachSection.AttachComponentName */
	uint8_t boolFieldF0;
	uint8_t UnknownDataF1[0xF];


	inline bool SetAttachSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0xE0, value); }
	inline bool SetAttachComponentName(t_structHelper inst, FName value) { inst.WriteOffset(0xE8, value); }
	inline bool bConstrainTx()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbConstrainTx(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bConstrainTy()
	{
		return boolFieldF0& 0x2;
	}
	inline bool SetbConstrainTy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bConstrainTz()
	{
		return boolFieldF0& 0x4;
	}
	inline bool SetbConstrainTz(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bConstrainRx()
	{
		return boolFieldF0& 0x8;
	}
	inline bool SetbConstrainRx(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bConstrainRy()
	{
		return boolFieldF0& 0x10;
	}
	inline bool SetbConstrainRy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bConstrainRz()
	{
		return boolFieldF0& 0x20;
	}
	inline bool SetbConstrainRz(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DAttachSection = sizeof(UMovieScene3DAttachSection); // 256
    static_assert(sizeof(UMovieScene3DAttachSection) == 0x100, "Size of UMovieScene3DAttachSection is not correct.");
	auto constexpr UMovieScene3DAttachSection_AttachSocketName_Offset = offsetof(UMovieScene3DAttachSection, AttachSocketName);
	static_assert(UMovieScene3DAttachSection_AttachSocketName_Offset == 0xe0, "UMovieScene3DAttachSection::AttachSocketName offset is not e0");
	auto constexpr UMovieScene3DAttachSection_AttachComponentName_Offset = offsetof(UMovieScene3DAttachSection, AttachComponentName);
	static_assert(UMovieScene3DAttachSection_AttachComponentName_Offset == 0xe8, "UMovieScene3DAttachSection::AttachComponentName offset is not e8");
	auto constexpr UMovieScene3DAttachSection_boolFieldF0_Offset = offsetof(UMovieScene3DAttachSection, boolFieldF0);
	static_assert(UMovieScene3DAttachSection_boolFieldF0_Offset == 0xf0, "UMovieScene3DAttachSection::boolFieldF0 offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
