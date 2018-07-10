#ifndef SHAPE2D_H
#define SHAPE2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {

class Shape2D;


class GD_CPP_BINDING_API Shape2D : public Resource {
public:

	void _init();



	void set_custom_solver_bias(const float bias);
	float get_custom_solver_bias() const;
	bool collide(const Transform2D local_xform, const Shape2D *with_shape, const Transform2D shape_xform);
	bool collide_with_motion(const Transform2D local_xform, const Vector2 local_motion, const Shape2D *with_shape, const Transform2D shape_xform, const Vector2 shape_motion);
	Variant collide_and_get_contacts(const Transform2D local_xform, const Shape2D *with_shape, const Transform2D shape_xform);
	Variant collide_with_motion_and_get_contacts(const Transform2D local_xform, const Vector2 local_motion, const Shape2D *with_shape, const Transform2D shape_xform, const Vector2 shape_motion);
};

}
#endif
