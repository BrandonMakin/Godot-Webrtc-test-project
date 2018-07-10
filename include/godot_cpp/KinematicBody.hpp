#ifndef KINEMATICBODY_H
#define KINEMATICBODY_H

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



class GD_CPP_BINDING_API KinematicBody : public PhysicsBody {
public:

	void _init();



	Vector3 move(const Vector3 rel_vec);
	Vector3 move_to(const Vector3 position);
	bool can_teleport_to(const Vector3 position);
	bool is_colliding() const;
	Vector3 get_collision_pos() const;
	Vector3 get_collision_normal() const;
	Vector3 get_collider_velocity() const;
	Variant get_collider() const;
	int get_collider_shape() const;
	void set_collide_with_static_bodies(const bool enable);
	bool can_collide_with_static_bodies() const;
	void set_collide_with_kinematic_bodies(const bool enable);
	bool can_collide_with_kinematic_bodies() const;
	void set_collide_with_rigid_bodies(const bool enable);
	bool can_collide_with_rigid_bodies() const;
	void set_collide_with_character_bodies(const bool enable);
	bool can_collide_with_character_bodies() const;
	void set_collision_margin(const float pixels);
	float get_collision_margin() const;
};

}
#endif
