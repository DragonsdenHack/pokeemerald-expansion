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
.string "BLAINE, del GIMNASIO CANELA, es un\n"
.string "hombre raro que lleva años\l"
.string "viviendo aquí.\l"
.string "Ya vivía aquí desde antes de que\l"
.string "construyeran el LABORATORIO.$"


CinnabardIsland2::
lock     
faceplayer     
msgbox CinnabarIsland_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Text_2:
.string "Los científicos experimentan en el\n"
.string "edificio quemado.\l"
.string "Es el mismo edificio al que llaman\l"
.string "MANSIÓN POKÉMON.$"



CinnabarIslandDocumento_100::
msgbox CinnabarIslandDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_100:
.string "LABORATORIO POKÉMON$"



CinnabarIslandDocumento_101::
msgbox CinnabarIslandDocumento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_101:
.string "ISLA CANELA\n"
	.string "El lugar del ardiente deseo.$"



CinnabarIslandDocumento_102::
msgbox CinnabarIslandDocumento_Text_102, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_102:
	.string "LÍDER DE GIMNASIO de CANELA:\n"
	.string "BLAINE\l"
	.string "¡El maestro de los acertijos!$"


Cinnabar_Island_Gimnasio_Cerrado::
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
.string "(El GIMNASIO parece estar\n"
	.string "completamente cerrado, mejor ir\l"
	.string "mientras a por las otras MEDALLAS).$"

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
.string "PETREL: ¿¡{PLAYER}!? ¿Ya tienes las 7\n"
	.string "MEDALLAS? ¡Excelente!$"

CinnabarIsland_Escena_8_Texto_2:
.string "Escucha {PLAYER}, GIOVANNI en estos\n"
	.string "momentos está muy ocupado, no puedo\l"
	.string "darte detalles, pero debes dirigirte al\l"
	.string "GIMNASIO de CIUDAD VERDE. Nada más.$"

CinnabarIsland_Oak::
lock
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Oak_Move_2
waitmovement 0x0
waitse
delay 15
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
setvar VAR_UNUSED_0x40FF, 10
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
	.string "Me alegra ver a jóvenes aspirantes que\n"
	.string "llenan de vida esta región.$"

CinnabarIsland_Oak_Texto_3:
	.string "El mundo es vuestro. Tienes todo lo\n"
	.string "necesario para competir en la actual\l"
	.string "LIGA de KANTO: ignorancia e inmadurez.$"

CinnabarIsland_Oak_Texto_4:
	.string "La ignorancia es un privilegio\n"
	.string "a día de hoy.$"

CinnabarIsland_Oak_Texto_5:
	.string "Sin ella, sería imposible conservar la\n"
	.string "cordura en los tiempos que corren,\l"
	.string "¡menos aún presentarse al CAMPEONATO\l"
	.string "de la LIGA!$"

CinnabarIsland_Oak_Texto_6:
	.string "Y la inmadurez{PAUSE 25}…{PAUSE 25} ¡con la voluntad de la\n"
	.string "inmadurez se pueden lograr grandes\l"
	.string "cosas!$"

CinnabarIsland_Oak_Texto_7:
	.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

CinnabarIsland_Oak_Texto_8:
	.string "¿Burlarme de ti? Al contrario.$"

CinnabarIsland_Oak_Texto_9:
	.string "Mmm…$"

CinnabarIsland_Oak_Texto_10:
	.string "6 medallas{PAUSE 25}…{PAUSE 25} Interesante.\n"
	.string "Ya habrás vivido intensas aventuras\l"
	.string "que quedarán grabadas en tu memoria.$"

CinnabarIsland_Oak_Texto_10.1:
	.string "Igual que los miles de jóvenes que\n"
	.string "cada año empiezan su propia historia.\l"
	.string "¿Por qué la tuya debería\l"
	.string "ser mejor?\l"
	.string "La rueda nunca se detiene, ni\l"
	.string "espera a nadie.$"

CinnabarIsland_Oak_Texto_11:
	.string "Pero, te envidio.\n"
	.string "Sabiendo lo que yo sé, jamás habrías\l"
	.string "emprendido este viaje.$"

CinnabarIsland_Oak_Texto_12:
	.string "El no saberlo es lo único que\n"
	.string "aún mantiene vivas tus ilusiones.$"

CinnabarIsland_Oak_Texto_13:
	.string "Y así debe ser. Las nuevas\n"
	.string "generaciones merecen la oportunidad.\l"
	.string "La oportundiad de perder, de ver\l"
	.string "la cruda realidad o{PAUSE 15}…{PAUSE 15}$"

CinnabarIsland_Oak_Texto_13.1:
	.string "…de obrar el milagro.$"

