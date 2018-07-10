#ifndef DIRECTORY_H
#define DIRECTORY_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Reference.hpp"


namespace godot {



class GD_CPP_BINDING_API Directory : public Reference {
public:

	void _init();



	Error open(const String path);
	int list_dir_begin(const bool skip_navigational = false, const bool skip_hidden = false);
	String get_next();
	bool current_is_dir() const;
	void list_dir_end();
	int get_drive_count();
	String get_drive(const int idx);
	int get_current_drive();
	Error change_dir(const String todir);
	String get_current_dir();
	Error make_dir(const String path);
	Error make_dir_recursive(const String path);
	bool file_exists(const String path);
	bool dir_exists(const String path);
	int get_space_left();
	Error copy(const String from, const String to);
	Error rename(const String from, const String to);
	Error remove(const String path);
};

}
#endif
