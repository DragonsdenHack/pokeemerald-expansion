PalletTown_Laboratorio_Secreto_S6_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_Laboratorio_Secreto_S6_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_Laboratorio_Secreto_S6_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S6_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S6_OnFrame
	.byte 0

PalletTown_Laboratorio_Secreto_S6_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 51, PalletTown_Laboratorio_Secreto_S6_Gray
map_script_2 VAR_UNUSED_0x40F8, 56, PalletTown_Laboratorio_Secreto_S6_Gray_2
	.2byte 0

PalletTown_Laboratorio_Secreto_S6_Gray::
call Script_RemoveTint
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Gray_Move_1
setvar VAR_UNUSED_0x40F8, 52
end

PalletTown_Laboratorio_Secreto_S6_Gray_2::
call Script_RemoveTint
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Gray_Move_1
setvar VAR_UNUSED_0x40F8, 57
end

PalletTown_Laboratorio_Secreto_S6_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 52, PalletTown_Laboratorio_Secreto_S6_Despues
map_script_2 VAR_UNUSED_0x40F8, 57, PalletTown_Laboratorio_Secreto_S6_Final
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
	.string "Este lugar parece{PAUSE 15}…{PAUSE 15} el núcleo de las\n"
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
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

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
	.string "Estamos muy cerca{PAUSE 25}…{PAUSE 25}$"

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
	.string "Parece interesante{PAUSE 15}…{PAUSE 15}\n"
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
	.string "ONDAS RADIO, PSEUDO + FUERTE VÍNCULO{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_13:
	.string "De todas ellas, la más extrema es la de:\n"
	.string "LEGENDARIO MAYOR + ONDAS DE RADIO.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_14:
	.string "A efectos prácticos, sería como decir:\n"
	.string "680 + 150 STATS BASE.$"

PalletTown_Laboratorio_Secreto_S6_Andra_Documento_Texto_15:
	.string "A simple vista, tal combinación\n"
	.string "parecería una quimera, pero{PAUSE 15}…{PAUSE 15} contamos\l"
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
	.string "ANDRA: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

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
	.string "Ahora{PAUSE 35}…{PAUSE 35} nos queda lo que parece la\n"
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

Laboratorio_S6_Final_Move_6.1:
lock_facing_direction
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
	.string "Una{PAUSE 35}…{PAUSE 35} ¿tele?$"

PalletTown_Laboratorio_S6_Final_Texto_2:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_3:
	.string "Hay un disco, puede conectarse\n"
	.string "con la tele.$"

PalletTown_Laboratorio_S6_Final_Texto_4:
	.string "Pone: MEMORIAS DE OAK.$"

PalletTown_Laboratorio_S6_Final_Texto_5:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

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
	.string "A pesar de la aplastante realidad{PAUSE 25}…{PAUSE 25} me\n"
	.string "niego a pensar que esto es el fin.$"

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
	.string "-15 de Octubre de 1993-$"

PalletTown_Laboratorio_S6_Final_Texto_17:
	.string "Gracias a liberar todos mis POKÉMON, y\n"
	.string "ofrecerme como investigador para el\l"
	.string "nuevo gobierno, pude salvar este\l"
	.string "laboratorio{PAUSE 25}…{PAUSE 25} y con ello el último hilo\l"
	.string "de esperanza del que pende la región.$"

PalletTown_Laboratorio_S6_Final_Texto_18:
	.string "En esta situación, me es imposible\n"
	.string "recuperar KANTO por la fuerza bruta,\l"
	.string "tal y como intentamos con MEWTWO.$"

PalletTown_Laboratorio_S6_Final_Texto_19:
	.string "Requiero de algo revolucionario, que\n"
	.string "rompa con todos los paradigmas conocidos.$"

PalletTown_Laboratorio_S6_Final_Texto_20:
	.string "-1 de Diciembre de 1993-$"

PalletTown_Laboratorio_S6_Final_Texto_21:
	.string "La ingeniería genética podría\n"
	.string "ser esa revolución.$"

PalletTown_Laboratorio_S6_Final_Texto_22:
	.string "Aplicada a los POKÉMON, fue como\n"
	.string "logramos crear a MEWTWO.$"

PalletTown_Laboratorio_S6_Final_Texto_23:
	.string "Pero{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_24:
	.string "¿Aplicada a los humanos? ¿Qué clase\n"
	.string "de potencial podría desbloquear?$"

PalletTown_Laboratorio_S6_Final_Texto_25:
	.string "Solemos prestar atención al poder\n"
	.string "bruto de un POKÉMON, algo\l"
	.string "absolutamente tangible, pero{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_26:
	.string "{PAUSE 15}…{PAUSE 15}en un combate, el valor de un POKÉMON\n"
	.string "está sujeto, en relación proporcional,\l"
	.string "al del ENTRENADOR que lo comande.$"

PalletTown_Laboratorio_S6_Final_Texto_27:
	.string "Bajo esta premisa nació el\n"
	.string "-PROYECTO ROJO-.$"

PalletTown_Laboratorio_S6_Final_Texto_28:
	.string "-18 de Enero de 1994-$"

PalletTown_Laboratorio_S6_Final_Texto_29:
	.string "DITTO fue una muestra de la\n"
	.string "maleabilidad en los genes de MEW, capaz\l"
	.string "de transformarse en el POKÉMON\l"
	.string "más poderoso{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_30:
	.string "{PAUSE 15}…{PAUSE 15}pero también de convertirse en el\n"
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
	.string "combate{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_36:
	.string "{PAUSE 15}…{PAUSE 15}también podrá tomar las mejores\n"
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
	.string "-7 de Febrero de 1994-$"

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
	.string "-21 de enero de 1995-$"

PalletTown_Laboratorio_S6_Final_Texto_49:
	.string "Tras varios meses, he logrado convencer\n"
	.string "a LANCE de restaurar el CAMPEONATO de\l"
	.string "la LIGA.$"

PalletTown_Laboratorio_S6_Final_Texto_50:
	.string "En el estado actual de KANTO, no supone\n"
	.string "ninguna amenaza para él, o eso cree{PAUSE 15}…{PAUSE 15}$"

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
	.string "-10 de marzo de 1997-$"

PalletTown_Laboratorio_S6_Final_Texto_60:
	.string "Mis pronósticos respecto a\n"
	.string "ROJO fueron acertados.$"

PalletTown_Laboratorio_S6_Final_Texto_61:
	.string "Iba a ser suficiente para\n"
	.string "derrocar a LANCE, pero{PAUSE 15}…{PAUSE 15}$"

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
	.string "Pero no{PAUSE 45}…{PAUSE 45} algo se me escapaba.$"

PalletTown_Laboratorio_S6_Final_Texto_67:
	.string "Entonces recordé aquel discurso{PAUSE 35}…{PAUSE 35} de\n"
	.string "aquella antigua CAMPEONA, ya olvidada,\l"
	.string "varias décadas atrás.$"

PalletTown_Laboratorio_S6_Final_Texto_68:
	.string "Jamás dudé en tomar como pura\n"
	.string "charlatanería sus palabras, y a pesar\l"
	.string "de ello{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Final_Texto_69:
	.string "{PAUSE 15}…{PAUSE 15}aquellos asertos que parecían\n"
	.string "repugnar a la razón, 50 años después\l"
	.string "cobraban cierto sentido.$"

PalletTown_Laboratorio_S6_Final_Texto_70:
	.string "Esa voluntad a la que los antiguos se\n"
	.string "referían contaba con más aristas de\l"
	.string "las que en un inicio pensé.$"

PalletTown_Laboratorio_S6_Final_Texto_71:
	.string "Y pude verlas, reflejadas\n"
	.string "en ese ENTRENADOR{PAUSE 35}…{PAUSE 35}$"

Laboratorio_Secreto_S6_Despues_Move_1:
delay_8
face_right
step_end

Laboratorio_Secreto_S6_Despues_Move_2:
face_left
step_end

Laboratorio_Secreto_S6_Despues_Move_3:
delay_8
face_up
delay_16
delay_8
face_left
step_end

Laboratorio_Secreto_S6_Despues_Move_4:
emote_exclamation_mark
delay_16
delay_8
face_up
step_end

PalletTown_Laboratorio_Secreto_S6_Despues::
setflag FLAG_HOENN_654
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
clearflag FLAG_HOENN_655
msgbox PalletTown_Laboratorio_S6_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Despues_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Despues_Move_1
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Despues_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, Laboratorio_Secreto_S6_Despues_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Despues_Move_4
waitmovement 0x0
waitse
delay 25
msgbox PalletTown_Laboratorio_S6_Despues_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 53
warpsilent MAP_PALLET_TOWN_LABORATORIO_SECRETO_S3, 8, 11
delay 100

PalletTown_Laboratorio_S6_Despues_Texto_1:
	.string "ANDRA: Vaya{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Despues_Texto_2:
	.string "Después de la LIGA, supimos lo que era\n"
	.string "ROJO, pero no con este lujo de detalles.$"

PalletTown_Laboratorio_S6_Despues_Texto_3:
	.string "Que OAK llegara a pensar que tú fueras\n"
	.string "lo mismo es una muestra más de su\l"
	.string "arrogancia. No concibe que pueda ser\l"
	.string "derrotado de igual a igual.$"

PalletTown_Laboratorio_S6_Despues_Texto_4:
	.string "-2 de Julio de 1997-$"

PalletTown_Laboratorio_S6_Despues_Texto_5:
	.string "ANDRA: ¡¿Aún hay más?!$"

PalletTown_Laboratorio_S6_Despues_Texto_6:
	.string "Sin embargo, el -PROYECTO ROJO-\n"
	.string "no acaba aquí.$"

PalletTown_Laboratorio_S6_Despues_Texto_7:
	.string "La posterior derrota, ya con MEWTWO en\n"
	.string "mi poder, corroboró mis sospechas.$"

PalletTown_Laboratorio_S6_Despues_Texto_8:
	.string "Yo había alcanzado la perfección{PAUSE 25}…{PAUSE 25} pero\n"
	.string "bajo condiciones controladas, en las\l"
	.string "que intangibles como la -voluntad- o el\l"
	.string "-vínculo- no estaban contempladas.$"

PalletTown_Laboratorio_S6_Despues_Texto_9:
	.string "Si bien era imposible dotar a ROJO de\n"
	.string "algo tan abstracto, sería necio\l"
	.string "desechar el resto de tangibles que sí\l"
	.string "se pudieron controlar.$"

PalletTown_Laboratorio_S6_Despues_Texto_10:
	.string "Sus aplicaciones para un mayor\n"
	.string "entendimiento de nuestro mundo\l"
	.string "podrían ser infinitas.$"

PalletTown_Laboratorio_S6_Despues_Texto_11:
	.string "Con LANCE fuera de juego, GIOVANNI\n"
	.string "dominando en las sombras y JOHTO como\l"
	.string "futura aliada{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Despues_Texto_12:
	.string "La situación es inmejorable\n"
	.string "para poner esto a prueba.$"

PalletTown_Laboratorio_S6_Despues_Texto_13:
	.string "-10 de julio de 1997-$"

PalletTown_Laboratorio_S6_Despues_Texto_14:
	.string "Un investigador de renombre en JOHTO;\n"
	.string "el PROFESOR ELM, ha quedado fascinado\l"
	.string "con mi proposición.$"

PalletTown_Laboratorio_S6_Despues_Texto_15:
	.string "El mundo, nos guste o no, no deja de ser\n"
	.string "una compleja sucesión de causas y\l"
	.string "efectos, que vistas desde fuera, con la\l"
	.string "suficiente perspectiva y entendimiento\l"
	.string "de las variables, podrían ser\l"
	.string "completamente predecibles en su\l"
	.string "mayoría.$"

PalletTown_Laboratorio_S6_Despues_Texto_16:
	.string "Lo que los antiguos llaman voluntad e\n"
	.string "intención es algo de extrema\l"
	.string "complejidad, no hay duda.$"

PalletTown_Laboratorio_S6_Despues_Texto_17:
	.string "Pero{PAUSE 25}…{PAUSE 25} si pudiéramos llegar a desgranar\n"
	.string "una por una todas las situaciones de\l"
	.string "acción-reacción, hasta llegar al nivel\l"
	.string "más elemental, encontraríamos que no\l"
	.string "es más que una ilusión, una ley no\l"
	.string "reconocida a la que llamamos azar.$"

PalletTown_Laboratorio_S6_Despues_Texto_18:
	.string "Bajo esta premisa fue como\n"
	.string "nació el -PROYECTO ORO-.$"

PalletTown_Laboratorio_S6_Despues_Texto_19:
	.string "-15 de Octubre de 1997-$"

PalletTown_Laboratorio_S6_Despues_Texto_20:
	.string "La I CONFERENCIA de CIUDAD\n"
	.string "TRIGAL ha sido un éxito.$"

PalletTown_Laboratorio_S6_Despues_Texto_21:
	.string "Hemos pautado todas las acciones para\n"
	.string "convertir el binomio KANTO-JOHTO en\l"
	.string "una gran potencia.$"

PalletTown_Laboratorio_S6_Despues_Texto_22:
	.string "Pero lo más importante es que{PAUSE 35}…{PAUSE 35} todas\n"
	.string "estas acciones cuentan en su conjunto\l"
	.string "con un propósito aún más profundo.$"

PalletTown_Laboratorio_S6_Despues_Texto_23:
	.string "Algo que no debe ser revelado ni a los\n"
	.string "allí presentes, no al menos hasta la\l"
	.string "III CONFERENCIA.$"

PalletTown_Laboratorio_S6_Despues_Texto_24:
	.string "Para ese entonces, dispondremos ya de\n"
	.string "las herramientas, el poder y el control\l"
	.string "necesarios como para llevar a cabo a\l"
	.string "gran escala algo que únicamente\l"
	.string "debería ser posible a nivel elemental,\l"
	.string "atómico.$"

PalletTown_Laboratorio_S6_Despues_Texto_25:
	.string "-2 de Marzo de 1998-$"

PalletTown_Laboratorio_S6_Despues_Texto_26:
	.string "ROJO, a nivel interno, era una máquina\n"
	.string "perfecta. El problema fue{PAUSE 15}…{PAUSE 15} una inter-\l"
	.string "acción con las variables externas\l"
	.string "que excedían su capacidad.$"

PalletTown_Laboratorio_S6_Despues_Texto_27:
	.string "Sin embargo, el resultado de controlar\n"
	.string "tanto variables internas como externas\l"
	.string "será, de nuevo, revolucionario{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Despues_Texto_28:
	.string "ORO no solo contará con un mecanismo\n"
	.string "para recopilar de forma precisa toda\l"
	.string "interacción que ejecute.$"

PalletTown_Laboratorio_S6_Despues_Texto_29:
	.string "Sino que todo a su alrededor; su mundo,\n"
	.string "la realidad a la que se verá expuesta{PAUSE 25}…{PAUSE 25}\l"
	.string "estará planeada de antemano.$"

PalletTown_Laboratorio_S6_Despues_Texto_30:
	.string "¿Por qué? ¿Con qué finalidad?$"

PalletTown_Laboratorio_S6_Despues_Texto_31:
	.string "Al final todos, de un modo u otro,\n"
	.string "estamos limitados.$"

PalletTown_Laboratorio_S6_Despues_Texto_32:
	.string "Qué mejor forma para expandir nuestros\n"
	.string "propios límites, que establecer uno\l"
	.string "controlado y aprender de él.$"

PalletTown_Laboratorio_S6_Despues_Texto_33:
	.string "Con nuestra tecnología actual,\n"
	.string "podremos monitorizar todas las\l"
	.string "acciones causa-efecto que ORO realice,\l"
	.string "y en consecuencia recopilar una\l"
	.string "ingente cantidad de datos que, aplicada\l"
	.string "a la realidad, revolucionará el combate\l"
	.string "POKÉMON tal y como lo conocemos.$"

PalletTown_Laboratorio_S6_Despues_Texto_34:
	.string "No solo del combate POKÉMON.$"

PalletTown_Laboratorio_S6_Despues_Texto_35:
	.string "También se podría extrapolar a{PAUSE 15}…{PAUSE 15} simular\n"
	.string "acciones causa-efecto dentro de\l"
	.string "nuestro propio mundo, hacer\l"
	.string "estimaciones no solo de nuestra\l"
	.string "región,sino de otras.$"

PalletTown_Laboratorio_S6_Despues_Texto_36:
	.string "Llevado a la práctica, estaríamos en\n"
	.string "disposición de estimar el devenir del\l"
	.string "mundo POKÉMON con una precisión\l"
	.string "asombrosa, adentrándonos tanto en el\l"
	.string "mejor como en el peor de los escenarios\l"
	.string "posibles.$"

PalletTown_Laboratorio_S6_Despues_Texto_37:
	.string "De este modo, lograríamos comparar\n"
	.string "ambas realidades: la nuestra y la\l"
	.string "simulada, y como consecuencia{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Despues_Texto_38:
	.string "{PAUSE 15}…{PAUSE 15}alcanzaríamos también a ver y\n"
	.string "asegurarnos de que, a día de hoy,\l"
	.string "gracias a todos nuestros avances,\l"
	.string "prototipos, tecnología y cultura en el\l"
	.string "combate POKÉMON, ninguna de las otras\l"
	.string "regiones, aún en el mejor de sus\l"
	.string "pronósticos, pudiera hacernos frente.$"

PalletTown_Laboratorio_S6_Despues_Texto_39:
	.string "En definitiva: certificar, de forma\n"
	.string "empírica, que el binomio KANTO-JOHTO es\l"
	.string "y será la principal potencia del mundo\l"
	.string "POKÉMON.$"

PalletTown_Laboratorio_S6_Despues_Texto_40:
	.string "Aquí radica el verdadero valor del\n"
	.string "-PROYECTO ORO-, y el por qué merece la\l"
	.string "pena orquestar toda una región solo\l"
	.string "para él.$"

PalletTown_Laboratorio_S6_Despues_Texto_41:
	.string "-1 de Enero de 1999-$"

PalletTown_Laboratorio_S6_Despues_Texto_42:
	.string "JOHTO se ha convertido en una\n"
	.string "región completamente nueva.$"

PalletTown_Laboratorio_S6_Despues_Texto_43:
	.string "La II CONFERENCIA de CIUDAD TRIGAL ha\n"
	.string "dejado todo el terreno preparado para\l"
	.string "que el -PROYECTO ORO- pueda ponerse en\l"
	.string "práctica.$"

PalletTown_Laboratorio_S6_Despues_Texto_44:
	.string "Nuevos LÍDERES de GIMNASIO, eventos\n"
	.string "programados, LEGENDARIOS clonados que\l"
	.string "saldrán a su paso, incluso una LIGA\l"
	.string "POKÉMON hecha a medida.$"

PalletTown_Laboratorio_S6_Despues_Texto_45:
	.string "Visto desde dentro, -ORO-\n"
	.string "será el elegido.$"

PalletTown_Laboratorio_S6_Despues_Texto_46:
	.string "Ciertamente, su destino será ese, pero\n"
	.string "no por gracia divina, sino por la\l"
	.string "nuestra.$"

PalletTown_Laboratorio_S6_Despues_Texto_47:
	.string "Pero{PAUSE 25}…{PAUSE 25} ¿qué diferencia podría haber\n"
	.string "entre ambos casos? Tal vez, ninguna.$"

PalletTown_Laboratorio_S6_Despues_Texto_48:
	.string "Visto desde fuera, lo que parecía único\n"
	.string "no será más que una rutina reglada, que\l"
	.string "cualquier niño de 10 años podría\l"
	.string "ejecutar, y creyendo por ello, al igual\l"
	.string "que el propio ORO, ser especial.$"

PalletTown_Laboratorio_S6_Despues_Texto_49:
	.string "Quizás, con el debido entendimiento del\n"
	.string "mundo, si fuéramos el POKÉMON ESENCIA{PAUSE 15}…{PAUSE 15}\l"
	.string "también podríamos llegar a ver\l"
	.string "nuestras propias acciones de igual\l"
	.string "modo.$"

PalletTown_Laboratorio_S6_Despues_Texto_50:
	.string "Ahora nosotros, por una sola vez,\n"
	.string "seremos tanto ejecutor como juez y\l"
	.string "verdugo.$"

PalletTown_Laboratorio_S6_Despues_Texto_51:
	.string "Todas las hazañas de ORO serán inocuas\n"
	.string "a nuestros ojos, desprovistas de\l"
	.string "mérito. No son parte de su viaje, son el\l"
	.string "medio por el que alcanzaremos nuestro\l"
	.string "fin.$"

PalletTown_Laboratorio_S6_Despues_Texto_52:
	.string "Y el fin de su viaje concluirá\n"
	.string "en el MONTE PLATEADO.$"

PalletTown_Laboratorio_S6_Despues_Texto_53:
	.string "-12 de Noviembre de 1999-$"

PalletTown_Laboratorio_S6_Despues_Texto_54:
	.string "La III CONFERENCIA de\n"
	.string "CIUDAD TRIGAL ha finalizado.$"

PalletTown_Laboratorio_S6_Despues_Texto_55:
	.string "GIOVANNI me ha informado de que\n"
	.string "{PLAYER} logró localizar a ANDRA.$"

PalletTown_Laboratorio_S6_Despues_Texto_55.1:
	.string "Ambos tratarán de averiguar la\n"
	.string "verdadera naturaleza de las acciones\l"
	.string "de DEVON en HOENN.$"

PalletTown_Laboratorio_S6_Despues_Texto_55.2:
	.string "Pero en paralelo, nosotros estamos\n"
	.string "ocupados con otros asuntos.$"

PalletTown_Laboratorio_S6_Despues_Texto_55.3:
	.string "El -PROYECTO ORO- será puesto en\n"
	.string "marcha dentro de 3 días.$"

PalletTown_Laboratorio_S6_Despues_Texto_55.4:
	.string "En este preciso instante, me dispongo a\n"
	.string "acudir a la base de PUEBLO CAOBA, desde\l"
	.string "allí activaremos todos los protocolos.$"

PalletTown_Laboratorio_S6_Despues_Texto_56:
	.string "Una vez dé comienzo, no se detendrá\n"
	.string "hasta que ORO sea capaz de cerrar el\l"
	.string "círculo en el MONTE PLATEADO.$"

PalletTown_Laboratorio_S6_Despues_Texto_56.1:
	.string "Y una vez cerrado, obtendremos\n"
	.string "lo que buscamos.$"

PalletTown_Laboratorio_S6_Despues_Texto_57:
	.string "Lo necesario para poder elaborar\n"
	.string "precisas simulaciones de cada una\l"
	.string "de las regiones conocidas.$"

PalletTown_Laboratorio_S6_Despues_Texto_58:
	.string "Sin el apoyo de GIOVANNI, nada\n"
	.string "de esto hubiera sido posible.$"

PalletTown_Laboratorio_S6_Despues_Texto_59:
	.string "Ya desde el -PROYECTO ROJO- intuyó\n"
	.string "la naturaleza de mis acciones.$"

PalletTown_Laboratorio_S6_Despues_Texto_60:
	.string "Gracias a ello pudo, para mi asombro,\n"
	.string "ganarme la partida en la LIGA POKÉMON.$"

PalletTown_Laboratorio_S6_Despues_Texto_61:
	.string "Al final de todo, resultó que éramos lo\n"
	.string "bastante similares como para\l"
	.string "entendernos el uno al otro con\l"
	.string "facilidad{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Despues_Texto_62:
	.string "{PAUSE 25}…{PAUSE 25}pero también lo bastante diferentes\n"
	.string "como para sorprendernos mutuamente.$"

Laboratorio_Secreto_S6_Final_Move_1:
emote_exclamation_mark
step_end

Laboratorio_Secreto_S6_Final_Move_2:
walk_in_place_left
step_end

Laboratorio_Secreto_S6_Final_Move_3:
delay_16
face_right
step_end

Laboratorio_Secreto_S6_Final_Move_4:
delay_16
face_up
delay_16
delay_8
face_left
step_end

Laboratorio_Secreto_S6_Final_Move_5:
emote_exclamation_mark
delay_16
delay_8
face_down
step_end

Laboratorio_Secreto_S6_Final_Move_6:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Laboratorio_Secreto_S6_Final_Move_7:
walk_in_place_up
step_end

Laboratorio_Secreto_S6_Final_Move_8:
walk_slow_down
walk_slow_down
step_end

Laboratorio_Secreto_S6_Final_Move_9:
delay_16
face_left
delay_16
delay_8
face_up
step_end

Laboratorio_Secreto_S6_Final_Move_9.1:
delay_16
face_right
delay_16
delay_8
face_up
step_end

Laboratorio_Secreto_S6_Final_Move_10:
face_left
step_end

Laboratorio_Secreto_S6_Final_Move_11:
face_up
step_end

Laboratorio_Secreto_S6_Final_Move_12:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Laboratorio_Secreto_S6_Final_Move_13:
walk_in_place_down
step_end

Laboratorio_Secreto_S6_Final_Move_14:
walk_slow_up
step_end

Laboratorio_Secreto_S6_Final_Move_15:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end


PalletTown_Laboratorio_Secreto_S6_Final::
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 30
playse SE_PIN
applymovement 3, Laboratorio_Secreto_S6_Final_Move_1
waitmovement 0x0
waitse
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Final_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 50
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, Laboratorio_Secreto_S6_Final_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Final_Move_5
waitmovement 0x0
waitse
playse 567
delay 50
clearflag FLAG_HOENN_289
addobject 1
addobject 2
applymovement 1, Laboratorio_Secreto_S6_Final_Move_6
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_6
waitmovement 0x0
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S6_Final_Move_8
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_9.1
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_9.3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_10
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_11
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_9.1
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_12
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_13
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_29 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, Laboratorio_Secreto_S6_Final_Move_5
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_13
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_32 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_33 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_34 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_14
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_38 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_Secreto_S6_Final_Move_15
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_39 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_40 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_41 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Laboratorio_Secreto_S6_Final_Move_14
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_43 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Laboratorio_Secreto_S6_Final_Move_16
applymovement 1, Laboratorio_Secreto_S6_Final_Move_17
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_45 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S6_Final_Move_18
applymovement 3, Laboratorio_Secreto_S6_Final_Move_19
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Final_Texto_46 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 46
setflag FLAG_HOENN_655
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
setflag FLAG_HOENN_654
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
setflag FLAG_HOENN_289
choose_mons
multi_2_vs_2 1585, PalletTown_Laboratorio_S6_Combate_Final_Texto_47, 1586, PalletTown_Laboratorio_S6_Combate_Final_Texto_48, 1587, 6
switch VAR_RESULT
case 1, PalletTown_Laboratorio_S6_Combate_Ganado
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate
release
end

Laboratorio_Secreto_S6_Final_Move_19:
delay_16
face_left
delay_16
delay_16
walk_in_place_left
delay_16
delay_8
face_up
delay_16
walk_in_place_down
delay_16
step_end

Laboratorio_Secreto_S6_Final_Move_18:
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_16
delay_8
face_down
step_end


Laboratorio_Secreto_S6_Final_Move_17:
delay_16
face_left
delay_16
delay_16
walk_in_place_left
delay_16
delay_8
face_up
delay_16
walk_in_place_up
delay_16
step_end

Laboratorio_Secreto_S6_Final_Move_16:
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_16
delay_8
face_up
step_end

PalletTown_Laboratorio_S6_Combate_Final_Texto_1:
	.string "ANDRA: 3 días{PAUSE 25}…{PAUSE 25}$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_2:
	.string "Eso{PAUSE 15}…{PAUSE 15} ¡es hoy! ¡El -PROYECTO ORO-\n"
	.string "empieza hoy!$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_3:
	.string "Pero{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_4:
	.string "GIOVANNI sabía todo esto desde el\n"
	.string "principio, antes incluso de nuestro\l"
	.string "asalto a la LIGA POKÉMON, ¿por qué\l"
	.string "entonces no hizo nada?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_5:
	.string "????: Por una cuestión de honor.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_6:
	.string "GIOVANNI: Cuando ordené a {PLAYER}\n"
	.string "explorar PUEBLO PALETA, lo que buscaba\l"
	.string "eran indicios de que OAK trataba de\l"
	.string "recuperar KANTO a su modo.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_7:
	.string "Una vez lo supe, no había razón para\n"
	.string "indagar en ello: detener a LANCE era\l"
	.string "prioritario.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_8:
	.string "Fue ya con nuestra victoria en la LIGA,\n"
	.string "cuando llegó el momento de ajusticiar a\l"
	.string "OAK.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_9:
	.string "A su desaparición, fui yo el primero en\n"
	.string "recordar la misión de {PLAYER} en PALETA.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_9.1:
	.string "Pude haber ordenado patear este\n"
	.string "laboratorio, pero había algo en los\l"
	.string "planes de OAK que me intrigaba.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_9.2:
	.string "Como viejo rival, era mi deber entender\n"
	.string "por completo la naturaleza de sus\l"
	.string "acciones.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_9.3:
	.string "Solo así podría juzgarlo como es\n"
	.string "debido, y eso era algo que me\l"
	.string "correspondía solo a mí.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_10:
	.string "Por ello, mientras vosotros estabais en\n"
	.string "ARCHI7, hice una visita a PUEBLO\l"
	.string "PALETA.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_11:
	.string "Logré activar la entrada secreta,\n"
	.string "accediendo a este lugar.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_12:
	.string "Para mi sorpresa, OAK no estaba.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_13:
	.string "Sin embargo, todos sus diarios, planos,\n"
	.string "el -PROYECTO ROJO- en detalle, la\l"
	.string "ubicación de MEWTWO{PAUSE 25}…{PAUSE 25} todo estaba allí.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_14:
	.string "Fue entonces, al adentrarme e indagar\n"
	.string "en el laboratorio, cuando lo vi claro.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_15:
	.string "Desde el momento en que hincó la\n"
	.string "rodilla, él ya había puesto en marcha un\l"
	.string "plan para recuperar KANTO.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_16:
	.string "Yo fui el sacrificio, sí. Pero igualmente\n"
	.string "cierto es que no cabía otra opción.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_17:
	.string "Entró dentro de sus cálculos, y no se\n"
	.string "equivocó: al final, el que contaba con\l"
	.string "la fortuna y los medios como para\l"
	.string "desaparecer del mapa era yo.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_18:
	.string "Ello derivó en lo que todos\n"
	.string "conocéis: el TEAM ROCKET.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_19:
	.string "Más tarde, cuando {PLAYER} se\n"
	.string "adentró en la MANSIÓN CANELA y\l"
	.string "recuperó a MEWTWO, OAK me lo confirmó\l"
	.string "todo.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_20:
	.string "Tuvo que actuar de forma que pudiera\n"
	.string "engañar a todos, incluso a mí.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_21:
	.string "Ahora, estaba en mi mano decidir qué\n"
	.string "hacer. Actuar como LANCE o perdonar a\l"
	.string "mi máximo rival.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_22:
	.string "El resto es historia.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_23:
	.string "2 años después, mirad todo lo que hemos\n"
	.string "logrado.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_24:
	.string "OAK: Y lo mejor está por llegar.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_25:
	.string "ANDRA: No lo termino de entender.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_26:
	.string "¿De qué forma vais a aplicar el\n"
	.string "-PROYECTO ORO-?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_27:
	.string "GIOVANNI: De la más directa posible.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_28:
	.string "OAK: Construyendo detalladas\n"
	.string "simulaciones, en base a las\l"
	.string "estimaciones más altas que\l"
	.string "obtengamos de cada región.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_29:
	.string "GIOVANNI: Ahí será cuando simulemos\n"
	.string "también nuestros propios equipos.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_30:
	.string "ANDRA: Entonces{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_31:
	.string "GIOVANNI: Entraremos en ellas, y\n"
	.string "enfrentaremos a esas perfectas\l"
	.string "distopías de HOENN, SINNOH y demás\l"
	.string "regiones.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_32:
	.string "ANDRA: Y{PAUSE 15}…{PAUSE 15} si lográis triunfar, con ello\n"
	.string "os aseguráis de que dichas regiones\l"
	.string "jamás podrían declararos la guerra con\l"
	.string "éxito, ¿verdad?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_33:
	.string "OAK: Exacto.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_34:
	.string "Y eso es algo que ya deberíamos haber\n"
	.string "alcanzado con los prototipos de nivel\l"
	.string "III.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_35:
	.string "ANDRA: Pues esos prototipos siquiera\n"
	.string "han podido con nosotros.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_36:
	.string "OAK: Lo sé. DALIA me lo ha contado.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_37:
	.string "Lo que has logrado es excepcional. El\n"
	.string "mero hecho de estar aquí lo es.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_38:
	.string "ANDRA: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_39:
	.string "Si de verdad vuestro plan tiene éxito,\n"
	.string "puede que veamos algo que sorprenda a\l"
	.string "todos. Quizás algo a lo que no podamos\l"
	.string "hacer frente.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_40:
	.string "OAK: A día de hoy, son solo\n"
	.string "suposiciones.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_41:
	.string "Primero, ANDRA, debes ver todo lo que\n"
	.string "nuestro mundo tangible ofrece.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_42:
	.string "GIOVANNI: Ambos habéis alcanzado\n"
	.string "cotas impensables. Solo hay algo que\l"
	.string "nos inquieta.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_43:
	.string "OAK: ¿Qué sería más merecedor de\n"
	.string "representar a nuestra realidad?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_44:
	.string "¿Vuestros equipos forjados en base al\n"
	.string "vínculo y la voluntad?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_45:
	.string "¿O la tecnología capaz de emular los\n"
	.string "límites de poder alcanzables?$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_46:
	.string "ANDRA: Lo averiguaremos.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_47:
	.string "Parece que aún quedan\n"
	.string "aristas por descubrir.$"

PalletTown_Laboratorio_S6_Combate_Final_Texto_48:
	.string "La realidad es asombrosa.$"

Laboratorio_S6_Combate_Ganado_Move_1:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

Laboratorio_S6_Combate_Ganado_Move_2:
walk_in_place_down
step_end

Laboratorio_S6_Combate_Ganado_Move_3:
delay_8
face_left
delay_16
delay_8
face_down
step_end

Laboratorio_S6_Combate_Ganado_Move_4:
emote_exclamation_mark
step_end

Laboratorio_S6_Combate_Ganado_Move_5:
face_right
step_end

Laboratorio_S6_Combate_Ganado_Move_6:
walk_in_place_up
step_end

Laboratorio_S6_Combate_Ganado_Move_7:
walk_in_place_right
step_end

Laboratorio_S6_Combate_Ganado_Move_8:
face_left
delay_16
delay_8
face_down
delay_16
delay_8
face_left
step_end

Laboratorio_S6_Combate_Ganado_Move_9:
delay_8
face_down
delay_16
step_end

Laboratorio_S6_Combate_Ganado_Move_10:
walk_slow_down
step_end

Laboratorio_S6_Combate_Ganado_Move_11:
delay_16
delay_16
face_down
step_end

Laboratorio_S6_Combate_Ganado_Move_12:
delay_16
delay_16
face_left
delay_16
face_down
delay_8
step_end

Laboratorio_S6_Combate_Ganado_Move_13:
walk_down
walk_left
walk_down
walk_down
step_end

Laboratorio_S6_Combate_Ganado_Move_14:
face_up
step_end

Laboratorio_S6_Combate_Ganado_Move_15:
face_right
delay_16
delay_16
face_down
step_end

Laboratorio_S6_Combate_Ganado_Move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_Laboratorio_S6_Combate_Ganado::
delay 30
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_1 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_4
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 15
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_5
applymovement 1, Laboratorio_S6_Final_Move_6.1
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_10 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_6
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_11 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_12 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_7
waitmovement 0x0
waitse
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_6
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_9
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_10
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_4
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 15
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_11
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_13
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_12
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_14
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_2
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_26 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 15
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_15
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_6
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, Laboratorio_S6_Combate_Ganado_Move_16
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_29 MSGBOX_AUTOCLOSE
delay 50
playse SE_POKENAV_CALL
delay 20
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
delay 15
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_5
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_31 MSGBOX_AUTOCLOSE
delay 10
playse SE_POKENAV_OFF
waitse
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_33 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_34 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Combate_Ganado_Move_4
waitmovement 0x0
waitse
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_6
waitse
delay 10
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_35 MSGBOX_AUTOCLOSE
applymovement 1, Laboratorio_S6_Combate_Ganado_Move_18
applymovement 2, Laboratorio_S6_Combate_Ganado_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Combate_Ganado_Move_17
waitmovement 0x0
playse SE_PC_LOGIN
waitse
delay 30
playse SE_WIN_OPEN
waitse
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S6_Final_Move_6.1
waitmovement 0x0
delay 30
setflag FLAG_HIDE_ROUTE_128_STEVEN
clearflag FLAG_NUEVA_292
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
setflag FLAG_HOENN_294
clearflag FLAG_HOENN_1
clearflag FLAG_HOENN_681
setvar VAR_UNUSED_0x40F8, 57
warpsilent MAP_MOSSDEEP_CITY, 76, 13
delay 100

Laboratorio_S6_Combate_Ganado_Move_19:
walk_right
walk_up
walk_up
walk_up
face_left
step_end

Laboratorio_S6_Combate_Ganado_Move_18:
delay_16
walk_up
walk_up
walk_up
step_end

Laboratorio_S6_Combate_Ganado_Move_17:
walk_up
walk_up
delay_16
delay_8
walk_in_place_up
delay_16
step_end

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_1:
	.string "GIOVANNI: Los 4{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_2:
	.string "ANDRA: ¿Qué?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_3:
	.string "GIOVANNI: Con este nivel, podríamos\n"
	.string "haber batido al POKÉMON ESENCIA ese\l"
	.string "día. Cada uno de los que estamos aquí,\l"
	.string "no solo {PLAYER}.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_4:
	.string "Pero{PAUSE 15}…{PAUSE 15} vosotros habéis ido aún más allá.\n"
	.string "¿Cómo?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_5:
	.string "ANDRA: El MAESTRO de\n"
	.string "TORRE DUN lo explicó.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_6:
	.string "Ese día, los límites de\n"
	.string "poder se expandieron.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_7:
	.string "Quizás modificara aspectos de su\n"
	.string "funcionamiento que aún no podemos\l"
	.string "contemplar.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_8:
	.string "Honestamente, no me importa.\n"
	.string "Ahora ya no.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_9:
	.string "GIOVANNI: Me sorprende tu actitud.\n"
	.string "¿Es que no lo ves, ANDRA?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_10:
	.string "Con esto, podríamos anticiparnos a\n"
	.string "cualquier posible guerra.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_11:
	.string "¡Ya no habrá poder en el mundo que\n"
	.string "pueda emular lo que hizo LANCE!$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_12:
	.string "ANDRA: Y a su vez, no habrá tampoco\n"
	.string "fuerza que os impida a vosotros hacer\l"
	.string "lo mismo.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_13:
	.string "OAK: Pero{PAUSE 5}…{PAUSE 5} ¿Cómo te atreves? Después\n"
	.string "de lo que hemos pasado para llegar\l"
	.string "a esta situación.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_14:
	.string "¿¡De verdad crees que vamos ahora a\n"
	.string "tirar todo por la borda!?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_15:
	.string "ANDRA: Muchas de las mayores\n"
	.string "atrocidades se han cometido bajo el\l"
	.string "respaldo de causas nobles.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_16:
	.string "GIOVANNI: Eso jamás ocurrirá,\n"
	.string "lucharemos para que el proceso se\l"
	.string "mantenga fiel a las ideas que lo han\l"
	.string "construido.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_17:
	.string "ANDRA: Eso espero.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_18:
	.string "Porque, además{PAUSE 25}…{PAUSE 25} aún quedan misterios\n"
	.string "por resolver en el mundo real.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_19:
	.string "Tenías razón, GIOVANNI.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_20:
	.string "DEVON iba tras REGIGIGAS; y en CÁMARA\n"
	.string "SELLADA enfrentamos algo de\l"
	.string "dimensiones similares a vuestro\l"
	.string "-PROYECTO ULTIMATE-.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_21:
	.string "OAK: ¿Dónde vas?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_22:
	.string "ANDRA: Nada me retiene ya aquí.\n"
	.string "Seguiré con mi búsqueda.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_23:
	.string "GIOVANNI: ¿Y este lugar?\n"
	.string "¿Qué hay de todo lo que has visto?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_24:
	.string "¡¿No sientes curiosidad por saber qué\n"
	.string "se siente al manejar este poder?!$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_25:
	.string "ANDRA: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_26:
	.string "Dime una cosa.\n"
	.string "¿Dónde ha quedado tu RHYPERIOR-&?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_27:
	.string "GIOVANNI: No{PAUSE 25}…{PAUSE 25} era{PAUSE 25}…{PAUSE 25} lo bastante fuerte.\n"
	.string "Se quedó atrás.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_28:
	.string "ANDRA: Ahí tienes la respuesta: no hay\n"
	.string "lugar aquí para mí.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_29:
	.string "OAK: Puede que esta sea precisamente\n"
	.string "la forma en la que más puede contribuir\l"
	.string "a nuestros avances.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_30:
	.string "GIOVANNI: ¿Sí?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_31:
	.string "¡¿Qué?!{PAUSE 55}…{PAUSE 55} entendido{PAUSE 45}…{PAUSE 45} inmediatamente{PAUSE 35}…{PAUSE 35}$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_32:
	.string "OAK: ¿De qué se trata?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_33:
	.string "GIOVANNI: El PRESIDENTE de DEVON.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_34:
	.string "Está haciendo un gran anuncio\n"
	.string "en CIUDAD ALGARIA.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_35:
	.string "Está en todas partes, ¡rápido, conectad\n"
	.string "cualquier cadena a la tele!$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_36:
	.string "A las vísperas del nuevo milenio, me\n"
	.string "complace anunciar que tenemos todo\l"
	.string "listo para realizar el primer despegue.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_37:
	.string "La historia de HOENN se ha escrito en\n"
	.string "base a un insaciable anhelo por dominar\l"
	.string "la naturaleza, y alcanzar cotas más y\l"
	.string "más elevadas.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_38:
	.string "Ya nos hemos adentrado tanto en las\n"
	.string "profundidades de la tierra como del\l"
	.string "océano.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_39:
	.string "Ahora, continuando el legado que\n"
	.string "dejaron nuestros antepasados{PAUSE 25}…{PAUSE 25} es\l"
	.string "momento de adentrarnos en la infinitud\l"
	.string "del cielo.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_40:
	.string "Y ello tendrá lugar el 1 de enero del año\n"
	.string "2000; fecha simbólica que dará pie a\l"
	.string "una nueva era.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_41:
	.string "Tiempos interesantes nos ha tocado\n"
	.string "vivir. Larga vida a HOENN.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_42:
	.string "D.RASMUS: Traigo una orden de arresto y\n"
	.string "detención para la dueña del CASINO\l"
	.string "MALVALONA.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_43:
	.string "Es una peligrosa criminal, que ha\n"
	.string "interferido con el progreso de esta\l"
	.string "región.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_44:
	.string "Discúlpenos, pero lleva semanas sin\n"
	.string "aparecer por aquí. No sabemos nada de\l"
	.string "ella.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_45:
	.string "D.RASMUS: Lo suponía. En ese caso{PAUSE 15}…{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_46:
	.string "A partir ahora, el CASINO quedará a\n"
	.string "cargo de DEVON.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_47:
	.string "La primera medida será eliminar de la\n"
	.string "oferta todos esos POKÉMON no\l"
	.string "autóctonos.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_48:
	.string "HOENN se mantendrá pura y{PAUSE 15}…{PAUSE 15}\n"
	.string "bajo control.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_49:
	.string "Bueno, esto es VILLA RAÍZ.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_50:
	.string "¿Qué? ¿Te gusta?\n"
	.string "¡Aquí es donde vamos a vivir!$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_51:
	.string "Es un lugar pintoresco, pero creo que se\n"
	.string "puede vivir muy agusto aquí, ¿eh?$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_52:
	.string "¡Y además tienes tu propio cuarto!\n"
	.string "¡Entremos en casa!$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_53:
	.string "Este es mi número de teléfono.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_54:
	.string "Llámame si surge algo.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_55:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_56:
	.string "Espero que aprendas y\n"
	.string "madures con este viaje.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_57:
	.string "Porque, a pesar de todo{PAUSE 35}…{PAUSE 35} no hay más\n"
	.string "verdad afuera que en el reducido mundo\l"
	.string "sobre el que te moverás.$"

PalletTown_Laboratorio_S6_Combate_Ganado_Texto_58:
	.string "Nada de lo que verás será falso, solo\n"
	.string "estará{PAUSE 35}…{PAUSE 35} debidamente controlado.$"



