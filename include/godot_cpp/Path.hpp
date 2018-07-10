#ifndef PATH_H
#define PATH_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Spatial.hpp"


namespace godot {

class Curve3D;


class GD_CPP_BINDING_API Path : public Spatial {
public:

	void _init();



	void set_curve(const Curve3D *curve);
	Curve3D *get_curve() const;
	void _curve_changed();
};

}
#endif
