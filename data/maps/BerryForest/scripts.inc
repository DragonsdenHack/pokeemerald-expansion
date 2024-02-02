BerryForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, BerryForest_OnResume
	.byte 0

BerryForest_OnResume:
	call BerryForest_SetupEscapeWarp
	end

BerryForest_SetupEscapeWarp::
	setescapewarp MAP_BOND_BRIDGE, 12, 7
	return


BerryForestDocumento_100::
msgbox BerryForestDocumento_Text_100, MSGBOX_SIGN   
end

BerryForestDocumento_Text_100:
.string "Atención:\n"
	.string "Presencia de POKéMON salvajes\l"
	.string "devoradores de BAYAS.$"



BerryForestDocumento_101::
msgbox BerryForestDocumento_Text_101, MSGBOX_SIGN   
end

BerryForestDocumento_Text_101:
	.string "Éste es el BOSQUE BAYA.\p"
	.string "¡Hay que compartir BAYAS\n"
	.string "con la gente y los POKéMON!$"


BerryForest_Evento_Hypno::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 14
addobject 16
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, BerryForest_Evento_Hypno_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 14, BerryForest_Evento_Hypno_Move_2
waitmovement 0x0
msgbox BerryForest_Evento_Hypno_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playmoncry SPECIES_PIDGEY, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_LEDGE
applymovement 16, BerryForest_Evento_Hypno_Move_4.1
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 16, BerryForest_Evento_Hypno_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox BerryForest_Evento_Hypno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, BerryForest_Evento_Hypno_Move_2
waitmovement 0x0
msgbox BerryForest_Evento_Hypno_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 14, BerryForest_Evento_Hypno_Move_3
applymovement 16, BerryForest_Evento_Hypno_Move_3
waitmovement 0x0
delay 20
msgbox BerryForest_Evento_Hypno_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
delay 5
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_LEDGE
applymovement 16, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 16, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
delay 10
msgbox BerryForest_Evento_Hypno_Texto_5 MSGBOX_AUTOCLOSE
msgbox BerryForest_Evento_Hypno_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
delay 30
playse SE_PIN
applymovement 16, BerryForest_Evento_Hypno_Move_3
waitmovement 0x0
delay 10
msgbox BerryForest_Evento_Hypno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 16, BerryForest_Evento_Hypno_Move_5
waitmovement 0x0
msgbox BerryForest_Evento_Hypno_Texto_8 MSGBOX_AUTOCLOSE
msgbox BerryForest_Evento_Hypno_Texto_9 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 16, BerryForest_Evento_Hypno_Move_6
applymovement 14, BerryForest_Evento_Hypno_Move_8
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 14
removeobject 16
delay 40
playse SE_EXIT
addobject 15
msgbox BerryForest_Evento_Hypno_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, BerryForest_Evento_Hypno_Move_7
waitmovement 0x0
playse SE_EXIT
removeobject 15
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, BerryForest_Evento_Hypno_Move_8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_DEWFORD_TOWN_STATE, 1
release
end

BerryForest_Evento_Hypno_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


BerryForest_Evento_Hypno_Move_7:
face_left
step_end

BerryForest_Evento_Hypno_Move_6:
jump_in_place_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

BerryForest_Evento_Hypno_Move_5:
face_right
step_end

BerryForest_Evento_Hypno_Move_4.1:
jump_in_place_right
step_end

BerryForest_Evento_Hypno_Move_4:
jump_in_place_left
step_end

BerryForest_Evento_Hypno_Move_3:
face_left
emote_exclamation_mark
step_end

BerryForest_Evento_Hypno_Move_3.1:
walk_in_place_right
step_end

BerryForest_Evento_Hypno_Move_2:
walk_in_place_left
step_end

BerryForest_Evento_Hypno_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BerryForest_Evento_Hypno_Texto_1:
.string "¡Mira PEDRITA! ¡He capturado un PIDGEY!$"

BerryForest_Evento_Hypno_Texto_2:
.string "PEDRITA: ¡Qué guay! ¡Yo he visto un\n"
	.string "PIDGEOTTO!$"

BerryForest_Evento_Hypno_Texto_3:
.string "Nuestra isla es la mejor, ninguna tiene\n"
	.string "un bosque como este para jugar. ¡Qué\l"
	.string "afortunados somos!$"

BerryForest_Evento_Hypno_Texto_4:
.string "¿Q-qué ha sido eso?$"

BerryForest_Evento_Hypno_Texto_5:
.string "PEDRITA: Buuuua…. ¡BUAAAA! …$"

BerryForest_Evento_Hypno_Texto_6:
.string "Teno miedo… Quiedo id a casa…$"

BerryForest_Evento_Hypno_Texto_7:
.string "PEDRITA: POKÉMON ho-horrible… ¿Se ha\n"
	.string "ido?$"

BerryForest_Evento_Hypno_Texto_8:
.string "¡Vámonos PEDRITA!$"

BerryForest_Evento_Hypno_Texto_9:
.string "PEDRITA: ¡Z-Ziiiii!$"

BerryForest_Evento_Hypno_Texto_10:
.string "????: Ha estado cerca, esto no puede\n"
	.string "seguir así…$"

BerryForest_Paso_Cueva_Hypno::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox BerryForest_Paso_Cueva_Hypno_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_PASO_CUEVA_HYPNO, 18, 14
release
end

BerryForest_Paso_Cueva_Hypno_Pasa_Text_YesNo:
.string "Hay una pequeña senda entre los\n"
	.string "árboles, parece que se alarga varios\l"
	.string "metros. ¿Quieres cruzarla?$"

BerryForest_Paso_Bosque_Baya::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox BerryForest_Paso_Cueva_Hypno_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_BERRY_FOREST, 3, 6
release
end

