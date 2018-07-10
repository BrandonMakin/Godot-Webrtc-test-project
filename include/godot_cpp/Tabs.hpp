#ifndef TABS_H
#define TABS_H

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


class GD_CPP_BINDING_API Tabs : public Control {
public:

	void _init();

	const static int ALIGN_CENTER = 1;
	const static int ALIGN_LEFT = 0;
	const static int ALIGN_RIGHT = 2;
	const static int CLOSE_BUTTON_SHOW_ACTIVE_ONLY = 1;
	const static int CLOSE_BUTTON_SHOW_ALWAYS = 2;
	const static int CLOSE_BUTTON_SHOW_NEVER = 0;


	void _gui_input(const InputEvent arg0);
	int get_tab_count() const;
	void set_current_tab(const int tab_idx);
	int get_current_tab() const;
	void set_tab_title(const int tab_idx, const String title);
	String get_tab_title(const int tab_idx) const;
	void set_tab_icon(const int tab_idx, const Texture *icon);
	Texture *get_tab_icon(const int tab_idx) const;
	void set_tab_disabled(const int tab_idx, const bool disabled);
	bool get_tab_disabled(const int tab_idx) const;
	void remove_tab(const int tab_idx);
	void add_tab(const String title, const Texture *icon);
	void set_tab_align(const int align);
	int get_tab_align() const;
	void ensure_tab_visible(const int idx);
};

}
#endif
