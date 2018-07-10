#ifndef TREEITEM_H
#define TREEITEM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {

class Object;
class TreeItem;
class Texture;


class GD_CPP_BINDING_API TreeItem : public Object {
public:

	void _init();

	const static int CELL_MODE_CHECK = 1;
	const static int CELL_MODE_CUSTOM = 5;
	const static int CELL_MODE_ICON = 4;
	const static int CELL_MODE_RANGE = 2;
	const static int CELL_MODE_RANGE_EXPRESSION = 3;
	const static int CELL_MODE_STRING = 0;


	void set_cell_mode(const int column, const int mode);
	int get_cell_mode(const int column) const;
	void set_checked(const int column, const bool checked);
	bool is_checked(const int column) const;
	void set_text(const int column, const String text);
	String get_text(const int column) const;
	void set_icon(const int column, const Texture *texture);
	Texture *get_icon(const int column) const;
	void set_icon_region(const int column, const Rect2 region);
	Rect2 get_icon_region(const int column) const;
	void set_icon_max_width(const int column, const int width);
	int get_icon_max_width(const int column) const;
	void set_range(const int column, const float value);
	float get_range(const int column) const;
	void set_range_config(const int column, const float min, const float max, const float step, const bool expr = false);
	Dictionary get_range_config(const int column);
	void set_metadata(const int column, const Variant meta);
	void get_metadata(const int column) const;
	void set_custom_draw(const int column, const Object *object, const String callback);
	void set_collapsed(const bool enable);
	bool is_collapsed();
	TreeItem *get_next();
	TreeItem *get_prev();
	TreeItem *get_parent();
	TreeItem *get_children();
	TreeItem *get_next_visible();
	TreeItem *get_prev_visible();
	TreeItem *remove_child(const Object *child);
	void set_selectable(const int column, const bool selectable);
	bool is_selectable(const int column) const;
	bool is_selected(const int column);
	void select(const int column);
	void deselect(const int column);
	void set_editable(const int column, const bool enabled);
	bool is_editable(const int column);
	void set_custom_color(const int column, const Color color);
	void clear_custom_color(const int column);
	void set_custom_bg_color(const int column, const Color color, const bool just_outline = false);
	void clear_custom_bg_color(const int column);
	Color get_custom_bg_color(const int column) const;
	void add_button(const int column, const Texture *button, const int button_idx = -1, const bool disabled = false);
	int get_button_count(const int column) const;
	Texture *get_button(const int column, const int button_idx) const;
	void set_button(const int column, const int button_idx, const Texture *button);
	void erase_button(const int column, const int button_idx);
	bool is_button_disabled(const int column, const int button_idx) const;
	void set_tooltip(const int column, const String tooltip);
	String get_tooltip(const int column) const;
	void move_to_top();
	void move_to_bottom();
};

}
#endif
