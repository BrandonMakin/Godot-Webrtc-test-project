#ifndef SHORTCUT_H
#define SHORTCUT_H

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



class GD_CPP_BINDING_API ShortCut : public Resource {
public:

	void _init();



	void set_shortcut(const InputEvent event);
	InputEvent get_shortcut() const;
	bool is_valid() const;
	bool is_shortcut(const InputEvent event) const;
	String get_as_text() const;
};

}
#endif
