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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2729311524  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform EnemyController::_transform
	Transform_t1659122786 * ____transform_2;
	// UnityEngine.Rigidbody2D EnemyController::_rigidbody
	Rigidbody2D_t1743771669 * ____rigidbody_3;
	// System.Boolean EnemyController::_isGrounded
	bool ____isGrounded_4;
	// System.Boolean EnemyController::_isGroundAhead
	bool ____isGroundAhead_5;
	// System.Boolean EnemyController::_isPillarAhead
	bool ____isPillarAhead_6;
	// System.Boolean EnemyController::_isPlayerDetected
	bool ____isPlayerDetected_7;
	// System.Int32 EnemyController::_angryMovementCount
	int32_t ____angryMovementCount_8;
	// System.Single EnemyController::Speed
	float ___Speed_9;
	// System.Single EnemyController::MaximumSpeed
	float ___MaximumSpeed_10;
	// UnityEngine.Transform EnemyController::SightStart
	Transform_t1659122786 * ___SightStart_11;
	// UnityEngine.Transform EnemyController::SightEnd
	Transform_t1659122786 * ___SightEnd_12;
	// UnityEngine.Transform EnemyController::LineOfSight
	Transform_t1659122786 * ___LineOfSight_13;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____transform_2)); }
	inline Transform_t1659122786 * get__transform_2() const { return ____transform_2; }
	inline Transform_t1659122786 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t1659122786 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____rigidbody_3)); }
	inline Rigidbody2D_t1743771669 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody2D_t1743771669 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_3, value);
	}

	inline static int32_t get_offset_of__isGrounded_4() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____isGrounded_4)); }
	inline bool get__isGrounded_4() const { return ____isGrounded_4; }
	inline bool* get_address_of__isGrounded_4() { return &____isGrounded_4; }
	inline void set__isGrounded_4(bool value)
	{
		____isGrounded_4 = value;
	}

	inline static int32_t get_offset_of__isGroundAhead_5() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____isGroundAhead_5)); }
	inline bool get__isGroundAhead_5() const { return ____isGroundAhead_5; }
	inline bool* get_address_of__isGroundAhead_5() { return &____isGroundAhead_5; }
	inline void set__isGroundAhead_5(bool value)
	{
		____isGroundAhead_5 = value;
	}

	inline static int32_t get_offset_of__isPillarAhead_6() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____isPillarAhead_6)); }
	inline bool get__isPillarAhead_6() const { return ____isPillarAhead_6; }
	inline bool* get_address_of__isPillarAhead_6() { return &____isPillarAhead_6; }
	inline void set__isPillarAhead_6(bool value)
	{
		____isPillarAhead_6 = value;
	}

	inline static int32_t get_offset_of__isPlayerDetected_7() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____isPlayerDetected_7)); }
	inline bool get__isPlayerDetected_7() const { return ____isPlayerDetected_7; }
	inline bool* get_address_of__isPlayerDetected_7() { return &____isPlayerDetected_7; }
	inline void set__isPlayerDetected_7(bool value)
	{
		____isPlayerDetected_7 = value;
	}

	inline static int32_t get_offset_of__angryMovementCount_8() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ____angryMovementCount_8)); }
	inline int32_t get__angryMovementCount_8() const { return ____angryMovementCount_8; }
	inline int32_t* get_address_of__angryMovementCount_8() { return &____angryMovementCount_8; }
	inline void set__angryMovementCount_8(int32_t value)
	{
		____angryMovementCount_8 = value;
	}

	inline static int32_t get_offset_of_Speed_9() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___Speed_9)); }
	inline float get_Speed_9() const { return ___Speed_9; }
	inline float* get_address_of_Speed_9() { return &___Speed_9; }
	inline void set_Speed_9(float value)
	{
		___Speed_9 = value;
	}

	inline static int32_t get_offset_of_MaximumSpeed_10() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___MaximumSpeed_10)); }
	inline float get_MaximumSpeed_10() const { return ___MaximumSpeed_10; }
	inline float* get_address_of_MaximumSpeed_10() { return &___MaximumSpeed_10; }
	inline void set_MaximumSpeed_10(float value)
	{
		___MaximumSpeed_10 = value;
	}

	inline static int32_t get_offset_of_SightStart_11() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___SightStart_11)); }
	inline Transform_t1659122786 * get_SightStart_11() const { return ___SightStart_11; }
	inline Transform_t1659122786 ** get_address_of_SightStart_11() { return &___SightStart_11; }
	inline void set_SightStart_11(Transform_t1659122786 * value)
	{
		___SightStart_11 = value;
		Il2CppCodeGenWriteBarrier(&___SightStart_11, value);
	}

	inline static int32_t get_offset_of_SightEnd_12() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___SightEnd_12)); }
	inline Transform_t1659122786 * get_SightEnd_12() const { return ___SightEnd_12; }
	inline Transform_t1659122786 ** get_address_of_SightEnd_12() { return &___SightEnd_12; }
	inline void set_SightEnd_12(Transform_t1659122786 * value)
	{
		___SightEnd_12 = value;
		Il2CppCodeGenWriteBarrier(&___SightEnd_12, value);
	}

	inline static int32_t get_offset_of_LineOfSight_13() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___LineOfSight_13)); }
	inline Transform_t1659122786 * get_LineOfSight_13() const { return ___LineOfSight_13; }
	inline Transform_t1659122786 ** get_address_of_LineOfSight_13() { return &___LineOfSight_13; }
	inline void set_LineOfSight_13(Transform_t1659122786 * value)
	{
		___LineOfSight_13 = value;
		Il2CppCodeGenWriteBarrier(&___LineOfSight_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
