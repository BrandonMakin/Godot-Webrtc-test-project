#ifndef CURVE3D_H
#define CURVE3D_H

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



class GD_CPP_BINDING_API Curve3D : public Resource {
public:

	void _init();



	int get_point_count() const;
	void add_point(const Vector3 pos, const Vector3 in = Vector3(0, 0, 0), const Vector3 out = Vector3(0, 0, 0), const int atpos = -1);
	void set_point_pos(const int idx, const Vector3 pos);
	Vector3 get_point_pos(const int idx) const;
	void set_point_tilt(const int idx, const float tilt);
	float get_point_tilt(const int idx) const;
	void set_point_in(const int idx, const Vector3 pos);
	Vector3 get_point_in(const int idx) const;
	void set_point_out(const int idx, const Vector3 pos);
	Vector3 get_point_out(const int idx) const;
	void remove_point(const int idx);
	void clear_points();
	Vector3 interpolate(const int idx, const float t) const;
	Vector3 interpolatef(const float fofs) const;
	void set_bake_interval(const float distance);
	float get_bake_interval() const;
	float get_baked_length() const;
	Vector3 interpolate_baked(const float offset, const bool cubic = false) const;
	PoolVector3Array get_baked_points() const;
	PoolRealArray get_baked_tilts() const;
	PoolVector3Array tesselate(const int max_stages = 5, const float tolerance_degrees = 4) const;
	Dictionary _get_data() const;
	void _set_data(const Dictionary arg0);
};

}
#endif
