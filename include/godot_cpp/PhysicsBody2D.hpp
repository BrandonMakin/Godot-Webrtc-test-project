#ifndef PHYSICSBODY2D_H
#define PHYSICSBODY2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "CollisionObject2D.hpp"


namespace godot {

class PhysicsBody2D;


class GD_CPP_BINDING_API PhysicsBody2D : public CollisionObject2D {
public:

	void _init();



	void set_collision_layer(const int mask);
	int get_collision_layer() const;
	void set_collision_mask(const int mask);
	int get_collision_mask() const;
	void set_collision_mask_bit(const int bit, const bool value);
	bool get_collision_mask_bit(const int bit) const;
	void set_collision_layer_bit(const int bit, const bool value);
	bool get_collision_layer_bit(const int bit) const;
	void _set_layers(const int mask);
	int _get_layers() const;
	void set_one_way_collision_direction(const Vector2 dir);
	Vector2 get_one_way_collision_direction() const;
	void set_one_way_collision_max_depth(const float depth);
	float get_one_way_collision_max_depth() const;
	void add_collision_exception_with(const PhysicsBody2D *body);
	void remove_collision_exception_with(const PhysicsBody2D *body);
};

}
#endif
