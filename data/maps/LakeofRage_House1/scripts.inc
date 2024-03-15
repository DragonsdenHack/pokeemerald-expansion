LakeofRage_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LakeofRage_House1_OnFrame
	.byte 0

LakeofRage_House1_OnFrame:
map_script_2 VAR_MAUVILLE_CITY_STATE, 1, LakeofRageHouse1_Evento_Devon
	.2byte 0

LakeofRageHouse1_1::
lock
compare VAR_MAUVILLE_CITY_STATE, 1
goto_if_gt LakeofRageHouse1_1_2
faceplayer
msgbox LakeofRageHouse1_1_Texto_1 MSGBOX_NPC
release
end

LakeofRageHouse1_1_2:
msgbox LakeofRageHouse1_1_Texto_2 MSGBOX_NPC
release
end

LakeofRageHouse1_1_Texto_2:
	.string "I'll be forever thankful to you;\n"
	.string "individuals like you are the ones who\l"
	.string "truly deserve to discover the ancient\l"
	.string "secrets of the world. I hope you\l"
	.string "surpass those lunatics from HOENN.$"

LakeofRageHouse1_1_Texto_1:
	.string "You seem to come from KANTO, don't you?\n"
	.string "This region can hold many surprises for\l"
	.string "you, if you look at it with the right\l"
	.string "eyes.$"

LakeofRageHouse1_Evento_Devon::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_3
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LakeofRageHouse1_Evento_Devon_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox LakeofRageHouse1_Evento_Devon_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_5
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_6
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_7
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_3
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_4
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_8
waitmovement 0x0
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_8.1 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 4, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_10
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_5
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_ICE_CRACK
delay 60
playse SE_UNLOCK
setmetatile 4, 0, 0x13A, TRUE
setmetatile 5, 0, 0x13B, TRUE
setmetatile 6, 0, 0x13C, FALSE
setmetatile 6, 1, 0x144, FALSE
setmetatile 5, 1, 0x143, TRUE
setmetatile 4, 1, 0x142, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 4, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 5, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_10
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE
setflag FLAG_RECEIVED_SHOAL_SALT_4
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
setvar VAR_MAUVILLE_CITY_STATE, 2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LakeofRageHouse1_Evento_Devon_Move_12
waitmovement 0x0
special RemoveCameraObject
release
end

LakeofRageHouse1_Evento_Devon_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

LakeofRageHouse1_Evento_Devon_Move_11:
walk_in_place_right
step_end

LakeofRageHouse1_Evento_Devon_Move_10:
face_right
step_end

LakeofRageHouse1_Evento_Devon_Move_9:
walk_fast_left
step_end

LakeofRageHouse1_Evento_Devon_Move_8:
walk_slow_left
walk_slow_left
walk_slow_left
face_up
step_end

LakeofRageHouse1_Evento_Devon_Move_7:
face_down
step_end

LakeofRageHouse1_Evento_Devon_Move_6:
walk_slow_up
step_end

LakeofRageHouse1_Evento_Devon_Move_5:
face_up
step_end

LakeofRageHouse1_Evento_Devon_Move_4:
walk_in_place_left
step_end

LakeofRageHouse1_Evento_Devon_Move_3:
face_left
step_end

LakeofRageHouse1_Evento_Devon_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

LakeofRageHouse1_Evento_Devon_Move_1:
emote_exclamation_mark
step_end

LakeofRageHouse1_Evento_Devon_Texto_1:
	.string "FISHER MAN: I've told you already, it is\n"
	.string "just myths; no one alive has seen such a\l"
	.string "POKÉMON.$"

LakeofRageHouse1_Evento_Devon_Texto_2:
	.string "????: Is it truly just myths? You see,\n"
	.string "my team of SCIENTISTS and I have come\l"
	.string "from afar to uncover the entire truth.$"

LakeofRageHouse1_Evento_Devon_Texto_3:
	.string "You'll understand that we can't just\n"
	.string "leave without ensuring that you tell us\l"
	.string "everything you know.$"

LakeofRageHouse1_Evento_Devon_Texto_4:
	.string "We've already interrogated all the\n"
	.string "FISHERMEN in the area, and they've all\l"
	.string "confirmed based on their experience\l"
	.string "what the ancient records we have also\l"
	.string "confirm: There's a POKÉMON in this LAKE,\l"
	.string "a POKÉMON of such power that even the\l"
	.string "GYARADOS of this place flee in terror.$"

LakeofRageHouse1_Evento_Devon_Texto_5:
	.string "SCIENTIST 1: No other way could the\n"
	.string "FISHERMEN's SUPER RODS have given way.\l"
	.string "According to their reports, this has\l"
	.string "happened 3 times in the last decade.\l"
	.string "The creature that broke free from\l"
	.string "those SUPER RODS had to exert a force 3\l"
	.string "times greater than that of any\l"
	.string "GYARADOS.$"

LakeofRageHouse1_Evento_Devon_Texto_6:
	.string "FISHERMAN: Impressive, I'm aware about\n"
	.string "it, but what do you want from me? That I\l"
	.string "guide you to a place that no one knows?$"

LakeofRageHouse1_Evento_Devon_Texto_7:
	.string "????: You hail from the most ancient\n"
	.string "FISHER lineage in MAHOGANY TOWN. If\l"
	.string "anyone possesses knowledge that\l"
	.string "eludes others, it's you.$"

LakeofRageHouse1_Evento_Devon_Texto_8:
.string "FISHERMAN: I already told you, I know nothi…$"

LakeofRageHouse1_Evento_Devon_Texto_8.1:
.string "…$"

LakeofRageHouse1_Evento_Devon_Texto_9:
.string "???: What is this?$"

LakeofRageHouse1_Evento_Devon_Texto_10:
	.string "FISHERMAN: A… a trophy, one of my\n"
	.string "ancestors became a CHAMPION of JOHTO.$"

LakeofRageHouse1_Evento_Devon_Texto_11:
	.string "????: Using only POKÉMON catched here?\n"
	.string "Hehe interesting… the team must have\l"
	.string "been very strong, maybe…$"

LakeofRageHouse1_Evento_Devon_Texto_12:
	.string "If that LEGENDARY POKÉMON were among\n"
	.string "their ranks, what do you have to say\l"
	.string "about it?$"

LakeofRageHouse1_Evento_Devon_Texto_13:
	.string "FISHERMAN: Eh… Wait, those stairs only\n"
	.string "lead to an underground cave beneath\l"
	.string "the LAKE. I don't advise you to enter;\l"
	.string "the wild POKÉMON there are extremely\l"
	.string "hostile, they don't have any contact\l"
	.string "with humans.$"

LakeofRageHouse1_Evento_Devon_Texto_14:
	.string "????: That is exactly what we were\n"
	.string "searching for.$"

LakeofRageHouse1_Evento_Devon_Texto_15:
	.string "You lied; now you will descend there\n"
	.string "with us, and you will guide us to the end\l"
	.string "of that cavern.$"

LakeofRageHouse1_Evento_Devon_Texto_16:
	.string "FISHERMAN: There's no end! I've never\n"
	.string "ventured beyond the second level! The\l"
	.string "wild POKÉMON will destroy us all before\l"
	.string "we can continue moving forward!$"


LakeofRageHouse1_Evento_Devon_Texto_17:
	.string "????: I'll handle that… with the help of\n"
	.string "my POKÉMON. Let's move!$"


LakeofRageHouse1_Activacion_Caverna::
compare VAR_MAUVILLE_CITY_STATE, 1
goto_if_gt LakeofRageHouse1_Activacion_Caverna_Warp
msgbox LakeofRageHouse1_Activacion_Caverna_Texto_1 MSGBOX_AUTOCLOSE
release
end

LakeofRageHouse1_Activacion_Caverna_Texto_1:
	.string "It looks like the JOHTO CHAMPION\n"
	.string "trophy, although it appears very old.\l"
	.string "Which POKÉMON might the CHAMPION of\l"
	.string "that era have used?$"

LakeofRageHouse1_Activacion_Caverna_Text_YesNo:
	.string "Do you want to activate the secret\n"
	.string "entrance?$"

LakeofRageHouse1_Activacion_Caverna_Warp::
msgbox LakeofRageHouse1_Activacion_Caverna_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 20
playse SE_ICE_CRACK
delay 60
playse SE_UNLOCK
setmetatile 4, 0, 0x13A, TRUE
setmetatile 5, 0, 0x13B, TRUE
setmetatile 6, 0, 0x13C, FALSE
setmetatile 6, 1, 0x144, FALSE
setmetatile 5, 1, 0x143, TRUE
setmetatile 4, 1, 0x142, TRUE
special DrawWholeMapView
delay 60
release
end

