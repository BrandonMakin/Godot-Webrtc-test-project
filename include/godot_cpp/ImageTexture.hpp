#ifndef IMAGETEXTURE_H
#define IMAGETEXTURE_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Texture.hpp"


namespace godot {



class GD_CPP_BINDING_API ImageTexture : public Texture {
public:

	void _init();

	const static int STORAGE_COMPRESS_LOSSLESS = 2;
	const static int STORAGE_COMPRESS_LOSSY = 1;
	const static int STORAGE_RAW = 0;


	void create(const int width, const int height, const int format, const int flags = 7);
	void create_from_image(const Image image, const int flags = 7);
	int get_format() const;
	void load(const String path);
	void set_data(const Image image);
	Image get_data() const;
	void set_storage(const int mode);
	int get_storage() const;
	void set_lossy_storage_quality(const float quality);
	float get_lossy_storage_quality() const;
	void fix_alpha_edges();
	void premultiply_alpha();
	void normal_to_xy();
	void shrink_x2_and_keep_size();
	void set_size_override(const Vector2 size);
	void _reload_hook(const RID rid);
};

}
#endif
