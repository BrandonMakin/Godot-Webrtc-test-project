#ifndef COLORPICKERBUTTON_H
#define COLORPICKERBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Button.hpp"


namespace godot {

class ColorPicker;


class GD_CPP_BINDING_API ColorPickerButton : public Button {
public:

	void _init();



	void set_pick_color(const Color color);
	Color get_pick_color() const;
	ColorPicker *get_picker();
	void set_edit_alpha(const bool show);
	bool is_editing_alpha() const;
	void _color_changed(const Color arg0);
};

}
#endif
