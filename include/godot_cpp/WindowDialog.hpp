#ifndef WINDOWDIALOG_H
#define WINDOWDIALOG_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Popup.hpp"


namespace godot {

class TextureButton;


class GD_CPP_BINDING_API WindowDialog : public Popup {
public:

	void _init();



	void _gui_input(const InputEvent arg0);
	void set_title(const String title);
	String get_title() const;
	void set_resizable(const bool resizable);
	bool get_resizable() const;
	void _closed();
	TextureButton *get_close_button();
};

}
#endif
