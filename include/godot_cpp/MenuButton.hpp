#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Button.hpp"


namespace godot {

class PopupMenu;


class GD_CPP_BINDING_API MenuButton : public Button {
public:

	void _init();



	PopupMenu *get_popup();
	void _unhandled_key_input(const InputEvent arg0);
	void _set_items(const Array arg0);
	Array _get_items() const;
};

}
#endif
