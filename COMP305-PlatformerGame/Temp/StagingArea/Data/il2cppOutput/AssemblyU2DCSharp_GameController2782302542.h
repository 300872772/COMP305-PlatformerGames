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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 GameController::_livesValue
	int32_t ____livesValue_2;
	// System.Int32 GameController::_scoreValue
	int32_t ____scoreValue_3;
	// UnityEngine.UI.Text GameController::LivesLabel
	Text_t9039225 * ___LivesLabel_4;
	// UnityEngine.UI.Text GameController::ScoreLabel
	Text_t9039225 * ___ScoreLabel_5;

public:
	inline static int32_t get_offset_of__livesValue_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ____livesValue_2)); }
	inline int32_t get__livesValue_2() const { return ____livesValue_2; }
	inline int32_t* get_address_of__livesValue_2() { return &____livesValue_2; }
	inline void set__livesValue_2(int32_t value)
	{
		____livesValue_2 = value;
	}

	inline static int32_t get_offset_of__scoreValue_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ____scoreValue_3)); }
	inline int32_t get__scoreValue_3() const { return ____scoreValue_3; }
	inline int32_t* get_address_of__scoreValue_3() { return &____scoreValue_3; }
	inline void set__scoreValue_3(int32_t value)
	{
		____scoreValue_3 = value;
	}

	inline static int32_t get_offset_of_LivesLabel_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___LivesLabel_4)); }
	inline Text_t9039225 * get_LivesLabel_4() const { return ___LivesLabel_4; }
	inline Text_t9039225 ** get_address_of_LivesLabel_4() { return &___LivesLabel_4; }
	inline void set_LivesLabel_4(Text_t9039225 * value)
	{
		___LivesLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___LivesLabel_4, value);
	}

	inline static int32_t get_offset_of_ScoreLabel_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___ScoreLabel_5)); }
	inline Text_t9039225 * get_ScoreLabel_5() const { return ___ScoreLabel_5; }
	inline Text_t9039225 ** get_address_of_ScoreLabel_5() { return &___ScoreLabel_5; }
	inline void set_ScoreLabel_5(Text_t9039225 * value)
	{
		___ScoreLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreLabel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
