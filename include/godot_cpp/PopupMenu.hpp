#ifndef POPUPMENU_H
#define POPUPMENU_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Popup.hpp"


namespace godot {

class ShortCut;
class Object;


class GD_CPP_BINDING_API PopupMenu : public Popup {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	void add_icon_item(const Object *texture, const String label, const int id = -1, const int accel = 0);
	void add_item(const String label, const int id = -1, const int accel = 0);
	void add_icon_check_item(const Object *texture, const String label, const int id = -1, const int accel = 0);
	void add_check_item(const String label, const int id = -1, const int accel = 0);
	void add_submenu_item(const String label, const String submenu, const int id = -1);
	void add_icon_shortcut(const Object *texture, const ShortCut *shortcut, const int id = -1, const bool global = false);
	void add_shortcut(const ShortCut *shortcut, const int id = -1, const bool global = false);
	void add_icon_check_shortcut(const Object *texture, const ShortCut *shortcut, const int id = -1, const bool global = false);
	void add_check_shortcut(const ShortCut *shortcut, const int id = -1, const bool global = false);
	void set_item_text(const int idx, const String text);
	void set_item_icon(const int idx, const Object *icon);
	void set_item_checked(const int idx, const bool checked);
	void set_item_ID(const int idx, const int id);
	void set_item_accelerator(const int idx, const int accel);
	void set_item_metadata(const int idx, const Variant metadata);
	void set_item_disabled(const int idx, const bool disabled);
	void set_item_submenu(const int idx, const String submenu);
	void set_item_as_separator(const int idx, const bool enable);
	void set_item_as_checkable(const int idx, const bool enable);
	void set_item_tooltip(const int idx, const String tooltip);
	void set_item_shortcut(const int idx, const ShortCut *shortcut, const bool global = false);
	void toggle_item_checked(const int idx);
	String get_item_text(const int idx) const;
	Object *get_item_icon(const int idx) const;
	bool is_item_checked(const int idx) const;
	int get_item_ID(const int idx) const;
	int get_item_index(const int id) const;
	int get_item_accelerator(const int idx) const;
	void get_item_metadata(const int idx) const;
	bool is_item_disabled(const int idx) const;
	String get_item_submenu(const int idx) const;
	bool is_item_separator(const int idx) const;
	bool is_item_checkable(const int idx) const;
	String get_item_tooltip(const int idx) const;
	ShortCut *get_item_shortcut(const int idx) const;
	int get_item_count() const;
	void remove_item(const int idx);
	void add_separator();
	void clear();
	void _set_items(const Array arg0);
	Array _get_items() const;
	void set_hide_on_item_selection(const bool enable);
	bool is_hide_on_item_selection();
	void _submenu_timeout();
};

}
#endif
