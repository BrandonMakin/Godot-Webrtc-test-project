#ifndef FILEDIALOG_H
#define FILEDIALOG_H

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


class GD_CPP_BINDING_API FileDialog : public ConfirmationDialog {
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
	void _tree_selected();
	void _tree_db_selected();
	void _dir_entered(const String arg0);
	void _file_entered(const String arg0);
	void _action_pressed();
	void _cancel_pressed();
	void _filter_selected(const int arg0);
	void _save_confirm_pressed();
	void clear_filters();
	void add_filter(const String filter);
	void set_filters(const PoolStringArray filters);
	PoolStringArray get_filters() const;
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
	void invalidate();
};

}
#endif
