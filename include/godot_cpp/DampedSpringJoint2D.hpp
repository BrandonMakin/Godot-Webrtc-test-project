#ifndef DAMPEDSPRINGJOINT2D_H
#define DAMPEDSPRINGJOINT2D_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Joint2D.hpp"


namespace godot {



class GD_CPP_BINDING_API DampedSpringJoint2D : public Joint2D {
public:

	void _init();



	void set_length(const float length);
	float get_length() const;
	void set_rest_length(const float rest_length);
	float get_rest_length() const;
	void set_stiffness(const float stiffness);
	float get_stiffness() const;
	void set_damping(const float damping);
	float get_damping() const;
};

}
#endif
