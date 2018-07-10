#ifndef RAYCAST2D_H
#define RAYCAST2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node2D.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API RayCast2D : public Node2D {
public:

	void _init();



	void set_enabled(const bool enabled);
	bool is_enabled() const;
	void set_cast_to(const Vector2 local_point);
	Vector2 get_cast_to() const;
	bool is_colliding() const;
	void force_raycast_update();
	Object *get_collider() const;
	int get_collider_shape() const;
	Vector2 get_collision_point() const;
	Vector2 get_collision_normal() const;
	void add_exception_rid(const RID rid);
	void add_exception(const Object *node);
	void remove_exception_rid(const RID rid);
	void remove_exception(const Object *node);
	void clear_exceptions();
	void set_layer_mask(const int mask);
	int get_layer_mask() const;
	void set_type_mask(const int mask);
	int get_type_mask() const;
	void set_exclude_parent_body(const bool mask);
	bool get_exclude_parent_body() const;
};

}
#endif
