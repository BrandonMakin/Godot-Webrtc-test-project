#ifndef KINEMATICBODY2D_H
#define KINEMATICBODY2D_H

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



class GD_CPP_BINDING_API KinematicBody2D : public PhysicsBody2D {
public:

	void _init();



	Vector2 move(const Vector2 rel_vec);
	Vector2 move_to(const Vector2 position);
	Vector2 move_and_slide(const Vector2 linear_velocity, const Vector2 floor_normal = Vector2(0, 0), const float slope_stop_min_velocity = 5, const int max_bounces = 4, const float floor_max_angle = 0.785398);
	bool test_move(const Transform2D from, const Vector2 rel_vec);
	Vector2 get_travel() const;
	void revert_motion();
	bool is_colliding() const;
	Vector2 get_collision_pos() const;
	Vector2 get_collision_normal() const;
	Vector2 get_collider_velocity() const;
	Variant get_collider() const;
	int get_collider_shape() const;
	Variant get_collider_metadata() const;
	Array get_move_and_slide_colliders() const;
	bool is_move_and_slide_on_floor() const;
	bool is_move_and_slide_on_ceiling() const;
	bool is_move_and_slide_on_wall() const;
	void set_collision_margin(const float pixels);
	float get_collision_margin() const;
};

}
#endif
