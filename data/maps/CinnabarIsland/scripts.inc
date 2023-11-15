CinnabarIsland_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
    .byte 0

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
    .string "POKéMON MANSION.$"



CinnabarIslandDocumento_100::
msgbox CinnabarIslandDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandDocumento_Text_100:
.string "POKéMON LAB$"



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
    .string "CINNABAR ISLAND POKéMON GYM\n"
    .string "LEADER: BLAINE\l"
    .string "The Hotheaded Quiz Master!$"


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
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox CinnabarIsland_Escena_8_Texto_1, MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarIsland_Escena_8_Texto_2, MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 82
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
delay 90
warpsilent MAP_VIRIDIAN_CITY_GYM, 2, 0
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
