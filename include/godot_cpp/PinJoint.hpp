#ifndef PINJOINT_H
#define PINJOINT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Joint.hpp"


namespace godot {



class GD_CPP_BINDING_API PinJoint : public Joint {
public:

	void _init();

	const static int PARAM_BIAS = 0;
	const static int PARAM_DAMPING = 1;
	const static int PARAM_IMPULSE_CLAMP = 2;


	void set_param(const int param, const float value);
	float get_param(const int param) const;
};

}
#endif
