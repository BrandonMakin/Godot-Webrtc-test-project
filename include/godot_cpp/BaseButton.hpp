#ifndef BASEBUTTON_H
#define BASEBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Control.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API BaseButton : public Control {
public:

	void _init();

	const static int ACTION_MODE_BUTTON_PRESS = 0;
	const static int ACTION_MODE_BUTTON_RELEASE = 1;
	const static int DRAW_DISABLED = 3;
	const static int DRAW_HOVER = 2;
	const static int DRAW_NORMAL = 0;
	const static int DRAW_PRESSED = 1;


	void _pressed();
	void _toggled(const bool pressed);
	void _gui_input(const InputEvent arg0);
	void _unhandled_input(const InputEvent arg0);
	void set_pressed(const bool pressed);
	bool is_pressed() const;
	bool is_hovered() const;
	void set_toggle_mode(const bool enabled);
	bool is_toggle_mode() const;
	void set_disabled(const bool disabled);
	bool is_disabled() const;
	void set_action_mode(const int mode);
	int get_action_mode() const;
	int get_draw_mode() const;
	void set_enabled_focus_mode(const int mode);
	int get_enabled_focus_mode() const;
	void set_shortcut(const Object *shortcut);
	Object *get_shortcut() const;
	void set_button_group(const Object *button_group);
	Object *get_button_group() const;
};

}
#endif
