#ifndef INPUTMAP_H
#define INPUTMAP_H

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



class GD_CPP_BINDING_API InputMap : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static bool has_action(const String action);
	static int get_action_id(const String action);
	static String get_action_from_id(const int id);
	static Array get_actions();
	static void add_action(const String action);
	static void erase_action(const String action);
	static void action_add_event(const String action, const InputEvent event);
	static bool action_has_event(const String action, const InputEvent event);
	static void action_erase_event(const String action, const InputEvent event);
	static Array get_action_list(const String action);
	static bool event_is_action(const InputEvent event, const String action);
	static void load_from_globals();
};

}
#endif
