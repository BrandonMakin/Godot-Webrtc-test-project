#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "PhysicsBody.hpp"


namespace godot {

class PhysicsDirectBodyState;
class Object;


class GD_CPP_BINDING_API RigidBody : public PhysicsBody {
public:

	void _init();

	const static int MODE_CHARACTER = 2;
	const static int MODE_KINEMATIC = 3;
	const static int MODE_RIGID = 0;
	const static int MODE_STATIC = 1;


	void _integrate_forces(const PhysicsDirectBodyState *state) const;
	void set_mode(const int mode);
	int get_mode() const;
	void set_mass(const float mass);
	float get_mass() const;
	void set_weight(const float weight);
	float get_weight() const;
	void set_friction(const float friction);
	float get_friction() const;
	void set_bounce(const float bounce);
	float get_bounce() const;
	void set_linear_velocity(const Vector3 linear_velocity);
	Vector3 get_linear_velocity() const;
	void set_angular_velocity(const Vector3 angular_velocity);
	Vector3 get_angular_velocity() const;
	void set_gravity_scale(const float gravity_scale);
	float get_gravity_scale() const;
	void set_linear_damp(const float linear_damp);
	float get_linear_damp() const;
	void set_angular_damp(const float angular_damp);
	float get_angular_damp() const;
	void set_max_contacts_reported(const int amount);
	int get_max_contacts_reported() const;
	void set_use_custom_integrator(const bool enable);
	bool is_using_custom_integrator();
	void set_contact_monitor(const bool enabled);
	bool is_contact_monitor_enabled() const;
	void set_use_continuous_collision_detection(const bool enable);
	bool is_using_continuous_collision_detection() const;
	void set_axis_velocity(const Vector3 axis_velocity);
	void apply_impulse(const Vector3 pos, const Vector3 impulse);
	void set_sleeping(const bool sleeping);
	bool is_sleeping() const;
	void set_can_sleep(const bool able_to_sleep);
	bool is_able_to_sleep() const;
	void _direct_state_changed(const Object *arg0);
	void _body_enter_tree(const int arg0);
	void _body_exit_tree(const int arg0);
	void set_axis_lock(const int axis_lock);
	int get_axis_lock() const;
	Array get_colliding_bodies() const;
};

}
#endif
