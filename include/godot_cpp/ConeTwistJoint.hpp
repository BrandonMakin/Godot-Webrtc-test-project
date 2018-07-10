#ifndef CONETWISTJOINT_H
#define CONETWISTJOINT_H

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



class GD_CPP_BINDING_API ConeTwistJoint : public Joint {
public:

	void _init();

	const static int PARAM_BIAS = 2;
	const static int PARAM_MAX = 5;
	const static int PARAM_RELAXATION = 4;
	const static int PARAM_SOFTNESS = 3;
	const static int PARAM_SWING_SPAN = 0;
	const static int PARAM_TWIST_SPAN = 1;


	void set_param(const int param, const float value);
	float get_param(const int param) const;
	void _set_swing_span(const float swing_span);
	float _get_swing_span() const;
	void _set_twist_span(const float twist_span);
	float _get_twist_span() const;
};

}
#endif
