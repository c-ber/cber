#pragma once
#include "UMovieSceneSequence.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWidgetAnimation // Size: 0x370
	: public UMovieSceneSequence // Size: 0x330
{
private:
	typedef UWidgetAnimation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(528); // id32("Class UMG.WidgetAnimation")
		return ptr;
	}
	FScriptMulticastDelegate OnAnimationStarted; /* Ofs: 0x330 Size: 0x10 - MulticastDelegateProperty UMG.WidgetAnimation.OnAnimationStarted */
	FScriptMulticastDelegate OnAnimationFinished; /* Ofs: 0x340 Size: 0x10 - MulticastDelegateProperty UMG.WidgetAnimation.OnAnimationFinished */
	ExternalPtr<struct UMovieScene> MovieScene; /* Ofs: 0x350 Size: 0x8 - ObjectProperty UMG.WidgetAnimation.MovieScene */
	TArray<struct FWidgetAnimationBinding> AnimationBindings; /* Ofs: 0x358 Size: 0x10 - ArrayProperty UMG.WidgetAnimation.AnimationBindings */
	uint8_t UnknownData368[0x8];


	inline bool SetOnAnimationStarted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x330, value); }
	inline bool SetOnAnimationFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x340, value); }
	inline bool SetMovieScene(t_structHelper inst, ExternalPtr<struct UMovieScene> value) { inst.WriteOffset(0x350, value); }
	inline bool SetAnimationBindings(t_structHelper inst, TArray<struct FWidgetAnimationBinding> value) { inst.WriteOffset(0x358, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWidgetAnimation = sizeof(UWidgetAnimation); // 880
    static_assert(sizeof(UWidgetAnimation) == 0x370, "Size of UWidgetAnimation is not correct.");
	auto constexpr UWidgetAnimation_OnAnimationStarted_Offset = offsetof(UWidgetAnimation, OnAnimationStarted);
	static_assert(UWidgetAnimation_OnAnimationStarted_Offset == 0x330, "UWidgetAnimation::OnAnimationStarted offset is not 330");
	auto constexpr UWidgetAnimation_OnAnimationFinished_Offset = offsetof(UWidgetAnimation, OnAnimationFinished);
	static_assert(UWidgetAnimation_OnAnimationFinished_Offset == 0x340, "UWidgetAnimation::OnAnimationFinished offset is not 340");
	auto constexpr UWidgetAnimation_MovieScene_Offset = offsetof(UWidgetAnimation, MovieScene);
	static_assert(UWidgetAnimation_MovieScene_Offset == 0x350, "UWidgetAnimation::MovieScene offset is not 350");
	auto constexpr UWidgetAnimation_AnimationBindings_Offset = offsetof(UWidgetAnimation, AnimationBindings);
	static_assert(UWidgetAnimation_AnimationBindings_Offset == 0x358, "UWidgetAnimation::AnimationBindings offset is not 358");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
