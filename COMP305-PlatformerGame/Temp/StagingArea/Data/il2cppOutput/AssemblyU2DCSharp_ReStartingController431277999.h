#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// GameController
struct GameController_t2782302542;
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

// ReStartingController
struct  ReStartingController_t431277999  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ReStartingController::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_2;
	// GameController ReStartingController::_gameController
	GameController_t2782302542 * ____gameController_3;
	// UnityEngine.UI.Text ReStartingController::GameTitleLabel1
	Text_t9039225 * ___GameTitleLabel1_4;
	// UnityEngine.UI.Text ReStartingController::GameTitleLabel2
	Text_t9039225 * ___GameTitleLabel2_5;
	// UnityEngine.UI.Text ReStartingController::GameOver
	Text_t9039225 * ___GameOver_6;
	// UnityEngine.UI.Text ReStartingController::Score
	Text_t9039225 * ___Score_7;
	// UnityEngine.AudioSource ReStartingController::LaughSound
	AudioSource_t1740077639 * ___LaughSound_8;

public:
	inline static int32_t get_offset_of__gameControllerObject_2() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ____gameControllerObject_2)); }
	inline GameObject_t3674682005 * get__gameControllerObject_2() const { return ____gameControllerObject_2; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_2() { return &____gameControllerObject_2; }
	inline void set__gameControllerObject_2(GameObject_t3674682005 * value)
	{
		____gameControllerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_2, value);
	}

	inline static int32_t get_offset_of__gameController_3() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ____gameController_3)); }
	inline GameController_t2782302542 * get__gameController_3() const { return ____gameController_3; }
	inline GameController_t2782302542 ** get_address_of__gameController_3() { return &____gameController_3; }
	inline void set__gameController_3(GameController_t2782302542 * value)
	{
		____gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_3, value);
	}

	inline static int32_t get_offset_of_GameTitleLabel1_4() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ___GameTitleLabel1_4)); }
	inline Text_t9039225 * get_GameTitleLabel1_4() const { return ___GameTitleLabel1_4; }
	inline Text_t9039225 ** get_address_of_GameTitleLabel1_4() { return &___GameTitleLabel1_4; }
	inline void set_GameTitleLabel1_4(Text_t9039225 * value)
	{
		___GameTitleLabel1_4 = value;
		Il2CppCodeGenWriteBarrier(&___GameTitleLabel1_4, value);
	}

	inline static int32_t get_offset_of_GameTitleLabel2_5() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ___GameTitleLabel2_5)); }
	inline Text_t9039225 * get_GameTitleLabel2_5() const { return ___GameTitleLabel2_5; }
	inline Text_t9039225 ** get_address_of_GameTitleLabel2_5() { return &___GameTitleLabel2_5; }
	inline void set_GameTitleLabel2_5(Text_t9039225 * value)
	{
		___GameTitleLabel2_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameTitleLabel2_5, value);
	}

	inline static int32_t get_offset_of_GameOver_6() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ___GameOver_6)); }
	inline Text_t9039225 * get_GameOver_6() const { return ___GameOver_6; }
	inline Text_t9039225 ** get_address_of_GameOver_6() { return &___GameOver_6; }
	inline void set_GameOver_6(Text_t9039225 * value)
	{
		___GameOver_6 = value;
		Il2CppCodeGenWriteBarrier(&___GameOver_6, value);
	}

	inline static int32_t get_offset_of_Score_7() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ___Score_7)); }
	inline Text_t9039225 * get_Score_7() const { return ___Score_7; }
	inline Text_t9039225 ** get_address_of_Score_7() { return &___Score_7; }
	inline void set_Score_7(Text_t9039225 * value)
	{
		___Score_7 = value;
		Il2CppCodeGenWriteBarrier(&___Score_7, value);
	}

	inline static int32_t get_offset_of_LaughSound_8() { return static_cast<int32_t>(offsetof(ReStartingController_t431277999, ___LaughSound_8)); }
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
