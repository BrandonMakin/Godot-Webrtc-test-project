#ifndef LINEEDIT_H
#define LINEEDIT_H

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

class PopupMenu;


class GD_CPP_BINDING_API LineEdit : public Control {
public:

	void _init();

	const static int ALIGN_CENTER = 1;
	const static int ALIGN_FILL = 3;
	const static int ALIGN_LEFT = 0;
	const static int ALIGN_RIGHT = 2;
	const static int MENU_CLEAR = 3;
	const static int MENU_COPY = 1;
	const static int MENU_CUT = 0;
	const static int MENU_MAX = 6;
	const static int MENU_PASTE = 2;
	const static int MENU_SELECT_ALL = 4;
	const static int MENU_UNDO = 5;


	void _toggle_draw_caret();
	void _editor_settings_changed();
	void set_align(const int align);
	int get_align() const;
	void _gui_input(const InputEvent arg0);
	void clear();
	void select_all();
	void set_text(const String text);
	String get_text() const;
	void set_placeholder(const String text);
	String get_placeholder() const;
	void set_placeholder_alpha(const float alpha);
	float get_placeholder_alpha() const;
	void set_cursor_pos(const int pos);
	int get_cursor_pos() const;
	void set_expand_to_text_length(const bool enabled);
	bool get_expand_to_text_length() const;
	void cursor_set_blink_enabled(const bool enabled);
	bool cursor_get_blink_enabled() const;
	void cursor_set_blink_speed(const float blink_speed);
	float cursor_get_blink_speed() const;
	void set_max_length(const int chars);
	int get_max_length() const;
	void append_at_cursor(const String text);
	void set_editable(const bool enabled);
	bool is_editable() const;
	void set_secret(const bool enabled);
	bool is_secret() const;
	void select(const int from = 0, const int to = -1);
	void menu_option(const int option);
	PopupMenu *get_menu() const;
};

}
#endif
