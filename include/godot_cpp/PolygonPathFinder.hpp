#ifndef POLYGONPATHFINDER_H
#define POLYGONPATHFINDER_H

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



class GD_CPP_BINDING_API PolygonPathFinder : public Resource {
public:

	void _init();



	void setup(const PoolVector2Array points, const PoolIntArray connections);
	PoolVector2Array find_path(const Vector2 from, const Vector2 to);
	PoolVector2Array get_intersections(const Vector2 from, const Vector2 to) const;
	Vector2 get_closest_point(const Vector2 point) const;
	bool is_point_inside(const Vector2 point) const;
	void set_point_penalty(const int idx, const float penalty);
	float get_point_penalty(const int idx) const;
	Rect2 get_bounds() const;
	void _set_data(const Dictionary arg0);
	Dictionary _get_data() const;
};

}
#endif
