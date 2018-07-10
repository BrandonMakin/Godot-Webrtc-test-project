#ifndef RICHTEXTLABEL_H
#define RICHTEXTLABEL_H

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

class Object;
class Texture;


class GD_CPP_BINDING_API RichTextLabel : public Control {
public:

	void _init();

	const static int ALIGN_CENTER = 1;
	const static int ALIGN_FILL = 3;
	const static int ALIGN_LEFT = 0;
	const static int ALIGN_RIGHT = 2;
	const static int ITEM_ALIGN = 7;
	const static int ITEM_COLOR = 5;
	const static int ITEM_FONT = 4;
	const static int ITEM_FRAME = 0;
	const static int ITEM_IMAGE = 2;
	const static int ITEM_INDENT = 8;
	const static int ITEM_LIST = 9;
	const static int ITEM_META = 11;
	const static int ITEM_NEWLINE = 3;
	const static int ITEM_TEXT = 1;
	const static int ITEM_UNDERLINE = 6;
	const static int LIST_DOTS = 2;
	const static int LIST_LETTERS = 1;
	const static int LIST_NUMBERS = 0;


	void _gui_input(const InputEvent arg0);
	void _scroll_changed(const float arg0);
	String get_text();
	void add_text(const String text);
	void add_image(const Texture *image);
	void newline();
	bool remove_line(const int arg0);
	void push_font(const Object *font);
	void push_color(const Color color);
	void push_align(const int align);
	void push_indent(const int level);
	void push_list(const int type);
	void push_meta(const Variant data);
	void push_underline();
	void push_table(const int columns);
	void set_table_column_expand(const int column, const bool expand, const int ratio);
	void push_cell();
	void pop();
	void clear();
	void set_meta_underline(const bool enable);
	bool is_meta_underlined() const;
	void set_scroll_active(const bool active);
	bool is_scroll_active() const;
	void set_scroll_follow(const bool follow);
	bool is_scroll_following() const;
	Object *get_v_scroll();
	void scroll_to_line(const int line);
	void set_tab_size(const int spaces);
	int get_tab_size() const;
	void set_selection_enabled(const bool enabled);
	bool is_selection_enabled() const;
	int parse_bbcode(const String bbcode);
	int append_bbcode(const String bbcode);
	void set_bbcode(const String text);
	String get_bbcode() const;
	void set_visible_characters(const int amount);
	int get_visible_characters() const;
	int get_total_character_count() const;
	void set_use_bbcode(const bool enable);
	bool is_using_bbcode() const;
};

}
#endif
