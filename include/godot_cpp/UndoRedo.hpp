#ifndef UNDOREDO_H
#define UNDOREDO_H

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


class GD_CPP_BINDING_API UndoRedo : public Object {
public:

	void _init();

	const static int MERGE_ALL = 2;
	const static int MERGE_DISABLE = 0;
	const static int MERGE_ENDS = 1;


	void create_action(const String name, const int merge_mode = 0);
	void commit_action();
	void add_do_method(const Object *object, const String method);
	void add_undo_method(const Object *object, const String method);
	void add_do_property(const Object *object, const String property, const Variant value);
	void add_undo_property(const Object *object, const String property, const Variant value);
	void add_do_reference(const Object *object);
	void add_undo_reference(const Object *object);
	void clear_history();
	String get_current_action_name() const;
	int get_version() const;
};

}
#endif
