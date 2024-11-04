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

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Despues::
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_10 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua::
lock
compare VAR_UNUSED_0x40F8, 33
goto_if_gt PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 49, 2, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1
waitmovement 0x0
waitse
delay 10
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_721, PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_7
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_9 MSGBOX_AUTOCLOSE
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
	.string "'Lo especial es mediocre.'$"

PalletTown_Laboratorio_Secreto_S3_Segunda_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua. Su\n"
	.string "contraseña era:\l"
	.string "'Lo especial es mediocre.'$"

PalletTown_Laboratorio_Secreto_S3_Estatua_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Estatua_Andra_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Estatua_Andra_Texto_1:
	.string "Esta es la estatua con la que ANDRA\n"
	.string "combatió. Su contraseña era:\l"
	.string "'Lo único es normal'.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Zapdos::
lock
showmonpic SPECIES_ZAPDOS, 10, 3  
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Zapdos_Texto_1, MSGBOX_SIGN
hidemonpic
release
end

PalletTown_Laboratorio_Secreto_S3_Documento_Zapdos_Texto_1:
.string "ZAPDOS-Z\p"
	.string "PS: 110\n"
	.string "ATAQUE: 105\l"
	.string "DEFENSA: 80\l"
	.string "ATAQUE ESPECIAL: 185\l"
	.string "DEFENSA ESPECIAL: 130\l"
	.string "VELOCIDAD: 120\l"
	.string "TOTAL: 730\p"
	.string "TIPO: AGUA/VOLADOR\n"
	.string "HABILIDAD: INTIMIDACIÓN$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise::
lock
showmonpic SPECIES_BLASTOISE, 10, 3  
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_1, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_1.1, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_2, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_3, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_4, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_5, MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_6, MSGBOX_SIGN
hidemonpic
release
end

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_1:
.string "BLASTOISE-Z\p"
	.string "PS: 119\n"
	.string "ATAQUE: 113\l"
	.string "DEFENSA: 160\l"
	.string "ATAQUE ESPECIAL: 145\l"
	.string "DEFENSA ESPECIAL: 125\l"
	.string "VELOCIDAD: 38\l"
	.string "TOTAL: 700\p"
	.string "TIPO: AGUA/SINIESTRO\n"
	.string "HABILIDAD: MEGA-DISPARADOR$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_1.1:
	.string "Supera a la forma MEGA de BLASTOISE en\n"
	.string "todo a excepción de la VELOCIDAD.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_2:
	.string "Lleva al extremo los atributos\n"
	.string "defensivos de su coraza, ejerciendo el\l"
	.string "rol de tanque mejor incluso que\l"
	.string "NIDOGOD.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_3:
	.string "Esto se debe a dos factores: MEGA\n"
	.string "DISPARADOR y máxima prioridad a uno\l"
	.string "solo de sus cañones, siendo con ello\l"
	.string "capaz de dominar el PULSO PRIMIGENIO\l"
	.string "de KYOGRE.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_4:
	.string "Gracias al TIPO SINIESTRO, obtendrá\n"
	.string "también los beneficios de STAB + MEGA\l"
	.string "DISPARADOR con PULSO UMBRÍO.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_5:
	.string "Dadas sus características, la\n"
	.string "VELOCIDAD se vuelve irrelevante,\l"
	.string "puesto que se asume que resistirá\l"
	.string "cualquier embestida, para después\l"
	.string "causar estragos con su gran cañón.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Blastoise_Texto_6:
	.string "De haber podido, se hubiera bajado aún\n"
	.string "más si con ello sus defensas y/o pegada\l"
	.string "mejoraban.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_1 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_2 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Documento_Jerarquias_No
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_4 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_5 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_6 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_7 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_8 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Documento_Jerarquias_No
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_9 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_10 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_11 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_12 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_13 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_14 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Documento_Jerarquias_No
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_15 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_16 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_17 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_18 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_19 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_20 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_21 MSGBOX_SIGN
release
end

Documento_Jerarquias_No::
release
end

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_1:
	.string "Prototipos de nivel I, II y III.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_2:
	.string "Orden de jerarquía en función de sus\n"
	.string "STATS BASE.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_3:
	.string "¿Seguir leyendo?$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_4:
	.string "Los prototipos de nivel I abarcan un\n"
	.string "intervalo de entre 570 y 640 STATS\l"
	.string "BASE.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_5:
	.string "Creados en su mayoría con la\n"
	.string "tecnología previa a la revolución de las\l"
	.string "ondas de radio (+100 respecto al sujeto\l"
	.string "de prueba).$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_6:
	.string "Este poder coincide con el de un\n"
	.string "LEGENDARIO MENOR (570 a 600), y llega a\l"
	.string "acercarse al de un LEGENDARIO MAYOR,\l"
	.string "alcanzando el nivel de varias de las\l"
	.string "MEGAEVOLUCIONES más poderosas (600 a\l"
	.string "640).$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_7:
	.string "Atendiendo a esto, podríamos situar a\n"
	.string "SILVALLY (570) en el extremo inferior, y\l"
	.string "al dúo MAGMORTAR-Y/ELECTIVIRE-X (640)\l"
	.string "en el límite superior de estos\l"
	.string "prototipos de nivel I.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_8:
	.string "¿Seguir leyendo?$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_9:
	.string "Los prototipos de nivel II abarcan un\n"
	.string "intervalo de entre 660 y 770 STATS\l"
	.string "BASE.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_10:
	.string "Suele emplearse la nomenclatura -Z-\n"
	.string "para referirse a ellos.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_11:
	.string "Creados en su mayoría con la\n"
	.string "tecnología de ondas de radio (+150\l"
	.string "respecto al sujeto de prueba).\l"
	.string "MEWTWO (680) es la excepción.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_12:
	.string "La referencia inicial es, en este caso,\n"
	.string "KYUREM (660) como LEGENDARIO MAYOR de\l"
	.string "menor poder, siendo el límite los 770 de\l"
	.string "BASE que las formas primigenias de\l"
	.string "KYOGRE y GROUDON alcanzan.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_13:
	.string "Atendiendo a esto, PORYGON 3.1 (665)\n"
	.string "abre el extremo inferior de prototipos\l"
	.string "de nivel II, cerrándose, por el momento,\l"
	.string "con ZAPDOS-Z (730) en el superior.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_14:
	.string "¿Seguir leyendo?$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_15:
	.string "Los prototipos de nivel III abarcan un\n"
	.string "intervalo de entre 780 y 830 STATS\l"
	.string "BASE.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_16:
	.string "El derroche de poder y recursos es tal\n"
	.string "que se vuelve imposible mantener la\l"
	.string "eficiencia de niveles inferiores.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_17:
	.string "En la naturaleza, solo formas\n"
	.string "primigenias o la MEGAEVOLUCIÓN de un\l"
	.string "LEGENDARIO MAYOR como RAYQUAZA (780)\l"
	.string "sirven siquiera para abrir el extremo\l"
	.string "inferior de estos prototipos.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_18:
	.string "Las formas MEGA de MEWTWO (780) fueron\n"
	.string "los primeros prototipos de nivel III\l"
	.string "creados.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_19:
	.string "No obstante, logramos crear un\n"
	.string "prototipo no solo con mayor poder base\l"
	.string "global, sino también con un menor\l"
	.string "despilfarro de recursos que los\l"
	.string "mencionados.$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_20:
	.string "En el extremo superior, tenemos al…$"

PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_21:
	.string "¡Esta parte ha sido arrancada!$"

PalletTown_Laboratorio_Secreto_S3_Primera_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 34
goto_if_gt PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Lo especial es mediocre'.$"

PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 35, 21, 0x2E7, FALSE
setmetatile 36, 21, 0x2E6, FALSE
setmetatile 35, 22, 0x282, FALSE
setmetatile 36, 22, 0x282, FALSE
setmetatile 35, 23, 0x2E0, FALSE
setmetatile 36, 23, 0x2E1, FALSE
special DrawWholeMapView
delay 20
release
end


PalletTown_Laboratorio_Secreto_S3_Segunda_Puerta::
msgbox PalletTown_Laboratorio_Secreto_S3_Segunda_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 39, 21, 0x2E7, FALSE
setmetatile 40, 21, 0x2E6, FALSE
setmetatile 39, 22, 0x282, FALSE
setmetatile 40, 22, 0x282, FALSE
setmetatile 39, 23, 0x2E0, FALSE
setmetatile 40, 23, 0x2E1, FALSE
special DrawWholeMapView
delay 20
release
end

PalletTown_Laboratorio_Secreto_S3_Segunda_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Lo único es normal'.$"

PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 35
goto_if_gt PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'KANTO te observa'.$"

PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S3_Tercera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 18, 0x282, FALSE
setmetatile 20, 17, 0x282, FALSE
setmetatile 21, 19, 0x281, FALSE
setmetatile 21, 18, 0x281, FALSE
setmetatile 21, 17, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

PalletTown_Laboratorio_Secreto_S3_Andra_Estatua::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Andra_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Andra_Estatua_Texto_1:
	.string "Vamos… Sácame a ese GYARADOS-Z… Mi\n"
	.string "MILOTIC-& está preparada.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_2:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_3:
walk_down
walk_down
walk_down
walk_right
walk_right
walk_down
walk_down
walk_down
walk_right
walk_down
walk_down
walk_right
walk_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_4:
walk_in_place_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_down
face_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_7:
face_down
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_8:
emote_exclamation_mark
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_9:
delay_16
face_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_10:
walk_slow_right
walk_slow_right
walk_slow_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_11:
delay_16
delay_16
walk_in_place_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_12:
face_left
delay_16
delay_8
walk_in_place_left
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_13:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
face_down
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_14:
walk_slow_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_15:
delay_16
face_right
delay_16
delay_8
face_up
delay_16
delay_8
face_down
delay_16
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_16:
walk_slow_down
face_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_17:
face_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_18:
walk_in_place_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_19:
walk_slow_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_20:
delay_16
face_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_21:
walk_slow_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_22:
face_down
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_23:
walk_in_place_down
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_24:
face_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_25:
walk_in_place_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia::
lock
setflag FLAG_HOENN_285
removeobject 11
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_2
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 35, 21, 0x2E7, FALSE
setmetatile 36, 21, 0x2E6, FALSE
setmetatile 35, 22, 0x282, FALSE
setmetatile 36, 22, 0x282, FALSE
setmetatile 35, 23, 0x2E0, FALSE
setmetatile 36, 23, 0x2E1, FALSE
special DrawWholeMapView
delay 50
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_3
waitmovement 0x0
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_4
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_5
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_4 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 39, 21, 0x2E7, FALSE
setmetatile 40, 21, 0x2E6, FALSE
setmetatile 39, 22, 0x282, FALSE
setmetatile 40, 22, 0x282, FALSE
setmetatile 39, 23, 0x2E0, FALSE
setmetatile 40, 23, 0x2E1, FALSE
special DrawWholeMapView
delay 30
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_7
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PC_OFF
waitse
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_8
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_8
waitmovement 0x0
waitse
delay 25
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_9
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_10
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_11
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_12
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_8
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_13
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_12 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_14
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_15 MSGBOX_AUTOCLOSE
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_15
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_16 MSGBOX_AUTOCLOSE
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_16
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_17
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_8
waitmovement 0x0
waitse
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_18
waitmovement 0x0
setflag FLAG_HOENN_286
removeobject 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_17 MSGBOX_AUTOCLOSE
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_20
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_19
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_18 MSGBOX_AUTOCLOSE
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_21
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_22
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_23
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_21 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_24
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_22
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_25 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_19
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_26 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_25
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_15
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_29 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_17
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_30 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_23
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_31 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_32 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 25
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_26
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_34 MSGBOX_AUTOCLOSE
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_17
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_27
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_35 MSGBOX_AUTOCLOSE
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_28
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_37 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_28
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_19
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_39 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_27
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_27
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_29
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_40 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_30
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_42 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_30.1
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_28
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_28
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_22
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_43 MSGBOX_AUTOCLOSE
applymovement 10, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_44 MSGBOX_AUTOCLOSE
delay 16
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_45 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_27
applymovement 8, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_31
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_46 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_CAMERA, PalletTown_Laboratorio_Secreto_S3_Dalia_Move_32
waitmovement 0x0
setflag FLAG_HOENN_284
clearflag FLAG_HOENN_285
removeobject 8
addobject 11
setvar VAR_UNUSED_0x40F8, 35
release
end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_32:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
step_end


PalletTown_Laboratorio_Secreto_S3_Dalia_Move_31:
walk_down
walk_down
face_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_30.1:
walk_left
walk_left
walk_left
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_30:
walk_right
walk_right
walk_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_29:
walk_right
delay_16
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_28:
face_up
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_27:
delay_16
face_right
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_26:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Move_1:
walk_in_place_down
step_end

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_1:
	.string "'Lo único es normal'$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_2:
	.string "¿{PLAYER}? ¡Vamos!$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_3:
	.string "Ya estaba apunto de ir a por ti. Esta\n"
	.string "vez es tu clave la que falta.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_4:
	.string "Introdujiste la clave:\n"
	.string "'Lo especial es mediocre'.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_5:
	.string "Hmm… Ya veo.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_6:
	.string "La forma más rápida de matar algo\n"
	.string "especial es compararlo con otra cosa.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_7:
	.string "¿Lo has oído?$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_8:
	.string "Parece… que hay alguien en esta sala.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_9:
	.string "????: {PLAYER}, cuánto tiempo.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_10:
	.string "ANDRA: Así que esta es la ZONA 0.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_11:
	.string "DALIA: Oh. Es sorprendente.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_12:
	.string "Habéis llegado hasta aquí en base a un\n"
	.string "comentario, lanzado al aire hace casi 3\l"
	.string "años.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_13:
	.string "Debes de ser ANDRA.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_14:
	.string "ANDRA: ¿Qué es este lugar?$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_15:
	.string "DALIA: ¿No es evidente?\n"
	.string "El LABORATORIO de OAK.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_16:
	.string "Mi abuelo ha pasado mucho tiempo entre\n"
	.string "estas paredes.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_17:
	.string "Aquí encerrado, con sus proyectos como\n"
	.string "única compañía. Algunas veces por\l"
	.string "voluntad propia; otras por obligación,\l"
	.string "pero siempre con grandeza de ánimo.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_18:
	.string "Comenzó como un pequeño sótano,\n"
	.string "creado poco antes de la guerra.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_19:
	.string "Después sirvió como apoyo al PROYECTO\n"
	.string "MEWTWO, aquí hizo avances por cuenta\l"
	.string "propia.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_20:
	.string "Tras la victoria de LANCE, expandió el\n"
	.string "pequeño sótano, con el único propósito\l"
	.string "de restaurar el poder en KANTO.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_21:
	.string "A día de hoy, sirve al binomio\n"
	.string "KANTO-JOHTO. Desde que os reunís en\l"
	.string "TRIGAL ha sido así.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_22:
	.string "ANDRA: Entonces, GIOVANNI también\n"
	.string "sabe de su existencia.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_23:
	.string "DALIA: Por supuesto. La última\n"
	.string "expansión, de hecho, fue también\l"
	.string "financiada por él.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_24:
	.string "ANDRA: Y ahora su razón de ser son…\n"
	.string "¿las ondas de radio?$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_25:
	.string "DALIA: Efectivamente.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_26:
	.string "ANDRA: En ese caso, no te importará\n"
	.string "darnos la clave que lleva al S4.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_27:
	.string "Somos dos ADMINISTRADORES, y\n"
	.string "deberíamos estar al tanto de los\l"
	.string "últimos avances.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_28:
	.string "DALIA: Tienes razón. Pero…$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_29:
	.string "Todo lo referente a las ondas está ya\n"
	.string "en estas plantas.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_30:
	.string "Más abajo solo hay proyectos privados.\n"
	.string "Me temo que…$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_31:
	.string "…deberéis esperar a que mi abuelo\n"
	.string "regrese de PUEBLO CAOBA.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_32:
	.string "ANDRA: Hmmm…$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_33:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_34:
	.string "Bueno, si no hay más remedio.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_35:
	.string "Podemos esperar en la planta alta del\n"
	.string "LABORATORIO.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_36:
	.string "Aunque… me gustaría pedirte un favor.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_37:
	.string "DALIA: ¿El qué?$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_38:
	.string "ANDRA: Quiero un combate, y quiero que\n"
	.string "hagas uso de todos los prototipos de\l"
	.string "nivel II que tengas a tu disposición.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_39:
	.string "DALIA: Curiosa petición.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_40:
	.string "Si es lo quieres, puedo combatir con\n"
	.string "cualquiera de esos POKÉMON.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_41:
	.string "Son todos clones perfectos,\n"
	.string "optimizados con las ondas de radio.\l"
	.string "Forman parte de la colección de OAK.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_42:
	.string "ANDRA: En ese caso. Quiero que uses a\n"
	.string "GYARADOS-Z.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_43:
	.string "DALIA: Como quieras. ¿De verdad crees\n"
	.string "que puedes ganar?$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_44:
	.string "Estos POKÉMON son usados en el máximo\n"
	.string "nivel de dificultad de nuestros\l"
	.string "simuladores.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_45:
	.string "ANDRA: Lo veremos. Veremos… hasta\n"
	.string "dónde llega mi mediocridad.$"

PalletTown_Laboratorio_Secreto_S3_Dalia_Texto_46:
	.string "{PLAYER}, adelántate tú si quieres.\n"
	.string "¿De acuerdo?$"

PalletTown_Laboratorio_Secreto_S3_Jirachi::
lock
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_12 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_2:
	.string "Tranquilo, ENTRENADOR.$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_3:
	.string "Soy JIRACHI. ANDRA me ha pedido que me\n"
	.string "comunique contigo por telepatía.$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_4:
	.string "Quiere enviarte un mensaje:$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_5:
	.string "-'{PLAYER}, no me creo una sola\n"
	.string "palabra de lo que dice DALIA.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_6:
	.string "-Pero sería estúpido usar la fuerza en\n"
	.string "esta situación, tampoco podemos\l"
	.string "esperar a que venga OAK; en ambos casos\l"
	.string "corremos el riesgo de que se nos oculte\l"
	.string "la verdadera naturaleza de este lugar.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_7:
	.string "-La razón por la que no he insistido es\n"
	.string "porque creo haber visto la clave, en ese\l"
	.string "documento que tanta prisa tenía por\l"
	.string "ocultar.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_8:
	.string "-'KANTO te observa' debería abrir la\n"
	.string "puerta que lleva al S4.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_9:
	.string "-Tú seguirás abriéndote paso por el\n"
	.string "laboratorio, mientras yo lidio con\l"
	.string "DALIA.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_10:
	.string "-Cuando acabe el combate, usaré\n"
	.string "HIPNOSIS sobre ella, y te alcanzaré.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_11:
	.string "-A partir de ese momento… será una\n"
	.string "contrarreloj por llegar al fondo de\l"
	.string "esto.-$"

PalletTown_Laboratorio_Secreto_S3_Jirachi_Texto_12:
	.string "-Suerte, {PLAYER}. Y recuerda:\n"
	.string "'KANTO te observa'.-$"

