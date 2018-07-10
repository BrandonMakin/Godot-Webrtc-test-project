#ifndef VISUALINSTANCE_H
#define VISUALINSTANCE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualInstance : public Spatial {
public:

	void _init();



	RID _get_visual_instance_rid() const;
	void set_base(const RID base);
	void set_layer_mask(const int mask);
	int get_layer_mask() const;
	Rect3 get_transformed_aabb() const;
	Rect3 get_aabb() const;
};

}
#endif
