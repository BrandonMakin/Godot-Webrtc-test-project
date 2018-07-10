#ifndef SPLITCONTAINER_H
#define SPLITCONTAINER_H

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



class GD_CPP_BINDING_API SplitContainer : public Container {
public:

	void _init();

	const static int DRAGGER_HIDDEN = 1;
	const static int DRAGGER_HIDDEN_COLLAPSED = 2;
	const static int DRAGGER_VISIBLE = 0;


	void _gui_input(const InputEvent arg0);
	void set_split_offset(const int offset);
	int get_split_offset() const;
	void set_collapsed(const bool collapsed);
	bool is_collapsed() const;
	void set_dragger_visibility(const int mode);
	int get_dragger_visibility() const;
};

}
#endif
