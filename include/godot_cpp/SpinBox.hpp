#ifndef SPINBOX_H
#define SPINBOX_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Range.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API SpinBox : public Range {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	void _text_entered(const String arg0);
	void set_suffix(const String suffix);
	String get_suffix() const;
	void set_prefix(const String prefix);
	String get_prefix() const;
	void set_editable(const bool editable);
	bool is_editable() const;
	void _line_edit_focus_exit();
	Object *get_line_edit();
	void _line_edit_input(const InputEvent arg0);
	void _range_click_timeout();
};

}
#endif
