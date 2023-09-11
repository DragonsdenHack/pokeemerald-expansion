LakeofRage_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LakeofRage_House1_OnFrame
	.byte 0

LakeofRage_House1_OnFrame:
map_script_2 VAR_MAUVILLE_CITY_STATE, 1, LakeofRageHouse1_Evento_Devon
	.2byte 0

LakeofRageHouse1_1::
lock
compare VAR_MAUVILLE_CITY_STATE, 1
goto_if_gt LakeofRageHouse1_1_2
faceplayer
msgbox LakeofRageHouse1_1_Texto_1 MSGBOX_NPC
release
end

LakeofRageHouse1_1_2:
msgbox LakeofRageHouse1_1_Texto_2 MSGBOX_NPC
release
end

LakeofRageHouse1_1_Texto_2:
.string "Te estaré eternamente agradecido,\n"
	.string "gente como tú sí que merece descubrir\l"
	.string "los antiguos secretos del mundo.\l"
	.string "Espero que prevalezcas por encima de\l"
	.string "esos lunáticos de HOENN.$"

LakeofRageHouse1_1_Texto_1:
.string "Tienes pinta de venir de KANTO,\n"
	.string "¿verdad? Esta región puede guardarte\l"
	.string "muchas sorpresas, si la ves con los\l"
	.string "ojos adecuados.$"

LakeofRageHouse1_Evento_Devon::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_3
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LakeofRageHouse1_Evento_Devon_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox LakeofRageHouse1_Evento_Devon_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_5
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_6
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_7
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_3
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_4
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_8
waitmovement 0x0
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_8.1 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 4, LakeofRageHouse1_Evento_Devon_Move_3
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_10
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_5
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_ICE_CRACK
delay 60
playse SE_UNLOCK
setmetatile 4, 0, 0x13A, TRUE
setmetatile 5, 0, 0x13B, TRUE
setmetatile 6, 0, 0x13C, FALSE
setmetatile 6, 1, 0x144, FALSE
setmetatile 5, 1, 0x143, TRUE
setmetatile 4, 1, 0x142, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 3, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 4, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
applymovement 5, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_10
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, LakeofRageHouse1_Evento_Devon_Move_11
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_1
waitmovement 0x0
applymovement 1, LakeofRageHouse1_Evento_Devon_Move_9
waitmovement 0x0
msgbox LakeofRageHouse1_Evento_Devon_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox LakeofRageHouse1_Evento_Devon_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE
setflag FLAG_RECEIVED_SHOAL_SALT_4
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
setvar VAR_MAUVILLE_CITY_STATE, 2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LakeofRageHouse1_Evento_Devon_Move_12
waitmovement 0x0
special RemoveCameraObject
release
end

LakeofRageHouse1_Evento_Devon_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

LakeofRageHouse1_Evento_Devon_Move_11:
walk_in_place_right
step_end

LakeofRageHouse1_Evento_Devon_Move_10:
face_right
step_end

LakeofRageHouse1_Evento_Devon_Move_9:
walk_fast_left
step_end

LakeofRageHouse1_Evento_Devon_Move_8:
walk_slow_left
walk_slow_left
walk_slow_left
face_up
step_end

LakeofRageHouse1_Evento_Devon_Move_7:
face_down
step_end

LakeofRageHouse1_Evento_Devon_Move_6:
walk_slow_up
step_end

LakeofRageHouse1_Evento_Devon_Move_5:
face_up
step_end

LakeofRageHouse1_Evento_Devon_Move_4:
walk_in_place_left
step_end

LakeofRageHouse1_Evento_Devon_Move_3:
face_left
step_end

LakeofRageHouse1_Evento_Devon_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

LakeofRageHouse1_Evento_Devon_Move_1:
emote_exclamation_mark
step_end

LakeofRageHouse1_Evento_Devon_Texto_1:
.string "PESCADOR: Ya os lo he dicho, son solo\n"
	.string "leyendas, nadie vivo ha visto a tal\l"
	.string "POKÉMON.$"

LakeofRageHouse1_Evento_Devon_Texto_2:
.string "????: ¿De verdad son solo leyendas?\n"
	.string "Verá, yo y mi equipo de CIENTÍFICOS\l"
	.string "hemos venido de muy lejos para conocer\l"
	.string "toda la verdad.$"

LakeofRageHouse1_Evento_Devon_Texto_3:
.string "Comprenderá que no podemos irnos sin\n"
	.string "más, no sin asegurarnos de que nos dice\l"
	.string "todo lo que sabe.$"

LakeofRageHouse1_Evento_Devon_Texto_4:
.string "Ya hemos interrogado a todos los\n"
	.string "PESCADORES del lugar, todos han\l"
	.string "confirmado bajo su experiencia lo que\l"
	.string "confirman los antiguos archivos de los\l"
	.string "que disponemos: Hay un POKÉMON en\l"
	.string "este LAGO, un POKÉMON de un poder tal\l"
	.string "que los propios GYARADOS de este lugar\l"
	.string "huyen espantados.$"

LakeofRageHouse1_Evento_Devon_Texto_5:
.string "CIENTÍFICO 1: De ningún otro modo las\n"
	.string "SUPERCAÑAS de esos PESCADORES\l"
	.string "hubieran cedido. Según sus reportes,\l"
	.string "esto ha ocurrido 3 veces en la última\l"
	.string "década, la criatura que se soltó de\l"
	.string "esas SUPERCAÑAS tuvo que ejercer una\l"
	.string "fuerza 3 veces superior a la de\l"
	.string "cualquier GYARADOS.$"

LakeofRageHouse1_Evento_Devon_Texto_6:
.string "PESCADOR: Impresionante, lo sé, ¿pero\n"
	.string "qué pretende que haga? ¿Que le guíe\l"
	.string "hasta un lugar que nadie conoce?$"

LakeofRageHouse1_Evento_Devon_Texto_7:
.string "????: Procedes de la más antigua\n"
	.string "familia de PESCADORES en PUEBLO CAOBA,\l"
	.string "si alguien sabe algo que los demás no,\l"
	.string "eres tú.$"

LakeofRageHouse1_Evento_Devon_Texto_8:
.string "PESCADOR: Ya se lo he dicho, no se nad…$"

LakeofRageHouse1_Evento_Devon_Texto_8.1:
.string "…$"

LakeofRageHouse1_Evento_Devon_Texto_9:
.string "????: ¿Qué es esto?$"

LakeofRageHouse1_Evento_Devon_Texto_10:
.string "PESCADOR: Un… Un trofeo, uno de mis\n"
	.string "antepasados llegó a ser CAMPEÓN de\l"
	.string "JOHTO.$"

LakeofRageHouse1_Evento_Devon_Texto_11:
.string "????: ¿Usando únicamente POKÉMON\n"
	.string "atrapados aquí? No me diga… debían de\l"
	.string "ser muy fuertes, tal vez…$"

LakeofRageHouse1_Evento_Devon_Texto_12:
.string "Ese LEGENDARIO POKÉMON estuviera en\n"
	.string "sus filas, ¿qué tienes que decir a\l"
	.string "esto?$"

LakeofRageHouse1_Evento_Devon_Texto_13:
.string "PESCADOR: Eh..Espere, esas escaleras\n"
	.string "solo conducen a una caverna\l"
	.string "subterránea, debajo del LAGO. No le\l"
	.string "aconsejo que entre, los POKÉMON\l"
	.string "salvajes son tremendamente hostiles\l"
	.string "ahí, no conocen el contacto con el ser\l"
	.string "humano.$"

LakeofRageHouse1_Evento_Devon_Texto_14:
.string "????: Eso es exactamente lo que\n"
	.string "andábamos buscando.$"

LakeofRageHouse1_Evento_Devon_Texto_15:
.string "Nos has mentido, ahora bajarás ahí con\n"
	.string "nosotros, y nos guiarás hasta el final\l"
	.string "de esa caverna.$"

LakeofRageHouse1_Evento_Devon_Texto_16:
.string "PESCADOR: ¡No hay final!¡Jamás he\n"
	.string "explorado más allá del segundo\l"
	.string "nivel!¡Los POKÉMON salvajes acabaran\l"
	.string "con todos nosotros antes de que\l"
	.string "podamos seguir avanzando!$"


LakeofRageHouse1_Evento_Devon_Texto_17:
.string "????: De eso nos encargaremos yo…y mis\n"
	.string "POKÉMON. ¡Andando!$"


LakeofRageHouse1_Activacion_Caverna::
compare VAR_MAUVILLE_CITY_STATE, 1
goto_if_gt LakeofRageHouse1_Activacion_Caverna_Warp
msgbox LakeofRageHouse1_Activacion_Caverna_Texto_1 MSGBOX_AUTOCLOSE
release
end

LakeofRageHouse1_Activacion_Caverna_Texto_1:
.string "Parece el trofeo de CAMPEÓN de JOHTO,\n"
	.string "aunque se ve muy antiguo. ¿Qué POKÉMON\l"
	.string "habrá usado el CAMPEÓN de esa época?$"

LakeofRageHouse1_Activacion_Caverna_Text_YesNo:
.string "¿Quieres activar la entrada a la\n"
	.string "caverna?$"

LakeofRageHouse1_Activacion_Caverna_Warp::
msgbox LakeofRageHouse1_Activacion_Caverna_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 20
playse SE_ICE_CRACK
delay 60
playse SE_UNLOCK
setmetatile 4, 0, 0x13A, TRUE
setmetatile 5, 0, 0x13B, TRUE
setmetatile 6, 0, 0x13C, FALSE
setmetatile 6, 1, 0x144, FALSE
setmetatile 5, 1, 0x143, TRUE
setmetatile 4, 1, 0x142, TRUE
special DrawWholeMapView
delay 60
release
end

