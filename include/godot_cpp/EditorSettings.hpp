#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

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



class GD_CPP_BINDING_API EditorSettings : public Resource {
public:

	void _init();



	void erase(const String property);
	String get_settings_path() const;
	String get_project_settings_path() const;
	void add_property_info(const Dictionary info);
	void set_favorite_dirs(const PoolStringArray dirs);
	PoolStringArray get_favorite_dirs() const;
	void set_recent_dirs(const PoolStringArray dirs);
	PoolStringArray get_recent_dirs() const;
};

}
#endif
