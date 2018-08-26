#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundSubmix // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef USoundSubmix t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1202); // id32("Class Engine.SoundSubmix")
		return ptr;
	}
	TArray<ExternalPtr<struct USoundSubmix>> ChildSubmixes; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.SoundSubmix.ChildSubmixes */
	ExternalPtr<struct USoundSubmix> ParentSubmix; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.SoundSubmix.ParentSubmix */
	TArray<ExternalPtr<struct USoundEffectSubmixPreset>> SubmixEffectChain; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.SoundSubmix.SubmixEffectChain */


	inline bool SetChildSubmixes(t_structHelper inst, TArray<ExternalPtr<struct USoundSubmix>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetParentSubmix(t_structHelper inst, ExternalPtr<struct USoundSubmix> value) { inst.WriteOffset(0x40, value); }
	inline bool SetSubmixEffectChain(t_structHelper inst, TArray<ExternalPtr<struct USoundEffectSubmixPreset>> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundSubmix = sizeof(USoundSubmix); // 88
    static_assert(sizeof(USoundSubmix) == 0x58, "Size of USoundSubmix is not correct.");
	auto constexpr USoundSubmix_ChildSubmixes_Offset = offsetof(USoundSubmix, ChildSubmixes);
	static_assert(USoundSubmix_ChildSubmixes_Offset == 0x30, "USoundSubmix::ChildSubmixes offset is not 30");
	auto constexpr USoundSubmix_ParentSubmix_Offset = offsetof(USoundSubmix, ParentSubmix);
	static_assert(USoundSubmix_ParentSubmix_Offset == 0x40, "USoundSubmix::ParentSubmix offset is not 40");
	auto constexpr USoundSubmix_SubmixEffectChain_Offset = offsetof(USoundSubmix, SubmixEffectChain);
	static_assert(USoundSubmix_SubmixEffectChain_Offset == 0x48, "USoundSubmix::SubmixEffectChain offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
