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
	.string "You can encounter him in the SLOWPOKE\n"
	.string "WELL. If you defeat him, come back here\l"
	.string "with the item it gives you, and there\l"
	.string "will be a battle.$"

AzaleaCesarHouse_1_Texto_2:
.string "And so?$"

AzaleaCesarHouse_1_Texto_3:
.string "…$"

AzaleaCesarHouse_1_Texto_4:
	.string "Oh… Impressive, I didn't expect you to\n"
	.string "win at all. Keep that SLOWBRONITE safe,\l"
	.string "young one. Any item capable of\l"
	.string "expanding a POKÉMON's limits is sacred.$"

AzaleaCesarHouse_1_Texto_5:
	.string "Once I said that, I'll be waiting for you\n"
	.string "at the GYM. I'll keep my word and battle\l"
	.string "you, so I hope you do your 100%. You'll\l"
	.string "need it.$"



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
setvar VAR_UNUSED_0x40F7, 129
release
end

Azalea_CesarHouse_Evento_Mirto_Texto_1:
	.string "????: But… You also have a BUG TYPE\n"
	.string "that has undergone the same process as\l"
	.string "mine.$"

Azalea_CesarHouse_Evento_Mirto_Texto_2:
	.string "????: I'm afraid they can't be compared,\n"
	.string "ALDER, they're two BUG types, yes, and\l"
	.string "both have been affected by the DEEP\l"
	.string "BOND with their TRAINER.$"

Azalea_CesarHouse_Evento_Mirto_Texto_3:
.string "ALDER: But…$"

Azalea_CesarHouse_Evento_Mirto_Texto_4:
	.string "The difference is that my POKÉMON\n"
	.string "started with 395 BASE STATS, rising to\l"
	.string "505 BASE STATS after the strong bond.\l"
	.string "Quite remarkable, especially\l"
	.string "considering its very low ATTACK, but… it\l"
	.string "hasn't crossed any known limits.$"

Azalea_CesarHouse_Evento_Mirto_Texto_5:
	.string "Your POKÉMON, on the other hand,\n"
	.string "already had 550 BASE STATS even before\l"
	.string "experiencing the DEEP BOND. What has\l"
	.string "resulted from combining a POKÉMON like\l"
	.string "yours, which at its base can rival a\l"
	.string "LEGENDARY, and the DEEP BOND, is\l"
	.string "something that has reached unknown\l"
	.string "limits for a mortal POKÉMON. An\l"
	.string "aberration in terms of power.$"

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
.string "MIRTO: …$"

Azalea_CesarHouse_Evento_Mirto_Texto_8:
.string "¿No hay… nada… que pueda hacer?$"

Azalea_CesarHouse_Evento_Mirto_Texto_9:
.string "????: Yo no puedo ayudarte, lo\n"
	.string "siento. Pero…$"

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
.string "Aunque…\n"
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
