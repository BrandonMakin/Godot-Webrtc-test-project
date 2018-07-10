#ifndef ANIMATIONTREEPLAYER_H
#define ANIMATIONTREEPLAYER_H

#if defined(_WIN32) && defined(_GD_CPP_BINDING_IMPL)
#  define GD_CPP_BINDING_API __declspec(dllexport)
#elif defined(_WIN32)
#  define GD_CPP_BINDING_API __declspec(dllimport)
#else
#  define GD_CPP_BINDING_API
#endif


#include "core/CoreTypes.hpp"

#include <godot.h>



#include "Node.hpp"


namespace godot {

class Animation;


class GD_CPP_BINDING_API AnimationTreePlayer : public Node {
public:

	void _init();

	const static int NODE_ANIMATION = 1;
	const static int NODE_BLEND2 = 4;
	const static int NODE_BLEND3 = 5;
	const static int NODE_BLEND4 = 6;
	const static int NODE_MIX = 3;
	const static int NODE_ONESHOT = 2;
	const static int NODE_OUTPUT = 0;
	const static int NODE_TIMESCALE = 7;
	const static int NODE_TIMESEEK = 8;
	const static int NODE_TRANSITION = 9;


	void add_node(const int type, const String id);
	bool node_exists(const String node) const;
	int node_rename(const String node, const String new_name);
	int node_get_type(const String id) const;
	int node_get_input_count(const String id) const;
	String node_get_input_source(const String id, const int idx) const;
	void animation_node_set_animation(const String id, const Animation *animation);
	Animation *animation_node_get_animation(const String id) const;
	void animation_node_set_master_animation(const String id, const String source);
	String animation_node_get_master_animation(const String id) const;
	void animation_node_set_filter_path(const String id, const NodePath path, const bool enable);
	void oneshot_node_set_fadein_time(const String id, const float time_sec);
	float oneshot_node_get_fadein_time(const String id) const;
	void oneshot_node_set_fadeout_time(const String id, const float time_sec);
	float oneshot_node_get_fadeout_time(const String id) const;
	void oneshot_node_set_autorestart(const String id, const bool enable);
	void oneshot_node_set_autorestart_delay(const String id, const float delay_sec);
	void oneshot_node_set_autorestart_random_delay(const String id, const float rand_sec);
	bool oneshot_node_has_autorestart(const String id) const;
	float oneshot_node_get_autorestart_delay(const String id) const;
	float oneshot_node_get_autorestart_random_delay(const String id) const;
	void oneshot_node_start(const String id);
	void oneshot_node_stop(const String id);
	bool oneshot_node_is_active(const String id) const;
	void oneshot_node_set_filter_path(const String id, const NodePath path, const bool enable);
	void mix_node_set_amount(const String id, const float ratio);
	float mix_node_get_amount(const String id) const;
	void blend2_node_set_amount(const String id, const float blend);
	float blend2_node_get_amount(const String id) const;
	void blend2_node_set_filter_path(const String id, const NodePath path, const bool enable);
	void blend3_node_set_amount(const String id, const float blend);
	float blend3_node_get_amount(const String id) const;
	void blend4_node_set_amount(const String id, const Vector2 blend);
	Vector2 blend4_node_get_amount(const String id) const;
	void timescale_node_set_scale(const String id, const float scale);
	float timescale_node_get_scale(const String id) const;
	void timeseek_node_seek(const String id, const float pos_sec);
	void transition_node_set_input_count(const String id, const int count);
	int transition_node_get_input_count(const String id) const;
	void transition_node_delete_input(const String id, const int input_idx);
	void transition_node_set_input_auto_advance(const String id, const int input_idx, const bool enable);
	bool transition_node_has_input_auto_advance(const String id, const int input_idx) const;
	void transition_node_set_xfade_time(const String id, const float time_sec);
	float transition_node_get_xfade_time(const String id) const;
	void transition_node_set_current(const String id, const int input_idx);
	int transition_node_get_current(const String id) const;
	void node_set_pos(const String id, const Vector2 screen_pos);
	Vector2 node_get_pos(const String id) const;
	void remove_node(const String id);
	int connect_nodes(const String id, const String dst_id, const int dst_input_idx);
	bool are_nodes_connected(const String id, const String dst_id, const int dst_input_idx) const;
	void disconnect_nodes(const String id, const int dst_input_idx);
	void set_active(const bool enabled);
	bool is_active() const;
	void set_base_path(const NodePath path);
	NodePath get_base_path() const;
	void set_master_player(const NodePath nodepath);
	NodePath get_master_player() const;
	PoolStringArray get_node_list();
	void set_animation_process_mode(const int mode);
	int get_animation_process_mode() const;
	void advance(const float delta);
	void reset();
	void recompute_caches();
};

}
#endif
