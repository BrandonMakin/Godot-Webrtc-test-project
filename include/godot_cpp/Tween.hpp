#ifndef TWEEN_H
#define TWEEN_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API Tween : public Node {
public:

	void _init();

	const static int EASE_IN = 0;
	const static int EASE_IN_OUT = 2;
	const static int EASE_OUT = 1;
	const static int EASE_OUT_IN = 3;
	const static int TRANS_BACK = 10;
	const static int TRANS_BOUNCE = 9;
	const static int TRANS_CIRC = 8;
	const static int TRANS_CUBIC = 7;
	const static int TRANS_ELASTIC = 6;
	const static int TRANS_EXPO = 5;
	const static int TRANS_LINEAR = 0;
	const static int TRANS_QUAD = 4;
	const static int TRANS_QUART = 3;
	const static int TRANS_QUINT = 2;
	const static int TRANS_SINE = 1;
	const static int TWEEN_PROCESS_FIXED = 0;
	const static int TWEEN_PROCESS_IDLE = 1;


	bool is_active() const;
	void set_active(const bool active);
	bool is_repeat() const;
	void set_repeat(const bool repeat);
	void set_speed_scale(const float speed);
	float get_speed_scale() const;
	void set_tween_process_mode(const int mode);
	int get_tween_process_mode() const;
	bool start();
	bool reset(const Object *object, const String key);
	bool reset_all();
	bool stop(const Object *object, const String key);
	bool stop_all();
	bool resume(const Object *object, const String key);
	bool resume_all();
	bool remove(const Object *object, const String key);
	void _remove(const Object *object, const String key, const bool first_only);
	bool remove_all();
	bool seek(const float time);
	float tell() const;
	float get_runtime() const;
	bool interpolate_property(const Object *object, const String property, const Variant initial_val, const Variant final_val, const float duration, const int trans_type, const int ease_type, const float delay = 0);
	bool interpolate_method(const Object *object, const String method, const Variant initial_val, const Variant final_val, const float duration, const int trans_type, const int ease_type, const float delay = 0);
	bool interpolate_callback(const Object *object, const float duration, const String callback, const Variant arg1 = Variant(), const Variant arg2 = Variant(), const Variant arg3 = Variant(), const Variant arg4 = Variant(), const Variant arg5 = Variant());
	bool interpolate_deferred_callback(const Object *object, const float duration, const String callback, const Variant arg1 = Variant(), const Variant arg2 = Variant(), const Variant arg3 = Variant(), const Variant arg4 = Variant(), const Variant arg5 = Variant());
	bool follow_property(const Object *object, const String property, const Variant initial_val, const Object *target, const String target_property, const float duration, const int trans_type, const int ease_type, const float delay = 0);
	bool follow_method(const Object *object, const String method, const Variant initial_val, const Object *target, const String target_method, const float duration, const int trans_type, const int ease_type, const float delay = 0);
	bool targeting_property(const Object *object, const String property, const Object *initial, const String initial_val, const Variant final_val, const float duration, const int trans_type, const int ease_type, const float delay = 0);
	bool targeting_method(const Object *object, const String method, const Object *initial, const String initial_method, const Variant final_val, const float duration, const int trans_type, const int ease_type, const float delay = 0);
};

}
#endif
