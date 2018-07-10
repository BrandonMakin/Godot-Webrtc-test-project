#ifndef ITEMLIST_H
#define ITEMLIST_H

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
class Object;


class GD_CPP_BINDING_API ItemList : public Control {
public:

	void _init();

	const static int ICON_MODE_LEFT = 1;
	const static int ICON_MODE_TOP = 0;
	const static int SELECT_MULTI = 1;
	const static int SELECT_SINGLE = 0;


	void add_item(const String text, const Texture *icon = nullptr, const bool selectable = true);
	void add_icon_item(const Texture *icon, const bool selectable = true);
	void set_item_text(const int idx, const String text);
	String get_item_text(const int idx) const;
	void set_item_icon(const int idx, const Texture *icon);
	Texture *get_item_icon(const int idx) const;
	void set_item_icon_region(const int idx, const Rect2 rect);
	Rect2 get_item_icon_region(const int idx) const;
	void set_item_selectable(const int idx, const bool selectable);
	bool is_item_selectable(const int idx) const;
	void set_item_disabled(const int idx, const bool disabled);
	bool is_item_disabled(const int idx) const;
	void set_item_metadata(const int idx, const Variant metadata);
	void get_item_metadata(const int idx) const;
	void set_item_custom_bg_color(const int idx, const Color custom_bg_color);
	Color get_item_custom_bg_color(const int idx) const;
	void set_item_tooltip_enabled(const int idx, const bool enable);
	bool is_item_tooltip_enabled(const int idx) const;
	void set_item_tooltip(const int idx, const String tooltip);
	String get_item_tooltip(const int idx) const;
	void select(const int idx, const bool single = true);
	void unselect(const int idx);
	bool is_selected(const int idx) const;
	PoolIntArray get_selected_items();
	int get_item_count() const;
	void remove_item(const int idx);
	void clear();
	void sort_items_by_text();
	void set_fixed_column_width(const int width);
	int get_fixed_column_width() const;
	void set_same_column_width(const bool enable);
	int is_same_column_width() const;
	void set_max_text_lines(const int lines);
	int get_max_text_lines() const;
	void set_max_columns(const int amount);
	int get_max_columns() const;
	void set_select_mode(const int mode);
	int get_select_mode() const;
	void set_icon_mode(const int mode);
	int get_icon_mode() const;
	void set_fixed_icon_size(const Vector2 size);
	Vector2 get_fixed_icon_size() const;
	void set_icon_scale(const float scale);
	float get_icon_scale() const;
	void set_allow_rmb_select(const bool allow);
	bool get_allow_rmb_select() const;
	int get_item_at_pos(const Vector2 pos, const bool exact = false) const;
	void ensure_current_is_visible();
	Object *get_v_scroll();
	void _scroll_changed(const float arg0);
	void _gui_input(const InputEvent arg0);
};

}
#endif
