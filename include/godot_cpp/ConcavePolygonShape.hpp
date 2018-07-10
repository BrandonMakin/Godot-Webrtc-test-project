#ifndef CONCAVEPOLYGONSHAPE_H
#define CONCAVEPOLYGONSHAPE_H

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



class GD_CPP_BINDING_API ConcavePolygonShape : public Shape {
public:

	void _init();



	void set_faces(const PoolVector3Array faces);
	PoolVector3Array get_faces() const;
};

}
#endif
