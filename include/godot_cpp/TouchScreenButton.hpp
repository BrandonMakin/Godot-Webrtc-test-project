#ifndef TOUCHSCREENBUTTON_H
#define TOUCHSCREENBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node2D.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API TouchScreenButton : public Node2D {
public:

	void _init();



	void set_texture(const Object *texture);
	Object *get_texture() const;
	void set_texture_pressed(const Object *texture_pressed);
	Object *get_texture_pressed() const;
	void set_bitmask(const Object *bitmask);
	Object *get_bitmask() const;
	void set_shape(const Object *shape);
	Object *get_shape() const;
	void set_shape_centered(const bool _bool);
	bool is_shape_centered() const;
	void set_shape_visible(const bool _bool);
	bool is_shape_visible() const;
	void set_action(const String action);
	String get_action() const;
	void set_visibility_mode(const int mode);
	int get_visibility_mode() const;
	void set_passby_press(const bool enabled);
	bool is_passby_press_enabled() const;
	bool is_pressed() const;
	void _input(const InputEvent arg0);
};

}
#endif
