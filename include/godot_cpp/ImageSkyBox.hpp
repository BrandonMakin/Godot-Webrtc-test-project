#ifndef IMAGESKYBOX_H
#define IMAGESKYBOX_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "SkyBox.hpp"


namespace godot {



class GD_CPP_BINDING_API ImageSkyBox : public SkyBox {
public:

	void _init();

	const static int IMAGE_PATH_MAX = 6;
	const static int IMAGE_PATH_NEGATIVE_X = 0;
	const static int IMAGE_PATH_NEGATIVE_Y = 2;
	const static int IMAGE_PATH_NEGATIVE_Z = 4;
	const static int IMAGE_PATH_POSITIVE_X = 1;
	const static int IMAGE_PATH_POSITIVE_Y = 3;
	const static int IMAGE_PATH_POSITIVE_Z = 5;


	void set_image_path(const int image, const String path);
	String get_image_path(const int image) const;
};

}
#endif
