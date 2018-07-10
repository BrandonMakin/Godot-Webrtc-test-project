#ifndef GENERIC6DOFJOINT_H
#define GENERIC6DOFJOINT_H

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



class GD_CPP_BINDING_API Generic6DOFJoint : public Joint {
public:

	void _init();

	const static int FLAG_ENABLE_ANGULAR_LIMIT = 1;
	const static int FLAG_ENABLE_LINEAR_LIMIT = 0;
	const static int FLAG_ENABLE_MOTOR = 2;
	const static int FLAG_MAX = 3;
	const static int PARAM_ANGULAR_DAMPING = 8;
	const static int PARAM_ANGULAR_ERP = 11;
	const static int PARAM_ANGULAR_FORCE_LIMIT = 10;
	const static int PARAM_ANGULAR_LIMIT_SOFTNESS = 7;
	const static int PARAM_ANGULAR_LOWER_LIMIT = 5;
	const static int PARAM_ANGULAR_MOTOR_FORCE_LIMIT = 13;
	const static int PARAM_ANGULAR_MOTOR_TARGET_VELOCITY = 12;
	const static int PARAM_ANGULAR_RESTITUTION = 9;
	const static int PARAM_ANGULAR_UPPER_LIMIT = 6;
	const static int PARAM_LINEAR_DAMPING = 4;
	const static int PARAM_LINEAR_LIMIT_SOFTNESS = 2;
	const static int PARAM_LINEAR_LOWER_LIMIT = 0;
	const static int PARAM_LINEAR_RESTITUTION = 3;
	const static int PARAM_LINEAR_UPPER_LIMIT = 1;
	const static int PARAM_MAX = 14;


	void _set_angular_hi_limit_x(const float angle);
	float _get_angular_hi_limit_x() const;
	void _set_angular_lo_limit_x(const float angle);
	float _get_angular_lo_limit_x() const;
	void _set_angular_hi_limit_y(const float angle);
	float _get_angular_hi_limit_y() const;
	void _set_angular_lo_limit_y(const float angle);
	float _get_angular_lo_limit_y() const;
	void _set_angular_hi_limit_z(const float angle);
	float _get_angular_hi_limit_z() const;
	void _set_angular_lo_limit_z(const float angle);
	float _get_angular_lo_limit_z() const;
	void set_param_x(const int param, const float value);
	float get_param_x(const int param) const;
	void set_param_y(const int param, const float value);
	float get_param_y(const int param) const;
	void set_param_z(const int param, const float value);
	float get_param_z(const int param) const;
	void set_flag_x(const int flag, const bool value);
	bool get_flag_x(const int flag) const;
	void set_flag_y(const int flag, const bool value);
	bool get_flag_y(const int flag) const;
	void set_flag_z(const int flag, const bool value);
	bool get_flag_z(const int flag) const;
};

}
#endif
