PalletTown_Laboratorio_Secreto_S3_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S3_OnFrame
	.byte 0

PalletTown_Laboratorio_Secreto_S3_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 32, PalletTown_Laboratorio_Secreto_S3_Andra
	.2byte 0

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Despues::
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_10 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua::
lock
delay 15
compare VAR_UNUSED_0x40F8, 30
goto_if_gt PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 8, 6, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1
waitmovement 0x0
waitse
delay 10
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_720, PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_7
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 31
release
end

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_3:
	.string "'Simulador de combate avanzado III.\n"
	.string "Nivel de dificultad: 8.'$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_4:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_5:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_6:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_8:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_9:
	.string "'La ignorancia es la fuerza'$"

PalletTown_Laboratorio_Secreto_S3_Primera_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua. Su\n"
	.string "contraseña era:\l"
	.string "'La ignorancia es la fuerza'.$"

Laboratorio_Secreto_S3_Andra_Move_1:
walk_down
walk_left
walk_left
step_end

Laboratorio_Secreto_S3_Andra_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Laboratorio_Secreto_S3_Andra_Move_2.1:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Laboratorio_Secreto_S3_Andra_Move_3:
face_down
step_end

Laboratorio_Secreto_S3_Andra_Move_4:
face_up
step_end

Laboratorio_Secreto_S3_Andra_Move_5:
delay_16
face_left
delay_16
delay_8
face_down
step_end

Laboratorio_Secreto_S3_Andra_Move_6:
walk_in_place_down
step_end

Laboratorio_Secreto_S3_Andra_Move_7:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
delay_16
delay_8
face_left
delay_16
delay_8
face_right
delay_16
step_end

Laboratorio_Secreto_S3_Andra_Move_8:
delay_16
delay_8
face_down
step_end

Laboratorio_Secreto_S3_Andra_Move_9:
emote_exclamation_mark
step_end

Laboratorio_Secreto_S3_Andra_Move_10:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Laboratorio_Secreto_S3_Andra_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

PalletTown_Laboratorio_Secreto_S3_Andra::
lock
setflag FLAG_HOENN_284
removeobject 8
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S3_Andra_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S3_Andra_Move_2.1
waitmovement 0x0
special RemoveCameraObject
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_4
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_5
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_6
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_8
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_9
waitmovement 0x0
waitse
delay 15
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_4
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_7.1 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_11
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_12
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_13
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_14
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_13 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S3_Andra_Move_16
applymovement 9, Laboratorio_Secreto_S3_Andra_Move_15
waitmovement 0x0
clearflag FLAG_HOENN_284
setflag FLAG_HOENN_283
setflag FLAG_HOENN_285
removeobject 9
addobject 8
setvar VAR_UNUSED_0x40F8, 33
release
end

Laboratorio_Secreto_S3_Andra_Move_16:
delay_16
face_left
step_end

Laboratorio_Secreto_S3_Andra_Move_15:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Laboratorio_Secreto_S3_Andra_Move_14:
walk_in_place_up
step_end

Laboratorio_Secreto_S3_Andra_Move_12:
delay_16
face_left
step_end

Laboratorio_Secreto_S3_Andra_Move_13:
delay_16
delay_16
delay_8
face_left
delay_16
step_end

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_1:
	.string "{PLAYER}, mira.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_2:
	.string "Esto tiene pinta de llegar hasta mucho\n"
	.string "más abajo.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_3:
	.string "Nadie se tomaría tantas molestias...$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_4:
	.string "Algo gordo se está guardando aquí.\n"
	.string "¿Quizás sean los prototipos de nivel\l"
	.string "III?$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_5:
	.string "¡Bah! Sea lo que sea, lo averiguaremos.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_6:
	.string "Esas inertes estatuas jamás podrán\n"
	.string "apagar la voluntad de mis POKÉMON.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_7.1:
	.string "¡{PLAYER}, ven!$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_8:
	.string "Parece demasiado obvio, ¿no?$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_9:
	.string "Dos puertas, dos estatuas. Sea lo que\n"
	.string "sea que haya en esa sala, debe dar la\l"
	.string "clave para acceder al sótano inferior.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_10:
	.string "Allí hay una estatua.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_11:
	.string "En otro lugar, dentro de este piso, debe\n"
	.string "haber otra.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_12:
	.string "Yo me encargaré de esta, {PLAYER}.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_13:
		.string "Deja que cure a tu equipo.$"

PalletTown_Laboratorio_Secreto_S3_Andra_Texto_14:
		.string "Mantente alerta.$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 34
release
end

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_3:
	.string "'Simulador de combate avanzado IV.\n"
	.string "Nivel de dificultad: 9.'$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_4:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_5:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_6:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_8:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_9:
	.string "'Lo especial es mediocre.\n"
	.string "Lo único es normal.'$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua. Su\n"
	.string "contraseña era: 'Lo especial es\l"
	.string "mediocre. Lo único es normal.'$"

PalletTown_Laboratorio_Secreto_S3_Estatua_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Estatua_Andra_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Estatua_Andra_Texto_1:
	.string "Esta es la estatua con la que ANDRA\n"
	.string "combatió. Su contraseña era:\l"
	.string "'Lo único es normal'.$"
