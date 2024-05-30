Guardia_Cave_2_MapScripts::
	.byte 0

Guardia_Cave_2_Sachiko_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Fuji_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Sachiko_Fuji_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_3
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 15, Sachiko_Fuji_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, Sachiko_Fuji_Move_4
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_9 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HOENN_41
removeobject 16
removeobject 15
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Sachiko_Fuji_Move_5.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_ROUTE120_STATE, 10
release
end

Sachiko_Fuji_Move_5.1:
walk_up
walk_up
walk_up
walk_up
step_end

Sachiko_Fuji_Move_5:
walk_down
walk_down
walk_down
walk_down
step_end

Sachiko_Fuji_Move_4:
walk_in_place_right
step_end

Sachiko_Fuji_Move_3:
face_left
step_end

Sachiko_Fuji_Move_2:
face_down
step_end

Sachiko_Fuji_Move_1:
walk_in_place_left
step_end

Guardia_Cave_2_Sachiko_Fuji_Texto_1:
	.string "SACHIKO: Oh… Entonces, por eso ahora\n"
	.string "este lugar está lleno de CUBONE,\l"
	.string "MAROWAK y KANGASKHAN.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_2:
	.string "Desconocía toda la historia de la\n"
	.string "antigua TORRE POKÉMON, y la línea\l"
	.string "evolutiva que une a estos POKÉMON.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_3:
	.string "FUJI: Así es, jovencita. Las crías de\n"
	.string "CUBONE cuyas madres siguen con vida,\l"
	.string "acabarán convirtiéndose en\l"
	.string "KANGASKHAN.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_4:
	.string "Es por eso que en este lugar están\n"
	.string "apareciendo cada vez más, han\l"
	.string "encontrado un hábitat en el que al fin\l"
	.string "pueden prosperar.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_5:
	.string "Que tanto mi MAROWAK como tu\n"
	.string "KANGASKHAN hayan detectado esto es\l"
	.string "fascinante.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_6:
	.string "Es como si… toda esa línea evolutiva\n"
	.string "hubiera desarrollado una especie de\l"
	.string "mente colectiva, que le impulsara a\l"
	.string "construir este inmenso túnel.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_7:
	.string "SACHIKO: Es incluso más grande que\n"
	.string "CUEVA DIGGLET, ¿cree que llegará a\l"
	.string "alguna parte?$"

Guardia_Cave_2_Sachiko_Fuji_Texto_8:
	.string "FUJI: No lo sé, jovencita. Solo sé que si\n"
	.string "nuestros POKÉMON nos han guiado hasta\l"
	.string "aquí, es porque confían en nosotros.\l"
	.string "Tenemos que estar a la altura.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_9:
	.string "SACHIKO: ¡No se preocupe, SR.FUJI! ¡No\n"
	.string "fallaré a mis POKÉMON!$"

Guardia_Cave_Combate_Marowak_2::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_665, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Guardia_Cave_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_ROUTE120_STATE, 11
release
end

Combate_Sachiko_Move_1:
walk_in_place_left
step_end

Combate_Sachiko_Move_2:
walk_slow_left
step_end

Combate_Sachiko_Move_3:
emote_exclamation_mark
step_end

Combate_Sachiko_Move_4:
delay_16
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_left
delay_16
step_end

Combate_Sachiko_Move_5:
walk_down
walk_down
walk_left
step_end

Combate_Sachiko_Move_6:
walk_down
walk_down
walk_left
step_end

Combate_Sachiko_Move_6.1:
walk_up
walk_up
walk_right
step_end

Combate_Sachiko_Move_7:
face_right
step_end

Combate_Sachiko_Move_8:
walk_in_place_right
step_end

Combate_Sachiko_Move_9:
walk_in_place_down
step_end

Combate_Sachiko_Move_10:
delay_16
face_right
delay_16
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_8
step_end

Combate_Sachiko_Move_11:
face_left
step_end

Combate_Sachiko_Move_12:
walk_slow_left
face_up
step_end

Combate_Sachiko_Move_13:
delay_16
face_down
step_end

Combate_Sachiko_Move_14:
face_right
delay_16
face_down
delay_16
step_end

Combate_Sachiko_Move_15:
walk_in_place_up
step_end

Combate_Sachiko_Move_16:
walk_slow_up
step_end


Guardia_Cave_2_Combate_Sachiko::
lock
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Combate_Sachiko_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_2 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_2
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 20, Combate_Sachiko_Move_3
waitmovement 0x0
applymovement 20, Combate_Sachiko_Move_2
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_4 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_4
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 23, Combate_Sachiko_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_3
waitmovement 0x0
delay 10
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Combate_Sachiko_Move_6.1
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_5
applymovement 23, Combate_Sachiko_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_8 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_9 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_2
waitmovement 0x0
playse SE_BREAKABLE_DOOR
applymovement 20, Combate_Sachiko_Move_8
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_12 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 20, Combate_Sachiko_Move_9
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_13 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_10
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_652, Guardia_Cave_2_Combate_Sachiko_Texto_15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_16 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_11
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_17 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_13
applymovement 23, Combate_Sachiko_Move_12
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 20, Combate_Sachiko_Move_3
waitmovement 0x0
delay 10
applymovement 20, Combate_Sachiko_Move_14
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_20 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_15
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_23 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_11
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_25 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_15
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_26 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_13
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_28 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 20, Combate_Sachiko_Move_3
waitmovement 0x0
delay 10
applymovement 20, Combate_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_29 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_21
applymovement 20, Combate_Sachiko_Move_16
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_31 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_15
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_32 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_13
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_33 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 23, Combate_Sachiko_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_3
waitmovement 0x0
delay 10
applymovement 23, Combate_Sachiko_Move_15
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_34 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_11
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_35 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_9
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_36 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_11
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_37 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_12
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_38 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_15
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_40 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_41 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_13
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_42 MSGBOX_AUTOCLOSE
applymovement 20, Combate_Sachiko_Move_17
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_43 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Combate_Sachiko_Move_11
waitmovement 0x0
applymovement 23, Combate_Sachiko_Move_19
applymovement 20, Combate_Sachiko_Move_18
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_45 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_46 MSGBOX_AUTOCLOSE
delay 15
applymovement 23, Combate_Sachiko_Move_7
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_47 MSGBOX_AUTOCLOSE
delay 15
applymovement 23, Combate_Sachiko_Move_8
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_48 MSGBOX_AUTOCLOSE
delay 15
applymovement 23, Combate_Sachiko_Move_11
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_49 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Sachiko_Texto_50 MSGBOX_AUTOCLOSE
applymovement 23, Combate_Sachiko_Move_20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Combate_Sachiko_Move_6.1
waitmovement 0x0
special RemoveCameraObject
delay 55
setflag FLAG_HOENN_42
removeobject 20
removeobject 23
setvar VAR_ROUTE120_STATE, 12
release
end

Combate_Sachiko_Move_21:
face_up
step_end

Combate_Sachiko_Move_20:
walk_left
walk_left
walk_down
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

Combate_Sachiko_Move_19:
delay_16
face_up
delay_16
delay_16
face_left
step_end

Combate_Sachiko_Move_18:
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Combate_Sachiko_Move_17:
delay_16
face_left
delay_16
delay_16
walk_in_place_left
step_end

Guardia_Cave_2_Combate_Sachiko_Texto_1:
	.string "FUJI: Fíjate, ahora hay más KANGASKHAN\n"
	.string "que antes, es increíble.$"

Guardia_Cave_2_Combate_Sachiko_Texto_2:
	.string "SACHIKO: Sí, qué raro. ¿Cuál será la\n"
	.string "razón?$"

Guardia_Cave_2_Combate_Sachiko_Texto_3:
	.string "… …$"

Guardia_Cave_2_Combate_Sachiko_Texto_4:
	.string "Ese KANGASKHAN…$"

Guardia_Cave_2_Combate_Sachiko_Texto_5:
	.string "FUJI… {PLAYER}... Yo me encargaré de\n"
	.string "esto.$"

Guardia_Cave_2_Combate_Sachiko_Texto_6:
	.string "FUJI: ¡¿Q-Qué?!$"

Guardia_Cave_2_Combate_Sachiko_Texto_7:
	.string "¿Qué quieres decir con me encargaré?$"

Guardia_Cave_2_Combate_Sachiko_Texto_8:
	.string "SACHIKO: Que tengo una corazonada. Si\n"
	.string "se confirma, solo yo puedo seguir\l"
	.string "avanzando.$"

Guardia_Cave_2_Combate_Sachiko_Texto_9:
	.string "FUJI: Oye jovencita, hemos llegado\n"
	.string "hasta aquí contigo. ¿No confías en\l"
	.string "nosotros?$"

Guardia_Cave_2_Combate_Sachiko_Texto_10:
	.string "SACHIKO: ¡No es eso! Es que no puedo…\n"
	.string "¡no puedo dejaros seguir!$"

Guardia_Cave_2_Combate_Sachiko_Texto_11:
	.string "¡{PLAYER}! ¡No avances más!$"

Guardia_Cave_2_Combate_Sachiko_Texto_12:
	.string "FUJI: SACHIKO, tranquilízate.$"

Guardia_Cave_2_Combate_Sachiko_Texto_13:
	.string "SACHIKO: ¡No, no lo entendéis!$"

Guardia_Cave_2_Combate_Sachiko_Texto_14:
	.string "No me dejas elección. Hice una promesa,\n"
	.string "¡y la cumpliré cueste lo que cueste!$"

Guardia_Cave_2_Combate_Sachiko_Texto_15:
	.string "Perdóname, padre…$"

Guardia_Cave_2_Combate_Sachiko_Texto_16:
	.string "No… no puede ser… He fallado.$"

Guardia_Cave_2_Combate_Sachiko_Texto_17:
	.string "Si no puedo proteger este lugar, ¿con\n"
	.string "qué cara voy a presentarme como LÍDER\l"
	.string "de CIUDAD FUCSIA? No merezco tener ese\l"
	.string "puesto.$"

Guardia_Cave_2_Combate_Sachiko_Texto_18:
	.string "FUJI: ¡Oh, vamos chica! ¿LÍDER DE\n"
	.string "GIMNASIO?$"

Guardia_Cave_2_Combate_Sachiko_Texto_19:
	.string "{PLAYER} es el mejor ENTRENADOR no\n"
	.string "solo de KANTO, también de JOHTO. Es más\l"
	.string "fuerte que el ALTO MANDO y cualquier\l"
	.string "CAMPEÓN de la LIGA.$"

Guardia_Cave_2_Combate_Sachiko_Texto_20:
	.string "SACHIKO: ¡¿C-cómo?!$"

Guardia_Cave_2_Combate_Sachiko_Texto_21:
	.string "FUJI: Deberías estar orgullosa de\n"
	.string "haber plantado cara al mejor\l"
	.string "ENTRENADOR de nuestra época.$"

Guardia_Cave_2_Combate_Sachiko_Texto_22:
	.string "MAROWAK y yo hemos quedado\n"
	.string "impresionados con tu KANGASKHAN. ¡Qué\l"
	.string "vigor y poderío!$"

Guardia_Cave_2_Combate_Sachiko_Texto_23:
	.string "Cuando veo jóvenes que cuidan así de\n"
	.string "bien sus POKÉMON, recupero las\l"
	.string "esperanzas en las nuevas generaciones.$"

Guardia_Cave_2_Combate_Sachiko_Texto_24:
	.string "SACHIKO: Todo eso… no importa. Hice una\n"
	.string "promesa, y he fallado. Ya no puedo\l"
	.string "evitar que sigáis y mis temores se\l"
	.string "cumplan.$"

Guardia_Cave_2_Combate_Sachiko_Texto_25:
	.string "FUJI: ¿Evitar qué? Chica… {PLAYER}\n"
	.string "es de fiar, sus acciones se mantuvieron\l"
	.string "puras cuando pudo haber abusado de su\l"
	.string "poder.$"

Guardia_Cave_2_Combate_Sachiko_Texto_26:
	.string "Yo llevo años trabajando por proteger a\n"
	.string "POKÉMON como estos, no tienes nada que\l"
	.string "temer.$"

Guardia_Cave_2_Combate_Sachiko_Texto_27:
	.string "SACHIKO: {PLAYER}… ¿{PLAYER} es…?\n"
	.string "¡¿Es el que derrotó a LANCE?!$"

Guardia_Cave_2_Combate_Sachiko_Texto_28:
	.string "FUJI: ¡El mismo!$"

Guardia_Cave_2_Combate_Sachiko_Texto_29:
	.string "SACHIKO: Comprendo… En ese caso… Os\n"
	.string "contaré lo que sé. De todos modos,\l"
	.string "no tengo otra opción.$"

Guardia_Cave_2_Combate_Sachiko_Texto_30:
	.string "El KANGASKHAN que véis ahí...$"

Guardia_Cave_2_Combate_Sachiko_Texto_31:
	.string "No es un KANGASKHAN que haya\n"
	.string "evolucionado de una cría de MAROWAK\l"
	.string "aquí, en el TÚNEL ROCA.$"

Guardia_Cave_2_Combate_Sachiko_Texto_32:
	.string "FUJI: ¿Cómo lo sabes?$"

Guardia_Cave_2_Combate_Sachiko_Texto_33:
	.string "SACHIKO: Porque… ya lo he visto antes.\n"
	.string "En… la ZONA SAFARI.$"

Guardia_Cave_2_Combate_Sachiko_Texto_34:
	.string "FUJI: ¿ZONA SAFARI? ¡¿Cómo es\n"
	.string "posible?!$"

Guardia_Cave_2_Combate_Sachiko_Texto_35:
	.string "SACHIKO: No lo sé, pero ahora que\n"
	.string "caigo… este túnel ha recorrido ya media\l"
	.string "región al suroeste, no debemos estar\l"
	.string "tan lejos…$"

Guardia_Cave_2_Combate_Sachiko_Texto_36:
	.string "Si este KANGASKHAN está aquí, quiere\n"
	.string "decir que estamos cerca de ZONA\l"
	.string "SAFARI, y el TÚNEL está terminado.$"

Guardia_Cave_2_Combate_Sachiko_Texto_37:
	.string "FUJI: Por eso hay más KANGASKHAN aquí,\n"
	.string "porque desde ZONA SAFARI también\l"
	.string "estaban cavando en la dirección\l"
	.string "contraria…$"

Guardia_Cave_2_Combate_Sachiko_Texto_38:
	.string "Todos los investigadores ahora mismo\n"
	.string "se tirarían de los pelos.$"

Guardia_Cave_2_Combate_Sachiko_Texto_39:
	.string "Ambas líneas evolutivas, a kilómetros\n"
	.string "de distancia, estaban perfectamente\l"
	.string "sincronizadas, tanto que han logrado\l"
	.string "unir ambos túneles en uno solo.$"

Guardia_Cave_2_Combate_Sachiko_Texto_40:
	.string "SACHIKO: Si es cierto, llegaremos a ZONA\n"
	.string "SAFARI…$"

Guardia_Cave_2_Combate_Sachiko_Texto_41:
	.string "FUJI: ¿Cúal es el problema?$"

Guardia_Cave_2_Combate_Sachiko_Texto_42:
	.string "SACHIKO: N-Ninguno. Por ahora es solo\n"
	.string "una suposición, hay que confirmarlo\l"
	.string "aún.$"

Guardia_Cave_2_Combate_Sachiko_Texto_43:
	.string "Sigamos.$"

Guardia_Cave_2_Combate_Sachiko_Texto_44:
	.string "FUJI: ZONA SAFARI cerró hace meses.\n"
	.string "Hay algo ahí que quiere ocultar, no hay\l"
	.string "duda. Pero no seré yo quién indague en\l"
	.string "ese asunto.$"

Guardia_Cave_2_Combate_Sachiko_Texto_45:
	.string "Esa chica… se aferra a sus ideales con\n"
	.string "gran tenacidad.$"

Guardia_Cave_2_Combate_Sachiko_Texto_46:
	.string "Es un tesoro para KANTO, y con esos\n"
	.string "valores, no me cabe duda de que habrá\l"
	.string "nobles razones detrás.$"

Guardia_Cave_2_Combate_Sachiko_Texto_47:
	.string "Tenemos que ayudarla, {PLAYER}.$"

Guardia_Cave_2_Combate_Sachiko_Texto_48:
	.string "Porque, ahora mismo, siento una mezcla\n"
	.string "entre terror y asombro.$"

Guardia_Cave_2_Combate_Sachiko_Texto_49:
	.string "Haber logrado algo como esto, un TÚNEL\n"
	.string "que duplica en tamaño el de los\l"
	.string "DIGLETT… es imposible sin una enorme\l"
	.string "fuerza detrás.$"

Guardia_Cave_2_Combate_Sachiko_Texto_50:
	.string "Puede que, después de todo, un nuevo\n"
	.string "lugar no sea lo único que descubramos\l"
	.string "en este viaje.$"

Combate_Guardia_Move_1:
walk_in_place_up
step_end

Combate_Guardia_Move_2:
emote_exclamation_mark
step_end

Combate_Guardia_Move_3:
walk_up
walk_up
face_left
step_end

Combate_Guardia_Move_4:
delay_16
delay_16
face_right
step_end

Combate_Guardia_Move_5:
face_up
step_end

Combate_Guardia_Move_6:
walk_in_place_left
delay_16
walk_slow_up
walk_slow_up
delay_16
step_end

Combate_Guardia_Move_7:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

Combate_Guardia_Move_8:
walk_slow_up
step_end

Combate_Guardia_Move_9:
delay_16
face_right
delay_16
step_end

Combate_Guardia_Move_10:
walk_fast_up
lock_facing_direction
walk_fast_down
unlock_facing_direction
step_end

Combate_Guardia_Move_11:
walk_fast_down
lock_facing_direction
walk_fast_up
unlock_facing_direction
step_end

Combate_Guardia_Move_12:
walk_in_place_left
step_end

Combate_Guardia_Move_13:
walk_fast_up
face_left
step_end

Guardia_Cave_2_Combate_Guardia::
lock
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_1
waitmovement 0x0
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_2
waitmovement 0x0
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
removeobject 31
delay 40
msgbox Guardia_Cave_2_Combate_Guardia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_3
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_6
waitmovement 0x0
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Guardia_Cave_2_Combate_Guardia_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_667, Guardia_Cave_2_Combate_Guardia_Texto_6
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_7 MSGBOX_AUTOCLOSE
waitmoncry
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_8 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_7
waitmovement 0x0
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_9 MSGBOX_DEFAULT
waitmoncry
applymovement 30, Combate_Guardia_Move_8
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_11 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_9
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_1
waitmovement 0x0
addobject 39
playse SE_BALL_THROW
waitse 
playse SE_BALL
waitse 
delay 15
playse SE_BALL_OPEN
removeobject 39
waitse
addobject 32
delay 10
msgbox Guardia_Cave_2_Combate_Guardia_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_14 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
waitmoncry
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
waitmoncry
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
waitmoncry
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_15.1 MSGBOX_DEFAULT
waitmoncry
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_15 MSGBOX_DEFAULT
waitmoncry
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
delay 10
applymovement 29, Combate_Guardia_Move_12
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_16 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 30, Combate_Guardia_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
delay 15
applymovement 29, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_17.1 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_18 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_19 MSGBOX_DEFAULT
waitmoncry
applymovement 32, Combate_Guardia_Move_10
playse SE_EFFECTIVE
waitse
waitmovement 0x0
waitmoncry
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
waitmoncry
applymovement 32, Combate_Guardia_Move_10
playse SE_NOT_EFFECTIVE
waitse
waitmovement 0x0
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_5 MSGBOX_DEFAULT
waitmoncry
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_20 MSGBOX_AUTOCLOSE
applymovement 22, Combate_Guardia_Move_11
playse SE_SUPER_EFFECTIVE
waitse
waitmovement 0x0
applymovement 29, Combate_Guardia_Move_13
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_21 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_22 MSGBOX_DEFAULT
waitmoncry
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
msgbox Guardia_Cave_2_Combate_Guardia_Texto_23 MSGBOX_AUTOCLOSE
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
delay 5
removeobject 40
addobject 32
delay 5
removeobject 32
addobject 40
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_2_Combate_Guardia_Texto_24 MSGBOX_DEFAULT
waitmoncry
playse SE_PIN
applymovement 22, Combate_Guardia_Move_2
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_25 MSGBOX_AUTOCLOSE
delay 30
applymovement 30, Combate_Guardia_Move_14
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_28 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_30 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_32 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_9
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_33 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_34 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_35 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_36 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_15
waitmovement 0x0
playse SE_BALL_OPEN
removeobject 40
addobject 39
waitse
delay 15
playse SE_BALL
waitse
delay 15
removeobject 39
delay 15
applymovement 30, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_37 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 29, Combate_Guardia_Move_2
waitmovement 0x0
delay 15
applymovement 29, Combate_Guardia_Move_16
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_39 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_5
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_40 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_41 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_1
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_42 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_16
waitmovement 0x0
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_43 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_9
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Combate_Guardia_Texto_45 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_17
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_46 MSGBOX_AUTOCLOSE
applymovement 29, Combate_Guardia_Move_12
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_47 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Combate_Guardia_Move_19
applymovement 30, Combate_Guardia_Move_19
applymovement 29, Combate_Guardia_Move_18
waitmovement 0x0
msgbox Guardia_Cave_2_Combate_Guardia_Texto_48 MSGBOX_AUTOCLOSE
applymovement 30, Combate_Guardia_Move_20
waitmovement 0x0
setflag FLAG_HOENN_43
removeobject 30
removeobject 29
setvar VAR_ROUTE120_STATE, 14
release
end

Combate_Guardia_Move_20:
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Combate_Guardia_Move_19:
face_right
delay_16
delay_16
face_down
delay_16
delay_16
face_left
step_end


Combate_Guardia_Move_18:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
step_end


Combate_Guardia_Move_17:
delay_16
face_down
delay_16
face_left
delay_16
walk_in_place_left
step_end

Combate_Guardia_Move_16:
face_left
step_end

Combate_Guardia_Move_15:
walk_in_place_right
step_end

Combate_Guardia_Move_14:
walk_slow_up
face_right
step_end

Guardia_Cave_2_Combate_Guardia_Texto_1:
	.string "SACHIKO: ¡Oh! KANGASKHAN…$"

Guardia_Cave_2_Combate_Guardia_Texto_2:
	.string "FUJI: ¡{PLAYER}! Este POKÉMON…en el\n"
	.string "momento en el que nos vio, actuó con\l"
	.string "una ira desmedida.$"

Guardia_Cave_2_Combate_Guardia_Texto_3:
	.string "Tanto que ni el KANGASKHAN de SACHIKO\n"
	.string "ha podido con él, ahora mismo está\l"
	.string "descontrolado.$"

Guardia_Cave_2_Combate_Guardia_Texto_4:
	.string "No hay duda de que pertenece a la línea\n"
	.string "evolutiva MAROWAK-KANGASKHAN. En\l"
	.string "estas condiciones, lo mejor es que tú te\l"
	.string "hagas cargo.$"

Guardia_Cave_2_Combate_Guardia_Texto_5:
	.string "¡Guar!$"

Guardia_Cave_2_Combate_Guardia_Texto_6:
	.string "Guar…$"

Guardia_Cave_2_Combate_Guardia_Texto_7:
	.string "Guar…$"

Guardia_Cave_2_Combate_Guardia_Texto_8:
	.string "SACHIKO: ¡Menudo combate, lo has\n"
	.string "derrot…!$"

Guardia_Cave_2_Combate_Guardia_Texto_9:
	.string "¡G-u-a-r!$"

Guardia_Cave_2_Combate_Guardia_Texto_10:
	.string "FUJI: Parece que al POKÉMON no le\n"
	.string "quedan fuerzas para combatir, pero… a\l"
	.string "pesar de ello, se niega a rendirse.$"

Guardia_Cave_2_Combate_Guardia_Texto_11:
	.string "Ese característico brillo en los ojos,\n"
	.string "esa tenacidad… la reconozco muy bien.\l"
	.string "Luchará por este lugar hasta las\l"
	.string "últimas consecuencias.$"

Guardia_Cave_2_Combate_Guardia_Texto_12:
	.string "El KANGASKHAN de SACHIKO no te hizo\n"
	.string "entrar en razón, pero puede que mi\l"
	.string "MAROWAK sí lo haga.$"

Guardia_Cave_2_Combate_Guardia_Texto_13:
	.string "¡MAROWAK!$"

Guardia_Cave_2_Combate_Guardia_Texto_14:
	.string "¡Wak!$"

Guardia_Cave_2_Combate_Guardia_Texto_15:
	.string "¡Guar!$"

Guardia_Cave_2_Combate_Guardia_Texto_15.1:
	.string "Mar…$"

Guardia_Cave_2_Combate_Guardia_Texto_15.2:
	.string "¡Mar!$"

Guardia_Cave_2_Combate_Guardia_Texto_16:
	.string "SACHIKO: ¡{PLAYER}, haz algo! ¡El\n"
	.string "MAROWAK de FUJI va a quedar seriamente\l"
	.string "dañado si no intervenimos!$"

Guardia_Cave_2_Combate_Guardia_Texto_17:
	.string "FUJI: ¡No!$"
	
Guardia_Cave_2_Combate_Guardia_Texto_17.1:
	.string "Mi MAROWAK se ha expuesto a\n"
	.string "situaciones extremas desde que nació\l"
	.string "y, a pesar de ello, sigue aquí, con\l"
	.string "nosotros.$"

Guardia_Cave_2_Combate_Guardia_Texto_18:
	.string "Como yo, es un superviviente. No caerá\n"
	.string "ante un POKÉMON de su misma especie.$"

Guardia_Cave_2_Combate_Guardia_Texto_19:
	.string "¡Wak!$"

Guardia_Cave_2_Combate_Guardia_Texto_20:
	.string "SACHIKO: ¡Esto es una masacre!$"

Guardia_Cave_2_Combate_Guardia_Texto_21:
	.string "¡No pued…!$"

Guardia_Cave_2_Combate_Guardia_Texto_22:
	.string "¡Wak!$"

Guardia_Cave_2_Combate_Guardia_Texto_23:
	.string "Está… ¡¿evolucionando otra vez?!$"

Guardia_Cave_2_Combate_Guardia_Texto_24:
	.string "¡Guar!$"

Guardia_Cave_2_Combate_Guardia_Texto_25:
	.string "¿G-Guar?$"

Guardia_Cave_2_Combate_Guardia_Texto_26:
	.string "FUJI: Uffff… Ha estado cerca, MAROWAK…\n"
	.string "Pero no esta vez.$"

Guardia_Cave_2_Combate_Guardia_Texto_27:
	.string "Mis sospechas se han confirmado.$"

Guardia_Cave_2_Combate_Guardia_Texto_28:
	.string "SACHIKO: ¿Qué ha ocurrido?$"

Guardia_Cave_2_Combate_Guardia_Texto_29:
	.string "FUJI: Es triste decirlo, SACHIKO, pero\n"
	.string "casi todos los MAROWAK fallecen antes\l"
	.string "de alcanzar su plena edad adulta.$"

Guardia_Cave_2_Combate_Guardia_Texto_30:
	.string "SACHIKO: ¿Quiere decir entonces…?$"

Guardia_Cave_2_Combate_Guardia_Texto_31:
	.string "FUJI: Este MAROWAK se ha enfrentado a\n"
	.string "más penurias que ningún otro, sin\l"
	.string "perecer en el proceso. Producto de ello,\l"
	.string "alcanzó el suficiente nivel como para\l"
	.string "evolucionar de nuevo.$"

Guardia_Cave_2_Combate_Guardia_Texto_32:
	.string "Como resultado, tenemos un POKÉMON con\n"
	.string "un cuerpo similar al de un KANGASKHAN\l"
	.string "adulto, pero curtido por la dura vida de\l"
	.string "los MAROWAK.$"

Guardia_Cave_2_Combate_Guardia_Texto_33:
	.string "Que mi MAROWAK haya sido capaz de\n"
	.string "evolucionar también, le ha hecho\l"
	.string "confiar en nosotros.$"

Guardia_Cave_2_Combate_Guardia_Texto_34:
	.string "SACHIKO: Es como si, de algún modo,\n"
	.string "todas esas experiencias que han vivido,\l"
	.string "contribuyeran y enriquecieran al resto\l"
	.string "de su especie.$"

Guardia_Cave_2_Combate_Guardia_Texto_35:
	.string "Sirvieran de guía y faro. Como un\n"
	.string "guardián que vela por los suyos, para\l"
	.string "evitar que ellos pasen por lo mismo.$"

Guardia_Cave_2_Combate_Guardia_Texto_36:
	.string "FUJI: Puede que los poderes de GUARDIA\n"
	.string "sean mayores de los que creemos, y\l"
	.string "entre ellos esté la capacidad de crear\l"
	.string "una 'mente colectiva' que guíe a toda su\l"
	.string "línea evolutiva, que los una para\l"
	.string "trabajar juntos en un mismo objetivo.$"

Guardia_Cave_2_Combate_Guardia_Texto_37:
	.string "Es sorprendente, aunque efímero: no\n"
	.string "volveremos a ver más 'GUARDIA' en el\l"
	.string "futuro.$"

Guardia_Cave_2_Combate_Guardia_Texto_38:
	.string "SACHIKO: ¿Por qué?$"

Guardia_Cave_2_Combate_Guardia_Texto_39:
	.string "FUJI: Ahora que han creado este\n"
	.string "paraíso, las nuevas generaciones no\l"
	.string "pasarán por la cruz de convertirse en\l"
	.string "CUBONE.$"

Guardia_Cave_2_Combate_Guardia_Texto_40:
	.string "SACHIKO: La línea evolutiva se perderá\n"
	.string "entonces.$"

Guardia_Cave_2_Combate_Guardia_Texto_41:
	.string "FUJI: Así es. La naturaleza es\n"
	.string "reservada: sin tiempos difíciles, la\l"
	.string "existencia de este POKÉMON carece de\l"
	.string "sentido.$"

Guardia_Cave_2_Combate_Guardia_Texto_42:
	.string "SACHIKO: Supongo que… debería\n"
	.string "alegrarme. Significa que las crías de\l"
	.string "KANGASKHAN no sufrirán más.$"

Guardia_Cave_2_Combate_Guardia_Texto_43:
	.string "Aunque… por otro lado, no puedo evitar\n"
	.string "sentir cierta tristeza. Que un milagro\l"
	.string "de la naturaleza se pierda sin dejar\l"
	.string "huella, ¡algunos POKÉMON deberían vivir\l"
	.string "para siempre!$"

Guardia_Cave_2_Combate_Guardia_Texto_44:
	.string "FUJI: Algunas cosas son valiosas\n"
	.string "porque no duran. La KANTO que aún\l"
	.string "anhelas no es muy diferente, jovencita.$"

Guardia_Cave_2_Combate_Guardia_Texto_45:
	.string "SACHIKO: Puede que tenga razón,\n"
	.string "SR.FUJI. Somos afortunados de vivir en\l"
	.string "estos tiempos.$"

Guardia_Cave_2_Combate_Guardia_Texto_46:
	.string "… … Debo daros las gracias, a los dos.\n"
	.string "Esta aventura me ha hecho ver claro mi\l"
	.string "propósito como LÍDER de FUCSIA.$"

Guardia_Cave_2_Combate_Guardia_Texto_47:
	.string "¡Yo misma me encargaré de que estos\n"
	.string "POKÉMON, y esta KANTO, no caigan en el\l"
	.string "olvido!$"

Guardia_Cave_2_Combate_Guardia_Texto_48:
	.string "FUJI: ¡Jo, jo, jo! ¡Magnífico!$"

Guardia_Cave_Combate_Marowak_3::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_665, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Guardia_Cave_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_ROUTE120_STATE, 13
release
end

Guardia_Cave_2_Dialogo_Guardia::
lock
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
release
end

