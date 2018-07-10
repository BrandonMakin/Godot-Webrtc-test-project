#ifndef TREE_H
#define TREE_H

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

class TreeItem;


class GD_CPP_BINDING_API Tree : public Control {
public:

	void _init();

	const static int DROP_MODE_DISABLED = 0;
	const static int DROP_MODE_INBETWEEN = 2;
	const static int DROP_MODE_ON_ITEM = 1;
	const static int SELECT_MULTI = 2;
	const static int SELECT_ROW = 1;
	const static int SELECT_SINGLE = 0;


	void _range_click_timeout();
	void _gui_input(const InputEvent arg0);
	void _popup_select(const int arg0);
	void _text_editor_enter(const String arg0);
	void _text_editor_modal_close();
	void _value_editor_changed(const float arg0);
	void _scroll_moved(const float arg0);
	void clear();
	TreeItem *create_item(const TreeItem *parent = nullptr);
	TreeItem *get_root();
	void set_column_min_width(const int column, const int min_width);
	void set_column_expand(const int column, const bool expand);
	int get_column_width(const int column) const;
	void set_hide_root(const bool enable);
	TreeItem *get_next_selected(const TreeItem *from);
	TreeItem *get_selected() const;
	int get_selected_column() const;
	int get_pressed_button() const;
	void set_select_mode(const int mode);
	void set_columns(const int amount);
	int get_columns() const;
	TreeItem *get_edited() const;
	int get_edited_column() const;
	Rect2 get_custom_popup_rect() const;
	Rect2 get_item_area_rect(const TreeItem *item, const int column = -1) const;
	TreeItem *get_item_at_pos(const Vector2 pos) const;
	int get_column_at_pos(const Vector2 pos) const;
	void ensure_cursor_is_visible();
	void set_column_titles_visible(const bool visible);
	bool are_column_titles_visible() const;
	void set_column_title(const int column, const String title);
	String get_column_title(const int column) const;
	Vector2 get_scroll() const;
	void set_hide_folding(const bool hide);
	bool is_folding_hidden() const;
	void set_drop_mode_flags(const int flags);
	int get_drop_mode_flags() const;
	void set_allow_rmb_select(const bool allow);
	bool get_allow_rmb_select() const;
	void set_single_select_cell_editing_only_when_already_selected(const bool enable);
	bool get_single_select_cell_editing_only_when_already_selected() const;
};

}
#endif
