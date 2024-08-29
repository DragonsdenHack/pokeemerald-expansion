UndergroundPath_5F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_5F_OnResume
	.byte 0

UndergroundPath_5F_OnResume:
	call UndergroundPath_5F_SetupEscapeWarp
	end

UndergroundPath_5F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE8, 13, 5
	return

UndergroundPath_5F_Policias::
lock
faceplayer
msgbox UndergroundPath_5F_Policias_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_5F_Policias_Texto_1:
.string "Solo podemos pasar de uno en uno, y en\n"
	.string "cuanto salimos al otro lado hay varios\l"
	.string "MOTORISTAS protegiendo el acceso.\l"
	.string "Solo un gran ENTRENADOR como usted\l"
	.string "puede abrirse paso por los refugios.$"


UndergroundPath_5F_Activador_Entrada::
compare VAR_ROUTE105_STATE, 6
goto_if_gt UndergroundPath_5F_Activador_Entrada_Pasa
release
end

UndergroundPath_5F_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_UNDERGROUND_PATH_7F, 40, 2
release
end

UndergroundPath_5F_Entrada_Pasa_Text_YesNo:
.string "La entrada a los refugios parece ser\n"
	.string "por aquí. ¿Quieres pasar?$"

UndergroundPath_5F_Emboscada_Move_1:
walk_in_place_right
step_end

UndergroundPath_5F_Emboscada_Move_2:
walk_down
walk_down
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.1:
walk_down
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.2:
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.3:
walk_up
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_3:
walk_in_place_down
step_end

UndergroundPath_5F_Emboscada_Move_4:
emote_exclamation_mark
step_end

UndergroundPath_5F_Emboscada_Move_4.1:
emote_exclamation_mark
delay_8
face_right
step_end

UndergroundPath_5F_Emboscada_Move_5:
face_left
step_end

UndergroundPath_5F_Emboscada_Move_6:
walk_down
walk_down
face_left
step_end

UndergroundPath_5F_Emboscada_Move_7:
delay_16
face_up
delay_8
step_end

UndergroundPath_5F_Emboscada_Move_7.1:
delay_16
face_down
delay_8
step_end

UndergroundPath_5F_Emboscada_Move_7.2:
face_right
step_end

UndergroundPath_5F_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Arriba_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.1
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.2
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.3
waitmovement 0x0
goto UndergroundPath_5F_Emboscada


UndergroundPath_5F_Emboscada::
lock
delay 10
applymovement 9, UndergroundPath_5F_Emboscada_Move_3
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 9, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
delay 15
applymovement 9, UndergroundPath_5F_Emboscada_Move_5
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_5
applymovement 8, UndergroundPath_5F_Emboscada_Move_5
applymovement 9, UndergroundPath_5F_Emboscada_Move_6
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_7
waitmovement 0x0
applymovement 9, UndergroundPath_5F_Emboscada_Move_18
applymovement 7, UndergroundPath_5F_Emboscada_Move_7.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_7.1
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_8
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
delay 20
applymovement 9, UndergroundPath_5F_Emboscada_Move_7.2
applymovement 7, UndergroundPath_5F_Emboscada_Move_9
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_10
applymovement 8, UndergroundPath_5F_Emboscada_Move_5
applymovement 9, UndergroundPath_5F_Emboscada_Move_11
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_13
applymovement 8, UndergroundPath_5F_Emboscada_Move_12
waitmovement 0x0
playse 495
msgbox UndergroundPath_5F_Emboscada_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_702, UndergroundPath_5F_Emboscada_Texto_11
delay 10
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_15
applymovement 7, UndergroundPath_5F_Emboscada_Move_14
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_12 MSGBOX_AUTOCLOSE
playse 597
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_17
applymovement 7, UndergroundPath_5F_Emboscada_Move_16
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_701, UndergroundPath_5F_Emboscada_Texto_14
delay 10
playse SE_BREAKABLE_DOOR
applymovement 7, UndergroundPath_5F_Emboscada_Move_18
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_15 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_20
applymovement 9, UndergroundPath_5F_Emboscada_Move_19
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_17 MSGBOX_AUTOCLOSE
playse 497
applymovement 9, UndergroundPath_5F_Emboscada_Move_14
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_18 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_700, UndergroundPath_5F_Emboscada_Texto_19
delay 10
playse SE_PIN
applymovement 7, UndergroundPath_5F_Emboscada_Move_4
applymovement 8, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
waitse
delay 20
msgbox UndergroundPath_5F_Emboscada_Texto_20 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_21
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_21 MSGBOX_AUTOCLOSE
delay 5
msgbox UndergroundPath_5F_Emboscada_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
clearflag FLAG_HOENN_300
addobject 5
addobject 6
addobject 4
special SpawnCameraObject
applymovement 7, UndergroundPath_5F_Emboscada_Move_4.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_4.1
applymovement 9, UndergroundPath_5F_Emboscada_Move_4.1
applymovement OBJ_EVENT_ID_CAMERA, UndergroundPath_5F_Emboscada_Move_22
waitmovement 0x0
special RemoveCameraObject
applymovement 4, UndergroundPath_5F_Emboscada_Move_23
applymovement 5, UndergroundPath_5F_Emboscada_Move_23
applymovement 6, UndergroundPath_5F_Emboscada_Move_23
waitmovement 0x0
playse SE_LEDGE
applymovement 9, UndergroundPath_5F_Emboscada_Move_24
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_23 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 9, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 5, UndergroundPath_5F_Emboscada_Move_25
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_24 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 7, UndergroundPath_5F_Emboscada_Move_26
applymovement 8, UndergroundPath_5F_Emboscada_Move_27
applymovement 9, UndergroundPath_5F_Emboscada_Move_28
waitmovement 0x0
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_25 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement 4, UndergroundPath_5F_Emboscada_Move_23
applymovement 5, UndergroundPath_5F_Emboscada_Move_23
applymovement 6, UndergroundPath_5F_Emboscada_Move_23
applymovement OBJ_EVENT_ID_CAMERA, UndergroundPath_5F_Emboscada_Move_23
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_26 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_29
waitmovement 0x0
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_27 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_30
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_29 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_31
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_30 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_32
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_32 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_31
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_33 MSGBOX_AUTOCLOSE
delay 25
msgbox UndergroundPath_5F_Emboscada_Texto_34 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_33
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_35 MSGBOX_AUTOCLOSE
applymovement 4, UndergroundPath_5F_Emboscada_Move_34
applymovement 5, UndergroundPath_5F_Emboscada_Move_34
applymovement 6, UndergroundPath_5F_Emboscada_Move_34
waitmovement 0x0
setflag FLAG_HOENN_300
removeobject 5
removeobject 6
removeobject 4
removeobject 7
removeobject 8
removeobject 9
setvar VAR_UNUSED_0x40FF, 2
release
end

UndergroundPath_5F_Emboscada_Move_34:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_33:
delay_16
face_right
delay_16
walk_slow_right
walk_slow_right
delay_16
step_end

UndergroundPath_5F_Emboscada_Move_31:
walk_in_place_left
step_end

UndergroundPath_5F_Emboscada_Move_32:
walk_slow_left
step_end

UndergroundPath_5F_Emboscada_Move_30:
face_left
step_end

UndergroundPath_5F_Emboscada_Move_29:
face_up
step_end

UndergroundPath_5F_Emboscada_Move_28:
jump_in_place_right
face_left
walk_fast_up
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_27:
delay_8
lock_facing_direction
walk_left
unlock_facing_direction
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_26:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_25.1:
delay_16
lock_facing_direction
walk_left
unlock_facing_direction
step_end

UndergroundPath_5F_Emboscada_Move_25:
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_24:
jump_in_place_right
step_end

UndergroundPath_5F_Emboscada_Move_23:
walk_left
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_22:
walk_right
walk_right
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_21:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

UndergroundPath_5F_Emboscada_Move_20:
delay_16
face_right
step_end

UndergroundPath_5F_Emboscada_Move_19:
walk_slow_left
step_end

UndergroundPath_5F_Emboscada_Move_18:
walk_in_place_up
step_end

UndergroundPath_5F_Emboscada_Move_17:
delay_16
face_down
step_end

UndergroundPath_5F_Emboscada_Move_16:
walk_left
face_up
step_end

UndergroundPath_5F_Emboscada_Move_15:
face_right
step_end

UndergroundPath_5F_Emboscada_Move_14:
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_13:
delay_16
delay_8
face_up
step_end

UndergroundPath_5F_Emboscada_Move_12:
walk_left
walk_left
face_down
step_end

UndergroundPath_5F_Emboscada_Move_11:
walk_in_place_left
step_end

UndergroundPath_5F_Emboscada_Move_10:
walk_down
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_9:
walk_fast_down
face_left
step_end

UndergroundPath_5F_Emboscada_Move_8:
walk_in_place_up
step_end

UndergroundPath_5F_Emboscada_Texto_1:
	.string "Ese nuevo PORYGON del CASINO es una\n"
	.string "estafa. Nadie puede permitírselo, ¡y\l"
	.string "además los rumores dicen que es un\l"
	.string "debilucho!$"

UndergroundPath_5F_Emboscada_Texto_2:
	.string "Ya os lo dije, lo mejor que podéis hacer\n"
	.string "es ahorrar para un DRATINI y tener\l"
	.string "paciencia.$"

UndergroundPath_5F_Emboscada_Texto_3:
	.string "Un momento{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_4:
	.string "¿Alguien del TEAM ROCKET aquí? ¿Qué\n"
	.string "tramas?$"

UndergroundPath_5F_Emboscada_Texto_5:
	.string "Luces diferente a los otros, ¿no\n"
	.string "serás{PAUSE 15}…{PAUSE 15}?$"

UndergroundPath_5F_Emboscada_Texto_6:
	.string "Debe ser algún alto cargo, ¿sabéis cómo\n"
	.string "nos recompensaría LANCE por\l"
	.string "atraparlo?$"

UndergroundPath_5F_Emboscada_Texto_7:
	.string "¡Podrías comprarte ese PORYGON, el\n"
	.string "DRATINI y un SCYTHER!$"

UndergroundPath_5F_Emboscada_Texto_8:
	.string "¡Sí, sí!$"

UndergroundPath_5F_Emboscada_Texto_9:
	.string "Además{PAUSE 15}…{PAUSE 15} Le estamos haciendo un favor\n"
	.string "a la región.$"

UndergroundPath_5F_Emboscada_Texto_10:
	.string "Tus días de libertad han terminado.\n"
	.string "¡Espero que te haya valido la pena!$"

UndergroundPath_5F_Emboscada_Texto_11:
	.string "¿Te resistes?$"

UndergroundPath_5F_Emboscada_Texto_12:
	.string "Jo, jo, jo{PAUSE 15}…{PAUSE 15}entonces{PAUSE 15}…{PAUSE 15} parece que\n"
	.string "cuidas bien de tus POKÉMON.$"

UndergroundPath_5F_Emboscada_Texto_13:
	.string "Me quedaré con un par de ellos antes de\n"
	.string "entregarte a la justicia, ¡nadie notará\l"
	.string "su ausencia!$"

UndergroundPath_5F_Emboscada_Texto_14:
	.string "¡Ríndete ya!$"

UndergroundPath_5F_Emboscada_Texto_15:
	.string "¡Maldito! ¡Debe ser un pez gordo!\n"
	.string "¡Si lo llevamos hasta el CG de la\l"
	.string "LIGA POKÉMON seremos ricos!$"

UndergroundPath_5F_Emboscada_Texto_16:
	.string "Tranquilos, yo podré con él.\n"
	.string "Está cansado.$"

UndergroundPath_5F_Emboscada_Texto_17:
	.string "Es imposible que este infeliz, con los\n"
	.string "recursos que tiene a su disposición,\l"
	.string "pueda con mi colección.$"

UndergroundPath_5F_Emboscada_Texto_18:
	.string "¡Ve haciendo las maletas, partimos\n"
	.string "hacia MESETA AÑIL!$"

UndergroundPath_5F_Emboscada_Texto_19:
	.string "¿Quién te crees que eres?$"

UndergroundPath_5F_Emboscada_Texto_20:
	.string "Maldición{PAUSE 15}…{PAUSE 15} con un DRAGONAIR te hubiera\n"
	.string "ganado, si no fuera tan difícil criarlo{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_21:
	.string "Grrr{PAUSE 15}…{PAUSE 15} No saldrás libre de aquí{PAUSE 15}…{PAUSE 15}\n"
	.string "Llamaré a un colega de MANSIÓN AZULONA.\l"
	.string "Llegará antes de que puedas{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_22:
	.string "????: Ya basta.$"

UndergroundPath_5F_Emboscada_Texto_23:
	.string "¡L-los motoristas!$"

UndergroundPath_5F_Emboscada_Texto_24:
	.string "TETSUO: Largo de aquí, antes de que\n"
	.string "cambie de parecer.$"

UndergroundPath_5F_Emboscada_Texto_25:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_26:
	.string "Sé lo que debes estar pensando.\n"
	.string "Pero no debes juzgarlos.$"

UndergroundPath_5F_Emboscada_Texto_27:
	.string "Toda KANTO tiene aún fresca en la\n"
	.string "memoria el gran poder que LANCE\l"
	.string "mostró al mundo.$"

UndergroundPath_5F_Emboscada_Texto_28:
	.string "Ese poder caló hondo, dejó el espíritu\n"
	.string "de la región hecho trizas y, con ello,\l"
	.string "LANCE le dio la forma que más le\l"
	.string "convenía.$"

UndergroundPath_5F_Emboscada_Texto_29:
	.string "Ahora no son más que marionetas bajo\n"
	.string "sus órdenes. Y lo entiendo.$"

UndergroundPath_5F_Emboscada_Texto_30:
	.string "Después de todo, la gran mayoría no\n"
	.string "está hecha para vivir con el agua al\l"
	.string "cuello.$"

UndergroundPath_5F_Emboscada_Texto_31:
	.string "Pero{PAUSE 25}…{PAUSE 25} No tú, ¿verdad, {PLAYER}?$"

UndergroundPath_5F_Emboscada_Texto_32:
	.string "Pareces el tipo de persona capaz de\n"
	.string "mirar a los ojos a un poder que le\l"
	.string "sobrepasa.$"

UndergroundPath_5F_Emboscada_Texto_33:
	.string "Aunque LANCE y su gobierno pudieran\n"
	.string "reducir a cenizas los últimos vestigios\l"
	.string "de la vieja KANTO{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_34:
	.string "{PAUSE 15}…{PAUSE 15}ningún precio es demasiado alto para\n"
	.string "pagar por el privilegio de ser dueño de\l"
	.string "ti mismo.$"

UndergroundPath_5F_Emboscada_Texto_35:
	.string "El solo hecho de contar con esa\n"
	.string "oportunidad ya hace que el intento\l"
	.string "valga la pena. No lo olvides, {PLAYER}.$"

