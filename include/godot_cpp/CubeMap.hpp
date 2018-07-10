#ifndef CUBEMAP_H
#define CUBEMAP_H

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



class GD_CPP_BINDING_API CubeMap : public Resource {
public:

	void _init();

	const static int FLAGS_DEFAULT = 7;
	const static int FLAG_FILTER = 4;
	const static int FLAG_MIPMAPS = 1;
	const static int FLAG_REPEAT = 2;
	const static int SIDE_BACK = 5;
	const static int SIDE_BOTTOM = 2;
	const static int SIDE_FRONT = 4;
	const static int SIDE_LEFT = 0;
	const static int SIDE_RIGHT = 1;
	const static int SIDE_TOP = 3;
	const static int STORAGE_COMPRESS_LOSSLESS = 2;
	const static int STORAGE_COMPRESS_LOSSY = 1;
	const static int STORAGE_RAW = 0;


	int get_width() const;
	int get_height() const;
	void set_flags(const int flags);
	int get_flags() const;
	void set_side(const int side, const Image image);
	Image get_side(const int side) const;
	void set_storage(const int mode);
	int get_storage() const;
	void set_lossy_storage_quality(const float quality);
	float get_lossy_storage_quality() const;
};

}
#endif
