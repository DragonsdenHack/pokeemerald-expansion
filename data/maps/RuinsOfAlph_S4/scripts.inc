RuinsOfAlph_S4_MapScripts::
	.byte 0


RuinsOfAlph_S4_Combate_Zeus::
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 5
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_6
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_4 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_8
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_9
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
playse SE_BALL
addobject 2
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_GRANITE_CAVE_STEVEN
addobject 9
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
removeobject 7
removeobject 8
removeobject 9
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playse SE_M_STAT_INCREASE
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_HYPER_BEAM
delay 40
playse SE_M_HYPER_BEAM2
delay 40
playse SE_M_EXPLOSION
delay 40
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
addobject 3
fadescreen 2
delay 15
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_4, RuinsOfAlph_S4_Combate_Zeus_Texto_13
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
playbgm MUS_RG_VICTORY_GYM_LEADER, FALSE
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
delay 20
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
removeobject 3
playse SE_M_EMBER
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_13
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_15 MSGBOX_AUTOCLOSE
fadedefaultbgm
delay 100
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_14
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_14
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_16 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
playse SE_BALL
addobject 2
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
addobject 4
playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
clearflag FLAG_HIDE_ROUTE_119_RIVAL
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
removeobject 5
addobject 11
fadescreen 2
delay 15
playse SE_BALL_OPEN
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 4
addobject 2
waitse
delay 15
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 6
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_15
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_16
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_17
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_21 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_22 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_18
waitmovement 0x0
delay 15
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_19
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_23 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_21
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 6
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 7
release
end

RuinsOfAlph_S4_Combate_Zeus_Texto_1:
	.string "ZEUS: Impressive, {PLAYER}, but too late.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_2:
	.string "ZEUS: Do you feel the energy of this\n"
	.string "place? I'm not sure why, but here the\l"
	.string "PRIMAL essence of the LEGENDARY\l"
	.string "POKÉMON is restored to them. KYOGRE,\l"
	.string "GROUDON… that's what I was looking for,\l"
	.string "but even more important…$"

RuinsOfAlph_S4_Combate_Zeus_Texto_3:
	.string "KYUREM, the empty shell of the\n"
	.string "ORIGINAL DRAGON. This is the place, how\l"
	.string "these ruins are arranged reveals their\l"
	.string "purpose.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_4:
	.string "ZEKROM, the YIN POKÉMON, to the right!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_5:
	.string "RESHIRAM, the YANG POKÉMON, to the\n"
	.string "left!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_6:
	.string "And lastly, KYUREM, the ZERO POKÉMON, in\n"
	.string "the center!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_7:
	.string "The three together will form the\n"
	.string "ORIGINAL DRAGON, the perfection, the\l"
	.string "universal balance…$"

RuinsOfAlph_S4_Combate_Zeus_Texto_8:
.string "Finally!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_9:
	.string "The most powerful POKÉMON of all time,\n"
	.string "now belongs to me.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_10:
	.string "There is no turning back now. Thanks to\n"
	.string "its unquestionable power, I will be able\l"
	.string "to exert my will without opposition. It\l"
	.string "will be the only thing that exists, the\l"
	.string "will of the gods, as it should always\l"
	.string "have been.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_11:
	.string "You'll be the first, PLAYER, you've tried\n"
	.string "to stop me time and time again, here we\l"
	.string "are again, nothing you've done has\l"
	.string "prevented the inevitable from\l"
	.string "happening.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_12:
	.string "Now, face the absolute 100%, there's no\n"
	.string "chance of escape. The POKÉMON world\l"
	.string "belongs to me!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_13:
.string "No!\n"
	.string "It seems like something went wrong!\l"
	.string "Let me try again!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_14:
.string "KYUREM!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_15:
	.string "Is it not possible?! The PRIMAL\n"
	.string "POKÉMON, the very god of POKÉMON, the\l"
	.string "ORIGINAL DRAGON… How could you…?$"

RuinsOfAlph_S4_Combate_Zeus_Texto_16:
	.string "????: Stupid fool, do you really believe\n"
	.string "that was the ORIGINAL DRAGON? Trying\l"
	.string "to reform something perfect by piecing\l"
	.string "together imperfections as if they were\l"
	.string "puzzle pieces, pathetic.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_17:
	.string "ZEUS: I don't understand, who are you!?$"

RuinsOfAlph_S4_Combate_Zeus_Texto_18:
.string "TAAAAAAAALL!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_19:
	.string "JONES: Someone who believes\n"
	.string "themselves superior to others by divine\l"
	.string "providence doesn't deserve to keep\l"
	.string "living.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_20:
.string "{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlph_S4_Combate_Zeus_Texto_21:
	.string "That fool has died without knowing that\n"
	.string "everything he achieved, his PRIMAL\l"
	.string "FORMS, the incomplete ORIGINAL\l"
	.string "DRAGON… He owes it all to the POKÉMON\l"
	.string "ESSENCE. Its presence here is what\l"
	.string "restores the LEGENDARIES to their\l"
	.string "maximum potential, but we can still get\l"
	.string "closer to IT.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_22:
	.string "(JONES collected all of ZEUS's POKÉMON.)$"

RuinsOfAlph_S4_Combate_Zeus_Texto_23:
	.string "{PLAYER}, but unlike that ZEUS, I have\n"
	.string "principles, and out of respect for all\l"
	.string "you've achieved getting here with\l"
	.string "mortal POKÉMON, I'll give you the chance\l"
	.string "to access the final chamber as well.\l"
	.string "Just one more {PLAYER}, and you'll be\l"
	.string "able to discover the truth.$"

RuinsOfAlph_S4_Combate_Zeus_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_3:
face_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_4:
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_5:
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_6:
face_left
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_7:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_8:
face_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end


RuinsOfAlph_S4_Combate_Zeus_Move_10:
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_11:
walk_slow_down
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_12:
walk_down
walk_down
walk_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_13:
walk_fast_up
walk_fast_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_14:
face_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_15:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_16:
walk_in_place_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_17:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_18:
walk_up
walk_in_place_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_19:
walk_right
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_20:
walk_in_place_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_21:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end
