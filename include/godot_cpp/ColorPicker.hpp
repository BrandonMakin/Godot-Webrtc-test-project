#ifndef COLORPICKER_H
#define COLORPICKER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "BoxContainer.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API ColorPicker : public BoxContainer {
public:

	void _init();



	void set_pick_color(const Color color);
	Color get_pick_color() const;
	void set_raw_mode(const bool mode);
	bool is_raw_mode() const;
	void set_edit_alpha(const bool show);
	bool is_editing_alpha() const;
	void add_preset(const Color arg0);
	void _value_changed(const float arg0);
	void _html_entered(const String arg0);
	void _text_type_toggled();
	void _add_preset_pressed();
	void _screen_pick_pressed();
	void _sample_draw();
	void _hsv_draw(const int arg0, const Object *arg1);
	void _uv_input(const InputEvent arg0);
	void _w_input(const InputEvent arg0);
	void _preset_input(const InputEvent arg0);
	void _screen_input(const InputEvent arg0);
};

}
#endif
