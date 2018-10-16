#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryOption // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryOption t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(649); // id32("Class AIModule.EnvQueryOption")
		return ptr;
	}
	ExternalPtr<struct UEnvQueryGenerator> Generator; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AIModule.EnvQueryOption.Generator */
	TArray<ExternalPtr<struct UEnvQueryTest>> Tests; /* Ofs: 0x38 Size: 0x10 - ArrayProperty AIModule.EnvQueryOption.Tests */


	inline bool SetGenerator(t_structHelper inst, ExternalPtr<struct UEnvQueryGenerator> value) { inst.WriteOffset(0x30, value); }
	inline bool SetTests(t_structHelper inst, TArray<ExternalPtr<struct UEnvQueryTest>> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryOption = sizeof(UEnvQueryOption); // 72
    static_assert(sizeof(UEnvQueryOption) == 0x48, "Size of UEnvQueryOption is not correct.");
	auto constexpr UEnvQueryOption_Generator_Offset = offsetof(UEnvQueryOption, Generator);
	static_assert(UEnvQueryOption_Generator_Offset == 0x30, "UEnvQueryOption::Generator offset is not 30");
	auto constexpr UEnvQueryOption_Tests_Offset = offsetof(UEnvQueryOption, Tests);
	static_assert(UEnvQueryOption_Tests_Offset == 0x38, "UEnvQueryOption::Tests offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
