BirthIsland_MapScripts::
	.byte 0


BirthIsland_Blaine::
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
applymovement 2, BirthIsland_Blaine_Move_3
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_1 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_4
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_3
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_4 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_5 MSGBOX_AUTOCLOSE
delay 40
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_2
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 5
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_5
applymovement 2, BirthIsland_Blaine_Move_6
waitmovement 0x0
applymovement 5, BirthIsland_Blaine_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_7 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_8 MSGBOX_AUTOCLOSE
addobject 3
addobject 4
addobject 6
addobject 7
delay 10
applymovement 3, BirthIsland_Blaine_Move_7
waitmovement 0x0
applymovement 4, BirthIsland_Blaine_Move_8
waitmovement 0x0
applymovement 6, BirthIsland_Blaine_Move_9
waitmovement 0x0
applymovement 7, BirthIsland_Blaine_Move_10
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_11
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
applymovement 5, BirthIsland_Blaine_Move_11.1
waitmovement 0x0
delay 15
removeobject 1
delay 15
applymovement 5, BirthIsland_Blaine_Move_12
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_13
applymovement 5, BirthIsland_Blaine_Move_14
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_15
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_16
waitmovement 0x0
removeobject 5
applymovement 3, BirthIsland_Blaine_Move_17
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_3
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
msgbox BirthIsland_Blaine_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANNIKA, BirthIsland_Blaine_Texto_13 
applymovement 6, BirthIsland_Blaine_Move_18
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_14
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JAZMYN, BirthIsland_Blaine_Texto_15
msgbox BirthIsland_Blaine_Texto_16 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 3
removeobject 4
removeobject 6
removeobject 7
fadescreen 0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_13
applymovement 2, BirthIsland_Blaine_Move_19
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_15
waitmovement 0x0
delay 20
msgbox BirthIsland_Blaine_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 112
release
end

BirthIsland_Blaine_Texto_1:
.string "ANDRA: ¡Has venido {PLAYER}!$"

BirthIsland_Blaine_Texto_2:
.string "He estado en las ruinas que hay al\n"
	.string "lado de esta isla, pero no he\l"
	.string "podido encontrar nada interesante,\l"
	.string "sin embargo esto…$"

BirthIsland_Blaine_Texto_3:
.string "Cuando llegué no había nada, pero\n"
	.string "al situarme en el centro la piedra\l"
	.string "contenida en el frasco que robamos\l"
	.string "comenzó a brillar, y apareció este\l"
	.string "extraño triángulo.$"

BirthIsland_Blaine_Texto_4:
.string "Nada más llegar, la piedra rompió\n"
	.string "el frasco y salió disparada hacia\l"
	.string "el triángulo, quedando absorbida\l"
	.string "por este.$"

BirthIsland_Blaine_Texto_5:
.string "El CAPITÁN dijo que pertenecía a\n"
	.string "algún POKÉMON con propiedades de\l"
	.string "LEGENDARIO y PSEUDOLEGENDARIO a la\l"
	.string "vez, ¿contendrá este extraño\l"
	.string "objeto a ese POKÉMON?\l"
	.string "¿Qué POKÉMON será?$"

BirthIsland_Blaine_Texto_6:
.string "????: Se trata de DEOXYS chica, un\n"
	.string "virus espacial con una combinación\l"
	.string "genética imposible de replicar en\l"
	.string "todo el planeta.$"

BirthIsland_Blaine_Texto_7:
.string "ANDRA: ¡Tú! ¡Traidor!$"

BirthIsland_Blaine_Texto_8:
.string "BLAINE: ¿Traidor a quien?\n"
	.string "¿Al TEAM ROCKET?\l"
	.string "Por supuesto que sí.$"

BirthIsland_Blaine_Texto_9:
.string "Podréis ser todo lo fuerte que\n"
	.string "queráis, pero no os dará tiempo a\l"
	.string "derrotar a cuatro de nuestros\l"
	.string "mejores científicos al tiempo que\l"
	.string "evitáis que escape con este\l"
	.string "objeto.$"

BirthIsland_Blaine_Texto_10:
.string "OAK te envía un mensaje {PLAYER},\n"
	.string "si tienes el valor, te esperamos\l"
	.string "en lo más profundo de la MANSIÓN\l"
	.string "POKÉMON, quiere que veas de\l"
	.string "primera mano el verdadero poder de\l"
	.string "la tecnología y la ciencia, antes\l"
	.string "de mostrárselo al mundo,\l"
	.string "demostrarte que tus victorias ante\l"
	.string "RED y LANCE no fueron más que\l"
	.string "simples errores, ahora que ha\l"
	.string "encontrado la fórmula para contar\l"
	.string "con un equipo perfecto, nada podrá\l"
	.string "oponerse a su voluntad,\l"
	.string "reconstruiremos KANTO a nuestro\l"
	.string "modo.$"

BirthIsland_Blaine_Texto_11:
.string "Tened un buen día.$"

BirthIsland_Blaine_Texto_12:
.string "Para cuando nos hayas derrotado,\n"
	.string "BLAINE estará ya muy lejos de\l"
	.string "aquí.$"

BirthIsland_Blaine_Texto_13:
.string "He cumplido mi parte del plan,\n"
	.string "ganar tiempo.$"

BirthIsland_Blaine_Texto_14:
.string "En cuanto BLAINE entregue ese\n"
	.string "triángulo a OAK, completaremos la\l"
	.string "última pieza de nuestro gran\l"
	.string "puzzle, y ya nadie podrá\l"
	.string "detenernos.$"

BirthIsland_Blaine_Texto_15:
.string "Consuélate con esta intrascendente\n"
	.string "victoria, ROCKET.$"

BirthIsland_Blaine_Texto_16:
.string "No tenemos nada más que hacer\n"
	.string "aquí, ya no podéis alcanzar a\l"
	.string "BLAINE, ¡habéis fracasado!$"

BirthIsland_Blaine_Texto_17:
.string "ANDRA: Tenemos que informar a\n"
	.string "GIOVANNI de esto {PLAYER}, han\l"
	.string "robado ese triángulo justo cuando\l"
	.string "lo hemos descubierto, ¿habrán\l"
	.string "estado todo este tiempo\l"
	.string "vigilándonos?$"

BirthIsland_Blaine_Texto_18:
.string "Nos vemos en el cuartel {PLAYER}.$"

BirthIsland_Blaine_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BirthIsland_Blaine_Move_2:
emote_exclamation_mark
step_end

BirthIsland_Blaine_Move_3:
face_down
step_end

BirthIsland_Blaine_Move_4:
face_up
step_end

BirthIsland_Blaine_Move_5:
walk_left
face_down
step_end

BirthIsland_Blaine_Move_6:
walk_right
walk_down
step_end

BirthIsland_Blaine_Move_7:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
step_end

BirthIsland_Blaine_Move_8:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

BirthIsland_Blaine_Move_9:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
face_right
step_end

BirthIsland_Blaine_Move_10:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
face_left
step_end

BirthIsland_Blaine_Move_11:
walk_up
walk_up
step_end

BirthIsland_Blaine_Move_11.1:
walk_in_place_up
step_end

BirthIsland_Blaine_Move_12:
walk_down
step_end

BirthIsland_Blaine_Move_13:
face_right
step_end

BirthIsland_Blaine_Move_14:
face_left
step_end

BirthIsland_Blaine_Move_15:
walk_in_place_down
step_end

BirthIsland_Blaine_Move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

BirthIsland_Blaine_Move_17:
walk_in_place_up
step_end

BirthIsland_Blaine_Move_18:
walk_in_place_right
step_end

BirthIsland_Blaine_Move_19:
walk_left
step_end
