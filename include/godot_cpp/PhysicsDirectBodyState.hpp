#ifndef PHYSICSDIRECTBODYSTATE_H
#define PHYSICSDIRECTBODYSTATE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {

class PhysicsDirectSpaceState;
class Object;


class GD_CPP_BINDING_API PhysicsDirectBodyState : public Object {
public:

	void _init();



	Vector3 get_total_gravity() const;
	float get_total_linear_damp() const;
	float get_total_angular_damp() const;
	Vector3 get_center_of_mass() const;
	Basis get_principal_inetria_axes() const;
	float get_inverse_mass() const;
	Vector3 get_inverse_inertia() const;
	void set_linear_velocity(const Vector3 velocity);
	Vector3 get_linear_velocity() const;
	void set_angular_velocity(const Vector3 velocity);
	Vector3 get_angular_velocity() const;
	void set_transform(const Transform transform);
	Transform get_transform() const;
	void add_force(const Vector3 force, const Vector3 pos);
	void apply_impulse(const Vector3 pos, const Vector3 j);
	void apply_torqe_impulse(const Vector3 j);
	void set_sleep_state(const bool enabled);
	bool is_sleeping() const;
	int get_contact_count() const;
	Vector3 get_contact_local_pos(const int contact_idx) const;
	Vector3 get_contact_local_normal(const int contact_idx) const;
	int get_contact_local_shape(const int contact_idx) const;
	RID get_contact_collider(const int contact_idx) const;
	Vector3 get_contact_collider_pos(const int contact_idx) const;
	int get_contact_collider_id(const int contact_idx) const;
	Object *get_contact_collider_object(const int contact_idx) const;
	int get_contact_collider_shape(const int contact_idx) const;
	Vector3 get_contact_collider_velocity_at_pos(const int contact_idx) const;
	float get_step() const;
	void integrate_forces();
	PhysicsDirectSpaceState *get_space_state();
};

}
#endif
