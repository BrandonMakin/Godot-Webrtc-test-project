#ifndef PHYSICS2DDIRECTBODYSTATE_H
#define PHYSICS2DDIRECTBODYSTATE_H

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

class Object;
class Physics2DDirectSpaceState;


class GD_CPP_BINDING_API Physics2DDirectBodyState : public Object {
public:

	void _init();



	Vector2 get_total_gravity() const;
	float get_total_linear_damp() const;
	float get_total_angular_damp() const;
	float get_inverse_mass() const;
	float get_inverse_inertia() const;
	void set_linear_velocity(const Vector2 velocity);
	Vector2 get_linear_velocity() const;
	void set_angular_velocity(const float velocity);
	float get_angular_velocity() const;
	void set_transform(const Transform2D transform);
	Transform2D get_transform() const;
	void set_sleep_state(const bool enabled);
	bool is_sleeping() const;
	int get_contact_count() const;
	Vector2 get_contact_local_pos(const int contact_idx) const;
	Vector2 get_contact_local_normal(const int contact_idx) const;
	int get_contact_local_shape(const int contact_idx) const;
	RID get_contact_collider(const int contact_idx) const;
	Vector2 get_contact_collider_pos(const int contact_idx) const;
	int get_contact_collider_id(const int contact_idx) const;
	Object *get_contact_collider_object(const int contact_idx) const;
	int get_contact_collider_shape(const int contact_idx) const;
	Variant get_contact_collider_shape_metadata(const int contact_idx) const;
	Vector2 get_contact_collider_velocity_at_pos(const int contact_idx) const;
	float get_step() const;
	void integrate_forces();
	Physics2DDirectSpaceState *get_space_state();
};

}
#endif
