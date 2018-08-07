extends Node2D

var client
var server

var show_debug_messages = true

func _ready():
	
	print("--start func ready()--")
	client = NetworkedMultiplayerWebRTC.new()
	server = NetworkedMultiplayerWebRTC.new()
	
	
	#"""
	client.connect("notify", self, "client_notifications")
	server.connect("notify", self, "server_notifications")
	
	client.connect("new_ice_candidate", self, "send_ice_candidate_client_to_server")
	server.connect("new_ice_candidate", self, "send_ice_candidate_server_to_client")
	
	client.connect("offer_created", self, "send_offer_client_to_server")
	server.connect("offer_created", self, "send_offer_server_to_client")
	
	server.connect("client_accepted", self, "send_id")
	#client.connect("client_accepted", self, "client_accepted")
	#"""
	
	"""
	client.connect("notify", self, "client_notifications", [], CONNECT_DEFERRED)
	server.connect("notify", self, "server_notifications", [], CONNECT_DEFERRED)
	
	client.connect("new_ice_candidate", self, "send_ice_candidate_client_to_server", [], CONNECT_DEFERRED)
	server.connect("new_ice_candidate", self, "send_ice_candidate_server_to_client", [], CONNECT_DEFERRED)
	
	client.connect("offer_created", self, "send_offer_client_to_server", [], CONNECT_DEFERRED)
	server.connect("offer_created", self, "send_offer_server_to_client", [], CONNECT_DEFERRED)
	"""

	
	server.create_server(32)
	client.create_client()
	#tell server there's a new client:
	server.accept_client()

	print("--finish func ready()--")

func _process(delta):
	client.poll()
	server.poll()

func my_method(msg):
	print(msg)

func client_notifications(msg, peer_id):
	# This is for DEBUG. It notifies of all debug messages
	# and is not used for the signaling process.  
	if show_debug_messages:
		print("[client] message: " + msg)
	

func server_notifications(msg, peer_id):
	# This is for DEBUG. It notifies of all debug messages
	# and is not used for the signaling process.
	if show_debug_messages:
		print("[server] message: " + msg)

func send_id(id):
	if show_debug_messages:
		print("client accepted. creating offer")
	client.set_unique_id(id)
	client.create_offer()

func send_offer_client_to_server(sdp, is_offer, id):
	#TODO add to docs: Whose ID is this? client's or server's?
	#In this case, it's the id of the target peer, not the sending peer
	
	print("client->server: id = " + str(id))
	client.set_local_description(sdp, is_offer, id)
	server.set_remote_description(sdp, is_offer, client.get_unique_id())
	#pass

func send_offer_server_to_client(sdp, is_offer, id):
	server.set_local_description(sdp, is_offer, id)
	client.set_remote_description(sdp, is_offer, server.get_unique_id())
	
func _input(event):
	if event.is_action_pressed("ui_left"): 
		client.set_target_peer(1)
		var message = "hi there" 
		print("client sending message: " + message)
		message = message.to_utf8()
		client.put_packet(message)
		#client.put_var(message)
	if event.is_action_pressed("ui_right"): 
		if (server.get_available_packet_count() == 0):
			print ("No packets to get!")
		else:
			#var received_message = server.get_var()
			#print(received_message)
			
			#"""
			var received_message = server.get_packet()
			print("message: " + received_message.get_string_from_utf8())
			#"""

func send_ice_candidate_client_to_server(MidName, MlineIndexName, Name, id):
	#TODO add to docs: Whose ID is this? clients or servers?
	#In this case, it's the id of the target peer, not the sending peer
	server.add_ice_candidate(MidName, MlineIndexName, Name, client.get_unique_id())
	
	if show_debug_messages:
		print("client ice candidate: MidName = " + MidName \
		 + ", MLineIndexName = " + str(MlineIndexName)  \
		 + ", Name = " + Name)

func send_ice_candidate_server_to_client(MidName, MlineIndexName, Name, id):
	client.add_ice_candidate(MidName, MlineIndexName, Name, server.get_unique_id())

	if show_debug_messages:
		print("server ice candidate: MidName = " + MidName \
		 + ", MLineIndexName = " + str(MlineIndexName)  \
		 + ", Name = " + Name)

func server_display_message(msg):
	print("server just got a message from client: " + msg)