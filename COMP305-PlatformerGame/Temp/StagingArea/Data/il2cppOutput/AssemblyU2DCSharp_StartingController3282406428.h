#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartingController
struct  StartingController_t3282406428  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text StartingController::GameTitleLabel1
	Text_t9039225 * ___GameTitleLabel1_2;
	// UnityEngine.UI.Text StartingController::GameTitleLabel2
	Text_t9039225 * ___GameTitleLabel2_3;
	// UnityEngine.UI.Text StartingController::Authore
	Text_t9039225 * ___Authore_4;
	// UnityEngine.UI.Text StartingController::Version
	Text_t9039225 * ___Version_5;
	// UnityEngine.UI.Text StartingController::p
	Text_t9039225 * ___p_6;
	// System.Int32 StartingController::count
	int32_t ___count_7;
	// UnityEngine.AudioSource StartingController::LaughSound
	AudioSource_t1740077639 * ___LaughSound_8;

public:
	inline static int32_t get_offset_of_GameTitleLabel1_2() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___GameTitleLabel1_2)); }
	inline Text_t9039225 * get_GameTitleLabel1_2() const { return ___GameTitleLabel1_2; }
	inline Text_t9039225 ** get_address_of_GameTitleLabel1_2() { return &___GameTitleLabel1_2; }
	inline void set_GameTitleLabel1_2(Text_t9039225 * value)
	{
		___GameTitleLabel1_2 = value;
		Il2CppCodeGenWriteBarrier(&___GameTitleLabel1_2, value);
	}

	inline static int32_t get_offset_of_GameTitleLabel2_3() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___GameTitleLabel2_3)); }
	inline Text_t9039225 * get_GameTitleLabel2_3() const { return ___GameTitleLabel2_3; }
	inline Text_t9039225 ** get_address_of_GameTitleLabel2_3() { return &___GameTitleLabel2_3; }
	inline void set_GameTitleLabel2_3(Text_t9039225 * value)
	{
		___GameTitleLabel2_3 = value;
		Il2CppCodeGenWriteBarrier(&___GameTitleLabel2_3, value);
	}

	inline static int32_t get_offset_of_Authore_4() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___Authore_4)); }
	inline Text_t9039225 * get_Authore_4() const { return ___Authore_4; }
	inline Text_t9039225 ** get_address_of_Authore_4() { return &___Authore_4; }
	inline void set_Authore_4(Text_t9039225 * value)
	{
		___Authore_4 = value;
		Il2CppCodeGenWriteBarrier(&___Authore_4, value);
	}

	inline static int32_t get_offset_of_Version_5() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___Version_5)); }
	inline Text_t9039225 * get_Version_5() const { return ___Version_5; }
	inline Text_t9039225 ** get_address_of_Version_5() { return &___Version_5; }
	inline void set_Version_5(Text_t9039225 * value)
	{
		___Version_5 = value;
		Il2CppCodeGenWriteBarrier(&___Version_5, value);
	}

	inline static int32_t get_offset_of_p_6() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___p_6)); }
	inline Text_t9039225 * get_p_6() const { return ___p_6; }
	inline Text_t9039225 ** get_address_of_p_6() { return &___p_6; }
	inline void set_p_6(Text_t9039225 * value)
	{
		___p_6 = value;
		Il2CppCodeGenWriteBarrier(&___p_6, value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_LaughSound_8() { return static_cast<int32_t>(offsetof(StartingController_t3282406428, ___LaughSound_8)); }
	inline AudioSource_t1740077639 * get_LaughSound_8() const { return ___LaughSound_8; }
	inline AudioSource_t1740077639 ** get_address_of_LaughSound_8() { return &___LaughSound_8; }
	inline void set_LaughSound_8(AudioSource_t1740077639 * value)
	{
		___LaughSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___LaughSound_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
