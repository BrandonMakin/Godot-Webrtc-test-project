#ifndef ENGINE_H
#define ENGINE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {

class MainLoop;


class GD_CPP_BINDING_API Engine : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static void set_iterations_per_second(const int iterations_per_second);
	static int get_iterations_per_second();
	static void set_target_fps(const int target_fps);
	static float get_target_fps();
	static void set_time_scale(const float time_scale);
	static float get_time_scale();
	static String get_custom_level();
	static int get_frames_drawn();
	static float get_frames_per_second();
	static MainLoop *get_main_loop();
	static Dictionary get_version_info();
};

}
#endif
