PalletTown_Laboratorio_Secreto_S5_MapScripts::
	.byte 0

PalletTown_Laboratorio_Secreto_S5_Puerta::
lock
delay 10
compare VAR_UNUSED_0x40F8, 40
goto_if_gt PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Viva la nueva KANTO'.$"

PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 36, 6, 0x282, FALSE
setmetatile 36, 5, 0x282, FALSE
special DrawWholeMapView
delay 20
release
end

Laboratorio_Secreto_S5_Sagrado_Move_1:
walk_in_place_up
step_end

Laboratorio_Secreto_S5_Sagrado_Move_2:
face_left
step_end

Laboratorio_Secreto_S5_Sagrado_Move_3:
walk_in_place_left
step_end

Laboratorio_Secreto_S5_Sagrado_Move_4:
face_right
step_end

Laboratorio_Secreto_S5_Sagrado_Move_5:
delay_16
face_right
step_end

Laboratorio_Secreto_S5_Sagrado_Move_6:
walk_right
walk_right
step_end

Laboratorio_Secreto_S5_Sagrado_Move_7:
delay_16
face_down
delay_16
step_end

Laboratorio_Secreto_S5_Sagrado_Move_8:
emote_exclamation_mark
step_end

Laboratorio_Secreto_S5_Sagrado_Move_9:
walk_slow_down
step_end

PalletTown_Laboratorio_Secreto_S5_Sagrado::
lock
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Sagrado_Move_1
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Sagrado_Move_5
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_8
waitmovement 0x0
waitse
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_9
waitmovement 0x0
delay 15
removeobject 4
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_10
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Laboratorio_Secreto_S5_Sagrado_Move_11
waitmovement 0x0
delay 15
setflag FLAG_HOENN_290
setflag FLAG_HOENN_288
removeobject 2
setvar VAR_UNUSED_0x40B8, 1
setvar VAR_UNUSED_0x40F8, 39
release
end

Laboratorio_Secreto_S5_Sagrado_Move_11:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Laboratorio_Secreto_S5_Sagrado_Move_10:
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
face_left
step_end

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_1:
	.string "Se nos agota el tiempo, {PLAYER}.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_2:
	.string "Usé HIPNOSIS sobre DALIA para que no\n"
	.string "diera la alarma.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_3:
	.string "Pero EUSINE y BILL avisarán al resto.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_4:
	.string "Ahora sí que no hay vuelta atrás.\n"
	.string "Si OAK esconde algo, lo averiguaremos.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_5:
	.string "Y en caso de no ser así, todo quedará en\n"
	.string "un simple malentendido. La cuestión es…$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_6:
	.string "Que mi corazonada resultó ser real;\n"
	.string "ahora solo queda ver la magnitud del\l"
	.string "misterio.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_8:
	.string "Una… PIEDRA SAGRADA.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_9:
	.string "Puede que debamos cambiarle el nombre,\n"
	.string "poco de sagrado queda ya en ella;\l"
	.string "estando aquí, en este lugar, y de esta\l"
	.string "forma.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_10:
	.string "Deben haberlas combinado con las ondas\n"
	.string "de radio, a saber qué clase de\l"
	.string "experimentos se habrán hecho aquí…$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_11:
	.string "BILL dijo que esta era la última zona\n"
	.string "a la que ellos tenían acceso, no\l"
	.string "quiero imaginarme lo que hay más abajo.$"

PalletTown_Laboratorio_Secreto_S5_Sagrado_Texto_12:
	.string "Sea lo que sea que impida el\n"
	.string "acceso, lo derribaremos.$"

Laboratorio_Secreto_S5_Andra_Move_1:
walk_in_place_up
step_end

Laboratorio_Secreto_S5_Andra_Move_2:
face_right
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
step_end

Laboratorio_Secreto_S5_Andra_Move_3:
face_down
step_end

Laboratorio_Secreto_S5_Andra_Move_4:
face_right
step_end

Laboratorio_Secreto_S5_Andra_Move_5:
delay_16
face_up
delay_16
delay_8
face_down
delay_16
step_end

Laboratorio_Secreto_S5_Andra_Move_6:
walk_in_place_right
step_end

Laboratorio_Secreto_S5_Andra_Move_7:
walk_in_place_down
step_end

Laboratorio_Secreto_S5_Andra_Move_8:
face_up
step_end

PalletTown_Laboratorio_Secreto_S5_Andra::
lock
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Andra_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_2
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_9
waitmovement 0x0
delay 15
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S5_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, Laboratorio_Secreto_S5_Andra_Move_10
waitmovement 0x0
setflag FLAG_HOENN_289
clearflag FLAG_HOENN_290
removeobject 3
addobject 5
setvar VAR_UNUSED_0x40F8, 40
release
end

Laboratorio_Secreto_S5_Andra_Move_10:
walk_up
walk_right
walk_right
face_up
step_end

Laboratorio_Secreto_S5_Andra_Move_9:
face_down
walk_slow_down
delay_16
delay_8
walk_in_place_down
delay_16
step_end


PalletTown_Laboratorio_Secreto_S5_Andra_Texto_1:
	.string "Ahora entiendo mejor a BILL: estas\n"
	.string "estatuas te obligan a disputar un\l"
	.string "combate doble.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_2:
	.string "Parece la última prueba.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_3:
	.string "Parece la última prueba.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_4:
	.string "Si es cierto que usan prototipos de\n"
	.string "nivel III, tendremos que dar el 100%.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_5:
	.string "Aún recuerdo ese MEWTWO blindado,\n"
	.string "cuando MIGUEL se volvió loco en la\l"
	.string "TORRE RADIO LAVANDA.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_6:
	.string "Verlo en acción me trajo reminiscencias\n"
	.string "de la LIGA POKÉMON, cuando LANCE usó\l"
	.string "todo su poder.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_7:
	.string "Eras tú el que luchó en TORRE RADIO,\n"
	.string "pero yo sentí una impotencia similar a\l"
	.string "la de aquel día, con los dragones de\l"
	.string "LANCE a las puertas del HALL de la FAMA.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_8:
	.string "En realidad, la experiencia de\n"
	.string "MEWTWO fue aún peor.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_9:
	.string "En la LIGA POKÉMON sabía que aún podía\n"
	.string "mejorar, quedaban muchos lugares a los\l"
	.string "que ir y nuevas aventuras de las que\l"
	.string "poder enriquecerse.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_10:
	.string "Y vaya que si había margen.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_11:
	.string "¿Quién iba a imaginar, en aquellos días\n"
	.string "ya tan lejanos, todo lo que aún nos\l"
	.string "deparaba?$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_12:
	.string "En TORRE RADIO… fue diferente.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_13:
	.string "Esta vez en mi intuición latía una\n"
	.string "incómoda verdad: el límite estaba ahí,\l"
	.string "ya podía verlo, y era insuficiente para\l"
	.string "hacer frente a tal POKÉMON.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_14:
	.string "Si me mantenía en la misma línea, ese\n"
	.string "iba a ser mi destino.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_15:
	.string "Por ello abandoné todo y emprendí este\n"
	.string "viaje, para rebelarme contra mi propio\l"
	.string "destino.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_16:
	.string "Ahora… llegó el momento de\n"
	.string "comprobar si lo logré o no.$"

PalletTown_Laboratorio_Secreto_S5_Andra_Texto_17:
	.string "Veámoslo.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Despues::
setflag FLAG_HOENN_656
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_20 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S5_Estatua::
lock
compare VAR_UNUSED_0x40F8, 40
goto_if_gt PalletTown_Laboratorio_Secreto_S5_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 34, 6, 0
dofieldeffectsparkle 38, 6, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_7 MSGBOX_AUTOCLOSE
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
waitmoncry
choose_mons
multi_2_vs_2 1583, PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_8, 1584, PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_8, 1587, 6
switch VAR_RESULT
case 1, PalletTown_Laboratorio_Secreto_S5_Estatua_Ganado
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate
release
end

PalletTown_Laboratorio_Secreto_S5_Estatua_Ganado::
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Andra_Estatua_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Andra_Estatua_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_16 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_8
waitmovement 0x0
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S5_Andra_Estatua_Move_10
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_9
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_19 MSGBOX_AUTOCLOSE
delay 15
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 36, 6, 0x282, FALSE
setmetatile 36, 5, 0x282, FALSE
special DrawWholeMapView
delay 20
msgbox PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_19.1 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_Secreto_S5_Andra_Estatua_Move_11
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_656
setflag FLAG_HOENN_290
removeobject 5
waitse
setvar VAR_UNUSED_0x40F8, 41
release
end

Laboratorio_Secreto_S5_Andra_Estatua_Move_11:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
walk_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_10:
delay_8
face_up
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_9:
walk_slow_up
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_8:
walk_slow_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_7:
delay_16
face_up
delay_16
delay_8
face_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_6:
walk_in_place_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_5:
face_up
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_3:
walk_right
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_4:
delay_8
walk_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_2:
face_left
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Move_1:
face_right
step_end

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_3:
	.string "'Simulador de combate avanzado VII.\n"
	.string "Nivel de dificultad: Imposible.'$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_4:
	.string "Viene con una advertencia: La línea\n"
	.string "entre algo difícil y algo imposible\l"
	.string "puede ser muy delgada, aquellos\l"
	.string "incautos que crean poder cruzarla\l"
	.string "recibirán su castigo.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_5:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_6:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_7:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_8:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_9:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_10:
	.string "'Ahora eres KANTO'$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_11:
	.string "ANDRA: Estas contraseñas…\n"
	.string "Típicas de OAK.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_12:
	.string "Cree que puede reírse de todos, y ahora\n"
	.string "tendrá que cambiarlas todas.\l"
	.string "Le está bien empleado.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_13:
	.string "Por lo que veo, las MEGAS de MEWTWO son\n"
	.string "consideradas prototipos de nivel III.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_14:
	.string "Admito que son muy poderosas, pero…\n"
	.string "¿dirías que más que lo de CÁMARA\l"
	.string "SELLADA, o RUINAS ALFA?$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_15:
	.string "Ese REGIGIGAS-P estaba hecho de otra\n"
	.string "pasta.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_16:
	.string "Ahora veo con otros ojos a ese MEWTWO\n"
	.string "de la TORRE RADIO.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_17:
	.string "Pero… esto no acaba aquí. ¿Dispondrá el\n"
	.string "TEAM ROCKET de aún más recursos que\l"
	.string "desconocemos?$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_18:
	.string "Mmm…$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_19:
	.string "Puede que ya sea imposible alterar el\n"
	.string "destino de lo que sea que haya ahí\l"
	.string "abajo, pero…$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_19.1:
	.string "Quizás aún podamos salir\n"
	.string "a su encuentro.$"

PalletTown_Laboratorio_Secreto_S5_Estatua_Texto_20:
	.string "Ya peleaste con esta estatua. Su\n"
	.string "contraseña era: 'Ahora eres KANTO'.$"

Laboratorio_Secreto_S5_Andra_Estatua::
lock
faceplayer
msgbox Laboratorio_Secreto_S5_Andra_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Laboratorio_Secreto_S5_Andra_Estatua_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_Secreto_S5_Andra_Est_Move_1
waitmovement 0x0
release
end

Laboratorio_Secreto_S5_Andra_Est_Move_1:
face_up
step_end

Laboratorio_Secreto_S5_Andra_Estatua_Texto_1:
	.string "Estoy preparada, {PLAYER}.$"

Laboratorio_Secreto_S5_Andra_Estatua_Texto_2:
	.string "Cuando tú pulses el botón que da inicio\n"
	.string "al combate, yo también lo haré.$"
