#ifndef SKYBOX_H
#define SKYBOX_H

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



class GD_CPP_BINDING_API SkyBox : public Resource {
public:

	void _init();

	const static int RADIANCE_SIZE_1024 = 2;
	const static int RADIANCE_SIZE_2048 = 3;
	const static int RADIANCE_SIZE_256 = 0;
	const static int RADIANCE_SIZE_512 = 1;
	const static int RADIANCE_SIZE_MAX = 4;


	void set_radiance_size(const int size);
	int get_radiance_size() const;
};

}
#endif
