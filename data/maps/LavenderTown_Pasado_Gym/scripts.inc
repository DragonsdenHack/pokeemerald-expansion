LavenderTown_Pasado_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_Pasado_Gym_OnFrame
	.byte 0

LavenderTown_Pasado_Gym_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 18, LavenderTown_Pasado_Gym
	.2byte 0

LavenderTown_Pasado_Gym_Gray::
setvar VAR_UNUSED_0x40F8, 19
end

LavenderTown_Pasado_Gym_Move_1:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_1.1:
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_2:
face_down
step_end

LavenderTown_Pasado_Gym_Move_3:
emote_exclamation_mark
step_end

LavenderTown_Pasado_Gym_Move_4:
face_down
emote_exclamation_mark
step_end

LavenderTown_Pasado_Gym_Move_5:
delay_16
delay_16
face_right
step_end

LavenderTown_Pasado_Gym_Move_6:
delay_16
delay_16
face_up
step_end

LavenderTown_Pasado_Gym_Move_7:
walk_up
walk_up
walk_up
face_left
step_end

LavenderTown_Pasado_Gym_Move_8:
walk_in_place_right
step_end

LavenderTown_Pasado_Gym_Move_9:
face_up
step_end

LavenderTown_Pasado_Gym_Move_10:
face_left
step_end

LavenderTown_Pasado_Gym_Move_11:
face_up
delay_16
delay_8
face_right
step_end

LavenderTown_Pasado_Gym_Move_12:
walk_in_place_left
step_end

LavenderTown_Pasado_Gym_Move_13:
face_down
delay_16
walk_in_place_down
step_end

LavenderTown_Pasado_Gym_Move_14:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_14.1:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_15:
walk_right
face_up
step_end

LavenderTown_Pasado_Gym_Move_16:
walk_slow_left
walk_slow_left
face_up
step_end

LavenderTown_Pasado_Gym_Move_17:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_18:
walk_slow_up
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_19:
walk_in_place_up
walk_slow_down
walk_slow_right
walk_slow_right
face_left
step_end

LavenderTown_Pasado_Gym_Move_20:
walk_down
step_end

LavenderTown_Pasado_Gym_Move_21:
face_left
delay_16
face_down
step_end

LavenderTown_Pasado_Gym_Move_22:
jump_in_place_up
step_end

LavenderTown_Pasado_Gym_Move_23:
emote_exclamation_mark
delay_16
face_left
delay_16
delay_8
face_up
delay_16
face_left
step_end

LavenderTown_Pasado_Gym_Move_24:
walk_up
face_down
step_end

LavenderTown_Pasado_Gym_Move_25:
walk_in_place_up
step_end

LavenderTown_Pasado_Gym_Move_26:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_27:
walk_fast_up
step_end

LavenderTown_Pasado_Gym_Move_28:
delay_16
face_left
delay_16
face_right
delay_16
face_up
step_end

LavenderTown_Pasado_Gym_Move_9.1:
face_up
jump_in_place_up
step_end

LavenderTown_Pasado_Gym_Izq_Move_1:
walk_slow_right
step_end

LavenderTown_Pasado_Gym_Der_Move_1:
walk_slow_left
step_end

LavenderTown_Pasado_Gym_Cen_Move_1:
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Izq_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym

LavenderTown_Pasado_Gym_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Der_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym

LavenderTown_Pasado_Gym_Cen::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Cen_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym



LavenderTown_Pasado_Gym::
lock
call Script_SetGrayscaleTint
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_1.1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
waitse
delay 5
playse SE_EXIT
addobject 10
call Script_SetGrayscaleTint
clearflag FLAG_HOENN_70
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 9, LavenderTown_Pasado_Gym_Move_4
waitmovement 0x0
waitse
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_5
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_6
applymovement 10, LavenderTown_Pasado_Gym_Move_7
waitmovement 0x0
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, LavenderTown_Pasado_Gym_Move_8
applymovement 10, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_6 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_11
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
applymovement 9, LavenderTown_Pasado_Gym_Move_9
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_13 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_9.1
applymovement 10, LavenderTown_Pasado_Gym_Move_9.1
waitmovement 0x0
special SpawnCameraObject
applymovement 4, LavenderTown_Pasado_Gym_Move_10
applymovement 10, LavenderTown_Pasado_Gym_Move_15
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Gym_Move_14
waitmovement 0x0
special RemoveCameraObject
msgbox LavenderTown_Pasado_Gym_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_16
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_16 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_17
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
applymovement 2, LavenderTown_Pasado_Gym_Move_18
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_19
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_20
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_27 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_21
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_29 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_31 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_32 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_23
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_33 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_24
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_36 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_37 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_2
applymovement 10, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_39 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_26
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_40 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_41 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_43 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_24
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_45 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_46 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_47 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_48 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_49 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_50 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_51 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_52 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_53 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_54 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_55 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_27
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_57 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_28
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_58 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_59 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_28
waitmovement 0x0
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_60 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_29
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_61 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_62 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_30
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_63 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, LavenderTown_Pasado_Gym_Move_2
applymovement 9, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_64 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_65 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_31
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_66 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitse
delay 25
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 25
msgbox LavenderTown_Pasado_Gym_Texto_67 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_32.1
applymovement 1, LavenderTown_Pasado_Gym_Move_32
waitmovement 0x0
removeobject 1
playse SE_EXIT
waitse
applymovement 9, LavenderTown_Pasado_Gym_Move_33
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_68 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, LavenderTown_Pasado_Gym_Move_34
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_69 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_70 MSGBOX_AUTOCLOSE
applymovement 4, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_71 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_70
setflag FLAG_HOENN_71
fadescreen 1
delay 40
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
removeobject 6
removeobject 7
removeobject 8
removeobject 9
removeobject 10
delay 40
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Gym_Move_14.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 20
release
end

LavenderTown_Pasado_Gym_Move_34:
walk_down
walk_left
step_end

LavenderTown_Pasado_Gym_Move_33:
walk_up
walk_right
step_end

LavenderTown_Pasado_Gym_Move_32:
walk_up
walk_right
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end

LavenderTown_Pasado_Gym_Move_32.1:
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
step_end


LavenderTown_Pasado_Gym_Move_31:
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_30:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

LavenderTown_Pasado_Gym_Move_29:
walk_left
walk_up
walk_up
step_end

LavenderTown_Pasado_Gym_Texto_1:
	.string "????: Just in time.$"

LavenderTown_Pasado_Gym_Texto_2:
	.string "AGATHA: You! What are you doing here?!$"

LavenderTown_Pasado_Gym_Texto_3:
	.string "You were never interested in\n"
	.string "LAVENDER TOWN.$"

LavenderTown_Pasado_Gym_Texto_4:
	.string "????: I'll someday become KANTO's\n"
	.string "CHAMPION. I should hear an actual one\l"
	.string "so I can get the idea.$"

LavenderTown_Pasado_Gym_Texto_5:
	.string "AGATHA: As prideful as always.\p"
	.string "You're hopeless, OAK.$"

LavenderTown_Pasado_Gym_Texto_6:
	.string "OAK: It's purely the truth.\p"
	.string "Who would defeat me? A GENGAR?$"

LavenderTown_Pasado_Gym_Texto_7:
	.string "AGATHA: Well, yes!$"

LavenderTown_Pasado_Gym_Texto_8:
	.string "OAK: Only a LEGENDARY will make me\n"
	.string "struggle{PAUSE 15}…{PAUSE 15}you'll see!$"

LavenderTown_Pasado_Gym_Texto_9:
	.string "AGATHA: Well guess what? My master's\n"
	.string "GHOST POKÉMON are as strong as a\l"
	.string "LEGENDARY! Even one of hers is one!$"

LavenderTown_Pasado_Gym_Texto_10:
	.string "OAK: You're bluffing. That's impossible.$"

LavenderTown_Pasado_Gym_Texto_11:
	.string "AGATHA: It's not! GASTLY, HAUNTER, and\n"
	.string "GENGAR are not the only ghosts in this\l"
	.string "TOWN.$"

LavenderTown_Pasado_Gym_Texto_12:
	.string "OAK: You'll see whe…!$"

LavenderTown_Pasado_Gym_Texto_13:
	.string "Enough! Shut up!$"

LavenderTown_Pasado_Gym_Texto_14:
	.string "We're witnessing something historical.$"

LavenderTown_Pasado_Gym_Texto_15:
	.string "For the first time ever, a GHOST TYPE\n"
	.string "TRAINER has emerged as CHAMPION.$"

LavenderTown_Pasado_Gym_Texto_16:
	.string "A sneaky, mysterious, and hard to\n"
	.string "understand type. But it hides a huge\l"
	.string "power which not anyone can control.$"

LavenderTown_Pasado_Gym_Texto_17:
	.string "A gifted girl took it to its limits.$"

LavenderTown_Pasado_Gym_Texto_18:
	.string "She'd made the young DRAGON MASTER of\n"
	.string "JOHTO bow down{PAUSE 15}…{PAUSE 15} and realized the\l"
	.string "impossible.$"

LavenderTown_Pasado_Gym_Texto_19:
	.string "LAVENDER TOWN will always have a\n"
	.string "special place for our CHAMPION: FRIDA.$"

LavenderTown_Pasado_Gym_Texto_20:
	.string "C. FRIDA: Thank you for your words,\n"
	.string "master.$"

LavenderTown_Pasado_Gym_Texto_21:
	.string "As you all may know, I was born in JOHTO.$"

LavenderTown_Pasado_Gym_Texto_22:
	.string "However, my heart will always belong to\n"
	.string "KANTO, to LAVENDER TOWN.$"

LavenderTown_Pasado_Gym_Texto_23:
	.string "Here and nowhere else is where I could\n"
	.string "become the best GYM LEADER that I\l"
	.string "could.$"

LavenderTown_Pasado_Gym_Texto_24:
	.string "You all know this place… It sprouts a\n"
	.string "different energy, something… spiritual.$"

LavenderTown_Pasado_Gym_Texto_25:
	.string "We cannot see it, and we may not even\n"
	.string "understand it. But we certainly cannot\l"
	.string "ignore its power.$"

LavenderTown_Pasado_Gym_Texto_26:
	.string "That is what helped me and my POKÉMON\n"
	.string "overcome my limits, and so it did make me\l"
	.string "realize a certain and undeniable truth,\l"
	.string "a truth that always was and always will\l"
	.string "be.$"

LavenderTown_Pasado_Gym_Texto_27:
	.string "OAK: And that truth is supposed to be…$"

LavenderTown_Pasado_Gym_Texto_28:
	.string "C. FRIDA: … That great TRAINERS can\n"
	.string "come from anywhere.$"

LavenderTown_Pasado_Gym_Texto_29:
	.string "OAK: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderTown_Pasado_Gym_Texto_30:
	.string "AGATHA: Master, master! Please tell us!$"

LavenderTown_Pasado_Gym_Texto_31:
	.string "What happened to your NINETALES?$"

LavenderTown_Pasado_Gym_Texto_32:
	.string "Did he really defeat the strongest\n"
	.string "DRAGONITE west of MT.SILVER after\l"
	.string "evolving?$"

LavenderTown_Pasado_Gym_Texto_33:
	.string "OAK: WHAT!?$"

LavenderTown_Pasado_Gym_Texto_34:
	.string "C. FRIDA: Ah, AGATHA, you're in the know.\n"
	.string "And you're right.$"

LavenderTown_Pasado_Gym_Texto_35:
	.string "As you know, NINETALES was my first\n"
	.string "POKÉMON.$"

LavenderTown_Pasado_Gym_Texto_36:
	.string "It feels like it was yesterday when I\n"
	.string "found him in this very GYM. I was even\l"
	.string "younger than you, AGATHA.$"

LavenderTown_Pasado_Gym_Texto_37:
	.string "On such a day, the little girl and that\n"
	.string "little VULPIX fused their destinies\l"
	.string "forever since.$"

LavenderTown_Pasado_Gym_Texto_38:
	.string "OAK: But NINETALES isn't a GHOST TYPE!$"

LavenderTown_Pasado_Gym_Texto_39:
	.string "C. FRIDA: Indeed.$"

LavenderTown_Pasado_Gym_Texto_40:
	.string "But{PAUSE 25}…{PAUSE 25} I always knew that little guy I'd\n"
	.string "found stirring around a mysterious\l"
	.string "tombstone had a lot of that TYPE\l"
	.string "hidden somewhere inside him.$"

LavenderTown_Pasado_Gym_Texto_41:
	.string "That VULPIX turned into the strongest\n"
	.string "NINETALES I have ever seen.$"

LavenderTown_Pasado_Gym_Texto_42:
	.string "However{PAUSE 15}…{PAUSE 15} the power of a dragon is\n"
	.string "terribly outstanding.$"

LavenderTown_Pasado_Gym_Texto_43:
	.string "Thanks to my abilities, I managed to\n"
	.string "withstand them. But the last of his\l"
	.string "dragons… That power was… beyond any\l"
	.string "control.$"

LavenderTown_Pasado_Gym_Texto_44:
	.string "Once a breach was opened in our\n"
	.string "defenses, our doom was sealed.$"

LavenderTown_Pasado_Gym_Texto_45:
	.string "However, we never did stop believing.\n"
	.string "And it happened.$"

LavenderTown_Pasado_Gym_Texto_46:
	.string "One way or another, all that potential{PAUSE 15}…{PAUSE 15}\n"
	.string "all those abstracts that I always knew\l"
	.string "were there{PAUSE 15}…{PAUSE 15} suddenly… manifested.$"

LavenderTown_Pasado_Gym_Texto_47:
	.string "Now, you could see it, smell it, feel it:\n"
	.string "that GHOST TYPE that was always within\l"
	.string "that VULPIX became materialized!$"

LavenderTown_Pasado_Gym_Texto_48:
	.string "AGATHA: Wow!$"

LavenderTown_Pasado_Gym_Texto_49:
	.string "C. FRIDA: In the beginning, they\n"
	.string "thought it was a bluff. A mere illusion\l"
	.string "provoked by hypnosis and its sense\l"
	.string "alteration.$"

LavenderTown_Pasado_Gym_Texto_50:
	.string "But no, it was very real. And it is the\n"
	.string "form my NINETALES will maintain for\l"
	.string "ever and ever.$"

LavenderTown_Pasado_Gym_Texto_51:
	.string "His fur turned hard as pure steel. There\n"
	.string "was no way to penetrate it.$"

LavenderTown_Pasado_Gym_Texto_52:
	.string "His mental powers also got enhanced,\n"
	.string "same as his agility and performance in\l"
	.string "battle.$"

LavenderTown_Pasado_Gym_Texto_53:
	.string "Even the CHAMPION was surprised; not\n"
	.string "even fighting more and more could\l"
	.string "prevent the outcome.$"

LavenderTown_Pasado_Gym_Texto_54:
	.string "His POKÉMON, a mark of the sacred, was\n"
	.string "defeated for the first time ever.$"

LavenderTown_Pasado_Gym_Texto_55:
	.string "AGATHA: It's… unbelievable.$"

LavenderTown_Pasado_Gym_Texto_56:
	.string "C. FRIDA: Maybe, without knowing it… we\n"
	.string "had been preparing all these years for\l"
	.string "this exact moment.$"

LavenderTown_Pasado_Gym_Texto_57:
	.string "OAK: Well, then, you made a great\n"
	.string "discovery! NINETALES can evolve!$"

LavenderTown_Pasado_Gym_Texto_58:
	.string "I bet its strength surpasses\n"
	.string "ARCANINE's. Even MOLTRES's!$"

LavenderTown_Pasado_Gym_Texto_59:
	.string "MORPHEUS: OAK…$"

LavenderTown_Pasado_Gym_Texto_60:
	.string "OAK: I'll train one too until it evolves.\n"
	.string "With that fine addition to my\l"
	.string "collection, my team will be stronger and\l"
	.string "more equilibrated.$"

LavenderTown_Pasado_Gym_Texto_61:
	.string "Tell me, CHAMPION. What level is your\n"
	.string "NINETALES now?$"

LavenderTown_Pasado_Gym_Texto_62:
	.string "C. FRIDA: It's not that simple, young\n"
	.string "one. Level doesn't matter here.$"

LavenderTown_Pasado_Gym_Texto_63:
	.string "OAK: Say what?$"

LavenderTown_Pasado_Gym_Texto_64:
	.string "AGATHA: Haven't you listened to\n"
	.string "anything she said? Her NINETALES\l"
	.string "evolved because they were connected:\l"
	.string "a special and unique bond made it\l"
	.string "possible.$"

LavenderTown_Pasado_Gym_Texto_65:
	.string "OAK: That's bullshit! It was just a\n"
	.string "mere coincidence; a lucky level-up.\p"
	.string "Nothing more, nothing less.$"

LavenderTown_Pasado_Gym_Texto_66:
	.string "C. FRIDA: On the contrary, young one.\p"
	.string "Sometimes, the greatest mysteries are\n"
	.string "hidden in the simplest things{PAUSE 15}…{PAUSE 15} in sight\l"
	.string "of everyone.$"

LavenderTown_Pasado_Gym_Texto_67:
	.string "Now, if you excuse me.$"

LavenderTown_Pasado_Gym_Texto_68:
	.string "AGATHA: Master! Wait!$"

LavenderTown_Pasado_Gym_Texto_69:
	.string "Let her rest. The battle she won was\n"
	.string "long and hard, and it's a long way from\l"
	.string "JOHTO.$"

LavenderTown_Pasado_Gym_Texto_70:
	.string "AGATHA: Damn it… I wanted to show her\n"
	.string "how my GASTLY had grown up…$"

LavenderTown_Pasado_Gym_Texto_71:
	.string "You can do so tomorrow.$"  
