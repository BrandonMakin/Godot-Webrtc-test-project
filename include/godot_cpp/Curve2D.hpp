#ifndef CURVE2D_H
#define CURVE2D_H

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



class GD_CPP_BINDING_API Curve2D : public Resource {
public:

	void _init();



	int get_point_count() const;
	void add_point(const Vector2 pos, const Vector2 in = Vector2(0, 0), const Vector2 out = Vector2(0, 0), const int atpos = -1);
	void set_point_pos(const int idx, const Vector2 pos);
	Vector2 get_point_pos(const int idx) const;
	void set_point_in(const int idx, const Vector2 pos);
	Vector2 get_point_in(const int idx) const;
	void set_point_out(const int idx, const Vector2 pos);
	Vector2 get_point_out(const int idx) const;
	void remove_point(const int idx);
	void clear_points();
	Vector2 interpolate(const int idx, const float t) const;
	Vector2 interpolatef(const float fofs) const;
	void set_bake_interval(const float distance);
	float get_bake_interval() const;
	float get_baked_length() const;
	Vector2 interpolate_baked(const float offset, const bool cubic = false) const;
	PoolVector2Array get_baked_points() const;
	PoolVector2Array tesselate(const int max_stages = 5, const float tolerance_degrees = 4) const;
	Dictionary _get_data() const;
	void _set_data(const Dictionary arg0);
};

}
#endif
