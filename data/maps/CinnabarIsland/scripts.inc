CinnabarIsland_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
    .byte 0

CinnabarIsland_OnTransition::
setflag FLAG_VISITED_CINNABAR_ISLAND
end

CinnabarIsland_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 81, CinnabarIsland_Escena_8
	.2byte 0

CinnabardIsland1::
lock     
faceplayer     
msgbox CinnabarIsland_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Text_1:
.string "CINNABAR GYM's BLAINE is quite the\n"
    .string "odd fellow.\p"
    .string "He's lived on the island since way\n"
    .string "before the LAB was built.$"


CinnabardIsland2::
lock     
faceplayer     
msgbox CinnabarIsland_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Text_2:
.string "Scientists conduct experiments \n"
    .string "in the burned-out building.\p"
    .string "You know, the one they call the\n"
    .string "POKÉMON MANSION.$"



CinnabarIslandDocumento_100::
msgbox CinnabarIslandDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_100:
.string "POKÉMON LAB$"



CinnabarIslandDocumento_101::
msgbox CinnabarIslandDocumento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_101:
.string "CINNABAR ISLAND\n"
    .string "The Fiery Town of Burning Desire$"



CinnabarIslandDocumento_102::
msgbox CinnabarIslandDocumento_Text_102, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_102:
    .string "CINNABAR ISLAND POKÉMON GYM\n"
    .string "LEADER: BLAINE\l"
    .string "The Hotheaded Quiz Master!$"


Cinnabar_Island_Gimnasio_Cerrado::
compare VAR_UNUSED_0x40F8, 9
goto_if_eq CinnabarIsland_Oak
compare VAR_ROUTE105_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
compare VAR_ROUTE108_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
compare VAR_ROUTE111_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
compare VAR_ROUTE109_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
compare VAR_ROUTE106_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
compare VAR_ROUTE107_STATE, 3
goto_if_lt Cinnabar_Island_Gimnasio_Cerrado_2
release
end


Cinnabar_Island_Gimnasio_Cerrado_2::
applymovement OBJ_EVENT_ID_PLAYER, Cinnabar_Island_Gimnasio_Cerrado_Move_1
waitmovement 0x0
msgbox Cinnabar_Island_Gimnasio_Cerrado_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cinnabar_Island_Gimnasio_Cerrado_Move_2
waitmovement 0x0
release
end

Cinnabar_Island_Gimnasio_Cerrado_Move_1:
walk_in_place_up
step_end

Cinnabar_Island_Gimnasio_Cerrado_Move_2:
walk_slow_down
step_end

Cinnabar_Island_Gimnasio_Cerrado_Texto_1:
	.string "(GYM is apparently totally closed, I\n"
	.string "better go for the other BADGES).$"

CinnabarIsland_Escena_8::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
waitmovement 0x0
msgbox CinnabarIsland_Escena_8_Texto_1, MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarIsland_Escena_8_Texto_2, MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 82
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
delay 20
warpsilent MAP_VIRIDIAN_CITY_GYM, 2, 0
delay 200
release
end

CinnabarIsland_Escena_8_Texto_1:
	.string "PETREL: {PLAYER}?! So you already\n"
	.string "have 7 BADGES? Excellent!$"

CinnabarIsland_Escena_8_Texto_2:
.string "Escucha {PLAYER}, GIOVANNI en estos\n"
	.string "momentos está muy ocupado, no puedo\l"
	.string "darte detalles, pero debes dirigirte al\l"
	.string "GIMNASIO de CIUDAD VERDE. Nada más.$"

CinnabarIsland_Oak::
lock
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_2
waitmovement 0x0
waitse
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 3
playse SE_SLIDING_DOOR
opendoor 20, 4
waitdooranim
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_3
applymovement 3, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 20, 4
waitdooranim
delay 15
msgbox CinnabarIsland_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarIsland_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_4
waitmovement 0x0
delay 15
msgbox CinnabarIsland_Oak_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_2
waitmovement 0x0
waitse
delay 35
applymovement 3, CinnabarIsland_Oak_Move_5
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_6
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_7
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_9
applymovement 3, CinnabarIsland_Oak_Move_8
waitmovement 0x0
delay 15
msgbox CinnabarIsland_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, CinnabarIsland_Oak_Move_2
waitmovement 0x0
waitse
delay 15
applymovement 3, CinnabarIsland_Oak_Move_10
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_11
waitmovement 0x0
delay 15
msgbox CinnabarIsland_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarIsland_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_12
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_10.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_10
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarIsland_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, CinnabarIsland_Oak_Move_13
waitmovement 0x0
msgbox CinnabarIsland_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarIsland_Oak_Texto_13.1 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 3
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 3
clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F8, 10
release
end

CinnabarIsland_Oak_Move_13:
walk_slow_left
step_end

CinnabarIsland_Oak_Move_12:
face_up
step_end

CinnabarIsland_Oak_Move_11:
walk_slow_down
walk_slow_right
step_end

CinnabarIsland_Oak_Move_10:
face_right
step_end

CinnabarIsland_Oak_Move_9:
delay_16
face_left
delay_16
walk_in_place_left
step_end

CinnabarIsland_Oak_Move_8:
walk_slow_left
walk_slow_left
step_end

CinnabarIsland_Oak_Move_7:
face_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

CinnabarIsland_Oak_Move_6:
face_down
step_end

CinnabarIsland_Oak_Move_5:
face_left
step_end

CinnabarIsland_Oak_Move_4:
walk_in_place_down
step_end

CinnabarIsland_Oak_Move_3:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

CinnabarIsland_Oak_Move_2:
emote_exclamation_mark
step_end

CinnabarIsland_Oak_Move_1:
walk_in_place_up
step_end

CinnabarIsland_Oak_Texto_1:
	.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

CinnabarIsland_Oak_Texto_2:
	.string "I love seeing these young challengers,\n"
	.string "all inspired and energetic.$"

CinnabarIsland_Oak_Texto_3:
	.string "The world is all yours. You have every\n"
	.string "little thing you need to compete in this\n"
	.string "KANTO LEAGUE: you're both ignorant and\l"
	.string "immature.$"

CinnabarIsland_Oak_Texto_4:
	.string "When you think about it, you realize how\n"
	.string "much of a privilege ignorance is these\n"
	.string "days.$"

CinnabarIsland_Oak_Texto_5:
	.string "Without it, it'd be impossible to stay\n"
	.string "sane in these coming times. Doubly so,\n"
	.string "presenting yourself to the LEAGUE\l"
	.string "CHAMPIONSHIP.$"

CinnabarIsland_Oak_Texto_6:
	.string "And about being immature{PAUSE 25}...{PAUSE 25} With the\n"
	.string "willpower of immaturity, anyone can\n"
	.string "achieve almost anything!$"

CinnabarIsland_Oak_Texto_7:
	.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

CinnabarIsland_Oak_Texto_8:
	.string "Mocking you? HAH!\n"
	.string "It's the opposite, actually.$"

CinnabarIsland_Oak_Texto_9:
	.string "Mmm…$"

CinnabarIsland_Oak_Texto_10:
	.string "Six BADGEs{PAUSE 25}...{PAUSE 25} Interesting. I'm sure\n"
	.string "you've experienced lots of adventures\n"
	.string "that'll stick in your head for the years\l"
	.string "to come.$"

CinnabarIsland_Oak_Texto_10.1:
	.string "Just the same as the thousands of\n"
	.string "other kids starting their own journeys\n"
	.string "year after year, why would yours be any\l"
	.string "better? The wheel still turns, and it\l"
	.string "won't stop for anyone.$"

CinnabarIsland_Oak_Texto_11:
	.string "Despite this, I envy you. If you had\n"
	.string "known what I know, you'd have never\n"
	.string "started this journey.$"

CinnabarIsland_Oak_Texto_12:
	.string "Being ignorant is all that keeps that\n"
	.string "little flame of yours roaring.$"

CinnabarIsland_Oak_Texto_13:
	.string "But this is the way. New generations\n"
	.string "deserve the opportunity. The chance of\n"
	.string "losing, of knowing the cruel truth of\l"
	.string "this reality, or of{PAUSE 15}...{PAUSE 15}$"

CinnabarIsland_Oak_Texto_13.1:
	.string "…making a miracle happen.$"

