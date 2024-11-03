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
	.string "'Lo especial es mediocre.\n"
	.string "Lo único es normal.'$"

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
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_3 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_4 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_5 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_6 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_7 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_8 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_9 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_10 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_11 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_12 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_13 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_14 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_15 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_16 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_17 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_18 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_19 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_20 MSGBOX_SIGN
msgbox PalletTown_Laboratorio_Secreto_S3_Documento_Jerarquias_Texto_21 MSGBOX_SIGN
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

PalletTown_Laboratorio_Secreto_S3_Dalia::
lock
setvar VAR_UNUSED_0x40F8, 35
release
end

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
	.string "'Lo especial es mediocre'.$"

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
