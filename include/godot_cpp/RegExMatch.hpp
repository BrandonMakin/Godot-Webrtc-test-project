#ifndef REGEXMATCH_H
#define REGEXMATCH_H

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



class GD_CPP_BINDING_API RegExMatch : public Reference {
public:

	void _init();



	String expand(const String _template) const;
	int get_group_count() const;
	Array get_group_array() const;
	Array get_names() const;
	Dictionary get_name_dict() const;
	String get_string(const Variant name = 0) const;
	int get_start(const Variant name = 0) const;
	int get_end(const Variant name = 0) const;
};

}
#endif
