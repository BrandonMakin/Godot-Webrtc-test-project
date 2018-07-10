#ifndef ACCEPTDIALOG_H
#define ACCEPTDIALOG_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "WindowDialog.hpp"


namespace godot {

class Button;
class LineEdit;
class Object;


class GD_CPP_BINDING_API AcceptDialog : public WindowDialog {
public:

	void _init();



	void _ok();
	Object *get_ok();
	Object *get_label();
	void set_hide_on_ok(const bool enabled);
	bool get_hide_on_ok() const;
	Button *add_button(const String text, const bool right = false, const String action = "");
	Button *add_cancel(const String name);
	void _builtin_text_entered(const String arg0);
	LineEdit *register_text_enter(const Object *line_edit);
	void _custom_action(const String arg0);
	void set_text(const String text);
	String get_text() const;
};

}
#endif
