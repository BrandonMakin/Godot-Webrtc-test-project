#ifndef SCROLLCONTAINER_H
#define SCROLLCONTAINER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Container.hpp"


namespace godot {



class GD_CPP_BINDING_API ScrollContainer : public Container {
public:

	void _init();



	void _scroll_moved(const float arg0);
	void _gui_input(const InputEvent arg0);
	void set_enable_h_scroll(const bool enable);
	bool is_h_scroll_enabled() const;
	void set_enable_v_scroll(const bool enable);
	bool is_v_scroll_enabled() const;
	void _update_scrollbar_pos();
	void set_h_scroll(const int val);
	int get_h_scroll() const;
	void set_v_scroll(const int val);
	int get_v_scroll() const;
};

}
#endif
