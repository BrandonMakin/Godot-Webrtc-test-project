#ifndef HINGEJOINT_H
#define HINGEJOINT_H

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



class GD_CPP_BINDING_API HingeJoint : public Joint {
public:

	void _init();

	const static int FLAG_ENABLE_MOTOR = 1;
	const static int FLAG_MAX = 2;
	const static int FLAG_USE_LIMIT = 0;
	const static int PARAM_BIAS = 0;
	const static int PARAM_LIMIT_BIAS = 3;
	const static int PARAM_LIMIT_LOWER = 2;
	const static int PARAM_LIMIT_RELAXATION = 5;
	const static int PARAM_LIMIT_SOFTNESS = 4;
	const static int PARAM_LIMIT_UPPER = 1;
	const static int PARAM_MAX = 8;
	const static int PARAM_MOTOR_MAX_IMPULSE = 7;
	const static int PARAM_MOTOR_TARGET_VELOCITY = 6;


	void set_param(const int param, const float value);
	float get_param(const int param) const;
	void set_flag(const int flag, const bool enabled);
	bool get_flag(const int flag) const;
	void _set_upper_limit(const float upper_limit);
	float _get_upper_limit() const;
	void _set_lower_limit(const float lower_limit);
	float _get_lower_limit() const;
};

}
#endif
