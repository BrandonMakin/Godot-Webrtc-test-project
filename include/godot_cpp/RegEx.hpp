#ifndef REGEX_H
#define REGEX_H

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

class Object;


class GD_CPP_BINDING_API RegEx : public Resource {
public:

	void _init();



	void clear();
	int compile(const String pattern);
	Object *search(const String text, const int start = 0, const int end = -1) const;
	String sub(const String text, const String replacement, const bool all = false, const int start = 0, const int end = -1) const;
	bool is_valid() const;
	String get_pattern() const;
	int get_group_count() const;
	Array get_names() const;
};

}
#endif
