#ifndef OCCLUDERPOLYGON2D_H
#define OCCLUDERPOLYGON2D_H

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



class GD_CPP_BINDING_API OccluderPolygon2D : public Resource {
public:

	void _init();

	const static int CULL_CLOCKWISE = 1;
	const static int CULL_COUNTER_CLOCKWISE = 2;
	const static int CULL_DISABLED = 0;


	void set_closed(const bool closed);
	bool is_closed() const;
	void set_cull_mode(const int cull_mode);
	int get_cull_mode() const;
	void set_polygon(const PoolVector2Array polygon);
	PoolVector2Array get_polygon() const;
};

}
#endif
