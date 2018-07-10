#ifndef TIMER_H
#define TIMER_H

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



class GD_CPP_BINDING_API Timer : public Node {
public:

	void _init();

	const static int TIMER_PROCESS_FIXED = 0;
	const static int TIMER_PROCESS_IDLE = 1;


	void set_wait_time(const float time_sec);
	float get_wait_time() const;
	void set_one_shot(const bool enable);
	bool is_one_shot() const;
	void set_autostart(const bool enable);
	bool has_autostart() const;
	void start();
	void stop();
	void set_paused(const bool paused);
	bool is_paused() const;
	bool is_stopped() const;
	float get_time_left() const;
	void set_timer_process_mode(const int mode);
	int get_timer_process_mode() const;
};

}
#endif
