PokemonLeague_6F_MapScripts::
	.byte 0

PokemonLeague_6F_Final_Centro::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Der::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.1
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Izq::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final::
delay 15
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_5
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4.1
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_4.2
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_4.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_8
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_6.1
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_9
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 20
applymovement 2, PokemonLeague_6F_Final_Move_10
waitmovement 0x0
delay 30
msgbox PokemonLeague_6F_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 30
trainerbattle_no_intro TRAINER_ROJO_2, PokemonLeague_6F_Final_Texto_22
delay 20
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_23 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_11
applymovement 2, PokemonLeague_6F_Final_Move_12
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_25 MSGBOX_AUTOCLOSE
playse MUS_DUMMY
delay 20
msgbox PokemonLeague_6F_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 40
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
addobject 3
playse SE_PIN
delay 40
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
waitmovement 0x0
applymovement 3, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse MUS_HALL_OF_FAME_ROOM
applymovement 1, PokemonLeague_6F_Final_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_15
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_16
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, PokemonLeague_6F_Final_Move_17
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_29 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_17.4
applymovement 1, PokemonLeague_6F_Final_Move_17.5
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_32 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_33 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_35 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
applymovement 3, PokemonLeague_6F_Final_Move_20
applymovement 1, PokemonLeague_6F_Final_Move_21
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_8
applymovement 2, PokemonLeague_6F_Final_Move_22
waitmovement 0x0
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 7, 2, 0x248, TRUE
setmetatile 7, 1, 0x240, TRUE
setmetatile 8, 2, 0x16B, TRUE
setmetatile 8, 1, 0x299, TRUE
setmetatile 9, 1, 0x240, TRUE
setmetatile 9, 2, 0x248, TRUE
special DrawWholeMapView
delay 30
applymovement 3, PokemonLeague_6F_Final_Move_24
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_23
waitmovement 0x0
special RemoveCameraObject
playse SE_EXIT
delay 30
applymovement 1, PokemonLeague_6F_Final_Move_25
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
addobject 3
waitse
delay 10
playse SE_PIN
special SpawnCameraObject
applymovement 3, PokemonLeague_6F_Final_Move_27
applymovement 1, PokemonLeague_6F_Final_Move_26
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_28
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonLeague_6F_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_38 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_39 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_39.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_41 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_41.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_43 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_45 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_30
waitmovement 0x0
waitse
delay 10
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
msgbox PokemonLeague_6F_Final_Texto_46 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LANCE_2, PokemonLeague_6F_Final_Texto_47
playse MUS_RG_VICTORY_GYM_LEADER
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
msgbox PokemonLeague_6F_Final_Texto_48 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_49 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
addobject 4
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
applymovement 2, PokemonLeague_6F_Final_Move_13
applymovement 3, PokemonLeague_6F_Final_Move_13
applymovement 4, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse 567
msgbox PokemonLeague_6F_Final_Texto_50 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_31
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_51 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_THROW
waitse
delay 10
playse SE_BALL_TRAY_EXIT
msgbox PokemonLeague_6F_Final_Texto_52 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_53 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_54 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_55 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, PokemonLeague_6F_Final_Move_28
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_56 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_58 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_33
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
setflag FLAG_NUEVA_854
clearflag FLAG_UNUSED_0x26E
setvar VAR_UNUSED_0x40F7, 94
dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
delay 40
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

PokemonLeague_6F_Final_Move_1.1:
emote_exclamation_mark
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_29.2:
face_left
step_end

PokemonLeague_6F_Final_Move_29.1:
face_down
step_end

PokemonLeague_6F_Final_Move_27.2:
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_left
delay_16
delay_8
face_up
step_end

PokemonLeague_6F_Final_Move_27.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_17.4:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_17.5:
jump_in_place_down
step_end

PokemonLeague_6F_Final_Move_17.1:
face_up
step_end

PokemonLeague_6F_Final_Move_17.2:
face_right
step_end

PokemonLeague_6F_Final_Move_17.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

PokemonLeague_6F_Final_Move_6.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_4.3:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_7.1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_4.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

PokemonLeague_6F_Final_Move_4.2:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Texto_1:
	.string "-OAK finished entering RED's data in the\n"
	.string "HALL OF FAME.-$"

PokemonLeague_6F_Final_Texto_2:
	.string "OAK: It is official now, you are the new\n"
	.string "CHAMPION, you accomplished the purpose\l"
	.string "that you were created for.$"

PokemonLeague_6F_Final_Texto_3:
.string "OAK: …$"

PokemonLeague_6F_Final_Texto_4:
	.string "OAK: I know why you are here, ROCKET,\n"
	.string "you think crowning you as the CHAMPION\l"
	.string "you will gain enough influence to clean\l"
	.string "up the image of TEAM ROCKET and\l"
	.string "restore autonomy to the population of\l"
	.string "KANTO.$"

PokemonLeague_6F_Final_Texto_5:
	.string "I know perfectly your BOSS, wanted to\n"
	.string "save the region at his own way and just\l"
	.string "brought ruin.$"

PokemonLeague_6F_Final_Texto_6:
.string "De lo que no se dieron cuenta él y su\n"
	.string "estúpido séquito es de que enfocaron\l"
	.string "todo de la forma equivocada.\l"
	.string "Crear un POKÉMON con un poder desmedido\l"
	.string "e incontrolable lleva precisamente a\l"
	.string "eso: a que no puedas controlarlo.$"

PokemonLeague_6F_Final_Texto_7:
.string "En cambio, dejamos sin explotar la\n"
	.string "parte más importante dentro de la\l"
	.string "ecuación que permite ganar combates.$"

PokemonLeague_6F_Final_Texto_8:
.string "Un ENTRENADOR invencible, capaz de\n"
	.string "tomar por sí solo las mejores decisiones\l"
	.string "posibles en cuanto a captura de\l"
	.string "POKÉMON, estrategia en batalla,\l"
	.string "entrenamiento y asignación de objetos\l"
	.string "y movimientos. Capaz de exprimir al\l"
	.string "máximo un equipo de 6 POKÉMON con\l"
	.string "los recursos de los que dispone.$"

PokemonLeague_6F_Final_Texto_9:
.string "¿Acaso no es eso mucho mejor que contar\n"
	.string "con un único POKÉMON hiperpoderoso,\l"
	.string "que aún será manejado por las torpes\l"
	.string "manos de un humano susceptible de error?$"

PokemonLeague_6F_Final_Texto_10:
.string "A los ojos del resto de mortales, ROJO\n"
	.string "será visto como inalcanzable, el culmen\l"
	.string "de lo que significa ser ENTRENADOR.\l"
	.string "Me he encargado personalmente de que\l"
	.string "cubra hasta los topes todas las\l"
	.string "variables que influyen en un combate.\l"
	.string "Es la combinación perfecta entre\l"
	.string "tecnología y humanidad.$"
	
PokemonLeague_6F_Final_Texto_10.1:
	 .string "Pero{PAUSE 25}…{PAUSE 25} aún más importante{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_11:
.string "A diferencia de MEWTWO, todo su\n"
	.string "potencial, las posibilidades que\l"
	.string "ofrece, y sus recursos, carecen de\l"
	.string "propósito. No hará preguntas, ROJO no\l"
	.string "es más que una cáscara vacía, lista\l"
	.string "para ser cubierta por cualquiera.$"

PokemonLeague_6F_Final_Texto_11.1:
	.string "Así es, ROCKET. El propósito de ROJO\n"
	.string "es el propósito de aquel que lo\l"
	.string "maneja como una simple marioneta.$"

PokemonLeague_6F_Final_Texto_12:
.string "Comprenderás, pues, la importancia\n"
	.string "de contar con un ser así, dentro de un\l"
	.string "mundo donde absolutamente todos, como\l"
	.string "principio básico universal, se callan\l"
	.string "la boca frente a ti si eres capaz de\l"
	.string "vencerles en un combate, y en el que\l"
	.string "llegar a ser CAMPEÓN de ese estúpido\l"
	.string "juego tiene el mismo peso de aquel que\l"
	.string "gobierne la susodicha región.$"

PokemonLeague_6F_Final_Texto_12.1:
	.string "Por equivalencia, aquel que maneje a\n"
	.string "ROJO tiene el poder de cambiarlo todo,\l"
	.string "de adaptarse a cualquier situación y,\l"
	.string "al final del día, salir vencedor.\l"
	.string "No hay posibilidad de escape.$"

PokemonLeague_6F_Final_Texto_13:
.string "¡¿No te das cuenta?!\n"
	.string "¡Nadie, ni siquiera LANCE, puede\l"
	.string "a largo plazo ante un ROJO expuesto\l"
	.string "al estímulo adecuado que le permita\l"
	.string "perfeccionar sus POKÉMON!$"

PokemonLeague_6F_Final_Texto_14:
	.string "Do you think that I do not want to use\n"
	.string "it for saving KANTO from LANCE\l"
	.string "tyranny? If not for starting my own\l"
	.string "dictature?$"

PokemonLeague_6F_Final_Texto_15:
	.string "Not even god has an answer for that\n"
	.string "question, ROCKET, you would not have a\l"
	.string "way to know it.$"

PokemonLeague_6F_Final_Texto_16:
	.string "So you want to stop me, even after all\n"
	.string "you have heard.$"

PokemonLeague_6F_Final_Texto_17:
	.string "Quite typical of criminals like you, they\n"
	.string "think they are free, with a choice\l"
	.string "capacity and an entire world full of\l"
	.string "possibilities at their feet, until\l"
	.string "reality knocks them down with a single\l"
	.string "stroke, without even giving them time\l"
	.string "to understand what has happened, just\l"
	.string "like the insect that is crushed in a\l"
	.string "second fraction.$"

PokemonLeague_6F_Final_Texto_18:
	.string "Excuse RED, entering the HALL OF FAME\n"
	.string "was his unique purpose. Beyond that,\l"
	.string "and once his purpose is finished,\l"
	.string "nothing that occurs afterward can be\l"
	.string "retained in his memory, it simply does\l"
	.string "not exist for him. Nevertheless, he\l"
	.string "keeps his combat functions.$"


PokemonLeague_6F_Final_Texto_19:
	.string "No one has even been close to\n"
	.string "defeating him. If that's what you want,\l"
	.string "you'll get what you're looking for,\l"
	.string "you're merely another pawn that I'll\l"
	.string "have to silence following our ridiculous\l"
	.string "combat code.$"

PokemonLeague_6F_Final_Texto_20:
	.string "Go ahead ROCKET. Face the wall that you\n"
	.string "will never surpass no matter how much\l"
	.string "you effort!$"

PokemonLeague_6F_Final_Texto_21:
.string "RED: …$"

PokemonLeague_6F_Final_Texto_22:
.string "…!$"

PokemonLeague_6F_Final_Texto_23:
.string "NO!\n"
	.string "IMPOSIBLE!\l"
	.string "INCONCEIVABLE!$"

PokemonLeague_6F_Final_Texto_24:
	.string "You must not have won! RED was made\n"
	.string "specifically for this! There is not any\l"
	.string "possible way that you could have\l"
	.string "defeated him with your resources that\l"
	.string "you have and the POKÉMON that you can\l"
	.string "catch in KANTO!$"

PokemonLeague_6F_Final_Texto_25:
.string "There isn't any other possible explanation!\n"
	.string "YOU!\l"
	.string "You…!$"

PokemonLeague_6F_Final_Texto_26:
.string "????: We had a deal, OAK.$"

PokemonLeague_6F_Final_Texto_27:
.string "OAK: Oh{PAUSE 25},{PAUSE 25} LANCE{PAUSE 25}…{PAUSE 15}\n"
	.string "Y{PAUSE 25}-{PAUSE 25}yo{PAUSE 25}…{PAUSE 25}\l"
	.string "Estab{PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_28:
.string "LANCE: -Un ENTRENADOR inabordable,\n"
	.string "imbatible para cualquiera, capaz de\l"
	.string "asegurarnos un CAMPEÓN afín a nuestros\l"
	.string "intereses, imposible de desbancar y\l"
	.string "que mantendrá dicho puesto todo el\l"
	.string "tiempo del que gustemos-.$"

PokemonLeague_6F_Final_Texto_29:
.string "Esas fueron tus palabras, OAK,\n"
	.string "cuando me convenciste para abrir de\l"
	.string "nuevo la opción de luchar por el\l"
	.string "título de la LIGA.$"

PokemonLeague_6F_Final_Texto_30:
.string "Me lo vendiste como una forma de\n"
	.string "devolver la ilusión y la esperanza a\l"
	.string "KANTO, además de un modo de obtener\l"
	.string "esa fidelidad y confianza en el\l"
	.string "sistema tan difícil de ganarse.$"

PokemonLeague_6F_Final_Texto_30.1:
	.string "Una estrategia brillante, OAK, con\n"
	.string "la que obtendríamos lo que queremos\l"
	.string "sin comprometernos, pues el campeonato\l"
	.string "de la LIGA sería poco más que un\l"
	.string "espejismo para cualquier ciudadano, de\l"
	.string "por sí abrumado por su dura rutina.$"

PokemonLeague_6F_Final_Texto_30.2:
	.string "Algo que impide alcanzar la excelencia\n"
	.string "en cualquier cosa ajena a la vida\l"
	.string "cotidiana, en contraste con la ÉLITE 4.$"

PokemonLeague_6F_Final_Texto_30.3:
	.string "Coronarse entonces con ROJO: símbolo\n"
	.string "de la perfección y el tope en cuanto\l"
	.string "combate se refiere, sería una hazaña\l"
	.string "estadísticamente imposible de lograr\l"
	.string "en esta región.$"

PokemonLeague_6F_Final_Texto_31:
.string "Resulta, OAK, que no ha sido necesario\n"
	.string "un vulgar ciudadano para desbancar a\l"
	.string "tu obra maestra.$"

PokemonLeague_6F_Final_Texto_31.1:
	.string "¡HA SIDO UN ROCKET, OAK!\n"
	.string "¡UN ROCKET!$"

PokemonLeague_6F_Final_Texto_31.2:
	.string "¡Tal vez subestimaste los efectos de\n"
	.string "ese trabajo excesivo del que hablaste\l"
	.string "como inhibidor del rendimiento!\p"
	.string "¡Al menos para aquellos capaces\n"
	.string "de sobrevivir y reconducirlo en\l"
	.string "la dirección adecuada!$"

PokemonLeague_6F_Final_Texto_32:
.string "OAK: Déjeme explicarle, SR.LANCE{PAUSE 15}…{PAUSE 15}\n"
	.string "ROJO aún no estaba listo,\l"
	.string "necesita exponerse a{PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_33:
.string "LANCE: Ya estoy harto de oírte hablar.\n"
	.string "No quiero conjeturas: quiero resultados.\l"
	.string "Haremos esto a mi manera.$"

PokemonLeague_6F_Final_Texto_34:
.string "Debí advertir que algo así podría\n"
	.string "ocurrir contigo.$"

PokemonLeague_6F_Final_Texto_34.1:
	.string "Empleé POKÉMON de un nivel algo superior\n"
	.string "a lo que hice con los 3 competidores,\l"
	.string "con el objeto de quitarte rápidamente\l"
    .string "del medio, y aún con ello saliste ileso.$"

PokemonLeague_6F_Final_Texto_34.2:
	.string "Pero no te preocupes: no\n"
	.string "volveré a cometer ese error.$"

PokemonLeague_6F_Final_Texto_35:
.string "OAK: ¿Q{PAUSE 25}-{PAUSE 25}qué va a hacer?$"

PokemonLeague_6F_Final_Texto_36:
.string "OAK: E{PAUSE 25}-{PAUSE 25}estamos perdidos{PAUSE 15}…{PAUSE 15}\n"
	.string "Va{PAUSE 25}…{PAUSE 25}\l"
	.string "A{PAUSE 15}…{PAUSE 15}\l"
	.string "Volver a soltar las best{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_37:
.string "LANCE: CAMPEÓN{PAUSE 25}…{PAUSE 25} GOBERNADOR{PAUSE 25}…{PAUSE 25}\n"
	.string "Son solo palabras, quien tiene\l"
	.string "el poder controla el mundo.$"

PokemonLeague_6F_Final_Texto_38:
.string "¿Por qué crees que la gente venera\n"
	.string "a los LEGENDARIOS y PSEUDOLEGENDARIOS?\p"
	.string "A nadie le importa de dónde provengan,\n"
	.string "lo único que nos interesa de ellos es\l"
	.string "que, comparados con el resto de POKÉMON,\l"
	.string "cuentan con un poder único, excepcional.$"

PokemonLeague_6F_Final_Texto_39:
.string "Ahí es donde radica su magia, en\n"
	.string "lo desconocido de ese poder, y en\l"
	.string "este caso, inaccesible para el resto.$"
	
PokemonLeague_6F_Final_Texto_39.1:
	.string "Que yo sepa, la ciencia es incapaz de\n"
	.string "reproducir la milagrosa combinación\l"
	.string "que da lugar a un POKÉMON LEGENDARIO.$"

PokemonLeague_6F_Final_Texto_40:
.string "Tantos años de duro trabajo para\n"
	.string "al final encontrar en la propia\l"
	.string "naturaleza frutos mejores, OAK.$"

PokemonLeague_6F_Final_Texto_40.1:
	.string "Fuiste un iluso al creer que podías\n"
	.string "jugar con las reglas del juego mejor\l"
	.string "que la creadora de dichas reglas.$"

PokemonLeague_6F_Final_Texto_41:
.string "Voy a hacer lo que debí haber\n"
	.string "hecho desde el principio, gobernar\l"
	.string "con puño de hierro esta región.$"

PokemonLeague_6F_Final_Texto_41.1:
	.string "¿Quién mejor que LANCE, el mayor\n"
	.string "especialista del tipo más sagrado\l"
	.string "y poderoso que existe, para ocupar\l"
	.string "ese cargo?$"

PokemonLeague_6F_Final_Texto_42:
.string "En cuanto a ti{PAUSE 15}…{PAUSE 15}\n"
	.string "Después de aplastarte como a un vulgar\l"
	.string "insecto, expondré públicamente lo que\l"
	.string "quede de ti y tu equipo, como ejemplo\l"
	.string "y aviso de lo que le espera a todo\l"
	.string "aquel que ose insubordinarse lo más\l"
	.string "mínimo en contra de mi gobierno.$"

PokemonLeague_6F_Final_Texto_43:
.string "Mira el lado bueno, ROCKET.\p"
	.string "Pasarás a la historia como aquel que\n"
	.string "obligó a LANCE I a hacer uso de sus\l"
	.string "sagrados POKÉMON, justo antes de dar\l"
	.string "inicio a la nueva fase de su reinado{PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_44:
.string "LANCE: {PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_45:
.string "LANCE: No hay honor en acabar con\n"
	.string "un rival menguado por el duro camino\l"
	.string "que le ha llevado hasta aquí.\l"
	.string "Quiero que veas cómo aplasto a tu\l"
	.string "equipo en su apogeo, vas a entender de\l"
	.string "una vez por todas que existen poderes\l"
	.string "ante los que mortales como tú solo\l"
	.string "pueden arrodillarse.$"

PokemonLeague_6F_Final_Texto_46:
	.string "I AM THE STATE!!$"

PokemonLeague_6F_Final_Texto_47:
.string "My dragons!\n"
	.string "My sacred beasts!\l"
	.string "How?$"

PokemonLeague_6F_Final_Texto_48:
	.string "LANCE: This can't be, no one had stood a\n"
	.string "chance against my best POKÉMON; they\l"
	.string "are the best around! There's nothing\l"
	.string "better to be found in all of KANTO!$"

PokemonLeague_6F_Final_Texto_49:
	.string "????: You are wrong LANCE.$"

PokemonLeague_6F_Final_Texto_50:
	.string "GIOVANNI: Your ego and arrogance have\n"
	.string "led to your downfall, while you were\l"
	.string "complacent in the safety of a power\l"
	.string "whose origin you were unaware of,\l"
	.string "others toiled tirelessly, we knew your\l"
	.string "limits and strove day by day to forge an\l"
	.string "even greater power.$"

PokemonLeague_6F_Final_Texto_51:
	.string "With no necessity feeding your power,\n"
	.string "it has weakened, and during this time,\l"
	.string "our greatest motivation was to\l"
	.string "challenge your tyranny, now, it's time\l"
	.string "for you to return to the nature that\l"
	.string "belongs to it.$"

PokemonLeague_6F_Final_Texto_52:
.string "LANCE: ENTEI, RAIKOU, SUICUNE!$"

PokemonLeague_6F_Final_Texto_53:
	.string "GIOVANNI: {PLAYER}! I never thought\n"
	.string "you could go this far. As soon as ANDRA\l"
	.string "notified me of the situation and your\l"
	.string "achievement in the HALL OF FAME, I\l"
	.string "chose to come personally, even at the\l"
	.string "risk of attracting media attention!\l"
	.string "You've proven the invaluable worth of\l"
	.string "properly trained POKÉMON, regardless of\l"
	.string "their origin, you have made them a\l"
	.string "totally champions capable of\l"
	.string "overcoming any situation!$"

PokemonLeague_6F_Final_Texto_54:
	.string "GIOVANNI: Those who thought they had\n"
	.string "control over everything in their\l"
	.string "surroundings, simplifying everything to\l"
	.string "a simple equation.$"

PokemonLeague_6F_Final_Texto_55:
.string "OAK: …$"

PokemonLeague_6F_Final_Texto_56:
	.string "And whose who played the role of gods,\n"
	.string "thinking themselves superior to the\l"
	.string "rest simply by being born that way.$"

PokemonLeague_6F_Final_Texto_57:
	.string "GIOVANNI: You've proven that, in the\n"
	.string "end nothing exceeds the action driven\l"
	.string "by an unbreakable will to achieve an\l"
	.string "objective.$"

PokemonLeague_6F_Final_Texto_58:
	.string "GIOVANNI: {PLAYER}! Only someone\n"
	.string "like you deserves a place in the history\l"
	.string "books, immortalized in the HALL OF FAME!\l"
	.string "Nothing will be the same after this!$"

PokemonLeague_6F_Final_Move_1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.1:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.2:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_3:
face_left
step_end

PokemonLeague_6F_Final_Move_4:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_5:
walk_in_place_up
delay_1
delay_2
face_down
step_end

PokemonLeague_6F_Final_Move_6:
walk_slow_up
face_down
step_end

PokemonLeague_6F_Final_Move_7:
face_down
step_end

PokemonLeague_6F_Final_Move_8:
face_up
step_end

PokemonLeague_6F_Final_Move_9:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_10:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_11:
walk_fast_down
walk_fast_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_12:
walk_up
face_down
step_end

PokemonLeague_6F_Final_Move_13:
emote_exclamation_mark
face_down
step_end

PokemonLeague_6F_Final_Move_14:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_15:
slide_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_16:
delay_8
walk_slow_up
delay_16
walk_in_place_up
delay_8
step_end

PokemonLeague_6F_Final_Move_17:
delay_8
walk_slow_right
delay_16
walk_in_place_right
delay_8
step_end

PokemonLeague_6F_Final_Move_18:
walk_left
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_19:
delay_8
walk_slow_up
walk_slow_up
step_end

PokemonLeague_6F_Final_Move_20:
walk_right
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_21:
walk_right
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_22:
walk_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_23:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

PokemonLeague_6F_Final_Move_24:
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


PokemonLeague_6F_Final_Move_25:
walk_up
walk_left
walk_left
walk_left
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_26:
emote_exclamation_mark
face_right
step_end

PokemonLeague_6F_Final_Move_27:
walk_fast_down
walk_fast_left
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_28:
face_right
step_end

PokemonLeague_6F_Final_Move_29:
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_30:
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_31:
walk_up
step_end

PokemonLeague_6F_Final_Move_32:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_33:
walk_slow_up
walk_slow_right
walk_slow_up
walk_in_place_up
step_end
