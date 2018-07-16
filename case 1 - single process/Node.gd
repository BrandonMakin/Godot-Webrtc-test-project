extends Node2D

var pc1
var pc2

var show_debug_messages = true;

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

	pc2.connect("new_peer_message", self, "pc2_display_message");

	print("--host--")

	pc1.create_offer()
	print("--finish--")

func _process(delta):
	pc1.poll()
	pc2.poll()

func my_method(msg):
	print(msg);

func pc1_notifications(msg):
	# This is for DEBUG. It notifies of all debug messages
	# and is not used for the signaling process.  
	if show_debug_messages:
		print("pc1 message: " + msg);
	

func pc2_notifications(msg):
	# This is for DEBUG. It notifies of all debug messages
	# and is not used for the signaling process.
	if show_debug_messages:
		print("pc2 message: " + msg);

func send_offer_1_to_2(type, sdp):
	pc1.set_local_description(sdp, true)
	pc2.set_remote_description(sdp, true)
	#pass

func send_offer_2_to_1(type, sdp):
	pc2.set_local_description(sdp, false)
	pc1.set_remote_description(sdp, false)
	
func _input(event):
	if event.is_action_pressed("ui_accept"): #enter
		print("p1 sending message...")
		pc1.send_message("hello there");
	if event.is_action_pressed("ui_select"): #space
		pc1.get_state_peer_connection()

func pc1_has_ice_candidate(MidName, MlineIndexName, Name):
	pc2.add_ice_candidate(MidName, MlineIndexName, Name);
	
	if show_debug_messages:
		print("pc1 ice candidate: MidName = " + MidName \
		 + ", MLineIndexName = " + str(MlineIndexName)  \
		 + ", Name = " + Name);

func pc2_has_ice_candidate(MidName, MlineIndexName, Name ):
	pc1.add_ice_candidate(MidName, MlineIndexName, Name);

	if show_debug_messages:
		print("pc2 ice candidate: MidName = " + MidName \
		 + ", MLineIndexName = " + str(MlineIndexName)  \
		 + ", Name = " + Name);

func pc2_display_message(msg):
	print("pc2 just got a message from pc1: " + msg);