#ifndef EDITORFILESYSTEM_H
#define EDITORFILESYSTEM_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class EditorFileSystemDirectory;


class GD_CPP_BINDING_API EditorFileSystem : public Node {
public:

	void _init();



	EditorFileSystemDirectory *get_filesystem();
	bool is_scanning() const;
	float get_scanning_progress() const;
	void scan();
	void scan_sources();
	void update_file(const String path);
	EditorFileSystemDirectory *get_filesystem_path(const String path);
	String get_file_type(const String path) const;
};

}
#endif
