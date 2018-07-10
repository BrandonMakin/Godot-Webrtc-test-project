#ifndef OBJECT_H
#define OBJECT_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>


namespace godot {

class Script;
class Object;


class GD_CPP_BINDING_API Object {
public:

	const static int CONNECT_DEFERRED = 1;
	const static int CONNECT_ONESHOT = 4;
	const static int CONNECT_PERSIST = 2;
	const static int NOTIFICATION_POSTINITIALIZE = 0;
	const static int NOTIFICATION_PREDELETE = 1;


	void free();
	void _notification(const int what);
	void _set(const String property, const Variant value);
	void _get(const String property);
	Array _get_property_list();
	void _init();
	String get_class() const;
	bool is_class(const String type) const;
	void set(const String property, const Variant value);
	Variant get(const String property) const;
	Array get_property_list() const;
	Array get_method_list() const;
	void notification(const int what, const bool reversed = false);
	int get_instance_ID() const;
	void set_script(const Script *script);
	Script *get_script() const;
	void set_meta(const String name, const Variant value);
	void get_meta(const String name) const;
	bool has_meta(const String name) const;
	PoolStringArray get_meta_list() const;
	void add_user_signal(const String signal, const Array arguments = Array());
	bool has_user_signal(const String signal) const;
	void emit_signal(const String signal);
	Variant call(const String method);
	void call_deferred(const String method);
	Variant callv(const String method, const Array arg_array);
	bool has_method(const String method) const;
	Array get_signal_list() const;
	Array get_signal_connection_list(const String signal) const;
	int connect(const String signal, const Object *target, const String method, const Array binds = Array(), const int flags = 0);
	void disconnect(const String signal, const Object *target, const String method);
	bool is_connected(const String signal, const Object *target, const String method) const;
	void set_block_signals(const bool enable);
	bool is_blocking_signals() const;
	void set_message_translation(const bool enable);
	bool can_translate_messages() const;
	void property_list_changed_notify();
	String XL_MESSAGE(const String message) const;
	String tr(const String message) const;
	bool is_queued_for_deletion() const;
};

}
#endif
