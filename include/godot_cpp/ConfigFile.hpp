#ifndef CONFIGFILE_H
#define CONFIGFILE_H

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



class GD_CPP_BINDING_API ConfigFile : public Reference {
public:

	void _init();



	void set_value(const String section, const String key, const Variant value);
	Variant get_value(const String section, const String key, const Variant _default = Variant()) const;
	bool has_section(const String section) const;
	bool has_section_key(const String section, const String key) const;
	PoolStringArray get_sections() const;
	PoolStringArray get_section_keys(const String section) const;
	void erase_section(const String section);
	Error load(const String path);
	Error save(const String path);
};

}
#endif
