#ifndef PERFORMANCE_H
#define PERFORMANCE_H

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



class GD_CPP_BINDING_API Performance : public Object {
private:
	static void ___singleton_init();
public:

	void _init();

	const static int MEMORY_DYNAMIC = 4;
	const static int MEMORY_DYNAMIC_MAX = 6;
	const static int MEMORY_MESSAGE_BUFFER_MAX = 7;
	const static int MEMORY_STATIC = 3;
	const static int MEMORY_STATIC_MAX = 5;
	const static int MONITOR_MAX = 27;
	const static int OBJECT_COUNT = 8;
	const static int OBJECT_NODE_COUNT = 10;
	const static int OBJECT_RESOURCE_COUNT = 9;
	const static int PHYSICS_2D_ACTIVE_OBJECTS = 21;
	const static int PHYSICS_2D_COLLISION_PAIRS = 22;
	const static int PHYSICS_2D_ISLAND_COUNT = 23;
	const static int PHYSICS_3D_ACTIVE_OBJECTS = 24;
	const static int PHYSICS_3D_COLLISION_PAIRS = 25;
	const static int PHYSICS_3D_ISLAND_COUNT = 26;
	const static int RENDER_DRAW_CALLS_IN_FRAME = 16;
	const static int RENDER_MATERIAL_CHANGES_IN_FRAME = 13;
	const static int RENDER_OBJECTS_IN_FRAME = 11;
	const static int RENDER_SHADER_CHANGES_IN_FRAME = 14;
	const static int RENDER_SURFACE_CHANGES_IN_FRAME = 15;
	const static int RENDER_TEXTURE_MEM_USED = 18;
	const static int RENDER_USAGE_VIDEO_MEM_TOTAL = 20;
	const static int RENDER_VERTEX_MEM_USED = 19;
	const static int RENDER_VERTICES_IN_FRAME = 12;
	const static int RENDER_VIDEO_MEM_USED = 17;
	const static int TIME_FIXED_PROCESS = 2;
	const static int TIME_FPS = 0;
	const static int TIME_PROCESS = 1;


	static float get_monitor(const int monitor);
};

}
#endif
