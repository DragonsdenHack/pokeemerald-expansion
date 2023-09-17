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
msgbox NavelRock_Fork_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_3
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, NavelRock_Fork_Giovanni_Move_4
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
msgbox NavelRock_Fork_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, NavelRock_Fork_Giovanni_Move_5
waitmovement 0x0
delay 15
msgbox NavelRock_Fork_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_6
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
removeobject 1
setvar VAR_UNUSED_0x40F7, 110
release
end

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
	.string "adentramos en este lugar más\l"
	.string "convencido estoy de que aquí\l"
	.string "duermen LUGIA y HO-OH.$"

NavelRock_Fork_Giovanni_Texto_2:
.string "A partir de este punto el camino\n"
	.string "se divide en dos: uno hacia el\l"
	.string "cielo, otro hacia el abismo,\l"
	.string "parece claro a qué POKÉMON\l"
	.string "corresponde cada cual, ¿no?$"

NavelRock_Fork_Giovanni_Texto_3:
.string "Aunque es extraño, pareciera este\n"
	.string "lugar haber sido creado por\l"
	.string "alguien solo para confinar a estas\l"
	.string "aves, más que ser un paraje\l"
	.string "natural alejado de la\l"
	.string "civilización, debemos andarnos con\l"
	.string "ojo {PLAYER}.$"

NavelRock_Fork_Giovanni_Texto_4:
.string "GIOVANNI: ...$"

NavelRock_Fork_Giovanni_Texto_5:
.string "Yo iré a por HO-OH {PLAYER}, tomaré\n"
	.string "las escaleras que llevan a la cima\l"
	.string "de este lugar, tú te encargarás de\l"
	.string "LUGIA, de modo que aquí nos\l"
	.string "separamos.$"

NavelRock_Fork_Giovanni_Texto_6:
.string "Estate alerta {PLAYER}, el hecho de\n"
	.string "que cuentes con un equipo de 6 no\l"
	.string "es garantía de nada, LUGIA y HO-OH\l"
	.string "han sido considerados desde\l"
	.string "siempre por la cultura de KANTO y\l"
	.string "JOHTO como los POKÉMON más\l"
	.string "poderosos que existen, son\l"
	.string "legendarios de otro nivel, hechos\l"
	.string "de una pasta diferente, que solo\l"
	.string "MEWTWO por la tecnología pudo\l"
	.string "igualar. En cuanto a LUGIA, es\l"
	.string "extraordinariamente resistente,\l"
	.string "necesitarás algo más que potencia\l"
	.string "y fuerza bruta para tumbarle a\l"
	.string "base de golpes {PLAYER}, pero por\l"
	.string "algo eres el CAMPEÓN de KANTO,\l"
	.string "seguro que encuentras una\l"
	.string "solución.$"

NavelRock_Fork_Giovanni_Texto_7:
.string "Bien, vamos a ello, suerte\n"
	.string "{PLAYER}, nos reuniremos aquí de\l"
	.string "nuevo, si algo saliera mal, llama\l"
	.string "inmediatamente.$"

NavelRock_Fork_Giovanni_Texto_8:
.string "Sigo sin creer lo mucho que has\n"
	.string "crecido desde que entraste a\l"
	.string "formar parte de nuestra\l"
	.string "organización, qué recluta se\l"
	.string "hubiera perdido el TEAM ROCKET de\l"
	.string "no haber tomado esa elección.$"

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
.string "(GIOVANNI ya ha tomado este\n"
	.string "camino)$"
