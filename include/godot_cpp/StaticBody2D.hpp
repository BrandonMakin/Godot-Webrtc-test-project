#ifndef STATICBODY2D_H
#define STATICBODY2D_H

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



class GD_CPP_BINDING_API StaticBody2D : public PhysicsBody2D {
public:

	void _init();



	void set_constant_linear_velocity(const Vector2 vel);
	void set_constant_angular_velocity(const float vel);
	Vector2 get_constant_linear_velocity() const;
	float get_constant_angular_velocity() const;
	void set_friction(const float friction);
	float get_friction() const;
	void set_bounce(const float bounce);
	float get_bounce() const;
};

}
#endif
