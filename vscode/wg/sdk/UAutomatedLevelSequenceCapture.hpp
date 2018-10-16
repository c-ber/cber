#pragma once
#include "UMovieSceneCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAutomatedLevelSequenceCapture // Size: 0x250
	: public UMovieSceneCapture // Size: 0x250
{
private:
	typedef UAutomatedLevelSequenceCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(158); // id32("Class MovieSceneCapture.AutomatedLevelSequenceCapture")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAutomatedLevelSequenceCapture = sizeof(UAutomatedLevelSequenceCapture); // 592
    static_assert(sizeof(UAutomatedLevelSequenceCapture) == 0x250, "Size of UAutomatedLevelSequenceCapture is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
