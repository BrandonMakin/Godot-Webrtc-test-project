#ifndef PHYSICS2DTESTMOTIONRESULT_H
#define PHYSICS2DTESTMOTIONRESULT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API Physics2DTestMotionResult : public Reference {
public:

	void _init();



	Vector2 get_motion() const;
	Vector2 get_motion_remainder() const;
	Vector2 get_collision_point() const;
	Vector2 get_collision_normal() const;
	Vector2 get_collider_velocity() const;
	int get_collider_id() const;
	RID get_collider_rid() const;
	Object *get_collider() const;
	int get_collider_shape() const;
};

}
#endif
