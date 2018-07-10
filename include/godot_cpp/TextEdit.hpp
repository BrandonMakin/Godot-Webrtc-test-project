#ifndef TEXTEDIT_H
#define TEXTEDIT_H

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


class GD_CPP_BINDING_API TextEdit : public Control {
public:

	void _init();

	const static int MENU_CLEAR = 3;
	const static int MENU_COPY = 1;
	const static int MENU_CUT = 0;
	const static int MENU_MAX = 6;
	const static int MENU_PASTE = 2;
	const static int MENU_SELECT_ALL = 4;
	const static int MENU_UNDO = 5;
	const static int SEARCH_BACKWARDS = 4;
	const static int SEARCH_MATCH_CASE = 1;
	const static int SEARCH_WHOLE_WORDS = 2;


	void _gui_input(const InputEvent arg0);
	void _scroll_moved(const float arg0);
	void _cursor_changed_emit();
	void _text_changed_emit();
	void _push_current_op();
	void _click_selection_held();
	void _toggle_draw_caret();
	void set_text(const String text);
	void insert_text_at_cursor(const String text);
	int get_line_count() const;
	String get_text();
	String get_line(const int line) const;
	void cursor_set_column(const int column, const bool adjust_viewport = false);
	void cursor_set_line(const int line, const bool adjust_viewport = false);
	int cursor_get_column() const;
	int cursor_get_line() const;
	void cursor_set_blink_enabled(const bool enable);
	bool cursor_get_blink_enabled() const;
	void cursor_set_blink_speed(const float blink_speed);
	float cursor_get_blink_speed() const;
	void cursor_set_block_mode(const bool enable);
	bool cursor_is_block_mode() const;
	void set_readonly(const bool enable);
	void set_wrap(const bool enable);
	void set_max_chars(const int amount);
	void cut();
	void copy();
	void paste();
	void select_all();
	void select(const int from_line, const int from_column, const int to_line, const int to_column);
	bool is_selection_active() const;
	int get_selection_from_line() const;
	int get_selection_from_column() const;
	int get_selection_to_line() const;
	int get_selection_to_column() const;
	String get_selection_text() const;
	String get_word_under_cursor() const;
	PoolIntArray search(const String flags, const int from_line, const int from_column, const int to_line) const;
	void undo();
	void redo();
	void clear_undo_history();
	void set_show_line_numbers(const bool enable);
	bool is_show_line_numbers_enabled() const;
	void set_highlight_all_occurrences(const bool enable);
	bool is_highlight_all_occurrences_enabled() const;
	void set_syntax_coloring(const bool enable);
	bool is_syntax_coloring_enabled() const;
	void add_keyword_color(const String keyword, const Color color);
	void add_color_region(const String begin_key, const String end_key, const Color color, const bool line_only = false);
	void clear_colors();
	void menu_option(const int arg0);
	PopupMenu *get_menu() const;
};

}
#endif
