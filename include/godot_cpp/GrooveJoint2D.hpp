#ifndef GROOVEJOINT2D_H
#define GROOVEJOINT2D_H

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



class GD_CPP_BINDING_API GrooveJoint2D : public Joint2D {
public:

	void _init();



	void set_length(const float length);
	float get_length() const;
	void set_initial_offset(const float offset);
	float get_initial_offset() const;
};

}
#endif
