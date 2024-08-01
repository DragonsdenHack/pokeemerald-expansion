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
msgbox CinnabarIsland_Oak_Texto_1 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_2 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_3 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_4 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_5 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_6 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_7 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_8 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_9 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_10 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_11 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_12 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Oak_Texto_13 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Oak_Texto_1:
	.string "… …$"

CinnabarIsland_Oak_Texto_2:
	.string "Me alegra ver a jóvenes aspirantes que\n"
	.string "llenan de vida esta región.$"

CinnabarIsland_Oak_Texto_3:
	.string "El mundo es vuestro; tienes todo lo\n"
	.string "necesario para competir en la actual\l"
	.string "LIGA de KANTO : ignorancia e inmadurez.$"

CinnabarIsland_Oak_Texto_4:
	.string "La ignorancia es un privilegio\n"
	.string "a día de hoy.$"

CinnabarIsland_Oak_Texto_5:
	.string "Sin ella, sería imposible conservar la\n"
	.string "cordura en los tiempos que corren,\l"
	.string "¡menos aún presentarse al CAMPEONATO\l"
	.string "de la LIGA!$"

CinnabarIsland_Oak_Texto_6:
	.string "Y la inmadurez... ¡con la voluntad de la\n"
	.string "inmadurez se pueden lograr grandes\l"
	.string "cosas!$"

CinnabarIsland_Oak_Texto_7:
	.string "… …$"

CinnabarIsland_Oak_Texto_8:
	.string "¿Burlarme de ti? Hablaba en serio.$"

CinnabarIsland_Oak_Texto_9:
	.string "Mmm...$"

CinnabarIsland_Oak_Texto_10:
	.string "Así que 6 medallas. Experiencia\n"
	.string "suficiente como para no desmoralizarte\l"
	.string "si soy algo más explícito.$"

CinnabarIsland_Oak_Texto_11:
	.string "En tu faceta de ENTRENADOR, te envidio.\n"
	.string "Sabiendo lo que yo sé, jamás habrías\l"
	.string "emprendido este viaje.$"

CinnabarIsland_Oak_Texto_12:
	.string "El no saberlo es lo que aún te mantiene\n"
	.string "vivo, lo hace que tus opciones no sean\l"
	.string "nulas.$"

CinnabarIsland_Oak_Texto_13:
	.string "Y así debe ser. Las nuevas\n"
	.string "generaciones merecen la oportunidad,\l"
	.string "aunque no sea más que una ilusión.$"
