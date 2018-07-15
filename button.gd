extends Button

export(String, FILE) var scene

func _pressed():
	get_tree().change_scene(scene)