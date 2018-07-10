#ifndef VISUALSCRIPTFUNCTIONCALL_H
#define VISUALSCRIPTFUNCTIONCALL_H

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



class GD_CPP_BINDING_API VisualScriptFunctionCall : public VisualScriptNode {
public:

	void _init();

	const static int CALL_MODE_BASIC_TYPE = 3;
	const static int CALL_MODE_INSTANCE = 2;
	const static int CALL_MODE_NODE_PATH = 1;
	const static int CALL_MODE_SELF = 0;


	void set_base_type(const String base_type);
	String get_base_type() const;
	void set_base_script(const String base_script);
	String get_base_script() const;
	void set_basic_type(const int basic_type);
	int get_basic_type() const;
	void set_singleton(const String singleton);
	String get_singleton() const;
	void set_function(const String function);
	String get_function() const;
	void set_call_mode(const int mode);
	int get_call_mode() const;
	void set_base_path(const NodePath base_path);
	NodePath get_base_path() const;
	void set_use_default_args(const int amount);
	int get_use_default_args() const;
	void _set_argument_cache(const Dictionary argument_cache);
	Dictionary _get_argument_cache() const;
	void set_rpc_call_mode(const int mode);
	int get_rpc_call_mode() const;
	void set_validate(const bool enable);
	bool get_validate() const;
};

}
#endif
