#ifndef BUTTONARRAY_H
#define BUTTONARRAY_H

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

class Texture;


class GD_CPP_BINDING_API ButtonArray : public Control {
public:

	void _init();

	const static int ALIGN_BEGIN = 0;
	const static int ALIGN_CENTER = 1;
	const static int ALIGN_END = 2;
	const static int ALIGN_EXPAND_FILL = 4;
	const static int ALIGN_FILL = 3;


	void add_button(const String text, const String tooltip);
	void add_icon_button(const Texture *icon, const String text, const String tooltip);
	void set_button_text(const int button_idx, const String text);
	void set_button_tooltip(const int button_idx, const String text);
	void set_button_icon(const int button_idx, const Texture *icon);
	String get_button_text(const int button_idx) const;
	String get_button_tooltip(const int button_idx) const;
	Texture *get_button_icon(const int button_idx) const;
	int get_button_count() const;
	void set_flat(const bool enabled);
	bool is_flat() const;
	int get_selected() const;
	int get_hovered() const;
	void set_selected(const int button_idx);
	void erase_button(const int button_idx);
	void clear();
	void _gui_input(const InputEvent arg0);
};

}
#endif
