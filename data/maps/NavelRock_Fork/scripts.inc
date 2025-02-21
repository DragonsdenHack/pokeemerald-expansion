NavelRock_Fork_MapScripts::
	.byte 0


NavelRock_Fork_Giovanni::
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Giovanni_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_2
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.3
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_3
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_4
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.2
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.4 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5
waitmovement 0x0
delay 15
msgbox NavelRock_Fork_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.1
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Giovanni_Move_6.1
applymovement 1, NavelRock_Fork_Giovanni_Move_6
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
removeobject 1
setvar VAR_UNUSED_0x40F7, 110
release
end

NavelRock_Fork_Giovanni_Move_6.1:
delay_16
face_left
step_end

NavelRock_Fork_Giovanni_Move_5.3:
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
face_down
step_end

NavelRock_Fork_Giovanni_Move_5.2:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end

NavelRock_Fork_Giovanni_Move_5.1:
delay_8
face_left
delay_16
delay_8
step_end

NavelRock_Fork_Giovanni_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

NavelRock_Fork_Giovanni_Move_2:
face_down
step_end

NavelRock_Fork_Giovanni_Move_3:
face_left
step_end

NavelRock_Fork_Giovanni_Move_4:
walk_in_place_down
step_end

NavelRock_Fork_Giovanni_Move_5:
face_up
step_end

NavelRock_Fork_Giovanni_Move_6:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

NavelRock_Fork_Giovanni_Texto_1:
.string "GIOVANNI: Conforme más nos\n"
	.string "adentramos en este lugar, más\l"
	.string "convencido estoy de que aquí\l"
	.string "duermen LUGIA y HO-OH.$"

NavelRock_Fork_Giovanni_Texto_2:
.string "A partir de este punto el camino\n"
	.string "se divide en dos: uno hacia el\l"
	.string "cielo, otro hacia el abismo.\p"
	.string "Parece claro a qué POKÉMON\n"
	.string "corresponde cada cual, ¿no?$"

NavelRock_Fork_Giovanni_Texto_3:
.string "Aunque es extraño, pareciera este\n"
	.string "lugar haber sido creado por\l"
	.string "alguien solo para confinar a\l"
	.string "estas aves, más que ser un paraje\l"
	.string "natural alejado de la civilización.\p"
	.string "Debemos andarnos con ojo, {PLAYER}.$"

NavelRock_Fork_Giovanni_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

NavelRock_Fork_Giovanni_Texto_5:
.string "Yo iré a por HO-OH, tomaré las\n"
	.string "escaleras que llevan a la cima.\p"
	.string "Tú te encargarás de LUGIA, de\n"
	.string "modo que aquí nuestros caminos\l"
	.string "se separan.$"

NavelRock_Fork_Giovanni_Texto_6:
.string "Estate alerta, {PLAYER}.\n"
	.string "El hecho de que cuentes con un equipo\l"
	.string "de 6 no es garantía de nada.$"

NavelRock_Fork_Giovanni_Texto_6.1:
	.string "LUGIA y HO-OH han sido considerados por\n"
	.string "la cultura popular de KANTO-JOHTO, como\l"
	.string "los POKÉMON más poderosos del mundo.$"

NavelRock_Fork_Giovanni_Texto_6.2:
	.string "Son LEGENDARIOS de otro nivel, hechos\n"
	.string "de una pasta diferente, que solo MEWTWO\l"
	.string "por la tecnología pudo igualar.$"

NavelRock_Fork_Giovanni_Texto_6.3:
	.string "En cuanto a LUGIA{PAUSE 15}…{PAUSE 15}\n"
	.string "Es extremadamente resistente, te hará\l"
	.string "falta algo más que potencia y fuerza\l"
	.string "bruta para tumbarle a base de golpes.$"

NavelRock_Fork_Giovanni_Texto_6.4:
	.string "Pero{PAUSE 15}…{PAUSE 15} por algo eres el\n"
	.string "CAMPEÓN de KANTO.\l"
	.string "Seguro que encuentras una solución.$"

NavelRock_Fork_Giovanni_Texto_7:
.string "Vamos a ello.\p"
	.string "Nos reuniremos aquí de nuevo, si algo\n"
	.string "saliera mal, llama inmediatamente.$"

NavelRock_Fork_Giovanni_Texto_8:
.string "Sigo sin creer lo mucho que has crecido\n"
	.string "desde que entraste a formar parte de\l"
	.string "nuestra organización.$"

NavelRock_Fork_Giovanni_Texto_8.1:
	.string "Qué recluta nos hubiéramos perdido\n"
	.string "de no haber tomado esa elección.$"

NavelRock_Fork_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Abajo_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Abajo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Abajo_Move_2
waitmovement 0x0
release
end

NavelRock_Fork_Abajo_Move_1:
walk_in_place_up
step_end

NavelRock_Fork_Abajo_Move_2:
walk_slow_down
step_end

NavelRock_Fork_Derecha::
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Derecha_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Abajo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Derecha_Move_2
waitmovement 0x0
release
end

NavelRock_Fork_Derecha_Move_1:
walk_in_place_left
step_end

NavelRock_Fork_Derecha_Move_2:
walk_slow_right
step_end

NavelRock_Fork_Abajo_Texto_1:
	.string "GIOVANNI has already taken this path.$"
