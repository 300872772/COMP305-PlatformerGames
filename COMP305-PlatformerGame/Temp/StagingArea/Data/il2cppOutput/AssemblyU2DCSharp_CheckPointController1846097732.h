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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckPointController
struct  CheckPointController_t1846097732  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CheckPointController::_transform
	Transform_t1659122786 * ____transform_2;
	// UnityEngine.GameObject CheckPointController::SpawnPoint
	GameObject_t3674682005 * ___SpawnPoint_3;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(CheckPointController_t1846097732, ____transform_2)); }
	inline Transform_t1659122786 * get__transform_2() const { return ____transform_2; }
	inline Transform_t1659122786 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t1659122786 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of_SpawnPoint_3() { return static_cast<int32_t>(offsetof(CheckPointController_t1846097732, ___SpawnPoint_3)); }
	inline GameObject_t3674682005 * get_SpawnPoint_3() const { return ___SpawnPoint_3; }
	inline GameObject_t3674682005 ** get_address_of_SpawnPoint_3() { return &___SpawnPoint_3; }
	inline void set_SpawnPoint_3(GameObject_t3674682005 * value)
	{
		___SpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
