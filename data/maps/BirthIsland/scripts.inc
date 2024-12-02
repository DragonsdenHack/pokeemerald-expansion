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
waitse
delay 10
applymovement 2, BirthIsland_Blaine_Move_3
waitmovement 0x0
delay 10
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
delay 10
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
delay 10
applymovement 5, BirthIsland_Blaine_Move_14
waitmovement 0x0
delay 10
msgbox BirthIsland_Blaine_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox BirthIsland_Blaine_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, BirthIsland_Blaine_Move_14.1
waitmovement 0x0
delay 10
msgbox BirthIsland_Blaine_Texto_10.2 MSGBOX_AUTOCLOSE
delay 10
msgbox BirthIsland_Blaine_Texto_10.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, BirthIsland_Blaine_Move_15
waitmovement 0x0
delay 10
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
delay 20
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 2
waitfieldeffect FLDEFF_NPCFLY_OUT
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 112
release
end

BirthIsland_Blaine_Texto_1:
.string "ANDRA: ¡Has venido, {PLAYER}!$"

BirthIsland_Blaine_Texto_2:
.string "He estado en las ruinas que hay al\n"
	.string "lado de esta isla, pero no he\l"
	.string "podido encontrar nada interesante.\l"
	.string "Sin embargo, esto{PAUSE 5}…{PAUSE 5}$"

BirthIsland_Blaine_Texto_3:
.string "Cuando llegué no había nada, pero al\n"
	.string "situarme en el centro, la piedra que\l"
	.string "había dentro del frasco que robamos\l"
	.string "comenzó a brillar, y apareció este\l"
	.string "extraño triángulo.$"

BirthIsland_Blaine_Texto_4:
	.string "Esa piedra rompió el frasco, y salió\n"
	.string "disparada hacia el triángulo,\l"
	.string "quedando absorbida por este.$"

BirthIsland_Blaine_Texto_5:
.string "El CAPITÁN dijo que pertenecía a\n"
	.string "algún POKÉMON con propiedades de\l"
	.string "LEGENDARIO y PSEUDOLEGENDARIO.\p"
	.string "¿Contendrá este extraño objeto\n"
	.string "a ese POKÉMON? ¿Qué POKÉMON será?$"

BirthIsland_Blaine_Texto_6:
.string "????: Se trata de DEOXYS, chica.\n"
	.string "Un virus espacial con una combinación\l"
	.string "genética imposible de replicar en\l"
	.string "todo el planeta.$"

BirthIsland_Blaine_Texto_7:
.string "ANDRA: ¡Tú! ¡Traidor!$"

BirthIsland_Blaine_Texto_8:
.string "BLAINE: ¿Traidor? ¿A quién?\n"
	.string "¿Al TEAM ROCKET?\l"
	.string "Por supuesto que sí.$"

BirthIsland_Blaine_Texto_9:
.string "Podréis ser todo lo fuerte que queráis,\n"
	.string "pero no os dará tiempo a derrotar a\l"
	.string "cuatro AYUDANTES de OAK, al tiempo que\l"
	.string "evitáis que escape con este objeto.$"

BirthIsland_Blaine_Texto_10:
.string "OAK te envía un mensaje, {PLAYER}.{PAUSE 35}\p"
	.string "-Si tienes el valor, te esperamos en\n"
	.string "lo más profundo de la MANSIÓN POKÉMON.-$"

BirthIsland_Blaine_Texto_10.1:
	.string "Quiere que veas de primera mano el\n"
	.string "verdadero poder de la tecnología y la\l"
	.string "ciencia, antes de mostrárselo al mundo.$"

BirthIsland_Blaine_Texto_10.2:
	.string "Demostrarte que tus victorias ante\n"
	.string "ROJO y LANCE no fueron más que simples\l"
	.string "errores; ahora que ha encontrado la\l"
	.string "fórmula del equipo perfecto, nada podrá\l"
	.string "oponerse a su voluntad.$"

BirthIsland_Blaine_Texto_10.3:
	.string "Reconstruiremos KANTO\n"
	.string "a nuestro modo.$"

BirthIsland_Blaine_Texto_11:
.string "Tened un buen día.$"

BirthIsland_Blaine_Texto_12:
.string "Para cuando nos hayas derrotado,\n"
	.string "BLAINE estará ya muy lejos de aquí.$"

BirthIsland_Blaine_Texto_13:
.string "He cumplido mi parte del plan,\n"
	.string "ganar tiempo.$"

BirthIsland_Blaine_Texto_14:
.string "En cuanto BLAINE entregue ese triángulo\n"
	.string "a OAK, completaremos la última pieza\l"
	.string "de nuestro gran puzzle, y ya nadie\l"
	.string "podrá detenernos.$"

BirthIsland_Blaine_Texto_15:
.string "Consuélate con esta intrascendente\n"
	.string "victoria, ROCKET.$"

BirthIsland_Blaine_Texto_16:
.string "No tenemos nada más que hacer\n"
	.string "aquí, ya no podéis alcanzar a\l"
	.string "BLAINE, ¡habéis fracasado!$"

BirthIsland_Blaine_Texto_17:
.string "ANDRA: Tenemos que informar a GIOVANNI\n"
	.string "de esto, {PLAYER}.\l"
	.string "Han robado ese triángulo justo cuando\l"
	.string "lo hemos descubierto, ¿habrán estado\l"
	.string "todo este tiempo vigilándonos?$"

BirthIsland_Blaine_Texto_18:
.string "Nos vemos en el cuartel, {PLAYER}.$"

BirthIsland_Blaine_Move_14.1:
face_down
step_end

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
