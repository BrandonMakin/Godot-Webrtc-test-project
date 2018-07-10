#ifndef DYNAMICFONTDATA_H
#define DYNAMICFONTDATA_H

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



class GD_CPP_BINDING_API DynamicFontData : public Resource {
public:

	void _init();



	void set_font_path(const String path);
	String get_font_path() const;
};

}
#endif
