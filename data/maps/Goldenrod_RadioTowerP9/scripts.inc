Goldenrod_RadioTowerP9_MapScripts::
	.byte 0

Goldenrod_RadioTowerP9_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_718, Goldenrod_RadioTowerP9_Text_PoliciaIntro, Goldenrod_RadioTowerP9_Text_PoliciaDefeated
	msgbox Goldenrod_RadioTowerP9_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end


Goldenrod_RadioTowerP9_NPC5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC5_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC5_Texto_1:
	.string "Legal o ilegal, creativo o destructivo,\n"
	.string "mientras algo genere ganancias siempre\l"
	.string "tiene posibilidades de florecer.$"

Goldenrod_RadioTowerP9_NPC7::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC7_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC7_Texto_1:
	.string "Mientras el perfeccionismo traza\n"
	.string "caminos rectos, la senda del genio es\l"
	.string "sinuosa.$"

Goldenrod_RadioTowerP9_Llave_1::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 1, 12, 0x335, FALSE
setmetatile 1, 11, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Llave_2::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 9, 0x335, FALSE
setmetatile 14, 10, 0x335, FALSE
setmetatile 15, 9, 0x334, FALSE
setmetatile 15, 10, 0x334, FALSE
setmetatile 15, 11, 0x334, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Policia_Move_1:
walk_in_place_right
step_end

Goldenrod_RadioTowerP9_Policia_Move_2:
delay_8
face_left
step_end

Goldenrod_RadioTowerP9_Policia_Move_3:
walk_left
step_end

Goldenrod_RadioTowerP9_Policia_Move_4:
walk_left
walk_left
step_end

Goldenrod_RadioTowerP9_Policia_Llave_Izq::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia_Llave_Centro::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_3
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia_Llave_Der::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_4
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia::
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_3 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FF, 32
release
end

Goldenrod_RadioTowerP9_Policia_Llave_Texto_1:
	.string "¿Es usted {PLAYER}? Venga un\n"
	.string "momento.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_2:
	.string "La seguridad a partir de este punto es\n"
	.string "aún más estricta. Para seguir\l"
	.string "necesitará una llave específica.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_3:
	.string "¡{PLAYER} obtuvo LLAVE RADIO!$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_4:
	.string "Buena suerte.$"

Goldenrod_RadioTowerP9_Giovanni_Move_1:
walk_in_place_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_2:
face_up
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_3:
emote_exclamation_mark
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_4:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_4.1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_5:
walk_in_place_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_6:
face_up
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_7:
face_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_8:
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_9:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
walk_in_place_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_10:
delay_8
face_left
delay_16
delay_8
face_up
delay_8
step_end



Goldenrod_RadioTowerP9_Giovanni::
lock
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_1
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_2
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Goldenrod_RadioTowerP9_Giovanni_Move_4
waitmovement 0x0
special RemoveCameraObject
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
waitse
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_8
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_9
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
delay 30
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_10
waitmovement 0x0
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_11
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_12
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_14
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_13
waitmovement 0x0
delay 20
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_16
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_16
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_15
waitmovement 0x0
removeobject 3
playse SE_EXIT
waitse
delay 10
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_17
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_18 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_19 MSGBOX_AUTOCLOSE
delay 30
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_3
waitmovement 0x0
waitse
delay 20
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_23 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HOENN_103
fadescreen 1
delay 15
removeobject 1
removeobject 2
delay 15
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Goldenrod_RadioTowerP9_Giovanni_Move_4.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40FF, 33
release
end

Goldenrod_RadioTowerP9_Giovanni_Move_17:
face_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_16:
delay_16
delay_16
delay_16
face_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_15:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
face_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_14:
delay_16
delay_16
face_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_13:
walk_slow_down
walk_slow_down
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_12:
walk_in_place_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_11:
delay_8
walk_slow_left
delay_8
step_end

Goldenrod_RadioTowerP9_Giovanni_Texto_1:
	.string "????: Jamás pudimos imaginar que al\n"
	.string "otro lado del MT.PLATEADO ocurrieran\l"
	.string "tales atrocidades.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_2:
	.string "ATLAS: Puede que no conocieran los\n"
	.string "detalles, maestro.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_3:
	.string "Pero si no lo hacían, ¡era simplemente\n"
	.string "porque no querían saberlos!$"

Goldenrod_RadioTowerP9_Giovanni_Texto_4:
	.string "GIOVANNI: Es suficiente, ATLAS.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_5:
	.string "No hay duda de que el M.DRAGÓN se\n"
	.string "siente culpable.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_6:
	.string "Cometió un grave error al pensar que\n"
	.string "LANCE continuaría con su legado, al\l"
	.string "confiar en que se mantendría puro y\l"
	.string "virtuoso, y en que respetaría la\l"
	.string "tradición, aplicando todo lo aprendido\l"
	.string "en ENDRINO con justicia y sabiduría…$"

Goldenrod_RadioTowerP9_Giovanni_Texto_7:
	.string "Eso fue lo que hizo usted, y su maestro\n"
	.string "antes, así por incontables\l"
	.string "generaciones. Entiendo que no hubiera\l"
	.string "motivos para prever lo contrario.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_8:
	.string "M.DRAGÓN: Fui incapaz de ver… en lo que\n"
	.string "se estaba convirtiendo.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_9:
	.string "GIOVANNI: Lo fácil sería\n"
	.string "responsabilizar a toda JOHTO por\l"
	.string "permitir a LANCE subir al poder.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_10:
	.string "Pero… si esta región cae, KANTO tampoco\n"
	.string "florecerá.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_11:
	.string "Necesitamos la ayuda de JOHTO.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_12:
	.string "Y no espero obtenerla aplicando\n"
	.string "rigurosas condenas sobre ancianos que\l"
	.string "hicieron oídos sordos.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_13:
	.string "No porque no les importe KANTO, sino\n"
	.string "porque su verdadera ocupación ha sido\l"
	.string "combatir.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_14:
	.string "Seguir el antiguo camino del\n"
	.string "ENTRENADOR: el mismo que exige alejarse\l"
	.string "de asuntos mundanos. ¿Cómo podría ser\l"
	.string "eso condenable?$"

Goldenrod_RadioTowerP9_Giovanni_Texto_15:
	.string "ATLAS: …$"

Goldenrod_RadioTowerP9_Giovanni_Texto_16:
	.string "M.DRAGÓN: La tendrán. Tendrán mi ayuda.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_17:
	.string "Pero… no a costa de olvidar\n"
	.string "quienes somos.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_18:
	.string "ATLAS: Señor… Puedo entender lo del\n"
	.string "M.DRAGÓN. ¡¿Pero LANCE?!$"

Goldenrod_RadioTowerP9_Giovanni_Texto_19:
	.string "Si dependiera de mí…$"

Goldenrod_RadioTowerP9_Giovanni_Texto_20:
	.string "GIOVANNI: Aún no alcanzas a ver las\n"
	.string "consecuencias de todo esto.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_21:
	.string "ATLAS: ¿Qué quieres decir?$"

Goldenrod_RadioTowerP9_Giovanni_Texto_22:
	.string "GIOVANNI: No te preocupes… El\n"
	.string "verdadero castigo de LANCE está por\l"
	.string "llegar.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_23:
	.string "Ahora, subamos. Hay temas más urgentes\n"
	.string "por tratar, y solo faltamos nosotros,\l"
	.string "además de {PLAYER}.$"
