NeoCinnabarIsland_MapScripts::
	.byte 0

NeoCinnabarIsland_Evento_Oak::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_1
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoCinnabarIsland_Evento_Oak_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox NeoCinnabarIsland_Evento_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoCinnabarIsland_Evento_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoCinnabarIsland_Evento_Oak_Texto_4 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoCinnabarIsland_Evento_Oak_Move_4
waitmovement 0x0
special RemoveCameraObject
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_5
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_1
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_6
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoCinnabarIsland_Evento_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_5
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_6
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoCinnabarIsland_Evento_Oak_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 192
release
end

NeoCinnabarIsland_Evento_Oak_Move_7:
walk_in_place_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_6:
face_right
step_end

NeoCinnabarIsland_Evento_Oak_Move_5:
face_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_4:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

NeoCinnabarIsland_Evento_Oak_Move_2:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

NeoCinnabarIsland_Evento_Oak_Move_1:
walk_in_place_up
step_end

NeoCinnabarIsland_Evento_Oak_Texto_1:
.string "What do you think about this, {PLAYER}?$"

NeoCinnabarIsland_Evento_Oak_Texto_2:
	.string "No matter how much progress we've made,\n"
	.string "we still can't control phenomena like\l"
	.string "this.$"

NeoCinnabarIsland_Evento_Oak_Texto_3:
	.string "I don't believe in these things, but it's\n"
	.string "as if nature is responding to our\l"
	.string "attempts to reach its ultimate limits.$"

NeoCinnabarIsland_Evento_Oak_Texto_4:
	.string "And asserting its decisive role, she has\n"
	.string "the final say, and as punishment for\l"
	.string "revealing too much, it buries our\l"
	.string "progress.$"

NeoCinnabarIsland_Evento_Oak_Texto_5:
	.string "But… isn't this a sign that we're on the\n"
	.string "right path? That we're entering\l"
	.string "unhallowed ground?$"

NeoCinnabarIsland_Evento_Oak_Texto_6:
	.string "These are the final tries of a nature\n"
	.string "unable to halt the inevitable, that's\l"
	.string "all. And now you shall reclaim even what\l"
	.string "it tried to destroy.$"

NeoCinnabarIsland_Evento_Oak_Texto_7:
	.string "During your absence, we sent out\n"
	.string "several scouts. We managed to locate\l"
	.string "our underground bunker through the\l"
	.string "volcano, now inactive.$"

NeoCinnabarIsland_Evento_Oak_Texto_8:
	.string "Your mission will be to venture into the\n"
	.string "depths of the place. In its final room,\l"
	.string "there's a painting of FUJI; behind it\l"
	.string "lies a hard drive containing all the\l"
	.string "compiled advancements made in that\l"
	.string "laboratory.$"

NeoCinnabarIsland_Evento_Oak_Texto_9:
	.string "Be careful; some of our most advanced\n"
	.string "projects are there, many of them still\l"
	.string "in the testing phase. They won't be\l"
	.string "showcased even at the II GOLDENROD\l"
	.string "MEETING.$"

NeoCinnabarIsland_Evento_Oak_Texto_10:
	.string "I won't keep you any longer, {PLAYER}.\n"
	.string "I hope you once again demonstrate why\l"
	.string "you're the best TRAINER.$"
