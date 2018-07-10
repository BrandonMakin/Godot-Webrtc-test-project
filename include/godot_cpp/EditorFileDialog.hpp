#ifndef EDITORFILEDIALOG_H
#define EDITORFILEDIALOG_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "ConfirmationDialog.hpp"


namespace godot {

class VBoxContainer;
class Object;


class GD_CPP_BINDING_API EditorFileDialog : public ConfirmationDialog {
public:

	void _init();

	const static int ACCESS_FILESYSTEM = 2;
	const static int ACCESS_RESOURCES = 0;
	const static int ACCESS_USERDATA = 1;
	const static int MODE_OPEN_ANY = 3;
	const static int MODE_OPEN_DIR = 2;
	const static int MODE_OPEN_FILE = 0;
	const static int MODE_OPEN_FILES = 1;
	const static int MODE_SAVE_FILE = 4;


	void _unhandled_input(const InputEvent arg0);
	void _item_selected(const int arg0);
	void _item_db_selected(const int arg0);
	void _dir_entered(const String arg0);
	void _file_entered(const String arg0);
	void _action_pressed();
	void _cancel_pressed();
	void _filter_selected(const int arg0);
	void _save_confirm_pressed();
	void clear_filters();
	void add_filter(const String filter);
	String get_current_dir() const;
	String get_current_file() const;
	String get_current_path() const;
	void set_current_dir(const String dir);
	void set_current_file(const String file);
	void set_current_path(const String path);
	void set_mode(const int mode);
	int get_mode() const;
	VBoxContainer *get_vbox();
	void set_access(const int access);
	int get_access() const;
	void set_show_hidden_files(const bool show);
	bool is_showing_hidden_files() const;
	void _select_drive(const int arg0);
	void _make_dir();
	void _make_dir_confirm();
	void _update_file_list();
	void _update_dir();
	void _thumbnail_done(const String arg0, const Object *arg1, const Variant arg2);
	void set_display_mode(const int mode);
	int get_display_mode() const;
	void _thumbnail_result(const String arg0, const Object *arg1, const Variant arg2);
	void set_disable_overwrite_warning(const bool disable);
	bool is_overwrite_warning_disabled() const;
	void _recent_selected(const int arg0);
	void _go_back();
	void _go_forward();
	void _go_up();
	void _favorite_toggled(const bool arg0);
	void _favorite_selected(const int arg0);
	void _favorite_move_up();
	void _favorite_move_down();
	void invalidate();
};

}
#endif
