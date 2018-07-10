#ifndef AREA_H
#define AREA_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CollisionObject.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API Area : public CollisionObject {
public:

	void _init();



	void _body_enter_tree(const int id);
	void _body_exit_tree(const int id);
	void _area_enter_tree(const int id);
	void _area_exit_tree(const int id);
	void set_space_override_mode(const int enable);
	int get_space_override_mode() const;
	void set_gravity_is_point(const bool enable);
	bool is_gravity_a_point() const;
	void set_gravity_distance_scale(const float distance_scale);
	float get_gravity_distance_scale() const;
	void set_gravity_vector(const Vector3 vector);
	Vector3 get_gravity_vector() const;
	void set_gravity(const float gravity);
	float get_gravity() const;
	void set_angular_damp(const float angular_damp);
	float get_angular_damp() const;
	void set_linear_damp(const float linear_damp);
	float get_linear_damp() const;
	void set_priority(const float priority);
	float get_priority() const;
	void set_collision_mask(const int collision_mask);
	int get_collision_mask() const;
	void set_layer_mask(const int layer_mask);
	int get_layer_mask() const;
	void set_collision_mask_bit(const int bit, const bool value);
	bool get_collision_mask_bit(const int bit) const;
	void set_layer_mask_bit(const int bit, const bool value);
	bool get_layer_mask_bit(const int bit) const;
	void set_monitorable(const bool enable);
	bool is_monitorable() const;
	void set_monitoring(const bool enable);
	bool is_monitoring() const;
	Array get_overlapping_bodies() const;
	Array get_overlapping_areas() const;
	bool overlaps_body(const Object *body) const;
	bool overlaps_area(const Object *area) const;
	void _body_inout(const int arg0, const RID arg1, const int arg2, const int arg3, const int arg4);
	void _area_inout(const int arg0, const RID arg1, const int arg2, const int arg3, const int arg4);
};

}
#endif
