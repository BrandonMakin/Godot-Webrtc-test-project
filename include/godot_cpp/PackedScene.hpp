#ifndef PACKEDSCENE_H
#define PACKEDSCENE_H

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

class SceneState;
class Node;


class GD_CPP_BINDING_API PackedScene : public Resource {
public:

	void _init();

	const static int GEN_EDIT_STATE_DISABLED = 0;
	const static int GEN_EDIT_STATE_INSTANCE = 1;
	const static int GEN_EDIT_STATE_MAIN = 2;


	int pack(const Node *path);
	Node *instance(const int edit_state = false) const;
	bool can_instance() const;
	void _set_bundled_scene(const Dictionary arg0);
	Dictionary _get_bundled_scene() const;
	SceneState *get_state();
};

}
#endif
