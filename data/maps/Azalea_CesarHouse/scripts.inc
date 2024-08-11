Azalea_CesarHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Azalea_CesarHouse_OnFrame
	.byte 0

Azalea_CesarHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 128, Azalea_CesarHouse_Evento_Mirto
	.2byte 0

AzaleaCesarHouse_1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 129
goto_if_gt AzaleaCesarHouse_1_2
msgbox AzaleaCesarHouse_1_Texto_1 MSGBOX_NPC
release
end

AzaleaCesarHouse_1_2::
msgbox AzaleaCesarHouse_1_Texto_2 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_3 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_4 MSGBOX_NPC
msgbox AzaleaCesarHouse_1_Texto_5 MSGBOX_NPC
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
fadescreen 1
delay 20
removeobject 1
fadescreen 0
end

AzaleaCesarHouse_1_Texto_1:
.string "Podrás encontrarle en el POZO\n"
	.string "SLOWPOKE, si lo derrotas vuelve\l"
	.string "aquí con el objeto que te dé, y\l"
	.string "habrá combate.$"

AzaleaCesarHouse_1_Texto_2:
.string "¿Y bien?$"

AzaleaCesarHouse_1_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

AzaleaCesarHouse_1_Texto_4:
.string "Oh{PAUSE 15}…{PAUSE 15}\n"
	.string "Impresionante, para nada esperaba\l"
	.string "que pudieras ganar, guarda\l"
	.string "bien esa SLOWBRONITA, joven,\l"
	.string "cualquier objeto capaz de expandir\l"
	.string "los límites de un POKÉMON es\l"
	.string "sagrado.$"

AzaleaCesarHouse_1_Texto_5:
.string "Dicho esto, te espero en el\n"
	.string "GIMNASIO. Cumpliré mi palabra y\l"
	.string "combatiré contigo, espero que des\l"
	.string "tu 100%.\l"
	.string "Te hará falta.$"



AzaleaCesarHouse_2::
end

Azalea_CesarHouse_Evento_Mirto::
lock
delay 15
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_2
waitmovement 0x0
special RemoveCameraObject
playbgm 438, FALSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_3
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_4
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_5
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_7
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_6
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_13
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 2
playse SE_EXIT
fadedefaultbgm
delay 40
playse SE_PIN
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_9
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_11
waitmovement 0x0
delay 40
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_13 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_14 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_16 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_17 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_19 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_20 MSGBOX_AUTOCLOSE
delay 40
setvar VAR_UNUSED_0x40F7, 129
@warpsilent MAP_AZALEA_CESAR_HOUSE, 5, 5
@waitstate
release
end

Azalea_CesarHouse_Evento_Mirto_Texto_1:
.string "????: Pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Usted cuenta también con un TIPO\l"
	.string "BICHO que ha sufrido el mismo\l"
	.string "proceso que el mío.$"

Azalea_CesarHouse_Evento_Mirto_Texto_2:
.string "???: Me temo que no pueden\n"
	.string "compararse, MIRTO, son dos TIPO\l"
	.string "BICHO, sí, y ambos se han visto\l"
	.string "afectados por el fuerte vínculo\l"
	.string "con su ENTRENADOR.$"

Azalea_CesarHouse_Evento_Mirto_Texto_3:
.string "MIRTO: Pero{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_4:
.string "La diferencia es que mi POKÉMON\n"
	.string "partía de 395 STATS BASE,\l"
	.string "elevándose hasta los 505 STATS\l"
	.string "BASE después del fuerte vínculo.\l"
	.string "Algo notable, más teniendo en\l"
	.string "cuenta su bajísimo ATAQUE, pero{PAUSE 15}…{PAUSE 15}\l"
	.string "no ha cruzado ningún límite que\l"
	.string "conozcamos.$"

Azalea_CesarHouse_Evento_Mirto_Texto_5:
.string "Tu POKÉMON, en cambio, tenía ya\n"
	.string "550 STATS BASE antes incluso de\l"
	.string "experimentar el fuerte vínculo. Lo\l"
	.string "que ha resultado de juntar un\l"
	.string "POKÉMON como el tuyo, que de base\l"
	.string "puede codearse con un LEGENDARIO,\l"
	.string "y el fuerte vínculo, es algo que\l"
	.string "ha alcanzado límites desconocidos\l"
	.string "para un POKÉMON mortal. Una\l"
	.string "aberración en términos de poder.$"

Azalea_CesarHouse_Evento_Mirto_Texto_6:
.string "En todos mis libros y años de\n"
	.string "experiencia jamás he visto algo\l"
	.string "así. A tu POKÉMON se le ha\l"
	.string "concedido el don de brillar más\l"
	.string "que a ningún otro NO LEGENDARIO,\l"
	.string "pero también está destinado a\l"
	.string "apagarse antes, una cosa lleva a\l"
	.string "la otra.$"

Azalea_CesarHouse_Evento_Mirto_Texto_7:
.string "MIRTO: {PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_8:
.string "¿No hay{PAUSE 25}…{PAUSE 25} nada{PAUSE 25}…{PAUSE 25} que pueda hacer?$"

Azalea_CesarHouse_Evento_Mirto_Texto_9:
.string "????: Yo no puedo ayudarte, lo\n"
	.string "siento. Pero{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_10:
.string "En JOHTO hay gente muy sabia. No\n"
	.string "soy el único ENTRENADOR con un\l"
	.string "POKÉMON así. Te recomieno visitar\l"
	.string "la FARMACIA de CIUDAD ORQUÍDEA, y\l"
	.string "CIUDAD IRIS. Hay gente allí que\l"
	.string "quizás sí pueda ayudarte.$"

Azalea_CesarHouse_Evento_Mirto_Texto_11:
.string "MIRTO: Muchas gracias CÉSAR, no\n"
	.string "perderé un solo segundo. Llegaré\l"
	.string "hasta el último rincón de JOHTO si\l"
	.string "es necesario.$"

Azalea_CesarHouse_Evento_Mirto_Texto_12:
.string "CÉSAR: Vaya, chico, se te ve\n"
	.string "bastante interesado en el tema.\l"
	.string "¿Querías algo?\l"
	.string "¡Pasa!$"

Azalea_CesarHouse_Evento_Mirto_Texto_13:
.string "¿Así que retarme a un combate?\n"
	.string "Debes saber que estoy retirado. El\l"
	.string "GIMNASIO lo tengo por mis alumnos,\l"
	.string "pero a partir de ahora me dedicaré\l"
	.string "a cultivar BONGURIS y criar a mi\l"
	.string "pequeña nieta.$"

Azalea_CesarHouse_Evento_Mirto_Texto_14:
.string "Comprenderás que sería injusto\n"
	.string "aceptar combatir contra ti cuando\l"
	.string "he rechazado al resto de\l"
	.string "contendientes.$"

Azalea_CesarHouse_Evento_Mirto_Texto_15:
.string "Aunque{PAUSE 15}…{PAUSE 15}\n"
	.string "Pareces venir de muy lejos,\l"
	.string "y ser un apasionado del\l"
	.string "combate, al igual que MIRTO o\l"
	.string "yo mismo.$"

Azalea_CesarHouse_Evento_Mirto_Texto_16:
.string "Te daré una oportunidad de\n"
	.string "combatir conmigo, pero tendrás que\l"
	.string "demostrarme que estás a la altura.\l"
	.string "Escucha.$"

Azalea_CesarHouse_Evento_Mirto_Texto_17:
.string "A un buen amigo mío le encanta\n"
	.string "pasear por el POZO SLOWPOKE, suele\l"
	.string "estar en lo más profundo del\l"
	.string "lugar, es un experto en SLOWPOKE y\l"
	.string "toda su línea evolutiva, sabe todo\l"
	.string "sobre ese POKÉMON.$"

Azalea_CesarHouse_Evento_Mirto_Texto_18:
.string "También es un buen ENTRENADOR, el\n"
	.string "único con el que puedo medio\l"
	.string "combatir en serio de los\l"
	.string "alrededores.$"

Azalea_CesarHouse_Evento_Mirto_Texto_19:
.string "Si quieres ese combate, deberás\n"
	.string "derrotarle antes a él, dile que\l"
	.string "vas de mi parte, si puedes con él,\l"
	.string "te dará un objeto, un objeto\l"
	.string "especial.$"

Azalea_CesarHouse_Evento_Mirto_Texto_20:
.string "Solo tendrás que regresar aquí con\n"
	.string "dicho objeto, como prueba de tu\l"
	.string "victoria, y accederé a luchar\l"
	.string "contigo en el GIMNASIO.$"

Azalea_CesarHouse_Evento_Mirto_Move_1:
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_3:
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_4:
walk_up
walk_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_5:
walk_down
walk_down
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_7:
delay_16
delay_16
walk_right
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_8:
walk_left
walk_down
walk_left
walk_down
walk_down
walk_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_9:
emote_exclamation_mark
face_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_10:
face_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_11:
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_12:
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_13:
walk_left
step_end
