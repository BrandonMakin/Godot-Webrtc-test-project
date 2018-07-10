#ifndef TABCONTAINER_H
#define TABCONTAINER_H

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
class Popup;
class Control;


class GD_CPP_BINDING_API TabContainer : public Control {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	int get_tab_count() const;
	void set_current_tab(const int tab_idx);
	int get_current_tab() const;
	int get_previous_tab() const;
	Control *get_current_tab_control() const;
	Control *get_tab_control(const int idx) const;
	void set_tab_align(const int align);
	int get_tab_align() const;
	void set_tabs_visible(const bool visible);
	bool are_tabs_visible() const;
	void set_tab_title(const int tab_idx, const String title);
	String get_tab_title(const int tab_idx) const;
	void set_tab_icon(const int tab_idx, const Texture *icon);
	Texture *get_tab_icon(const int tab_idx) const;
	void set_tab_disabled(const int tab_idx, const bool disabled);
	bool get_tab_disabled(const int tab_idx) const;
	void set_popup(const Popup *popup);
	Popup *get_popup() const;
	void _child_renamed_callback();
};

}
#endif
