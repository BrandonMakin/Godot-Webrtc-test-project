#ifndef VISUALSCRIPT_H
#define VISUALSCRIPT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Script.hpp"


namespace godot {

class Object;


class GD_CPP_BINDING_API VisualScript : public Script {
public:

	void _init();



	void _node_ports_changed(const int arg0);
	void add_function(const String name);
	bool has_function(const String name) const;
	void remove_function(const String name);
	void rename_function(const String name, const String new_name);
	void set_function_scroll(const String ofs, const Vector2 arg1);
	Vector2 get_function_scroll(const String arg0) const;
	void add_node(const String func, const int id, const Object *node, const Vector2 pos = Vector2(0, 0));
	void remove_node(const String func, const int id);
	int get_function_node_id(const String name) const;
	Object *get_node(const String func, const int id) const;
	bool has_node(const String func, const int id) const;
	void set_node_pos(const String func, const int id, const Vector2 pos);
	Vector2 get_node_pos(const String func, const int id) const;
	void sequence_connect(const String func, const int from_node, const int from_output, const int to_node);
	void sequence_disconnect(const String func, const int from_node, const int from_output, const int to_node);
	bool has_sequence_connection(const String func, const int from_node, const int from_output, const int to_node) const;
	void data_connect(const String func, const int from_node, const int from_port, const int to_node, const int to_port);
	void data_disconnect(const String func, const int from_node, const int from_port, const int to_node, const int to_port);
	bool has_data_connection(const String func, const int from_node, const int from_port, const int to_node, const int to_port) const;
	void add_variable(const String name, const Variant default_value = Variant(), const bool _export = false);
	bool has_variable(const String name) const;
	void remove_variable(const String name);
	void set_variable_default_value(const String name, const Variant value);
	void get_variable_default_value(const String name) const;
	void set_variable_info(const String name, const Dictionary value);
	Dictionary get_variable_info(const String name) const;
	void set_variable_export(const String name, const bool enable);
	bool get_variable_export(const String name) const;
	void rename_variable(const String name, const String new_name);
	void add_custom_signal(const String name);
	bool has_custom_signal(const String name) const;
	void custom_signal_add_argument(const String name, const int type, const String argname, const int index = -1);
	void custom_signal_set_argument_type(const String name, const int argidx, const int type);
	int custom_signal_get_argument_type(const String name, const int argidx) const;
	void custom_signal_set_argument_name(const String name, const int argidx, const String argname);
	String custom_signal_get_argument_name(const String name, const int argidx) const;
	void custom_signal_remove_argument(const String argidx, const int arg1);
	int custom_signal_get_argument_count(const String name) const;
	void custom_signal_swap_argument(const String name, const int argidx, const int withidx);
	void remove_custom_signal(const String name);
	void rename_custom_signal(const String name, const String new_name);
	void set_instance_base_type(const String type);
	void _set_data(const Dictionary data);
	Dictionary _get_data() const;
};

}
#endif
