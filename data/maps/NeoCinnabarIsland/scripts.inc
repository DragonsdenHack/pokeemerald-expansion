NeoCinnabarIsland_MapScripts::
	.byte 0

NeoCinnabarIsland_Evento_Oak::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_1
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoCinnabarIsland_Evento_Oak_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox NeoCinnabarIsland_Evento_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoCinnabarIsland_Evento_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoCinnabarIsland_Evento_Oak_Texto_4 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoCinnabarIsland_Evento_Oak_Move_4
waitmovement 0x0
special RemoveCameraObject
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_5
applymovement OBJ_EVENT_ID_PLAYER, NeoCinnabarIsland_Evento_Oak_Move_1
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_6
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoCinnabarIsland_Evento_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_5
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, NeoCinnabarIsland_Evento_Oak_Move_6
waitmovement 0x0
msgbox NeoCinnabarIsland_Evento_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoCinnabarIsland_Evento_Oak_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 192
release
end

NeoCinnabarIsland_Evento_Oak_Move_7:
walk_in_place_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_6:
face_right
step_end

NeoCinnabarIsland_Evento_Oak_Move_5:
face_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_4:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

NeoCinnabarIsland_Evento_Oak_Move_3:
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
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

NeoCinnabarIsland_Evento_Oak_Move_2:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

NeoCinnabarIsland_Evento_Oak_Move_1:
walk_in_place_up
step_end

NeoCinnabarIsland_Evento_Oak_Texto_1:
.string "¿Qué te parece, {PLAYER}?$"

NeoCinnabarIsland_Evento_Oak_Texto_2:
.string "Por mucho que hayamos avanzado,\n"
	.string "seguimos sin poder controlar\l"
	.string "fenómenos como este.$"

NeoCinnabarIsland_Evento_Oak_Texto_3:
.string "No creo en estas cosas, pero es como si\n"
	.string "la naturaleza diese respuesta a\l"
	.string "nuestros intentos por alcanzar sus\l"
	.string "límites últimos.$"

NeoCinnabarIsland_Evento_Oak_Texto_4:
.string "Y reivindicase su papel decisivo, ella\n"
	.string "tiene la última palabra, y como castigo\l"
	.string "por revelarnos más de la cuenta\l"
	.string "entierra nuestros progresos.$"

NeoCinnabarIsland_Evento_Oak_Texto_5:
.string "Pero… ¿no es esto señal de que estamos\n"
	.string "en el camino correcto? ¿De que estamos\l"
	.string "entrando en terreno profano?$"

NeoCinnabarIsland_Evento_Oak_Texto_6:
.string "Estos son los últimos coletazos de una\n"
	.string "naturaleza que no puede frenar lo\l"
	.string "inevitable, nada más. Y ahora tú\l"
	.string "recuperarás incluso lo que trató de\l"
	.string "destruir.$"

NeoCinnabarIsland_Evento_Oak_Texto_7:
.string "En tu ausencia enviamos varios\n"
	.string "exploradores. Logramos localizar\l"
	.string "nuestro búnker subterráneo a través\l"
	.string "del volcán, ya inactivo.$"

NeoCinnabarIsland_Evento_Oak_Texto_8:
.string "Tu misión será adentrarte en lo más\n"
	.string "profundo del lugar. En su última sala\l"
	.string "hay un cuadro de FUJI, detrás de él hay\l"
	.string "un disco duro con todos los avances\l"
	.string "alcanzados en ese laboratorio\l"
	.string "compilados.$"

NeoCinnabarIsland_Evento_Oak_Texto_9:
.string "Ten cuidado, algunos de nuestros\n"
	.string "mayores avances se encuentran allí,\l"
	.string "muchos de ellos aún en fase de prueba,\l"
	.string "no serán presentados ni en la II\l"
	.string "CONFERENCIA de TRIGAL.$"

NeoCinnabarIsland_Evento_Oak_Texto_10:
.string "No te entretengo más, {PLAYER}, espero\n"
	.string "que demuestres una vez más porqué\l"
	.string "eres el mejor ENTRENADOR.$"
