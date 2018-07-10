#ifndef BOXCONTAINER_H
#define BOXCONTAINER_H

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



class GD_CPP_BINDING_API BoxContainer : public Container {
public:

	void _init();

	const static int ALIGN_BEGIN = 0;
	const static int ALIGN_CENTER = 1;
	const static int ALIGN_END = 2;


	void add_spacer(const bool begin);
	int get_alignment() const;
	void set_alignment(const int alignment);
};

}
#endif
