#ifndef CONVEXPOLYGONSHAPE_H
#define CONVEXPOLYGONSHAPE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Shape.hpp"


namespace godot {



class GD_CPP_BINDING_API ConvexPolygonShape : public Shape {
public:

	void _init();



	void set_points(const PoolVector3Array points);
	PoolVector3Array get_points() const;
};

}
#endif
