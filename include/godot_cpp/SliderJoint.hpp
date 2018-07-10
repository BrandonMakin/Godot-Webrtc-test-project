#ifndef SLIDERJOINT_H
#define SLIDERJOINT_H

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



class GD_CPP_BINDING_API SliderJoint : public Joint {
public:

	void _init();

	const static int PARAM_ANGULAR_LIMIT_DAMPING = 15;
	const static int PARAM_ANGULAR_LIMIT_LOWER = 12;
	const static int PARAM_ANGULAR_LIMIT_RESTITUTION = 14;
	const static int PARAM_ANGULAR_LIMIT_SOFTNESS = 13;
	const static int PARAM_ANGULAR_LIMIT_UPPER = 11;
	const static int PARAM_ANGULAR_MOTION_DAMPING = 18;
	const static int PARAM_ANGULAR_MOTION_RESTITUTION = 17;
	const static int PARAM_ANGULAR_MOTION_SOFTNESS = 16;
	const static int PARAM_ANGULAR_ORTHOGONAL_DAMPING = 21;
	const static int PARAM_ANGULAR_ORTHOGONAL_RESTITUTION = 20;
	const static int PARAM_ANGULAR_ORTHOGONAL_SOFTNESS = 19;
	const static int PARAM_LINEAR_LIMIT_DAMPING = 4;
	const static int PARAM_LINEAR_LIMIT_LOWER = 1;
	const static int PARAM_LINEAR_LIMIT_RESTITUTION = 3;
	const static int PARAM_LINEAR_LIMIT_SOFTNESS = 2;
	const static int PARAM_LINEAR_LIMIT_UPPER = 0;
	const static int PARAM_LINEAR_MOTION_DAMPING = 7;
	const static int PARAM_LINEAR_MOTION_RESTITUTION = 6;
	const static int PARAM_LINEAR_MOTION_SOFTNESS = 5;
	const static int PARAM_LINEAR_ORTHOGONAL_DAMPING = 10;
	const static int PARAM_LINEAR_ORTHOGONAL_RESTITUTION = 9;
	const static int PARAM_LINEAR_ORTHOGONAL_SOFTNESS = 8;
	const static int PARAM_MAX = 22;


	void set_param(const int param, const float value);
	float get_param(const int param) const;
	void _set_upper_limit_angular(const float upper_limit_angular);
	float _get_upper_limit_angular() const;
	void _set_lower_limit_angular(const float lower_limit_angular);
	float _get_lower_limit_angular() const;
};

}
#endif
