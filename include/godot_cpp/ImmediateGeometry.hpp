#ifndef IMMEDIATEGEOMETRY_H
#define IMMEDIATEGEOMETRY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "GeometryInstance.hpp"


namespace godot {

class Texture;


class GD_CPP_BINDING_API ImmediateGeometry : public GeometryInstance {
public:

	void _init();



	void begin(const int primitive, const Texture *texture = nullptr);
	void set_normal(const Vector3 normal);
	void set_tangent(const Plane tangent);
	void set_color(const Color color);
	void set_uv(const Vector2 uv);
	void set_uv2(const Vector2 uv);
	void add_vertex(const Vector3 pos);
	void add_sphere(const int lats, const int lons, const float radius, const bool add_uv = true);
	void end();
	void clear();
};

}
#endif
