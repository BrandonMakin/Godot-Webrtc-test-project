#ifndef EDITORFILESYSTEMDIRECTORY_H
#define EDITORFILESYSTEMDIRECTORY_H

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
class EditorFileSystemDirectory;


class GD_CPP_BINDING_API EditorFileSystemDirectory : public Object {
public:

	void _init();



	int get_subdir_count() const;
	Object *get_subdir(const int idx);
	int get_file_count() const;
	String get_file(const int idx) const;
	String get_file_path(const int idx) const;
	String get_file_type(const int idx) const;
	String get_name();
	String get_path() const;
	EditorFileSystemDirectory *get_parent();
	int find_file_index(const String name) const;
	int find_dir_index(const String name) const;
};

}
#endif
