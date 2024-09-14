Lavender_Secta_Pasadizo_MapScripts::
	.byte 0

Lavender_Secta_Pasadizo_Oak_Move_1:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_2:
walk_right
walk_down
walk_right
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_3:
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_4:
face_up
step_end

Lavender_Secta_Pasadizo_Oak_Move_5:
face_up
delay_8
lock_facing_direction
walk_down
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_6:
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_7:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_8:
delay_16
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_9:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_10:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Oak_Move_11:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_12:
walk_slow_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_13:
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_14:
walk_fast_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_15:
face_down
step_end

Lavender_Secta_Pasadizo_Oak_Move_16:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_17:
face_up
delay_16
delay_8
face_right
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_18:
delay_8
face_right
delay_16
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_19:
delay_8
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end


Lavender_Secta_Pasadizo_Oak::
lock
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
waitse
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_1
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_3
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_8
waitmovement 0x0
delay 20
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_9
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_12
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
delay 20
msgbox Lavender_Secta_Pasadizo_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_15
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_25 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_16
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_17
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_18
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_30 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_32 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_36 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_39 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_40 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_41 MSGBOX_AUTOCLOSE
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_43 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_45 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_46 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_47 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_48 MSGBOX_AUTOCLOSE
delay 25
msgbox Lavender_Secta_Pasadizo_Oak_Texto_49 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_20
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_50 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_51 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_21
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_52 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_22
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_53 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_24
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_23
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_54 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_25
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_55 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_26
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 1
release
end

Lavender_Secta_Pasadizo_Oak_Move_26:
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_up
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_25:
walk_right
walk_down
walk_right
walk_down
walk_down
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_24:
lock_facing_direction
walk_left
walk_left
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_23:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_22:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_21:
delay_8
face_down
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_20:
walk_slow_up
step_end

Lavender_Secta_Pasadizo_Oak_Texto_1:
	.string "C. FRIDA: … …$"

Lavender_Secta_Pasadizo_Oak_Texto_2:
	.string "????: No estoy de acuerdo.$"

Lavender_Secta_Pasadizo_Oak_Texto_3:
	.string "C. FRIDA: Ah, jovencito.\n"
	.string "¿En qué no lo estás?$"

Lavender_Secta_Pasadizo_Oak_Texto_4:
	.string "OAK: Los grandes entrenadores no\n"
	.string "pueden provenir de cualquier lugar. Ni\l"
	.string "tampoco los mejores POKÉMON.$"

Lavender_Secta_Pasadizo_Oak_Texto_5:
	.string "C. FRIDA: ¿No lo crees así entonces?$"

Lavender_Secta_Pasadizo_Oak_Texto_6:
	.string "OAK: El entorno influye demasiado.\n"
	.string "Jamás hubieras sido tan buena con el\l"
	.string "TIPO FANTASMA sin PUEBLO LAVANDA.$"

Lavender_Secta_Pasadizo_Oak_Texto_7:
	.string "C. FRIDA: Así es, hubiera\n"
	.string "sido algo diferente.$"

Lavender_Secta_Pasadizo_Oak_Texto_8:
	.string "OAK: Algo peor. Si te hubiéramos\n"
	.string "encerrado en el TÚNEL ROCA, no podrías\l"
	.string "haber desarrollado el mismo potencial.$"

Lavender_Secta_Pasadizo_Oak_Texto_9:
	.string "Allí confinada, no hubieras tenido ni el\n"
	.string "nivel de un aspirante a LÍDER de\l"
	.string "GIMNASIO.$"

Lavender_Secta_Pasadizo_Oak_Texto_10:
	.string "C. FRIDA: ¡Ah, sí!$"

Lavender_Secta_Pasadizo_Oak_Texto_11:
	.string "Confinada en ese estrecho túnel, ya de\n"
	.string "por sí inabarcable para cualquiera.$"

Lavender_Secta_Pasadizo_Oak_Texto_12:
	.string "OAK: ¿Qué quieres decir?$"

Lavender_Secta_Pasadizo_Oak_Texto_13:
	.string "C. FRIDA: Mis opciones dentro de ese\n"
	.string "lugar, dentro de incluso la celda más\l"
	.string "oscura, seguirían siendo infinitas.$"

Lavender_Secta_Pasadizo_Oak_Texto_14:
	.string "Menores, pero aún infinitas.$"

Lavender_Secta_Pasadizo_Oak_Texto_15:
	.string "OAK: Eso no es posible.\n"
	.string "No tiene sentido.$"

Lavender_Secta_Pasadizo_Oak_Texto_16:
	.string "C. FRIDA: No se trata de posible o\n"
	.string "imposible, se trata de una certeza.$"

Lavender_Secta_Pasadizo_Oak_Texto_17:
	.string "Es la conciencia, y no la materia, lo que\n"
	.string "constituye la base fundamental de la\l"
	.string "realidad.$"

Lavender_Secta_Pasadizo_Oak_Texto_18:
	.string "Con ella, siempre habrá posibilidad de\n"
	.string "cambio. Y la posibilidad engendra cada\l"
	.string "vez más y más posibilidad.$"

Lavender_Secta_Pasadizo_Oak_Texto_19:
	.string "Además…$"

Lavender_Secta_Pasadizo_Oak_Texto_20:
	.string "La luz puede hallarse incluso, o tal vez,\n"
	.string "especialmente, en los momentos de\l"
	.string "mayor oscuridad.$"

Lavender_Secta_Pasadizo_Oak_Texto_21:
	.string "OAK: ¡Tonterías! No son más que\n"
	.string "conjeturas sobre cómo te gustaría que\l"
	.string "fuera el mundo.$"

Lavender_Secta_Pasadizo_Oak_Texto_22:
	.string "Has llegado tan lejos a pesar de creer\n"
	.string "en todas esas chorradas místicas.$"

Lavender_Secta_Pasadizo_Oak_Texto_23:
	.string "Pero la verdad es que han sido el\n"
	.string "talento y la suerte los que han hecho el\l"
	.string "trabajo.$"

Lavender_Secta_Pasadizo_Oak_Texto_24:
	.string "Sin eso, sin el resultado final, nadie\n"
	.string "tomaría en serio ese discurso.$"

Lavender_Secta_Pasadizo_Oak_Texto_25:
	.string "C. FRIDA: Vaya.$"

Lavender_Secta_Pasadizo_Oak_Texto_26:
	.string "Eres un joven inteligente. Pero tu\n"
	.string "apego por la razón y el mundo que\l"
	.string "conoces te impide ver más allá.$"

Lavender_Secta_Pasadizo_Oak_Texto_27:
	.string "OAK: Si no puedo verlo. Muéstramelo.$"

Lavender_Secta_Pasadizo_Oak_Texto_28:
	.string "Muéstrame ese POKÉMON; la prueba de\n"
	.string "que todo lo que dices es cierto.$"

Lavender_Secta_Pasadizo_Oak_Texto_29:
	.string "C. FRIDA: No lo haré.$"

Lavender_Secta_Pasadizo_Oak_Texto_30:
	.string "OAK: Pero, ¿por qué?$"

Lavender_Secta_Pasadizo_Oak_Texto_31:
	.string "C. FRIDA: Mi POKÉMON no es\n"
	.string "una reliquia de museo.$"

Lavender_Secta_Pasadizo_Oak_Texto_32:
	.string "Si quieres pruebas, inicia tu propia\n"
	.string "búsqueda; no quieras hallar la solución\l"
	.string "sin conocer el proceso.$"

Lavender_Secta_Pasadizo_Oak_Texto_33:
	.string "OAK: Entonces, te obligaré a sacarlo.$"

Lavender_Secta_Pasadizo_Oak_Texto_34:
	.string "Cuando en unos años pueda optar al\n"
	.string "título, no tendrás opción.$"

Lavender_Secta_Pasadizo_Oak_Texto_35:
	.string "C. FRIDA: … …$"

Lavender_Secta_Pasadizo_Oak_Texto_36:
	.string "Me temo que no va a ser posible. Yo y mis\n"
	.string "POKÉMON haremos un viaje, lejos de\l"
	.string "KANTO y JOHTO.$"

Lavender_Secta_Pasadizo_Oak_Texto_37:
	.string "OAK: ¡¿Vas a renunciar a\n"
	.string "defender el título?!$"

Lavender_Secta_Pasadizo_Oak_Texto_38:
	.string "C. FRIDA: Ya he demostrado lo\n"
	.string "que tenía que demostrar.$"

Lavender_Secta_Pasadizo_Oak_Texto_39:
	.string "OAK: No… Es imposible… Un CAMPEÓN de\n"
	.string "verdad jamás haría eso…$"

Lavender_Secta_Pasadizo_Oak_Texto_40:
	.string "Es todo una farsa.$"

Lavender_Secta_Pasadizo_Oak_Texto_41:
	.string "Ese NINETALES no existe, ¿verdad? Fue\n"
	.string "solo un truco, un truco de magia que\l"
	.string "todos se creyeron.$"

Lavender_Secta_Pasadizo_Oak_Texto_42:
	.string "Por eso ahora vas a desaparecer. Para\n"
	.string "mantener viva tu leyenda.$"

Lavender_Secta_Pasadizo_Oak_Texto_43:
	.string "C. FRIDA: ¿Eso crees?$"

Lavender_Secta_Pasadizo_Oak_Texto_44:
	.string "OAK: Pero… La historia te olvidará, solo\n"
	.string "has ganado el título una vez.$"

Lavender_Secta_Pasadizo_Oak_Texto_45:
	.string "Con el paso del tiempo, solo quedarán\n"
	.string "vagos testimonios. Tu leyenda se\l"
	.string "convertirá en un mito, un cuento para\l"
	.string "niños.$"

Lavender_Secta_Pasadizo_Oak_Texto_46:
	.string "Yo, en cambio, no ganaré ni una ni dos\n"
	.string "veces; lograré conservar ese puesto\l"
	.string "más que ningún otro CAMPEÓN en la\l"
	.string "historia.$"

Lavender_Secta_Pasadizo_Oak_Texto_47:
	.string "Mostraré al mundo todo el poder de MIS\n"
	.string "POKÉMON, sin ocultismos ni acertijos.\l"
	.string "Todas mis hazañas quedarán\l"
	.string "registradas, a la vista de todos.$"

Lavender_Secta_Pasadizo_Oak_Texto_48:
	.string "Y cuando tenga más trofeos que nadie,\n"
	.string "habré demostrado que soy el mejor\l"
	.string "ENTRENADOR. ¡Los números nunca\l"
	.string "mienten!$"

Lavender_Secta_Pasadizo_Oak_Texto_49:
	.string "C. FRIDA: Ya veo.$"

Lavender_Secta_Pasadizo_Oak_Texto_50:
	.string "Hay un viejo dicho en JOHTO: 'el ideal es\n"
	.string "imposible de hallar dos veces, y muy\l"
	.string "pocos lo encuentran una sola vez en la\l"
	.string "vida'.$"

Lavender_Secta_Pasadizo_Oak_Texto_51:
	.string "Yo fui capaz de hallarlo una\n"
	.string "vez con mi NINETALES.$"

Lavender_Secta_Pasadizo_Oak_Texto_52:
	.string "Tú… tienes herramientas para hallarlo.$"

Lavender_Secta_Pasadizo_Oak_Texto_53:
	.string "Pero… si solo aspiras a alargar la vista\n"
	.string "y subyugar los sentidos… jamás lo\l"
	.string "harás.$"

Lavender_Secta_Pasadizo_Oak_Texto_54:
	.string "Morirás sin haber descorrido\n"
	.string "la verdad tras el velo.\l"
	.string "El tiempo pasa, ¿lo entiendes?$"

Lavender_Secta_Pasadizo_Oak_Texto_55:
	.string "OAK: … …$"

Lavender_Secta_Pasadizo_Oak_Texto_56:
	.string "Ese ideal no existe. Solo existe lo que\n"
	.string "podemos medir, mejorar y registrar.$"

Lavender_Secta_Pasadizo_Oak_Texto_57:
	.string "El mundo verá el resultado\n"
	.string "de mis investigaciones.$"
