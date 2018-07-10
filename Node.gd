extends Node2D

var pc1
var pc2

func _ready():
	
	print("--start--")	
	pc1 = WebRTCPeer.new();
	pc2 = WebRTCPeer.new();
	
	pc1.connect("notify", self, "pc1_notifications");
	pc2.connect("notify", self, "pc2_notifications");
	
	pc1.connect("new_ice_candidate", self, "pc1_has_ice_candidate")
	pc2.connect("new_ice_candidate", self, "pc2_has_ice_candidate")
	
	pc1.connect("offer_created", self, "send_offer_1_to_2");
	pc2.connect("offer_created", self, "send_offer_2_to_1");

	print("--host--")

	pc1.host_call()
	print("--finish--")

func my_method(msg):
	print(msg);

func pc1_notifications(msg):
	print("pc1 message: " + msg);
	#pass

func pc2_notifications(msg):
	print("pc2 message: " + msg);
	#pass

func send_offer_1_to_2(type, sdp):
	pc2.set_remote_description(sdp, true)
	#pass
	
	
func send_offer_2_to_1(type, sdp):
	pc1.set_remote_description(sdp, false)
	
func _input(event):
	if event.is_action_pressed("ui_accept"): #enter
		print("p1 sending message...")
		pc1.send_message("hello");
	if event.is_action_pressed("ui_select"): #space
		pc1.get_state_peer_connection()

func pc1_has_ice_candidate(MidName, MlineIndexName, Name):
	print("pc1 ice candidate: MidName = " + MidName \
	 + ", MLineIndexName = " + str(MlineIndexName) \
	 + ", Name = " + Name);
	pc2.add_ice_candidate(MidName, MlineIndexName, Name);

func pc2_has_ice_candidate(MidName, MlineIndexName, Name ):
	print("pc2 ice candidate: MidName = " + MidName \
	 + ", MLineIndexName = " + str(MlineIndexName) \
	 + ", Name = " + Name);
	pc1.add_ice_candidate(MidName, MlineIndexName, Name);
