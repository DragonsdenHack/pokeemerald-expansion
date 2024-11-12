PalletTown_Laboratorio_Secreto_S6_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_Laboratorio_Secreto_S6_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S6_OnFrame
	.byte 0

PalletTown_Laboratorio_Secreto_S6_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 51, PalletTown_Laboratorio_Secreto_S6_Gray
	.2byte 0

PalletTown_Laboratorio_Secreto_S6_Gray::
call Script_RemoveTint
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Gray_Move_1
setvar VAR_UNUSED_0x40F8, 52
end

PalletTown_Laboratorio_Secreto_S6_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 52, PalletTown_Laboratorio_Secreto_S6_Despues
	.2byte 0

Laboratorio_Secreto_S6_Gray_Move_1:
face_up
step_end

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda::
lock
faceplayer
compare VAR_UNUSED_0x40F8, 42
goto_if_gt PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Despues_Llave
compare VAR_UNUSED_0x40F8, 41
goto_if_gt PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Despues
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_1 MSGBOX_NPC
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_2 MSGBOX_NPC
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_3 MSGBOX_NPC
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_4 MSGBOX_NPC
setvar VAR_UNUSED_0x40F8, 42
release
end

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Despues::
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_8 MSGBOX_NPC
release
end


PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Despues_Llave::
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_5 MSGBOX_NPC
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_6 MSGBOX_NPC
applymovement 8, Busqueda_Despues_Llave_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_7 MSGBOX_NPC
setflag FLAG_HOENN_293
clearflag FLAG_HOENN_656
fadescreen 1
delay 10
removeobject 8
delay 10
fadescreen 0
setvar VAR_UNUSED_0x40F8, 44
release
end

Busqueda_Despues_Llave_Move_1:
delay_8
walk_in_place_right
step_end

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_1:
	.string "Este lugar parece… el núcleo de las\n"
	.string "ondas de radio.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_2:
	.string "Me da muy mala espina.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_3:
	.string "Hay dos zonas aún bloqueadas: la norte\n"
	.string "y una pequeña sala al este. Debe haber\l"
	.string "alguna llave por este lugar.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_4:
	.string "Si la encuentras, avísame.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_5:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_6:
	.string "Bien. Debe ser la llave\n"
	.string "que abre la sala este.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_7:
	.string "Ahí debe estar la otra. Te espero allí.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Busqueda_Texto_8:
	.string "Si encuentras la LLAVE\n"
	.string "avísame, {PLAYER}.$"

PalletTown_Laboratorio_Secreto_S6_Primera_Llave::
lock
delay 10
msgbox PalletTown_Laboratorio_Secreto_S6_Primera_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HOENN_242
removeobject 5
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
msgbox PalletTown_Laboratorio_Secreto_S6_Primera_Llave_Texto_2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 43
release
end

PalletTown_Laboratorio_Secreto_S6_Primera_Llave_Texto_1:
	.string "Es una de las llaves de este sótano.$"

PalletTown_Laboratorio_Secreto_S6_Primera_Llave_Texto_2:
	.string "Ahora debería buscar a ANDRA.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Este::
lock
faceplayer
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Este_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, PalletTown_Laboratorio_Secreto_S6_Andra_Este_Move_1
waitmovement 0x0
release
end

PalletTown_Laboratorio_Secreto_S6_Andra_Este_Texto_1:
	.string "Estamos muy cerca…$"

PalletTown_Laboratorio_Secreto_S6_Andra_Este_Move_1:
face_left
step_end

PalletTown_Laboratorio_Secreto_S6_Bloqueo_Move_1:
walk_in_place_up
step_end

PalletTown_Laboratorio_Secreto_S6_Bloqueo_Move_2:
walk_slow_down
step_end

PalletTown_Laboratorio_Secreto_S6_Bloqueo::
lock
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S6_Bloqueo_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S6_Bloqueo_Move_2
waitmovement 0x0
release
end

PalletTown_Laboratorio_Secreto_S6_Bloqueo_Texto_1:
	.string "Debería avisar a ANDRA antes de seguir.$"

PalletTown_Laboratorio_Secreto_S6_Primera_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 43
goto_if_gt PalletTown_Laboratorio_Secreto_S6_Primera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S6_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S6_Primera_Puerta_Texto_1:
	.string "Se requiere de una LLAVE.$"

PalletTown_Laboratorio_Secreto_S6_Primera_Puerta_Despues::
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 25, 68, 0x282, FALSE
setmetatile 25, 67, 0x282, FALSE
special DrawWholeMapView
delay 20
release
end

PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate::
lock
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_4 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_2:
	.string "Este documento está bastante\n"
	.string "desgastado, pero aún se aprecian lo que\l"
	.string "parecen ser los datos de un POKÉMON.$"

PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_3:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S6_Documento_Ultimate_Texto_4:
.string "U..I....E  P....CT\p"
	.string "PS: 126\n"
	.string "ATAQUE: 90\l"
	.string "DEFENSA: 154\l"
	.string "ATAQUE ESPECIAL: 216\l"
	.string "DEFENSA ESPECIAL: 154\l"
	.string "VELOCIDAD: 90\l"
	.string "TOTAL: 830\p"
	.string "TIPO: PSÍQUICO/ACERO\n"
	.string "HABILIDAD: - - - - - $"

Laboratorio_Secreto_S6_Andra_Documento_Move_1:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_2:
walk_left
walk_up
walk_up
walk_up
walk_left
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_3:
delay_16
face_right
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_4:
walk_up
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_5:
walk_right
walk_right
walk_right
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_6:
emote_exclamation_mark
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_7:
face_left
delay_16
delay_8
face_up
delay_16
step_end

PalletTown_Laboratorio_Secreto_S6_Andra_Documento::
lock
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Andra_Documento_Move_1
waitmovement 0x0
delay 15
setflag FLAG_HOENN_292
removeobject 7
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Andra_Documento_Move_3
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_4
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Andra_Documento_Move_5
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_13 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_14 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Andra_Documento_Move_6
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_6
waitmovement 0x0
waitse
delay 10
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_7
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_16 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_17 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_20 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_7
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_9
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_25 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_9
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_26 MSGBOX_AUTOCLOSE
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_11
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Andra_Documento_Move_10
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_27 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_12
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_13
waitmovement 0x0
setflag FLAG_HOENN_656
removeobject 9
setvar VAR_UNUSED_0x40F8, 45
release
end

Laboratorio_Secreto_S6_Andra_Documento_Move_13:
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_12:
walk_in_place_down
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_10:
delay_16
delay_8
face_down
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_11:
delay_8
face_down
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_8:
face_left
step_end

Laboratorio_Secreto_S6_Andra_Documento_Move_9:
walk_in_place_left
step_end

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_1:
	.string "ANDRA: ¿Esa es la otra llave? Perfecto.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_2:
	.string "Y esto, ¿qué es?$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_3:
	.string "'PROTOTIPOS DE NIVEL III VS\n"
	.string "LOS 3 GRANDES CREADORES'$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_4:
	.string "Parece interesante…\n"
	.string "Lo leeré en voz alta.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_5:
	.string "Las leyes que rigen este universo\n"
	.string "impiden superar el poder global de\l"
	.string "ARCEUS-P, MISSINGNO y el DRAGÓN-O.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_6:
	.string "Pero hablamos en términos absolutos,\n"
	.string "¿sería posible crear un POKÉMON cuya\l"
	.string "particular combinación le dotara de un\l"
	.string "reparto de stats más eficiente?$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_7:
	.string "Un POKÉMON cuyo total de 'stats útiles',\n"
	.string "fuera mayor al de los 3 GRANDES\l"
	.string "CREADORES, podría considerarse una\l"
	.string "paradoja, un 'glitch'.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_8:
	.string "¿Sería viable? ¿Es posible engañar a la\n"
	.string "naturaleza?$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_9:
	.string "Los primeros prototipos de nivel III\n"
	.string "demostraron todo lo contrario.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_10:
	.string "780 STATS BASE ya provocaban un\n"
	.string "inevitable derroche de poder y recursos\l"
	.string "en las MEGAS de MEWTWO.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_11:
	.string "Un total monstruoso, pero aún lejos del\n"
	.string "rango entre 895-905 en el que se mueve\l"
	.string "el límite absoluto.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_12:
	.string "Existen muchas combinaciones que\n"
	.string "pueden dar lugar a POKÉMON singulares y\l"
	.string "poderosos: LEGENDARIO + MEGA, PKMN +\l"
	.string "PIEDRA ROCKET, PSEUDO + MEGA, PKMN +\l"
	.string "ONDAS RADIO, PSEUDO + FUERTE VÍNCULO…$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_13:
	.string "De todas ellas, la más extrema es la de:\n"
	.string "LEGENDARIO MAYOR + ONDAS DE RADIO.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_14:
	.string "A efectos prácticos, sería como decir:\n"
	.string "680 + 150 STATS BASE.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15:
	.string "A simple vista, tal combinación\n"
	.string "parecería una quimera, pero… contamos\l"
	.string "con un prototipo base que cumple estos\l"
	.string "requisitos.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15.1:
	.string "ANDRA: Continúo.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_16:
	.string "No solo logramos un total de 830, sino\n"
	.string "que, gracias a exprimir al máximo las\l"
	.string "combinaciones de ondas, fueron\l"
	.string "tremendamente eficientes.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_17:
	.string "El resultado fue el prototipo de nivel\n"
	.string "III más poderoso, y un ser que rivaliza,\l"
	.string "o incluso supera en 'stats útiles' a los\l"
	.string "tres grandes creadores.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_18:
	.string "Debido al consenso de todos los\n"
	.string "científicos, que lo calificaron como el\l"
	.string "límite absoluto alcanzable por la\l"
	.string "ciencia, bautizamos a este POKÉMON\l"
	.string "como 'ULTIMATE PROJECT'.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_19:
	.string "ANDRA: … …$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_20:
	.string "Entonces, ¿era este el misterio?$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_21:
	.string "'ULTIMATE PROJECT'. Suena a arma bélica.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_22:
	.string "El MEWTWO original parece\n"
	.string "una broma al lado.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_23:
	.string "Al fin y al cabo, esto fue lo que OAK y\n"
	.string "GIOVANNI persiguieron durante la\l"
	.string "guerra. Ahora lo han logrado y con\l"
	.string "creces.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_24:
	.string "Tiene sentido que guarden tal\n"
	.string "información aquí.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_25:
	.string "Es un POKÉMON demasiado poderoso, que\n"
	.string "solo debería emplearse en caso de\l"
	.string "necesidad.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_26:
	.string "Aún así, tú ya derrotaste al POKÉMON\n"
	.string "ESENCIA, ¡ese ULTIMATE PROJECT no\l"
	.string "puede ser más que el todo del que forma\l"
	.string "parte!$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_27:
	.string "Ahora… nos queda lo que parece la\n"
	.string "última zona.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_28:
	.string "Nos vemos allí. Después de lo que hemos\n"
	.string "visto, ya no sé qué más esperar.$"

Laboratorio_Secreto_S6_Documento::
lock
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_13 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_14 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_16 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_17 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_18 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S6_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 44
goto_if_gt PalletTown_Laboratorio_Secreto_S6_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S6_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S6_Puerta_Texto_1:
	.string "Se requiere una LLAVE.$"

PalletTown_Laboratorio_Secreto_S6_Puerta_Despues::
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 15, 65, 0x282, FALSE
setmetatile 15, 64, 0x282, FALSE
setmetatile 16, 64, 0x281, FALSE
setmetatile 16, 65, 0x281, FALSE
setmetatile 16, 66, 0x281, FALSE
setmetatile 17, 64, 0x281, FALSE
setmetatile 17, 65, 0x281, FALSE
setmetatile 17, 66, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
step_end

PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_2:
delay_16
delay_16
face_down
delay_16
delay_16
face_left
delay_16
delay_16
face_up
step_end

PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_3:
face_left
delay_16
delay_8
face_up
delay_16
delay_8
walk_in_place_up
delay_16
delay_8
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end


PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta::
lock
clearflag FLAG_HOENN_288
addobject 10
applymovement 10, PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_1
waitmovement 0x0
delay 35
playse SE_CLICK
delay 60
playse SE_UNLOCK
setmetatile 15, 65, 0x282, FALSE
setmetatile 15, 64, 0x282, FALSE
setmetatile 16, 64, 0x281, FALSE
setmetatile 16, 65, 0x281, FALSE
setmetatile 16, 66, 0x281, FALSE
setmetatile 17, 64, 0x281, FALSE
setmetatile 17, 65, 0x281, FALSE
setmetatile 17, 66, 0x281, FALSE
special DrawWholeMapView
delay 40
applymovement 10, PalletTown_Laboratorio_Secreto_S6_Ultima_Puerta_Move_3
waitmovement 0x0
setflag FLAG_HOENN_288
removeobject 10
setvar VAR_UNUSED_0x40F8, 46
release
end

Laboratorio_S6_Final_Move_1:
walk_in_place_up
step_end

Laboratorio_S6_Final_Move_2:
walk_slow_up
walk_slow_up
step_end

Laboratorio_S6_Final_Move_3:
delay_8
walk_slow_up
walk_slow_up
step_end

Laboratorio_S6_Final_Move_4:
delay_8
walk_slow_up
walk_slow_up
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
step_end

Laboratorio_S6_Final_Move_5:
walk_in_place_up
step_end

Laboratorio_S6_Final_Move_6:
lock_facing_direction
walk_slow_down
walk_slow_down
unlock_facing_direction
step_end

PalletTown_Laboratorio_S6_Final::
lock
setflag FLAG_HOENN_286
setflag FLAG_HOENN_285
setflag FLAG_HOENN_242
setflag FLAG_HOENN_227
setflag FLAG_HOENN_226
clearflag FLAG_HOENN_655
clearflag FLAG_HOENN_654
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Final_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Final_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Final_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Final_Move_4
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Laboratorio_S6_Final_Move_5
waitmovement 0x0
playse SE_SELECT
waitse
delay 30
playse SE_WIN_OPEN
waitse
delay 35
playse SE_PC_LOGIN
waitse
delay 30
playse SE_PC_ON
setmetatile 14, 1, 0x061, FALSE
special DrawWholeMapView
delay 40
applymovement 3, Laboratorio_S6_Final_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F8, 47
warpsilent MAP_PALLET_TOWN_LABORATORIO_SECRETO_S1, 47, 7
delay 100

PalletTown_Laboratorio_S6_Final_Texto_1:
	.string "Una… ¿tele?$"

PalletTown_Laboratorio_S6_Final_Texto_2:
	.string "… …$"

PalletTown_Laboratorio_S6_Final_Texto_3:
	.string "Hay un disco, puede conectarse\n"
	.string "con la tele.$"

PalletTown_Laboratorio_S6_Final_Texto_4:
	.string "Pone: MEMORIAS DE OAK.$"

PalletTown_Laboratorio_S6_Final_Texto_5:
	.string "… …$"

PalletTown_Laboratorio_S6_Final_Texto_6:
	.string "-10 de Septiembre de 1993-$"

PalletTown_Laboratorio_S6_Final_Texto_7:
	.string "Ya no podemos contar con MEWTWO, y el\n"
	.string "poder de LANCE excede todo lo que\l"
	.string "conocemos.$"

PalletTown_Laboratorio_S6_Final_Texto_8:
	.string "Nuestros clásicos equipos de KANTO\n"
	.string "nada pueden hacer contra él.$"

PalletTown_Laboratorio_S6_Final_Texto_9:
	.string "Ahora estamos sometidos\n"
	.string "a su voluntad.$"

PalletTown_Laboratorio_S6_Final_Texto_10:
	.string "Una vez has alcanzado la cima, visto\n"
	.string "todo y probado las mieles del éxito, se\l"
	.string "hace difícil asumir que nada volverá a\l"
	.string "ser igual.$"

PalletTown_Laboratorio_S6_Final_Texto_11:
	.string "A pesar de esta aplastante realidad… me\n"
	.string "niego a pensar que este es el fin.$"

PalletTown_Laboratorio_S6_Final_Texto_12:
	.string "Si yo no puedo salvar KANTO, nadie lo\n"
	.string "hará. Al menos no dentro del sistema.$"

PalletTown_Laboratorio_S6_Final_Texto_13:
	.string "Pero, como antiguo CAMPEÓN, soy una\n"
	.string "amenaza para LANCE.$"

PalletTown_Laboratorio_S6_Final_Texto_14:
	.string "Si quiero tener una oportunidad, debo\n"
	.string "renunciar a mi faceta de ENTRENADOR, y\l"
	.string "ponerme a su total servicio.$"

PalletTown_Laboratorio_S6_Final_Texto_15:
	.string "Solo así podrá confiar en mí.$"

PalletTown_Laboratorio_S6_Final_Texto_16:
	.string "15 de Octubre de 1993.$"

PalletTown_Laboratorio_S6_Final_Texto_17:
	.string "Gracias a liberar todos mis POKÉMON, y\n"
	.string "ofrecerme como investigador para el\l"
	.string "nuevo gobierno, pude salvar este\l"
	.string "laboratorio… y con ello el último hilo\l"
	.string "de esperanza del que pende la región.$"

PalletTown_Laboratorio_S6_Final_Texto_18:
	.string "En esta situación, me es imposible\n"
	.string "recuperar KANTO por la fuerza bruta,\l"
	.string "tal y como intentamos con MEWTWO.$"

PalletTown_Laboratorio_S6_Final_Texto_19:
	.string "Requiero de algo revolucionario, que\n"
	.string "rompa con todos los paradigmas conocidos.$"

PalletTown_Laboratorio_S6_Final_Texto_20:
	.string "1 de Diciembre de 1993$"

PalletTown_Laboratorio_S6_Final_Texto_21:
	.string "La ingeniería genética podría\n"
	.string "ser esa revolución.$"

PalletTown_Laboratorio_S6_Final_Texto_22:
	.string "Aplicada a los POKÉMON, fue como\n"
	.string "logramos crear a MEWTWO.$"

PalletTown_Laboratorio_S6_Final_Texto_23:
	.string "Pero…$"

PalletTown_Laboratorio_S6_Final_Texto_24:
	.string "¿Aplicada a los humanos? ¿Qué clase\n"
	.string "de potencial podría desbloquear?$"

PalletTown_Laboratorio_S6_Final_Texto_25:
	.string "Solemos prestar atención al poder\n"
	.string "bruto de un POKÉMON, algo\l"
	.string "absolutamente tangible, pero…$"

PalletTown_Laboratorio_S6_Final_Texto_26:
	.string "…en un combate, el valor de un POKÉMON\n"
	.string "está sujeto, en relación proporcional,\l"
	.string "al del ENTRENADOR que lo comande.$"

PalletTown_Laboratorio_S6_Final_Texto_27:
	.string "Bajo esta premisa nació el\n"
	.string "-PROYECTO ROJO-.$"

PalletTown_Laboratorio_S6_Final_Texto_28:
	.string "18 de Enero de 1994$"

PalletTown_Laboratorio_S6_Final_Texto_29:
	.string "DITTO fue una muestra de la\n"
	.string "maleabilidad en los genes de MEW, capaz\l"
	.string "de transformarse en el POKÉMON\l"
	.string "más poderoso…$"

PalletTown_Laboratorio_S6_Final_Texto_30:
	.string "…pero también de convertirse en el\n"
	.string "ENTRENADOR más hábil.$"

PalletTown_Laboratorio_S6_Final_Texto_31:
	.string "Por ello, el -PROYECTO ROJO- basará\n"
	.string "también sus pilares en el ADN de MEW.$"

PalletTown_Laboratorio_S6_Final_Texto_32:
	.string "En cuanto al aporte humano, es capital\n"
	.string "que mi propio ADN forme parte del\l"
	.string "androide que resulte de esta\l"
	.string "combinación.$"

PalletTown_Laboratorio_S6_Final_Texto_33:
	.string "Solo así podrá erigirse mi persona como\n"
	.string "una autoridad incuestionable. Esto\l"
	.string "será inherente a su propia existencia,\l"
	.string "de tal modo que mi propósito y el\l"
	.string "suyo estarán ligados.$"

PalletTown_Laboratorio_S6_Final_Texto_34:
	.string "Es en los genes de MEW donde\n"
	.string "residirá la clave de su éxito\l"
	.string "como ENTRENADOR.$"

PalletTown_Laboratorio_S6_Final_Texto_35:
	.string "Como ancestro de todos los POKÉMON, su\n"
	.string "código genético le dota de información\l"
	.string "elemental sobre todos ellos, de la que\l"
	.string "podrá sacar partido dentro de un\l"
	.string "combate…$"

PalletTown_Laboratorio_S6_Final_Texto_36:
	.string "…también podrá tomar las mejores\n"
	.string "decisiones en base a ellas, sin estar\l"
	.string "sujeto a las limitaciones\l"
	.string "convencionales de cualquier\l"
	.string "ENTRENADOR humano.$"

PalletTown_Laboratorio_S6_Final_Texto_37:
	.string "Vería, en definitiva, el combate desde\n"
	.string "una dimensión superior a la nuestra.\l"
	.string "Como si perteneciera a una capa\l"
	.string "superior de la realidad.$"

PalletTown_Laboratorio_S6_Final_Texto_38:
	.string "De este modo, y paradójicamente,\n"
	.string "elevaría la -voluntad- a su máxima\l"
	.string "expresión.$"

PalletTown_Laboratorio_S6_Final_Texto_39:
	.string "Un término manoseado por los antiguos,\n"
	.string "que aplicado al combate hacía\l"
	.string "referencia a todo lo que un ENTRENADOR\l"
	.string "podía controlar dentro del mismo.$"

PalletTown_Laboratorio_S6_Final_Texto_40:
	.string "Lo que ninguno podría imaginar, es que\n"
	.string "aquel capaz de llevar al límite el\l"
	.string "significado original del término, fuera\l"
	.string "también alguien que careciera de ella.$"

PalletTown_Laboratorio_S6_Final_Texto_41:
	.string "Ahora que todos los aspectos técnicos\n"
	.string "están solventados, solo necesito\l"
	.string "tiempo y este laboratorio para dar vida\l"
	.string "al -PROYECTO ROJO-.$"

PalletTown_Laboratorio_S6_Final_Texto_42:
	.string "7 de Febrero de 1994$"

PalletTown_Laboratorio_S6_Final_Texto_43:
	.string "1 año después del nacimiento de\n"
	.string "MEWTWO, el mismo día, nace ROJO.$"

PalletTown_Laboratorio_S6_Final_Texto_44:
	.string "Directamente con 8 años biológicos, he\n"
	.string "dispuesto todos los trámites\l"
	.string "burocráticos para su integración\l"
	.string "inmediata en la sociedad.$"

PalletTown_Laboratorio_S6_Final_Texto_45:
	.string "Otra androide, de mucha menor\n"
	.string "complejidad y costo, ejercerá el rol de\l"
	.string "madre. Por seguridad, está programada\l"
	.string "para ser una vecina agradable, pero que\l"
	.string "en lo referente a ROJO no responderá\l"
	.string "más de lo estrictamente necesario.$"

PalletTown_Laboratorio_S6_Final_Texto_46:
	.string "Nadie, ni DALIA, ni BLAINE, debe saber la\n"
	.string "verdad. Eso es esencial.$"

PalletTown_Laboratorio_S6_Final_Texto_47:
	.string "Ambos serán presentados como víctimas\n"
	.string "de la guerra, incluso para mi propia\l"
	.string "familia.$"

PalletTown_Laboratorio_S6_Final_Texto_48:
	.string "21 de enero de 1995$"

PalletTown_Laboratorio_S6_Final_Texto_49:
	.string "Tras varios meses, he logrado convencer\n"
	.string "a LANCE de restaurar el CAMPEONATO de\l"
	.string "la LIGA.$"

PalletTown_Laboratorio_S6_Final_Texto_50:
	.string "En el estado actual de KANTO, no supone\n"
	.string "ninguna amenaza para él, o eso cree…$"

PalletTown_Laboratorio_S6_Final_Texto_51:
	.string "Sera un gran acontecimiento, evadiendo\n"
	.string "al pueblo de sus laboriosas vidas.$"

PalletTown_Laboratorio_S6_Final_Texto_52:
	.string "Pero los motivos subyacentes van\n"
	.string "mucho más allá de su imaginación.$"

PalletTown_Laboratorio_S6_Final_Texto_53:
	.string "Ya le he advertido de dos jóvenes\n"
	.string "talentos, firmes candidatos que le\l"
	.string "serán totalmente afines.$"

PalletTown_Laboratorio_S6_Final_Texto_54:
	.string "Pensé en emplear a mi nieto como\n"
	.string "segundo en discordia, para reducir las\l"
	.string "sospechas respecto a ROJO. Pero la\l"
	.string "rivalidad entre ellos ha resultado ser\l"
	.string "genuina.$"

PalletTown_Laboratorio_S6_Final_Texto_55:
	.string "Detecto talento en mi nieto, pero lo\n"
	.string "mejor es enemigo de lo bueno: no estará\l"
	.string "más que persiguiendo una ilusión, algo\l"
	.string "inalcanzable.$"

PalletTown_Laboratorio_S6_Final_Texto_56:
	.string "Por ello, mi deber como tutor será,\n"
	.string "llegado el momento, el de desalentarlo\l"
	.string "a continuar con ese absurdo.$"

PalletTown_Laboratorio_S6_Final_Texto_57:
	.string "El propósito final es claro: hacer de\n"
	.string "ROJO el CAMPEÓN de KANTO.$"

PalletTown_Laboratorio_S6_Final_Texto_58:
	.string "Para entonces, ya será excepcional.\n"
	.string "Eventualmente, estará en disposición\l"
	.string "de recuperar por la fuerza lo que el\l"
	.string "propio LANCE nos arrebató haciendo uso\l"
	.string "de tal.$"

PalletTown_Laboratorio_S6_Final_Texto_59:
	.string "10 de marzo de 1997$"

PalletTown_Laboratorio_S6_Final_Texto_60:
	.string "Mis pronósticos respecto a\n"
	.string "ROJO fueron acertados.$"

PalletTown_Laboratorio_S6_Final_Texto_61:
	.string "Iba a ser suficiente para\n"
	.string "derrocar a LANCE, pero…$"

PalletTown_Laboratorio_S6_Final_Texto_62:
	.string "Ese ENTRENADOR lo cambió todo.$"

PalletTown_Laboratorio_S6_Final_Texto_63:
	.string "Es cierto que los estándares de poder\n"
	.string "se dispararon en el último año. De un\l"
	.string "modo u otro, LANCE caería pronto, al\l"
	.string "devaluarse la única variable que lo\l"
	.string "mantenía en la cima.$"

PalletTown_Laboratorio_S6_Final_Texto_64:
	.string "Pero ese ROCKET no ganó a ROJO por\n"
	.string "disponer de tales recursos.$"

PalletTown_Laboratorio_S6_Final_Texto_65:
	.string "Mi impulso inicial fue pensar que\n"
	.string "GIOVANNI urdió un plan similar al mío, y\l"
	.string "fue su marioneta la que acabó\l"
	.string "imponiéndose sobre la mía.$"

PalletTown_Laboratorio_S6_Final_Texto_66:
	.string "Pero no… algo se me escapaba.$"

PalletTown_Laboratorio_S6_Final_Texto_67:
	.string "Entonces recordé aquel discurso… a\n"
	.string "aquella antigua CAMPEONA, ya olvidada,\l"
	.string "varias décadas atrás.$"

PalletTown_Laboratorio_S6_Final_Texto_68:
	.string "Jamás dudé en tomar como pura\n"
	.string "charlatanería sus palabras, y a pesar\l"
	.string "de ello…$"

PalletTown_Laboratorio_S6_Final_Texto_69:
	.string "…aquellos asertos que parecían\n"
	.string "repugnar a la razón, 50 años después\l"
	.string "cobraban cierto sentido.$"

PalletTown_Laboratorio_S6_Final_Texto_70:
	.string "Esa voluntad a la que los antiguos se\n"
	.string "referían contaba con más aristas de\l"
	.string "las que en un inicio pensé.$"

PalletTown_Laboratorio_S6_Final_Texto_71:
	.string "Y pude verlas, reflejadas\n"
	.string "en ese ENTRENADOR…$"

PalletTown_Laboratorio_S6_Final_Texto_72:
	.string "ANDRA: Vaya…$"

PalletTown_Laboratorio_Secreto_S6_Despues::
msgbox PalletTown_Laboratorio_S6_Final_Texto_72 MSGBOX_AUTOCLOSE
release
end


