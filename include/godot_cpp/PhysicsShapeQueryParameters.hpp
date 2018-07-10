#ifndef PHYSICSSHAPEQUERYPARAMETERS_H
#define PHYSICSSHAPEQUERYPARAMETERS_H

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

class Shape;


class GD_CPP_BINDING_API PhysicsShapeQueryParameters : public Reference {
public:

	void _init();



	void set_shape(const Shape *shape);
	void set_shape_rid(const RID shape);
	RID get_shape_rid() const;
	void set_transform(const Transform transform);
	Transform get_transform() const;
	void set_margin(const float margin);
	float get_margin() const;
	void set_layer_mask(const int layer_mask);
	int get_layer_mask() const;
	void set_object_type_mask(const int object_type_mask);
	int get_object_type_mask() const;
	void set_exclude(const Array exclude);
	Array get_exclude() const;
};

}
#endif
