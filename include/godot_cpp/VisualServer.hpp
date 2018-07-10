#ifndef VISUALSERVER_H
#define VISUALSERVER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Object.hpp"


namespace godot {



class GD_CPP_BINDING_API VisualServer : public Object {
private:
	static void ___singleton_init();
public:

	void _init();



	static RID texture_create();
	static RID texture_create_from_image(const Image arg0, const int arg1 = 7);
	static void texture_set_flags(const RID arg0, const int arg1);
	static int texture_get_flags(const RID arg0);
	static int texture_get_width(const RID arg0);
	static int texture_get_height(const RID arg0);
	static void texture_set_shrink_all_x2_on_set_data(const bool shrink);
};

}
#endif
