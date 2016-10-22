#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// GameController
struct GameController_t2782302542;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform PlayerController::_transform
	Transform_t1659122786 * ____transform_2;
	// UnityEngine.Rigidbody2D PlayerController::_rigidbody
	Rigidbody2D_t1743771669 * ____rigidbody_3;
	// UnityEngine.Animator PlayerController::_animator
	Animator_t2776330603 * ____animator_4;
	// UnityEngine.GameObject PlayerController::_camera
	GameObject_t3674682005 * ____camera_5;
	// UnityEngine.GameObject PlayerController::_spawnPoint
	GameObject_t3674682005 * ____spawnPoint_6;
	// UnityEngine.GameObject PlayerController::_gameControllerObject
	GameObject_t3674682005 * ____gameControllerObject_7;
	// GameController PlayerController::_gameController
	GameController_t2782302542 * ____gameController_8;
	// System.Int32 PlayerController::EnemydethCount
	int32_t ___EnemydethCount_9;
	// System.Single PlayerController::_move
	float ____move_10;
	// System.Single PlayerController::_jump
	float ____jump_11;
	// System.Boolean PlayerController::_isFacingRight
	bool ____isFacingRight_12;
	// System.Boolean PlayerController::_isGrounded
	bool ____isGrounded_13;
	// System.Boolean PlayerController::_isIdeal
	bool ____isIdeal_14;
	// System.Single PlayerController::Velocity
	float ___Velocity_15;
	// System.Single PlayerController::JumpForce
	float ___JumpForce_16;
	// UnityEngine.AudioSource PlayerController::JumpSound
	AudioSource_t1740077639 * ___JumpSound_17;
	// UnityEngine.AudioSource PlayerController::DeathSound
	AudioSource_t1740077639 * ___DeathSound_18;
	// UnityEngine.AudioSource PlayerController::CoinSound
	AudioSource_t1740077639 * ___CoinSound_19;
	// UnityEngine.AudioSource PlayerController::HurtSound
	AudioSource_t1740077639 * ___HurtSound_20;
	// UnityEngine.AudioSource PlayerController::EnemyDeadSound
	AudioSource_t1740077639 * ___EnemyDeadSound_21;
	// UnityEngine.AudioSource PlayerController::BeathingSound
	AudioSource_t1740077639 * ___BeathingSound_22;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____transform_2)); }
	inline Transform_t1659122786 * get__transform_2() const { return ____transform_2; }
	inline Transform_t1659122786 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t1659122786 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____rigidbody_3)); }
	inline Rigidbody2D_t1743771669 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody2D_t1743771669 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_3, value);
	}

	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____animator_4)); }
	inline Animator_t2776330603 * get__animator_4() const { return ____animator_4; }
	inline Animator_t2776330603 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t2776330603 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier(&____animator_4, value);
	}

	inline static int32_t get_offset_of__camera_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____camera_5)); }
	inline GameObject_t3674682005 * get__camera_5() const { return ____camera_5; }
	inline GameObject_t3674682005 ** get_address_of__camera_5() { return &____camera_5; }
	inline void set__camera_5(GameObject_t3674682005 * value)
	{
		____camera_5 = value;
		Il2CppCodeGenWriteBarrier(&____camera_5, value);
	}

	inline static int32_t get_offset_of__spawnPoint_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____spawnPoint_6)); }
	inline GameObject_t3674682005 * get__spawnPoint_6() const { return ____spawnPoint_6; }
	inline GameObject_t3674682005 ** get_address_of__spawnPoint_6() { return &____spawnPoint_6; }
	inline void set__spawnPoint_6(GameObject_t3674682005 * value)
	{
		____spawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&____spawnPoint_6, value);
	}

	inline static int32_t get_offset_of__gameControllerObject_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____gameControllerObject_7)); }
	inline GameObject_t3674682005 * get__gameControllerObject_7() const { return ____gameControllerObject_7; }
	inline GameObject_t3674682005 ** get_address_of__gameControllerObject_7() { return &____gameControllerObject_7; }
	inline void set__gameControllerObject_7(GameObject_t3674682005 * value)
	{
		____gameControllerObject_7 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_7, value);
	}

	inline static int32_t get_offset_of__gameController_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____gameController_8)); }
	inline GameController_t2782302542 * get__gameController_8() const { return ____gameController_8; }
	inline GameController_t2782302542 ** get_address_of__gameController_8() { return &____gameController_8; }
	inline void set__gameController_8(GameController_t2782302542 * value)
	{
		____gameController_8 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_8, value);
	}

	inline static int32_t get_offset_of_EnemydethCount_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___EnemydethCount_9)); }
	inline int32_t get_EnemydethCount_9() const { return ___EnemydethCount_9; }
	inline int32_t* get_address_of_EnemydethCount_9() { return &___EnemydethCount_9; }
	inline void set_EnemydethCount_9(int32_t value)
	{
		___EnemydethCount_9 = value;
	}

	inline static int32_t get_offset_of__move_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____move_10)); }
	inline float get__move_10() const { return ____move_10; }
	inline float* get_address_of__move_10() { return &____move_10; }
	inline void set__move_10(float value)
	{
		____move_10 = value;
	}

	inline static int32_t get_offset_of__jump_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____jump_11)); }
	inline float get__jump_11() const { return ____jump_11; }
	inline float* get_address_of__jump_11() { return &____jump_11; }
	inline void set__jump_11(float value)
	{
		____jump_11 = value;
	}

	inline static int32_t get_offset_of__isFacingRight_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____isFacingRight_12)); }
	inline bool get__isFacingRight_12() const { return ____isFacingRight_12; }
	inline bool* get_address_of__isFacingRight_12() { return &____isFacingRight_12; }
	inline void set__isFacingRight_12(bool value)
	{
		____isFacingRight_12 = value;
	}

	inline static int32_t get_offset_of__isGrounded_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____isGrounded_13)); }
	inline bool get__isGrounded_13() const { return ____isGrounded_13; }
	inline bool* get_address_of__isGrounded_13() { return &____isGrounded_13; }
	inline void set__isGrounded_13(bool value)
	{
		____isGrounded_13 = value;
	}

	inline static int32_t get_offset_of__isIdeal_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____isIdeal_14)); }
	inline bool get__isIdeal_14() const { return ____isIdeal_14; }
	inline bool* get_address_of__isIdeal_14() { return &____isIdeal_14; }
	inline void set__isIdeal_14(bool value)
	{
		____isIdeal_14 = value;
	}

	inline static int32_t get_offset_of_Velocity_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___Velocity_15)); }
	inline float get_Velocity_15() const { return ___Velocity_15; }
	inline float* get_address_of_Velocity_15() { return &___Velocity_15; }
	inline void set_Velocity_15(float value)
	{
		___Velocity_15 = value;
	}

	inline static int32_t get_offset_of_JumpForce_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpForce_16)); }
	inline float get_JumpForce_16() const { return ___JumpForce_16; }
	inline float* get_address_of_JumpForce_16() { return &___JumpForce_16; }
	inline void set_JumpForce_16(float value)
	{
		___JumpForce_16 = value;
	}

	inline static int32_t get_offset_of_JumpSound_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpSound_17)); }
	inline AudioSource_t1740077639 * get_JumpSound_17() const { return ___JumpSound_17; }
	inline AudioSource_t1740077639 ** get_address_of_JumpSound_17() { return &___JumpSound_17; }
	inline void set_JumpSound_17(AudioSource_t1740077639 * value)
	{
		___JumpSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSound_17, value);
	}

	inline static int32_t get_offset_of_DeathSound_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___DeathSound_18)); }
	inline AudioSource_t1740077639 * get_DeathSound_18() const { return ___DeathSound_18; }
	inline AudioSource_t1740077639 ** get_address_of_DeathSound_18() { return &___DeathSound_18; }
	inline void set_DeathSound_18(AudioSource_t1740077639 * value)
	{
		___DeathSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___DeathSound_18, value);
	}

	inline static int32_t get_offset_of_CoinSound_19() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___CoinSound_19)); }
	inline AudioSource_t1740077639 * get_CoinSound_19() const { return ___CoinSound_19; }
	inline AudioSource_t1740077639 ** get_address_of_CoinSound_19() { return &___CoinSound_19; }
	inline void set_CoinSound_19(AudioSource_t1740077639 * value)
	{
		___CoinSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___CoinSound_19, value);
	}

	inline static int32_t get_offset_of_HurtSound_20() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___HurtSound_20)); }
	inline AudioSource_t1740077639 * get_HurtSound_20() const { return ___HurtSound_20; }
	inline AudioSource_t1740077639 ** get_address_of_HurtSound_20() { return &___HurtSound_20; }
	inline void set_HurtSound_20(AudioSource_t1740077639 * value)
	{
		___HurtSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___HurtSound_20, value);
	}

	inline static int32_t get_offset_of_EnemyDeadSound_21() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___EnemyDeadSound_21)); }
	inline AudioSource_t1740077639 * get_EnemyDeadSound_21() const { return ___EnemyDeadSound_21; }
	inline AudioSource_t1740077639 ** get_address_of_EnemyDeadSound_21() { return &___EnemyDeadSound_21; }
	inline void set_EnemyDeadSound_21(AudioSource_t1740077639 * value)
	{
		___EnemyDeadSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyDeadSound_21, value);
	}

	inline static int32_t get_offset_of_BeathingSound_22() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___BeathingSound_22)); }
	inline AudioSource_t1740077639 * get_BeathingSound_22() const { return ___BeathingSound_22; }
	inline AudioSource_t1740077639 ** get_address_of_BeathingSound_22() { return &___BeathingSound_22; }
	inline void set_BeathingSound_22(AudioSource_t1740077639 * value)
	{
		___BeathingSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___BeathingSound_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
