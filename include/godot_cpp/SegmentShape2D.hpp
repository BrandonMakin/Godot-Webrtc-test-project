#ifndef SEGMENTSHAPE2D_H
#define SEGMENTSHAPE2D_H

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



class GD_CPP_BINDING_API SegmentShape2D : public Shape2D {
public:

	void _init();



	void set_a(const Vector2 a);
	Vector2 get_a() const;
	void set_b(const Vector2 b);
	Vector2 get_b() const;
};

}
#endif
