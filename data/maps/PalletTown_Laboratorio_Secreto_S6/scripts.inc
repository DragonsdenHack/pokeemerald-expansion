PalletTown_Laboratorio_Secreto_S6_MapScripts::
	.byte 0


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
walk_left
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
applymovement 9, Laboratorio_Secreto_S6_Andra_Documento_Move_8
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
	.string "Te espero allí. Después de lo que hemos\n"
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
