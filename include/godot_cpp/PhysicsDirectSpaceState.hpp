#ifndef PHYSICSDIRECTSPACESTATE_H
#define PHYSICSDIRECTSPACESTATE_H

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

class PhysicsShapeQueryParameters;


class GD_CPP_BINDING_API PhysicsDirectSpaceState : public Object {
public:

	void _init();

	const static int TYPE_MASK_AREA = 16;
	const static int TYPE_MASK_CHARACTER_BODY = 8;
	const static int TYPE_MASK_COLLISION = 15;
	const static int TYPE_MASK_KINEMATIC_BODY = 2;
	const static int TYPE_MASK_RIGID_BODY = 4;
	const static int TYPE_MASK_STATIC_BODY = 1;


	Dictionary intersect_ray(const Vector3 from, const Vector3 to, const Array exclude = Array(), const int layer_mask = 2147483647, const int type_mask = 15);
	Array intersect_shape(const PhysicsShapeQueryParameters *shape, const int max_results = 32);
	Array cast_motion(const PhysicsShapeQueryParameters *shape, const Vector3 motion);
	Array collide_shape(const PhysicsShapeQueryParameters *shape, const int max_results = 32);
	Dictionary get_rest_info(const PhysicsShapeQueryParameters *shape);
};

}
#endif
