#ifndef TRANSLATION_H
#define TRANSLATION_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Resource.hpp"


namespace godot {



class GD_CPP_BINDING_API Translation : public Resource {
public:

	void _init();



	void set_locale(const String locale);
	String get_locale() const;
	void add_message(const String src_message, const String xlated_message);
	String get_message(const String src_message) const;
	void erase_message(const String src_message);
	PoolStringArray get_message_list() const;
	int get_message_count() const;
	void _set_messages(const PoolStringArray arg0);
	PoolStringArray _get_messages() const;
};

}
#endif
