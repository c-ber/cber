#pragma once
#include "FSoundClassProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundClass // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef USoundClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1207); // id32("Class Engine.SoundClass")
		return ptr;
	}
	FSoundClassProperties Properties; /* Ofs: 0x30 Size: 0x2C - StructProperty Engine.SoundClass.Properties */
	uint8_t UnknownData5C[0x4];
	TArray<ExternalPtr<struct USoundClass>> ChildClasses; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.SoundClass.ChildClasses */
	TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.SoundClass.PassiveSoundMixModifiers */
	ExternalPtr<struct USoundClass> ParentClass; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.SoundClass.ParentClass */


	inline bool SetProperties(t_structHelper inst, FSoundClassProperties value) { inst.WriteOffset(0x30, value); }
	inline bool SetChildClasses(t_structHelper inst, TArray<ExternalPtr<struct USoundClass>> value) { inst.WriteOffset(0x60, value); }
	inline bool SetPassiveSoundMixModifiers(t_structHelper inst, TArray<struct FPassiveSoundMixModifier> value) { inst.WriteOffset(0x70, value); }
	inline bool SetParentClass(t_structHelper inst, ExternalPtr<struct USoundClass> value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundClass = sizeof(USoundClass); // 136
    static_assert(sizeof(USoundClass) == 0x88, "Size of USoundClass is not correct.");
	auto constexpr USoundClass_Properties_Offset = offsetof(USoundClass, Properties);
	static_assert(USoundClass_Properties_Offset == 0x30, "USoundClass::Properties offset is not 30");
	auto constexpr USoundClass_ChildClasses_Offset = offsetof(USoundClass, ChildClasses);
	static_assert(USoundClass_ChildClasses_Offset == 0x60, "USoundClass::ChildClasses offset is not 60");
	auto constexpr USoundClass_PassiveSoundMixModifiers_Offset = offsetof(USoundClass, PassiveSoundMixModifiers);
	static_assert(USoundClass_PassiveSoundMixModifiers_Offset == 0x70, "USoundClass::PassiveSoundMixModifiers offset is not 70");
	auto constexpr USoundClass_ParentClass_Offset = offsetof(USoundClass, ParentClass);
	static_assert(USoundClass_ParentClass_Offset == 0x80, "USoundClass::ParentClass offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
