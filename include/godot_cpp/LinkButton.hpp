#ifndef LINKBUTTON_H
#define LINKBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "BaseButton.hpp"


namespace godot {



class GD_CPP_BINDING_API LinkButton : public BaseButton {
public:

	void _init();

	const static int UNDERLINE_MODE_ALWAYS = 0;
	const static int UNDERLINE_MODE_NEVER = 2;
	const static int UNDERLINE_MODE_ON_HOVER = 1;


	void set_text(const String text);
	String get_text() const;
	void set_underline_mode(const int underline_mode);
	int get_underline_mode() const;
};

}
#endif
