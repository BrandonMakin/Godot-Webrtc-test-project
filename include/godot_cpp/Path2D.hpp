#ifndef PATH2D_H
#define PATH2D_H

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

class Curve2D;


class GD_CPP_BINDING_API Path2D : public Node2D {
public:

	void _init();



	void set_curve(const Curve2D *curve);
	Curve2D *get_curve() const;
	void _curve_changed();
};

}
#endif
