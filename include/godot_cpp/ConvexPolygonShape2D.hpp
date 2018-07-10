#ifndef CONVEXPOLYGONSHAPE2D_H
#define CONVEXPOLYGONSHAPE2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Shape2D.hpp"


namespace godot {



class GD_CPP_BINDING_API ConvexPolygonShape2D : public Shape2D {
public:

	void _init();



	void set_point_cloud(const PoolVector2Array point_cloud);
	void set_points(const PoolVector2Array points);
	PoolVector2Array get_points() const;
};

}
#endif
