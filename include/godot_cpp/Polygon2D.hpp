#ifndef POLYGON2D_H
#define POLYGON2D_H

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

class Object;


class GD_CPP_BINDING_API Polygon2D : public Node2D {
public:

	void _init();



	void set_polygon(const PoolVector2Array polygon);
	PoolVector2Array get_polygon() const;
	void set_uv(const PoolVector2Array uv);
	PoolVector2Array get_uv() const;
	void set_color(const Color color);
	Color get_color() const;
	void set_vertex_colors(const PoolColorArray vertex_colors);
	PoolColorArray get_vertex_colors() const;
	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_texture_offset(const Vector2 texture_offset);
	Vector2 get_texture_offset() const;
	void set_texture_rotation(const float texture_rotation);
	float get_texture_rotation() const;
	void _set_texture_rotationd(const float texture_rotation);
	float _get_texture_rotationd() const;
	void set_texture_scale(const Vector2 texture_scale);
	Vector2 get_texture_scale() const;
	void set_invert(const bool invert);
	bool get_invert() const;
	void set_invert_border(const float invert_border);
	float get_invert_border() const;
	void set_offset(const Vector2 offset);
	Vector2 get_offset() const;
};

}
#endif
