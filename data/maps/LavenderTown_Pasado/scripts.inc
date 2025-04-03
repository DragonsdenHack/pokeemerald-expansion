LavenderTown_Pasado_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LavenderTown_Pasado_OnResume
	.byte 0

LavenderTown_Pasado_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 15, LavenderTown_Pasado_Gray
	.2byte 0

LavenderTown_Pasado_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 16
end

LavenderTown_PasadoDocumento_100::
msgbox LavenderTown_PasadoDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTown_Pasado_Pantalla_Blanco::
lock
call Script_RemoveTint
release
end

LavenderTown_Pasado_Pantalla_Gris::
lock
call Script_SetGrayscaleTint
release
end

LavenderTown_PasadoDocumento_Text_100:
	.string "LAVENDER TOWN GYM$"

LavenderTown_PasadoDocumento_101::
msgbox LavenderTown_PasadoDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTown_PasadoDocumento_Text_101:
	.string "PKMN CENTER$"


LavenderTown_Pasado_Agatha::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 5
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_1
waitmovement 0x0
playmoncry SPECIES_DROWZEE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_PSYBEAM
waitse
delay 15
playse SE_SUPER_EFFECTIVE
waitse
delay 15
playmoncry SPECIES_GASTLY, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3
waitmovement 0x0
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_6
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_8
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_9 MSGBOX_AUTOCLOSE
delay 25
playse SE_PIN
applymovement 5, LavenderTown_Pasado_Agatha_Move_2.1
applymovement 6, LavenderTown_Pasado_Agatha_Move_2.1
msgbox LavenderTown_Pasado_Agatha_Texto_10 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 1, LavenderTown_Pasado_Agatha_Move_10
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11
waitmovement 0x0
special RemoveCameraObject
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Agatha_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, LavenderTown_Pasado_Agatha_Move_15
applymovement 6, LavenderTown_Pasado_Agatha_Move_14
waitmovement 0x0
delay 10
applymovement 1, LavenderTown_Pasado_Agatha_Move_16
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_13 MSGBOX_AUTOCLOSE
delay 35
msgbox LavenderTown_Pasado_Agatha_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Agatha_Move_17
waitmovement 0x0
delay 10
applymovement 5, LavenderTown_Pasado_Agatha_Move_18
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 5
removeobject 6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11.1
waitmovement 0x0
setflag FLAG_HOENN_163
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 17
release
end

LavenderTown_Pasado_Agatha_Move_18:
walk_slow_up
delay_16
delay_16
face_down
delay_16
delay_16
face_up
delay_16
delay_16
face_down
delay_16
walk_slow_down
delay_16
delay_16
walk_slow_down
walk_slow_right
walk_slow_down
walk_down
walk_down
walk_fast_down
walk_fast_down
step_end


LavenderTown_Pasado_Agatha_Move_17:
walk_down
walk_down
walk_down
walk_down
step_end

LavenderTown_Pasado_Agatha_Move_16:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_15:
walk_slow_right
delay_16
walk_slow_right
delay_16
face_up
step_end

LavenderTown_Pasado_Agatha_Move_14:
walk_right
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


LavenderTown_Pasado_Agatha_Move_13:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_12:
jump_in_place_down
step_end

LavenderTown_Pasado_Agatha_Move_11.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

LavenderTown_Pasado_Agatha_Move_11:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_10:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Pasado_Agatha_Move_9:
face_left
step_end

LavenderTown_Pasado_Agatha_Move_8:
face_up
step_end

LavenderTown_Pasado_Agatha_Move_7:
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_6:
walk_left
step_end

LavenderTown_Pasado_Agatha_Move_5:
walk_in_place_left
step_end

LavenderTown_Pasado_Agatha_Move_4:
walk_in_place_right
step_end

LavenderTown_Pasado_Agatha_Move_3:
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Agatha_Move_3.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
step_end

LavenderTown_Pasado_Agatha_Move_2.1:
face_down
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_2:
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_1:
walk_in_place_down
step_end

LavenderTown_Pasado_Agatha_Texto_1:
	.string "DROWZEE! USE CONFUSION!$"

LavenderTown_Pasado_Agatha_Texto_2:
	.string "I won again!$"

LavenderTown_Pasado_Agatha_Texto_3:
	.string "Nah! It's not fair!$"

LavenderTown_Pasado_Agatha_Texto_4:
	.string "Whenever my GASTLY learns SHADOW BALL,\n"
	.string "I'll be able to defeat you!$"

LavenderTown_Pasado_Agatha_Texto_5:
	.string "I'm eager to see it evolve into HAUNTER!$"

LavenderTown_Pasado_Agatha_Texto_6:
	.string "But I'll have a resilient HYPNO that\n"
	.string "would withstand your attacks!$"

LavenderTown_Pasado_Agatha_Texto_7:
	.string "Well, yes, but… GENGAR is the best GHOST\n"
	.string "all over KANTO and JOHTO. I'll train no\l"
	.string "matter what or how much it's needed so\l"
	.string "this little one turns into one.$"

LavenderTown_Pasado_Agatha_Texto_8:
	.string "Hmmm… Can't HYPNO evolve even more?$"

LavenderTown_Pasado_Agatha_Texto_9:
	.string "Of course not!$"

LavenderTown_Pasado_Agatha_Texto_10:
	.string "????: Kids! She's here!$"

LavenderTown_Pasado_Agatha_Texto_11:
	.string "Yes! My master! She did it!$"

LavenderTown_Pasado_Agatha_Texto_12:
	.string "Everyone is at the GYM already.\n"
	.string "Come here now.$"

LavenderTown_Pasado_Agatha_Texto_13:
	.string "AGATHA! What are you doing!$"

LavenderTown_Pasado_Agatha_Texto_14:
	.string "I was just looking at the\n"
	.string "POKÉMON TOWER.$"

LavenderTown_Pasado_Agatha_Texto_15:
	.string "Oh, young one! You've got your whole\n"
	.string "life to see it!$"

LavenderTown_Pasado_Lider::
lock
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_3
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_4
waitmovement 0x0
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_6
msgbox LavenderTown_Pasado_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_10
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_11
waitmovement 0x0
playse SE_DOOR
opendoor 9, 16
waitdooranim
applymovement 9, LavenderTown_Pasado_Lider_Move_12
waitmovement 0x0
removeobject 9
playse SE_EXIT
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 20
msgbox LavenderTown_Pasado_Lider_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_13
waitmovement 0x0
removeobject 7
playse SE_EXIT
delay 30
applymovement 8, LavenderTown_Pasado_Lider_Move_14
waitmovement 0x0
removeobject 8
playse SE_EXIT
closedoor 9, 16
waitdooranim
setflag FLAG_HOENN_70
setvar VAR_UNUSED_0x40F8, 18
release
end

LavenderTown_Pasado_Lider_Move_14:
face_up
delay_16
delay_8
walk_slow_up
delay_16
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_13:
walk_left
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_12:
walk_up
step_end

LavenderTown_Pasado_Lider_Move_11:
walk_in_place_up
step_end

LavenderTown_Pasado_Lider_Move_10:
walk_slow_up
step_end

LavenderTown_Pasado_Lider_Move_9:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

LavenderTown_Pasado_Lider_Move_8:
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_7:
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_6:
walk_down
face_right
step_end

LavenderTown_Pasado_Lider_Move_5:
face_down
step_end

LavenderTown_Pasado_Lider_Move_3:
face_up
step_end

LavenderTown_Pasado_Lider_Move_4:
walk_slow_left
step_end

LavenderTown_Pasado_Lider_Move_2:
delay_8
face_up
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_1:
walk_in_place_left
step_end

LavenderTown_Pasado_Lider_Texto_1:
	.string "Is it true that you will retire from\n"
	.string "being a LEADER?$"

LavenderTown_Pasado_Lider_Texto_2:
	.string "That's true, MORPHEUS. My wife and I are\n"
	.string "moving next year.$"

LavenderTown_Pasado_Lider_Texto_3:
	.string "MORPHEUS: I've learnt a lot with you.\n"
	.string "I'll follow your footsteps!$"

LavenderTown_Pasado_Lider_Texto_4:
	.string "Some day, kid. Some day…$"

LavenderTown_Pasado_Lider_Texto_5:
	.string "MORPHEUS: But… they say that city folk\n"
	.string "are more and more interested in\l"
	.string "battling.$"

LavenderTown_Pasado_Lider_Texto_6:
	.string "There can only be eight GYMS. If every\n"
	.string "city got one, well, then this one…$"

LavenderTown_Pasado_Lider_Texto_7:
	.string "Easy! Calm down!$"

LavenderTown_Pasado_Lider_Texto_8:
	.string "Nothing lasts forever, but before that\n"
	.string "happens, there are many years to go.$"

LavenderTown_Pasado_Lider_Texto_9:
	.string "I've seen you, as every day I do.\p"
	.string "Both of you have talent, and more\n"
	.string "importantly, you're quite spirited.$"

LavenderTown_Pasado_Lider_Texto_10:
	.string "You will become a great TRAINER before\n"
	.string "that happens. You can be sure that this\l"
	.string "GYM will see you as a LEADER before its\l"
	.string "days come to a close.$"

LavenderTown_Pasado_Lider_Texto_11:
	.string "And now, well, let's not make our\n"
	.string "CHAMPION wait for us anymore!$"

LavenderTown_Pasado_Lider_Texto_12:
	.string "AGATHA: Let's go!$"
