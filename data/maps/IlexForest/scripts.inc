IlexForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, IlexForest_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, IlexForest_OnFrame
	.byte 0

IlexForest_OnResume:
	call IlexForest_SetupEscapeWarp
	end

IlexForest_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 29, IlexForest_Escena
map_script_2 VAR_UNUSED_0x40F8, 34, IlexForest_Escena_Despues
	.2byte 0

IlexForest_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 7, 11
	return

IlexForest1::
lock     
faceplayer     
msgbox IllexForest_Text_1, MSGBOX_DEFAULT
release     
end

IllexForest_Text_1:
	.string "AZALEA TOWN's always obtained the wood\n"
	.string "we use for charcoal production from\l"
	.string "this forest. We're very thankful for it.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
	.string "Damn trees… How're they regenerating\n"
	.string "when I'd just lopped them a moment ago?\l"
	.string "Do I really have to trek back to AZALEA\l"
	.string "for CUT?$"



IlexForest4::
end



IlexForest5::
end



IlexForest6::
end



IlexForest7::
end



IlexForest8::
end



IlexForest9::
lock     
faceplayer     
msgbox IllexForest_Text_9, MSGBOX_DEFAULT
release     
end

IllexForest_Text_9:
	.string "So-FARFETCH'D is pretty weak, but no\n"
	.string "other POKÉMON's as handy at chopping\l"
	.string "up trees.$"



IlexForest10::
end



IlexForest11::
end



IlexForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_VR_4, IlexForest_Text_CazabichosIntro, IlexForest_Text_CazabichosDefeated
	msgbox IlexForest_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_MUDKIP, IlexForest_Text_ChicoIntro, IlexForest_Text_ChicoDefeated
	msgbox IlexForest_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chica::
	trainerbattle_single TRAINER_WALLY_VR_5, IlexForest_Text_ChicaIntro, IlexForest_Text_ChicaDefeated
	msgbox IlexForest_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


IlexForest_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Llamada_Giovanni_Move_1
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
msgbox IlexForest_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IlexForest_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_POKENAV_OFF
waitse
delay 15
setvar VAR_UNUSED_0x40F7, 132
release
end

IlexForest_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? This poor sound\n"
	.string "quality… You'd already arrived in ILEX\l"
	.string "FOREST, haven't you? That name makes\l"
	.string "me wax nostalgic. Regardless, we've\l"
	.string "acquired intel on KURT's DEEP BOND\l"
	.string "BUTTERFREE. Its most extraordinary\l"
	.string "aspect isn't the combined total of its\l"
	.string "STATS at 505, but rather, how finely\l"
	.string "they'd been distributed. Like its\l"
	.string "ATTACK pushed to the extreme minimum\l"
	.string "of… five. Together with its\l"
	.string "ADAPTABILITY, it's orders more\l"
	.string "dangerous than than most\l"
	.string "PSEUDO-LEGENDARIES on a practical\l"
	.string "level. Isn't it incredible to see the\l"
	.string "heights an otherwise mediocre POKÉMON\l"
	.string "doomed to its 395-BASE STATS can\l"
	.string "achieve? Just how terrifying such a\l"
	.string "thing can become?$"

IlexForest_Llamada_Giovanni_Texto_2:
	.string "That aside, I've sent ARCHER ahead to\n"
	.string "GOLDENROD CITY. You're required to meet\l"
	.string "him at the RADIO TOWER. He'll present\l"
	.string "you the details there. I anticipate\l"
	.string "further communication from you,\l"
	.string "{PLAYER}.$"


IlexForestDocumento_100::
msgbox IlexForestDocumento_Text_100, MSGBOX_SIGN   
end

IlexForestDocumento_Text_100:
	.string "There are so many trees in the ILEX\n"
	.string "FOREST that you can't even see the sky.\l"
	.string "Please search for any items on the\l"
	.string "floor.$"

IlexForest_IdaVuelta::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_808, IlexForest_Despues
msgbox IlexForest_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM91
msgbox IlexForest_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_808
release     
end

IlexForest_Despues::
msgbox IlexForest_Texto_2, MSGBOX_NPC
release
end

IlexForest_Texto_1.1:
	.string "{PLAYER} obtained the TM91 U-TURN\n"
	.string "from BUG CATCHER!$"

IlexForest_Texto_1:
.string "Estoy aquí, desarrollando\n"
	.string "en secreto el movimiento TIPO\l"
	.string "BICHO defintivo en cuanto a\l"
	.string "estrategia. IDA Y VUELTA marcará\l"
	.string "un antes y un después en el ritmo\l"
	.string "de los combates. Mira.$"

IlexForest_Texto_2:
.string "¡Vas a tener a los POKÉMON más\n"
	.string "escurridizos e impredecibles\l"
	.string "gracias a IDA Y VUELTA, ya lo\l"
	.string "verás!$"

IlexForest_Escena_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

IlexForest_Escena_Move_2:
walk_fast_down
lock_facing_direction
walk_up
unlock_facing_direction
step_end

IlexForest_Escena_Move_3:
face_left
step_end

IlexForest_Escena_Move_4:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

IlexForest_Escena_Move_5:
face_up
delay_16
delay_16
walk_slow_right
step_end

IlexForest_Escena_Move_6:
delay_8
face_down
step_end

IlexForest_Escena_Move_7:
walk_slow_right
step_end

IlexForest_Escena_Move_8:
face_up
step_end

IlexForest_Escena_Move_9:
walk_slow_up
walk_slow_up
step_end

IlexForest_Escena_Move_10:
delay_16
delay_8
face_up
step_end


IlexForest_Escena::
lock
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
removeobject 19
removeobject 20
removeobject 3
removeobject 12
removeobject 13
removeobject 16
addobject 15
addobject 14
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
msgbox IlexForest_Escena_Texto_1 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 14, IlexForest_Escena_Move_2
delay 10
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
playse SE_M_CUT
waitse
removeobject 2
delay 75
applymovement 14, IlexForest_Escena_Move_3
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Texto_2 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 18
applymovement 18, IlexForest_Escena_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_5
waitmovement 0x0
msgbox IlexForest_Escena_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, IlexForest_Escena_Move_7
waitmovement 0x0
msgbox IlexForest_Escena_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, IlexForest_Escena_Move_3
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_10
applymovement 14, IlexForest_Escena_Move_10
applymovement 18, IlexForest_Escena_Move_9
waitmovement 0x0
msgbox IlexForest_Escena_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, IlexForest_Escena_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_12
applymovement 18, IlexForest_Escena_Move_13
waitmovement 0x0
msgbox IlexForest_Escena_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Texto_16 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 15, IlexForest_Escena_Move_15
waitmovement 0x0
waitse
delay 5
msgbox IlexForest_Escena_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_12
waitmovement 0x0
msgbox IlexForest_Escena_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_16
delay 250
applymovement 15, IlexForest_Escena_Move_6
delay 15
msgbox IlexForest_Escena_Texto_19 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
msgbox IlexForest_Escena_Texto_20 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HOENN_674
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
delay 15
setvar VAR_UNUSED_0x40F8, 30
warpsilent MAP_SOUTH_ROUTE45, 5, 82
delay 100
release
end

IlexForest_Escena_Move_16:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

IlexForest_Escena_Move_15:
jump_in_place_left
step_end

IlexForest_Escena_Move_15.1:
jump_in_place_down
step_end

IlexForest_Escena_Move_14:
walk_in_place_right
step_end

IlexForest_Escena_Move_13:
walk_down
face_right
step_end

IlexForest_Escena_Move_12:
delay_16
face_left
step_end

IlexForest_Escena_Move_11:
walk_in_place_up
step_end

IlexForest_Escena_Texto_1:
	.string "Ther!$"

IlexForest_Escena_Texto_2:
	.string "Oh! I'm most impressed!$"

IlexForest_Escena_Texto_3:
	.string "Your SCYTHER is growing up\n"
	.string "outstandingly fast!$"

IlexForest_Escena_Texto_4:
	.string "It's truly delightful to see a young girl\n"
	.string "like you with such enthusiasm nowadays.\n"
	.string "It's relieving that old values still\l"
	.string "persist in the present time.$"

IlexForest_Escena_Texto_5:
	.string "Thanks, but{PAUSE 25}…{PAUSE 25} I can't tell the\n"
	.string "difference.$"

IlexForest_Escena_Texto_6:
	.string "Yes{PAUSE 25}…{PAUSE 25} Of course{PAUSE 25}…{PAUSE 25} You see it all the time.\n"
	.string "You can't appreciate it, but every\n"
	.string "action, every decision, every battle… is\l"
	.string "making a great difference.$"

IlexForest_Escena_Texto_7:
	.string "Does that mean that I'll have a\n"
	.string "KLEAVOR, just like KURT's?$"

IlexForest_Escena_Texto_8:
	.string "Oh, if you just knew all the things he\n"
	.string "went through before he could evolve his\n"
	.string "SCYTHER!$"

IlexForest_Escena_Texto_9:
	.string "Only after traveling to every corner of\n"
	.string "the region, unveiling every secret and\n"
	.string "not a moment before, could he do it.$"

IlexForest_Escena_Texto_10:
	.string "But{PAUSE 25}…{PAUSE 25} I don't even know all the secrets\n"
	.string "of this ILEX FOREST… How could I\n"
	.string "possibly do that!$"

IlexForest_Escena_Texto_11:
	.string "The TRAINER's way requires both time\n"
	.string "and sacrifice. Only then will you sow\n"
	.string "strong roots, roots that will stand\l"
	.string "against any adversity.$"

IlexForest_Escena_Texto_12:
	.string "This energy, this emotion; the one\n"
	.string "you're putting into your SCYTHER is\n"
	.string "never a futile action. It will always\l"
	.string "have a meaning.$"

IlexForest_Escena_Texto_13:
	.string "That's but the essence of the greatest\n"
	.string "masters in JOHTO.$"

IlexForest_Escena_Texto_14:
	.string "Oh…$"

IlexForest_Escena_Texto_15:
	.string "You, young girl{PAUSE 25}…{PAUSE 25} You have everything\n"
	.string "that's needed: both time and talent.$"

IlexForest_Escena_Texto_16:
	.string "JOHTO is awaiting you…\p"
	.string "Will you come to its call?$"

IlexForest_Escena_Texto_17:
	.string "Of course, I will!$"

IlexForest_Escena_Texto_18:
	.string "Well, in that case{PAUSE 35}…{PAUSE 35} JOHTO is observing\n"
	.string "you! Ho, ho, ho!$"

IlexForest_Escena_Texto_19:
	.string "Come on, SCYTHER.\n"
	.string "Greatness awaits us!$"

IlexForest_Escena_Texto_20:
	.string "Ther!$"

IlexForest_Escena_Despues_Move_1:
walk_in_place_down
step_end

IlexForest_Escena_Despues_Move_2:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

IlexForest_Escena_Despues_Move_3:
delay_8
face_up
step_end

IlexForest_Escena_Despues_Move_4:
delay_16
delay_8
face_left
delay_16
delay_8
face_down
step_end

IlexForest_Escena_Despues_Move_5:
delay_8
face_left
step_end

IlexForest_Escena_Despues_Move_6:
walk_slow_down
step_end

IlexForest_Escena_Despues_Move_7:
face_left
step_end

IlexForest_Escena_Despues_Move_8:
emote_exclamation_mark
step_end

IlexForest_Escena_Despues_Move_9:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

IlexForest_Escena_Despues_Move_10:
walk_left
step_end

IlexForest_Escena_Despues_Move_11:
walk_in_place_right
step_end

IlexForest_Escena_Despues_Move_12:
delay_16
face_left
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

IlexForest_Escena_Despues_Move_13:
walk_in_place_left
step_end

IlexForest_Escena_Despues_Move_14:
walk_right
step_end

IlexForest_Escena_Despues_Move_15:
delay_8
face_down
step_end

IlexForest_Escena_Despues_Move_16:
walk_in_place_up
step_end

IlexForest_Escena_Despues_Move_17:
delay_16
face_left
delay_16
delay_16
face_down
step_end

IlexForest_Escena_Despues_Move_7.1:
emote_question_mark
step_end

IlexForest_Escena_Despues_Move_18:
delay_16
delay_8
lock_facing_direction
walk_slow_up
unlock_facing_direction
delay_16
delay_8
face_right
delay_16
delay_8
face_up
delay_16
delay_16
face_down
step_end

IlexForest_Escena_Despues::
lock
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 15
addobject 14
removeobject 20
removeobject 19
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 15, IlexForest_Escena_Despues_Move_1
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Move_2
delay 10
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
playse SE_M_CUT
waitse
removeobject 2
delay 75
msgbox IlexForest_Escena_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 35
applymovement 14, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_2
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
delay 35
msgbox IlexForest_Escena_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_5
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_7 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 14, IlexForest_Escena_Despues_Move_7.1
waitmovement 0x0
delay 35
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 25
msgbox IlexForest_Escena_Despues_Texto_10 MSGBOX_AUTOCLOSE
delay 25
applymovement 15, IlexForest_Escena_Despues_Move_7
applymovement 14, IlexForest_Escena_Despues_Move_7
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Despues_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 12
addobject 13
applymovement 12, IlexForest_Escena_Despues_Move_9
applymovement 13, IlexForest_Escena_Despues_Move_9
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_12 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_10
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, IlexForest_Escena_Despues_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_14 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_12
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_13
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
applymovement 15, IlexForest_Escena_Despues_Move_15
applymovement 12, IlexForest_Escena_Despues_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_17 MSGBOX_AUTOCLOSE
delay 5
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_19 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_20 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_21 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, IlexForest_Escena_Despues_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_17
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_24 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_25 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_18
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_28 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_28.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_19
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_29 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 15, IlexForest_Escena_Move_15.1
waitmovement 0x0
waitse
delay 15
msgbox IlexForest_Escena_Despues_Texto_30 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Despues_Move_20
applymovement 15, IlexForest_Escena_Despues_Move_21
applymovement 12, IlexForest_Escena_Despues_Move_22
applymovement 13, IlexForest_Escena_Despues_Move_22
waitmovement 0x0
removeobject 15
removeobject 12
removeobject 13
applymovement 14, IlexForest_Escena_Despues_Move_23
waitmovement 0x0
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 15
addobject 16
applymovement 16, IlexForest_Escena_Despues_Move_24
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_31 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Despues_Move_26
applymovement 16, IlexForest_Escena_Despues_Move_25
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, IlexForest_Escena_Despues_Move_27
applymovement 16, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_33 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Despues_Move_28
waitmovement 0x0
special RemoveCameraObject
playse SE_BALL_THROW
waitse
delay 15
playse SE_BALL_TRADE
waitse
addobject 17
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_34 MSGBOX_AUTOCLOSE
delay 25
applymovement 16, IlexForest_Escena_Despues_Move_29
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_38 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_40 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_41 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 16, IlexForest_Escena_Despues_Move_31
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
delay 45
msgbox IlexForest_Escena_Despues_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_43 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_44 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
playse SE_LEDGE
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Despues_Texto_45 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_32
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_46 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_33
waitmovement 0x0
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_47 MSGBOX_AUTOCLOSE
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_M_FLAME_WHEEL2
applymovement 17, IlexForest_Escena_Despues_Move_34
waitmovement 0x0
delay 15
playse SE_SUPER_EFFECTIVE
waitse
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
removeobject 14
waitse
delay 25
msgbox IlexForest_Escena_Despues_Texto_48 MSGBOX_AUTOCLOSE
delay 25
msgbox IlexForest_Escena_Despues_Texto_49 MSGBOX_AUTOCLOSE
delay 25
applymovement 16, IlexForest_Escena_Despues_Move_35
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_50 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
setvar VAR_UNUSED_0x40F8, 35
warpsilent MAP_ROUTE27, 74, 8
release
end

IlexForest_Escena_Despues_Move_35:
face_up
delay_16
step_end

IlexForest_Escena_Despues_Move_34:
walk_fast_down
walk_fast_down
step_end

IlexForest_Escena_Despues_Move_33:
walk_in_place_down
step_end

IlexForest_Escena_Despues_Move_32:
face_right
delay_16
delay_16
delay_16
face_down
delay_16
delay_16
step_end

IlexForest_Escena_Despues_Move_31:
delay_16
face_down
step_end

IlexForest_Escena_Despues_Move_30:
jump_in_place_up
step_end

IlexForest_Escena_Despues_Move_29:
face_left
delay_16
delay_16
face_up
delay_16
step_end

IlexForest_Escena_Despues_Move_28:
walk_fast_up
walk_fast_up
step_end

IlexForest_Escena_Despues_Move_27:
delay_8
face_up
step_end

IlexForest_Escena_Despues_Move_26:
delay_16
face_left
step_end

IlexForest_Escena_Despues_Move_25:
walk_slow_up
step_end

IlexForest_Escena_Despues_Move_24:
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
step_end

IlexForest_Escena_Despues_Move_23:
face_left
delay_16
delay_16
face_down
delay_16
delay_16
face_up
step_end


IlexForest_Escena_Despues_Move_22:
walk_in_place_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

IlexForest_Escena_Despues_Move_21:
delay_16
delay_8
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

IlexForest_Escena_Despues_Move_20:
delay_16
delay_16
face_left
delay_16
delay_16
emote_question_mark
step_end

IlexForest_Escena_Despues_Move_19:
walk_down
step_end

IlexForest_Escena_Despues_Texto_1:
	.string "SCYTHER! Again!$"

IlexForest_Escena_Despues_Texto_2:
	.string "Ther!$"

IlexForest_Escena_Despues_Texto_3:
	.string "Darn it all{PAUSE 25}…{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_4:
	.string "Why am I getting worse at this? And why\n"
	.string "do I feel more tired than a few weeks\n"
	.string "ago?$"

IlexForest_Escena_Despues_Texto_5:
	.string "I never thought the laws of the\n"
	.string "POKÉMON WORLD were so harsh.$"

IlexForest_Escena_Despues_Texto_6:
	.string "Feels like I'm so bogged down. There's\n"
	.string "so much more to go before I reach the\n"
	.string "level of the masters… but I'm already\l"
	.string "stuck in a rut!$"

IlexForest_Escena_Despues_Texto_7:
	.string "The math's just not adding up{PAUSE 25}…{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_8:
	.string "Could it be some kind of trial?$"

IlexForest_Escena_Despues_Texto_9:
	.string "But{PAUSE 35}…{PAUSE 35} if JOHTO truly is observing me… I'm\n"
	.string "not feeling it at all.$"

IlexForest_Escena_Despues_Texto_10:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_11:
	.string "Yo, girl!$"

IlexForest_Escena_Despues_Texto_12:
	.string "Wanna be cool like us?$"

IlexForest_Escena_Despues_Texto_13:
	.string "Huh? What do you mean?$"

IlexForest_Escena_Despues_Texto_14:
	.string "We heard all that crap 'bout that\n"
	.string "“TRAINER's way” that old man told ya.$"

IlexForest_Escena_Despues_Texto_15:
	.string "We can show you the true way. Ever been\n"
	.string "in GOLDENROD CITY?$"

IlexForest_Escena_Despues_Texto_16:
	.string "No, I'm from AZALEA TOWN.$"

IlexForest_Escena_Despues_Texto_17:
	.string "Woah, that SCYTHER's built as hell. We\n"
	.string "had one too. You know that in\n"
	.string "GOLDENROD, they sell a stone that\l"
	.string "evolves it to SCIZOR?$"

IlexForest_Escena_Despues_Texto_18:
	.string "Really?!$"

IlexForest_Escena_Despues_Texto_19:
	.string "Though{PAUSE 15}…{PAUSE 15} I've seen many SCIZOR… but\n"
	.string "only one KLEAVOR: KURT's.$"

IlexForest_Escena_Despues_Texto_20:
	.string "KLEAVOR?$"

IlexForest_Escena_Despues_Texto_21:
	.string "Girl. You got whatever 'MON you want in\n"
	.string "the palm of your hand. Not only SCIZOR,\n"
	.string "you got PSEUDOs, STARTERs, some exotic,\l"
	.string "foreign 'MONs… Your pick!$"

IlexForest_Escena_Despues_Texto_22:
	.string "WHAT!?$"

IlexForest_Escena_Despues_Texto_23:
	.string "And don't forget uncle PORYGON! If you\n"
	.string "get some stuff too, you can get a\n"
	.string "PORYGON-Z in the blink of an eye!$"

IlexForest_Escena_Despues_Texto_24:
	.string "No training!?$"

IlexForest_Escena_Despues_Texto_25:
	.string "Sure thing! Now anyone can have a fully\n"
	.string "evolved team. No matter how noob they\n"
	.string "are!$"

IlexForest_Escena_Despues_Texto_26:
	.string "Oh!$"

IlexForest_Escena_Despues_Texto_27:
	.string "If you keep chucking wood like this,\n"
	.string "you'll end up dead tired. And all that\n"
	.string "for what? Like this, you'll need years\l"
	.string "to reach some serious gains.$"

IlexForest_Escena_Despues_Texto_28:
	.string "That's right{PAUSE 35}…{PAUSE 35} The world's moving on. If I\n"
	.string "don't hurry and catch up, I'll just get\n"
	.string "left behind.$"

IlexForest_Escena_Despues_Texto_28.1:
	.string "Now that's the ticket! You'll be cooler\n"
	.string "than a COOL TRAINER.$"

IlexForest_Escena_Despues_Texto_29:
	.string "Wait here, SCYTHER.\p"
	.string "Or should I call you SCIZOR?$"

IlexForest_Escena_Despues_Texto_30:
	.string "GOLDENROD, let's go!$"

IlexForest_Escena_Despues_Texto_31:
	.string "????: So this is the ILEX FOREST{PAUSE 15}…{PAUSE 15}$"

IlexForest_Escena_Despues_Texto_32:
	.string "A mighty warden is said to\n"
	.string "guard this forest.$"

IlexForest_Escena_Despues_Texto_33:
	.string "So pray tell, what might ripple if I were\n"
	.string "to stir the waters here?$"

IlexForest_Escena_Despues_Texto_34:
	.string "Ram!$"

IlexForest_Escena_Despues_Texto_35:
	.string "But on second thought{PAUSE 15}…{PAUSE 15}$"

IlexForest_Escena_Despues_Texto_36:
	.string "These legends end up dissapointing.$"

IlexForest_Escena_Despues_Texto_37:
	.string "The masses bleed at the slightest\n"
	.string "touch. That said{PAUSE 25}…{PAUSE 25} some bear the\n"
	.string "fortune of upholding their bravado\l"
	.string "before their fellows.$"

IlexForest_Escena_Despues_Texto_38:
	.string "Those were the ones that easily gave\n"
	.string "this status to any MINOR LEGENDARY.$"

IlexForest_Escena_Despues_Texto_39:
	.string "Still your heart, legend of the forest.\n"
	.string "I've no interest in exposing your shame.$"

IlexForest_Escena_Despues_Texto_40:
	.string "The only true legend awaits me.$"

IlexForest_Escena_Despues_Texto_41:
	.string "Ther!$"

IlexForest_Escena_Despues_Texto_42:
	.string "Hmm… That SCYTHER isn't among the\n"
	.string "average ilk.$"

IlexForest_Escena_Despues_Texto_43:
	.string "Trained or lousy. Blessed or otherwise.\n"
	.string "Neither matter.$"

IlexForest_Escena_Despues_Texto_44:
	.string "Ther!$"

IlexForest_Escena_Despues_Texto_45:
	.string "So{PAUSE 25}…{PAUSE 25} you care not regardless? You still\n"
	.string "aim to overcome your boundaries?$"

IlexForest_Escena_Despues_Texto_46:
	.string "So be it. I shall show you.\p"
	.string "Consider it your final rites.$"

IlexForest_Escena_Despues_Texto_47:
	.string "Ram!$"

IlexForest_Escena_Despues_Texto_48:
	.string "Compensating for the gulf between your\n"
	.string "STATs with mere willpower. How boorish.$"

IlexForest_Escena_Despues_Texto_49:
	.string "That is but the fragility of a mortal.$"

IlexForest_Escena_Despues_Texto_50:
	.string "Now, the time has come{PAUSE 35}…{PAUSE 35} for me to visit\n"
	.string "the places that truly matter in this\n"
	.string "region called JOHTO.$"
