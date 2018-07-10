#ifndef MAINLOOP_H
#define MAINLOOP_H

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



class GD_CPP_BINDING_API MainLoop : public Object {
public:

	void _init();

	const static int NOTIFICATION_OS_MEMORY_WARNING = 9;
	const static int NOTIFICATION_WM_FOCUS_IN = 4;
	const static int NOTIFICATION_WM_FOCUS_OUT = 5;
	const static int NOTIFICATION_WM_MOUSE_ENTER = 2;
	const static int NOTIFICATION_WM_MOUSE_EXIT = 3;
	const static int NOTIFICATION_WM_QUIT_REQUEST = 6;
	const static int NOTIFICATION_WM_UNFOCUS_REQUEST = 8;


	void _input_event(const InputEvent ev);
	void _input_text(const String text);
	void _initialize();
	void _iteration(const float delta);
	void _idle(const float delta);
	void _drop_files(const PoolStringArray files, const int screen);
	void _finalize();
	void input_event(const InputEvent ev);
	void input_text(const String text);
	void init();
	bool iteration(const float delta);
	bool idle(const float delta);
	void finish();
};

}
#endif
