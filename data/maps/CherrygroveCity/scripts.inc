CherrygroveCity_MapScripts::
	.byte 0

CherrygroveCity1::
lock     
faceplayer     
msgbox CherrygroveCity_Text_1, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_1:
.string "A pesar de que no hay nada\n"
.string "interesante a nivel mediático por\l"
.string "estas rutas, aquí vive gente muy\l"
.string "sabia de la que puedes aprender\l"
.string "mucho.$"


CherrygroveCity2::
end



CherrygroveCity3::
end


CherrygroveCity4::
lock     
faceplayer     
msgbox CherrygroveCity_Text_4, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_4:
.string "Algunos pescadores y nadadores se\n"
.string "aventuran más allá de estas aguas.\l"
.string "Es peligroso, pero las piezas que\l"
.string "puedes atrapar son mejores.$"


CherrygroveCity5::
end


CherrygroveCity6::
lock     
faceplayer     
msgbox CherrygroveCity_Text_6, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_6:
.string "Si sigues haciendo SURF, más al\n"
.string "oeste llegarás a la RUTA del sur\l"
.string "de CIUDAD MALVA, pero para ello\l"
.string "deberás de dominar las corrientes.$"


CherrygroveCity7::
lock
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1, MSGBOX_DEFAULT
release
end


CherrygroveCity8::
lock     
faceplayer     
msgbox CherrygroveCity_Text_8, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_8:
.string "¡Cuando era niño, era un\n"
.string "brillante ENTRENADOR! Éste es mi\l"
.string "consejo: ¡Atrapa muchos POKÉMON!\l"
.string "¡Y trátalos con mucho cariño!$"



CherrygroveCityDocumento_100::
msgbox CherrygroveCityDocumento_Text_100, MSGBOX_SIGN   
end

CherrygroveCityDocumento_Text_100:
.string "CIUDAD CEREZO\n"
	.string "La ciudad de las flores bonitas y\l"
	.string "flagrantes.$"

CherrygroveCity_Corriente::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Corriente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_2
waitmovement 0x0
release
end

CherrygroveCity_Corriente_Texto_1:
.string "(Las corrientes son\n"
	.string "demasiado fuertes).$"

CherrygroveCity_Corriente_Move_1:
walk_in_place_up
step_end

CherrygroveCity_Corriente_Move_2:
walk_slow_down
step_end



CherrygroveCity_Corriente_Arriba::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Corriente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_2.1
waitmovement 0x0
release
end

CherrygroveCity_Corriente_Move_2.1:
walk_slow_up
step_end

CherrygroveCity_Entrenamiento_Pegaso::
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
delay 30
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_2
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_EFFECTIVE
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_RAZOR_WIND
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TAKE_DOWN
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_WING_ATTACK
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TWISTER
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_9
applymovement 5, CherrygroveCity_Entrenamiento_Pegaso_Move_9
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_11
applymovement 5, CherrygroveCity_Entrenamiento_Pegaso_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_13
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_10 MSGBOX_DEFAULT
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_14
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_13
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
fadescreen 1
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
removeobject 7
fadescreen 0
setvar VAR_UNUSED_0x40FD, 2
release
end

CherrygroveCity_Entrenamiento_Pegaso_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_2:
walk_fast_left
walk_fast_left
walk_in_place_right
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_3:
jump_special_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_4:
jump_special_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_5:
slide_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_6:
slide_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_7:
face_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_8:
face_up
step_end


CherrygroveCity_Entrenamiento_Pegaso_Move_9:
emote_exclamation_mark
face_left
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_10:
walk_left
walk_up
walk_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_11:
walk_left
walk_down
walk_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_12:
walk_in_place_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_13:
face_right
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_14:
face_left
step_end

CherrygroveCity_Entrenamiento_Pegaso_Texto_1:
.string "PEGASO: Ve con todo MOLTRES, ese\n"
	.string "PIDGEOT está poniendo en duda tu\l"
	.string "condición de LEGENDARIO, ¡no le\l"
	.string "des cuartel!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_2:
.string "¡Trees!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_3:
.string "PEGASO: Bien...\n"
	.string "Bien aguantado, ese VENDAVAL pega\l"
	.string "cada vez más duro.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_4:
.string "¡{PLAYER}!\n"
	.string "¡Tú de nuevo!\l"
	.string "Veo que no te conformas con\l"
	.string "visitar las ciudades y lugares\l"
	.string "típicos de JOHTO, quieres\l"
	.string "impregnarte y aprender de cada\l"
	.string "rincón de esta región, eso está\l"
	.string "bien.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_5:
.string "PEGASO: Te presento a HORACE, es\n"
	.string "mi alumno más aventajado, y con\l"
	.string "diferencia he de añadir, solemos\l"
	.string "venir aquí a entrenar, este\l"
	.string "pequeño islote es perfecto para\l"
	.string "que nuestras aves puedan desplegar\l"
	.string "sus alas con total libertad.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_6:
.string "Hoy estábamos poniendo a prueba a\n"
	.string "su PIDGEOT, así es, la cuarta ave\l"
	.string "en discordia, justo detrás de\l"
	.string "ARTICUNO, ZAPDOS y MOLTRES en la\l"
	.string "jerarquía de aves de KANTO.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_7:
.string "¿Sabías que su MEGAEVOLUCIÓN\n"
	.string "alcanza los 579 puntos de BASE?, 1\l"
	.string "solo punto menos que los 580 de\l"
	.string "las AVES LEGENDARIAS.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_8:
.string "Algunos dicen que es una señal, y\n"
	.string "prueba de que las diferencias\l"
	.string "genéticas entre especies son\l"
	.string "insalvables, y nunca podrán tocar\l"
	.string "el olimpo de los LEGENDARIOS, yo\l"
	.string "creo que es pura casualidad.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_9:
.string "HORACE ha cuidado de su PIDGEOT\n"
	.string "desde que tiene uso de razón,\l"
	.string "desde que él era un crío y este\l"
	.string "imponente PIDGEOT que hoy ves no\l"
	.string "era más que un débil y fragil\l"
	.string "PIDGEY, creyó en él, todo eso no\l"
	.string "pasa desapercibido {PLAYER},\l"
	.string "después se ve reflejado en el\l"
	.string "campo de batalla.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_10:
.string "PIDGEOT: Bi bibii!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_11:
.string "El PIDGEOT de HORACE tal cual es\n"
	.string "puede competirle de tú a tú a un\l"
	.string "LEGENDARIO bien entrenado, acabas\l"
	.string "de verlo, combina toda la ofensiva\l"
	.string "y resistencia que podría tener el\l"
	.string "mejor PIDGEOT.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_12:
.string "Ya en MEGAEVOLUCIÓN es un POKÉMON\n"
	.string "de temer para cualquiera, de mi\l"
	.string "equipo solo RAPIDASH puede\l"
	.string "enfrentarlo en un 1 contra 1,\l"
	.string "HORACE ha logrado lo que el\l"
	.string "MAESTRO de TORRE BELLSPROUT logró\l"
	.string "con su pequeño BELLSPROUT, pero en\l"
	.string "un PIDGEOT.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_13:
.string "Con ello lo que quiero decirte es\n"
	.string "que aún sabemos muy poco de este\l"
	.string "mundo {PLAYER}, a pesar de todos\l"
	.string "los lugares que hayamos visto,\l"
	.string "siempre cabe lugar para\l"
	.string "sorprendernos, y todo POKÉMON\l"
	.string "tiene su lugar si de verdad crees\l"
	.string "en él.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_14:
.string "Ahora sí, me marcho de CIUDAD\n"
	.string "MALVA, y de JOHTO, un nuevo viaje\l"
	.string "me espera.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_15:
.string "HORACE estará encantado de\n"
	.string "entrenar contigo {PLAYER}, no\l"
	.string "encontrarás un ornitólogo como él\l"
	.string "ni en KANTO ni en JOHTO, seguro\l"
	.string "que algo puede enseñarte.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_16:
.string "¡MOLTRES!\n"
	.string "¡VUELO!$"


Cherrygrove_Combate_Pidgeot_Perfecto::
lock 
compare VAR_UNUSED_0x40FD, 3
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_5
compare VAR_UNUSED_0x40FD, 2
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_2
compare VAR_UNUSED_0x40FD, 1
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_3
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1 MSGBOX_DEFAULT
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_2::
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Cherrygrove_Combate_Pidgeot_Perfecto_No
goto Cherrygrove_Combate_Pidgeot_Perfecto_4


Cherrygrove_Combate_Pidgeot_Perfecto_3::
faceplayer
setvar VAR_UNUSED_0x40FD, 3
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_4 MSGBOX_AUTOCLOSE
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Cherrygrove_Combate_Pidgeot_Perfecto_No
goto Cherrygrove_Combate_Pidgeot_Perfecto_4

Cherrygrove_Combate_Pidgeot_Perfecto_4::
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 2, Cherrygrove_Combate_Pidgeot_Perfecto_Move_1
waitmovement 0x0
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PEGASO_DISCIPULO, Cherrygrove_Combate_Pidgeot_Perfecto_Texto_7
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_PIDGEOTITE
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FD, 4
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_5::
faceplayer
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2 MSGBOX_AUTOCLOSE
release
end


Cherrygrove_Combate_Pidgeot_Perfecto_No::
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_10 MSGBOX_AUTOCLOSE
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1.1:
.string "¡Obtuviste PIDGEOTITA de manos de\n"
	.string "ENTRENADOR!$"



msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1:
.string "...\n"
	.string "...$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2:
.string "Dicen que en la RUTA 13 y 14 de\n"
	.string "KANTO se reunen los ornitólogos de\l"
	.string "la región para combatir y\l"
	.string "disfrutar de sus aves, me gustaría\l"
	.string "visitar ese lugar.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_3:
.string "¿Te gustaría combatir ahora?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_4:
.string "Entonces has sido tú el único\n"
	.string "capaz de derrotar a PEGASO en un\l"
	.string "combate 6vs6.\l"
	.string "Sería todo un honor para mí tener\l"
	.string "un combate contigo.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_5:
.string "¿Me permites?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_6:
.string "No esperaba menos, mis aves están\n"
	.string "listas para emprender el vuelo.\l"
	.string "¡No te lo pondré fácil!$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_7:
.string "El ímpetu de mi PIDGEOT se apagó...$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_8:
.string "Estoy impresionado, PEGASO no\n"
	.string "exageraba contigo, quiero que\l"
	.string "tengas esto.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_9:
.string "Muy pocos conocen el verdadero\n"
	.string "poder de PIDGEOT, menos son los\l"
	.string "que tienen la herramienta para\l"
	.string "activarlo, con la PIDGEOTITA\l"
	.string "podrás, solo PEGASO y yo tenemos\l"
	.string "una en toda la región.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_10:
.string "Como quieras, yo seguiré aquí\n"
	.string "entrenando, por si cambias de\l"
	.string "parecer.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Move_1:
face_player
step_end
