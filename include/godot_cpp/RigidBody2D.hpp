#ifndef RIGIDBODY2D_H
#define RIGIDBODY2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "PhysicsBody2D.hpp"


namespace godot {

class Physics2DTestMotionResult;
class Physics2DDirectBodyState;
class Object;


class GD_CPP_BINDING_API RigidBody2D : public PhysicsBody2D {
public:

	void _init();

	const static int CCD_MODE_CAST_RAY = 1;
	const static int CCD_MODE_CAST_SHAPE = 2;
	const static int CCD_MODE_DISABLED = 0;
	const static int MODE_CHARACTER = 2;
	const static int MODE_KINEMATIC = 3;
	const static int MODE_RIGID = 0;
	const static int MODE_STATIC = 1;


	void _integrate_forces(const Physics2DDirectBodyState *state) const;
	void set_mode(const int mode);
	int get_mode() const;
	void set_mass(const float mass);
	float get_mass() const;
	float get_inertia() const;
	void set_inertia(const float inertia);
	void set_weight(const float weight);
	float get_weight() const;
	void set_friction(const float friction);
	float get_friction() const;
	void set_bounce(const float bounce);
	float get_bounce() const;
	void set_gravity_scale(const float gravity_scale);
	float get_gravity_scale() const;
	void set_linear_damp(const float linear_damp);
	float get_linear_damp() const;
	void set_angular_damp(const float angular_damp);
	float get_angular_damp() const;
	void set_linear_velocity(const Vector2 linear_velocity);
	Vector2 get_linear_velocity() const;
	void set_angular_velocity(const float angular_velocity);
	float get_angular_velocity() const;
	void set_max_contacts_reported(const int amount);
	int get_max_contacts_reported() const;
	void set_use_custom_integrator(const bool enable);
	bool is_using_custom_integrator();
	void set_contact_monitor(const bool enabled);
	bool is_contact_monitor_enabled() const;
	void set_continuous_collision_detection_mode(const int mode);
	int get_continuous_collision_detection_mode() const;
	void set_axis_velocity(const Vector2 axis_velocity);
	void apply_impulse(const Vector2 offset, const Vector2 impulse);
	void set_applied_force(const Vector2 force);
	Vector2 get_applied_force() const;
	void set_applied_torque(const float torque);
	float get_applied_torque() const;
	void add_force(const Vector2 offset, const Vector2 force);
	void set_sleeping(const bool sleeping);
	bool is_sleeping() const;
	void set_can_sleep(const bool able_to_sleep);
	bool is_able_to_sleep() const;
	bool test_motion(const Vector2 motion, const float margin = 0.08, const Physics2DTestMotionResult *result = nullptr);
	void _direct_state_changed(const Object *arg0);
	void _body_enter_tree(const int arg0);
	void _body_exit_tree(const int arg0);
	Array get_colliding_bodies() const;
};

}
#endif
