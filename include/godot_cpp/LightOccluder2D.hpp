#ifndef LIGHTOCCLUDER2D_H
#define LIGHTOCCLUDER2D_H

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

class OccluderPolygon2D;


class GD_CPP_BINDING_API LightOccluder2D : public Node2D {
public:

	void _init();



	void set_occluder_polygon(const OccluderPolygon2D *polygon);
	OccluderPolygon2D *get_occluder_polygon() const;
	void set_occluder_light_mask(const int mask);
	int get_occluder_light_mask() const;
	void _poly_changed();
};

}
#endif
