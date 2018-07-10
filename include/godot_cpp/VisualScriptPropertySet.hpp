#ifndef VISUALSCRIPTPROPERTYSET_H
#define VISUALSCRIPTPROPERTYSET_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "VisualScriptNode.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualScriptPropertySet : public VisualScriptNode {
public:

	void _init();

	const static int CALL_MODE_INSTANCE = 2;
	const static int CALL_MODE_NODE_PATH = 1;
	const static int CALL_MODE_SELF = 0;


	void set_base_type(const String base_type);
	String get_base_type() const;
	void set_base_script(const String base_script);
	String get_base_script() const;
	void set_basic_type(const int basic_type);
	int get_basic_type() const;
	void _set_type_cache(const Dictionary type_cache);
	Dictionary _get_type_cache() const;
	void set_event_type(const int event_type);
	int get_event_type() const;
	void set_property(const String property);
	String get_property() const;
	void set_call_mode(const int mode);
	int get_call_mode() const;
	void set_base_path(const NodePath base_path);
	NodePath get_base_path() const;
};

}
#endif
