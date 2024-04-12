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
