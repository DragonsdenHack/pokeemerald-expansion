Goldenrod_RadioTowerP4_MapScripts::
	.byte 0

RadioTowerP4_1::
lock
faceplayer
msgbox RadioTowerP4_1_Texto_1 MSGBOX_NPC
release
end

RadioTowerP4_1_Texto_1:
.string "He oído que SILPH tiene varios pisos\n"
	.string "subterráneos, aquí no sería posible\l"
	.string "por la cercanía al mar.$"



RadioTowerP4_2::
end



RadioTowerP4_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_3:
.string "NARDO: ¿Escuchas nuestra música?$"



RadioTowerP4_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_4:
.string "Choca bastante ver un edificio de\n"
.string "estas dimensiones justo al lado\l"
.string "del mar, ¿no crees?\l"
.string "Si por algún casual se derrumbara\l"
.string "en dirección oeste, la gran altura\l"
.string "de la TORRE RADIO haría que los\l"
.string "que se encuentran en los pisos\l"
.string "superiores, como nosotros, cayeran\l"
.string "en pleno mar abierto.\l"
.string "¡Acabo de pensarlo y me parece\l"
.string "alucinante!$"



RadioTowerP4_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_5:
.string "El despacho de nuestro PRESIDENTE\n"
.string "está justo al lado de esta sala,\l"
.string "es allí donde tienen lugar las\l"
.string "reuniones más importantes.$"



RadioTowerP4_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_6:
.string "Aún no puedo creer todo lo que\n"
.string "TRIGAL ha crecido en los últimos\l"
.string "años, y todo lo que está por\l"
.string "venir. ¡Tiempos interesantes nos\l"
.string "ha tocado vivir!$"



RadioTowerP4_7::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 204
goto_if_gt RadioTowerP4_7_3
compare VAR_UNUSED_0x40F7, 145
goto_if_gt RadioTowerP4_7_2
msgbox RadioTowerP4_7_Texto_1 MSGBOX_NPC
release
end

RadioTowerP4_7_3::
msgbox RadioTowerP4_7_Texto_3 MSGBOX_NPC
release
end

RadioTowerP4_7_2::
msgbox RadioTowerP4_7_Texto_2 MSGBOX_NPC
release
end

RadioTowerP4_7_Texto_3:
.string "Que rápido pasa el tiempo, ¿no crees?\n"
	.string "Parece que fue ayer cuando celebramos\l"
	.string "la I CONFERENCIA de TRIGAL, pero KANTO\l"
	.string "y JOHTO ya han cambiado mucho desde\l"
	.string "ese entonces.$"

RadioTowerP4_7_Texto_1:
.string "¡{PLAYER}!\n"
	.string "Explora y disfruta cada rincón de\l"
	.string "esta región. Todo lo que puedas\l"
	.string "sacar de ella y sus entrenadores\l"
	.string "es un regalo.$"

RadioTowerP4_7_Texto_2:
.string "Entonces, así va a ser…\n"
	.string "Tenemos mucho trabajo por hacer en\l"
	.string "los próximos 2 años. Para ese\l"
	.string "entonces, KANTO y JOHTO formarán\l"
	.string "una sola unión.$"

RadioTowerP4_9::
end



GoldenrodRadioTowerP4Documento_100::
msgbox GoldenrodRadioTowerP4Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP4Documento_Text_100:
.string "P4 OFICINA DEL DIRECTOR$"



GoldenrodRadioTowerP4Documento_101::
msgbox GoldenrodRadioTowerP4Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP4Documento_Text_101:
.string "P4 ESTUDIO 1$"

Goldenrod_RadioTower_P4_Reunion::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_1
applymovement 1, Goldenrod_RadioTower_P4_Reunion_Move_2
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_1 MSGBOX_DEFAULT
waitfanfare
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_4
applymovement 1, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_2 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_5
waitmovement 0x0
playse SE_PIN
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_6
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_8
waitmovement 0x0
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_9 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_11 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_12 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_13 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_10
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_15 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_11
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_12
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_17 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_19 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_13
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_20 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_14
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_21 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_15
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_9
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_22 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_23 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_7
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 8
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_17
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_25 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_18
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_26 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_13
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_27 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
setvar VAR_UNUSED_0x40F7, 134
release
end

Goldenrod_RadioTower_P4_Reunion_Texto_1:
.string "({PLAYER} mostró su PASE RADIO).$"

Goldenrod_RadioTower_P4_Reunion_Texto_2:
.string "PRESIDENTE: Sabes que a la mayoría\n"
	.string "de JOHTO le trajo sin cuidado la\l"
	.string "guerra, fue LANCE quien la forzó\l"
	.string "por sus ansias de poder.$"

Goldenrod_RadioTower_P4_Reunion_Texto_3:
.string "ATLAS: Por eso estoy aquí. Ahora\n"
	.string "que tenemos a LANCE bajo control,\l"
	.string "es tiempo de unir como nunca antes\l"
	.string "a las dos regiones.$"

Goldenrod_RadioTower_P4_Reunion_Texto_4:
.string "ATLAS: {PLAYER}, justo a tiempo.$"

Goldenrod_RadioTower_P4_Reunion_Texto_5:
.string "PRESIDENTE: ¿Es él?$"

Goldenrod_RadioTower_P4_Reunion_Texto_6:
.string "ATLAS: Así es, {PLAYER} fue el que\n"
	.string "derrotó a LANCE en un combate\l"
	.string "POKÉMON, obligándole a ceder sus\l"
	.string "poderes para evitar que saliese a\l"
	.string "la luz todo lo ocurrido.$"

Goldenrod_RadioTower_P4_Reunion_Texto_7:
.string "PRESIDENTE: Notable hazaña chico,\n"
	.string "más para tu edad. Pero no sé si\l"
	.string "sabéis que en JOHTO hay varios\l"
	.string "ENTRENADORES que dejarían a LANCE\l"
	.string "en pañales. La diferencia con ese\l"
	.string "DOMADRAGÓN de pacotilla es que no\l"
	.string "van pregonando a los 4 vientos su\l"
	.string "poder, están más ocupados de\l"
	.string "alcanzar la excelencia que en los\l"
	.string "asuntos mundanos.$"

Goldenrod_RadioTower_P4_Reunion_Texto_8:
.string "ATLAS: Lo sabemos PRESIDENTE.\n"
	.string "{PLAYER} de hecho está aquí en\l"
	.string "buena parte para aprender de esos\l"
	.string "ENTRENADORES.$"

Goldenrod_RadioTower_P4_Reunion_Texto_9:
.string "PRESIDENTE: Pues que se dé prisa,\n"
	.string "son el último reducto de la JOHTO\l"
	.string "antigua que queda. Dudo que el\l"
	.string "nuevo nivel de vida de la JOHTO\l"
	.string "futura permita la aparición de\l"
	.string "ENTRENADORES así.$"

Goldenrod_RadioTower_P4_Reunion_Texto_10:
.string "ATLAS: Lo sabemos, y queremos\n"
	.string "dejar constancia de las cotas que\l"
	.string "alcanzaron, antes de que sea\l"
	.string "tarde.$"

Goldenrod_RadioTower_P4_Reunion_Texto_11:
.string "PRESIDENTE: ¡Jah!\n"
	.string "Seguro que es por puro interés\l"
	.string "académico, no me hagas reir, ATLAS.\l"
	.string "A cambio obtendréis\l"
	.string "información acerca de los límites\l"
	.string "a los que puede llegar un POKÉMON\l"
	.string "valiosísima.$"

Goldenrod_RadioTower_P4_Reunion_Texto_12:
.string "ATLAS: El precio justo por tal\n"
	.string "labor, ¿no cree?\l"
	.string "No somos ninguna ONG, dudo que\l"
	.string "usted y su compañía también lo\l"
	.string "sean.$"

Goldenrod_RadioTower_P4_Reunion_Texto_13:
.string "PRESIDENTE: ¿Qué es lo que\n"
	.string "queréis?$"

Goldenrod_RadioTower_P4_Reunion_Texto_14:
.string "ATLAS: Lo mismo que usted,\n"
	.string "asegurarnos de que no aparezca un\l"
	.string "nuevo LANCE, sentar las bases de\l"
	.string "la unión entre KANTO y JOHTO. Para\l"
	.string "ello reuniremos a los personajes\l"
	.string "más influyentes de estas dos\l"
	.string "regiones en los últimos años, y\l"
	.string "dejaremos claras las acciones a\l"
	.string "tomar.$"

Goldenrod_RadioTower_P4_Reunion_Texto_15:
.string "PRESIDENTE: P-pero ahora mismo\n"
	.string "vuestra organización está fuera\l"
	.string "del mapa a ojos de la población.$"

Goldenrod_RadioTower_P4_Reunion_Texto_16:
.string "ATLAS: Eso es precisamente lo que\n"
	.string "GIOVANNI quería, tenemos el poder,\l"
	.string "y el anonimato como para mover los\l"
	.string "hilos sin que nadie nos moleste.$"

Goldenrod_RadioTower_P4_Reunion_Texto_17:
.string "PRESIDENTE: ¿Y cómo sé que no os\n"
	.string "convertiréis en algo peor que\l"
	.string "LANCE?$"

Goldenrod_RadioTower_P4_Reunion_Texto_18:
.string "ATLAS: No lo sabes, pero después\n"
	.string "de celebrar la gran reunión que ha\l"
	.string "propuesto nuestro LÍDER, no te\l"
	.string "quedará duda alguna de que no\l"
	.string "queremos más que el bien de las 2\l"
	.string "regiones. Hace tiempo que hemos\l"
	.string "aprendido que el ganar-ganar es el\l"
	.string "único negocio que funciona a la\l"
	.string "larga.$"

Goldenrod_RadioTower_P4_Reunion_Texto_19:
.string "PRESIDENTE: {PAUSE 15}…{PAUSE 15}$"

Goldenrod_RadioTower_P4_Reunion_Texto_20:
.string "PRESIDENTE: Tendréis esa reunión,\n"
	.string "estaré en contacto con GIOVANNI\l"
	.string "para los detalles de esta. Gracias\l"
	.string "por venir, a los dos.$"

Goldenrod_RadioTower_P4_Reunion_Texto_21:
.string "ATLAS: Encantado de volver a mi\n"
	.string "región, PRESIDENTE.$"

Goldenrod_RadioTower_P4_Reunion_Texto_22:
.string "ATLAS: Gran seguridad la de\n"
	.string "TORRE RADIO, pero no sé si sabe\l"
	.string "que SILPH contaba con una similar,\l"
	.string "y aún así no pudo evitar que un\l"
	.string "niño de 10 años llegase hasta su\l"
	.string "PRESIDENTE solo por contar con un\l"
	.string "buen equipo POKÉMON.$"

Goldenrod_RadioTower_P4_Reunion_Texto_23:
.string "PRESIDENTE: ¿Y qué hicieron para\n"
	.string "quitárselo de encima?$"

Goldenrod_RadioTower_P4_Reunion_Texto_24:
.string "ATLAS: Hacerle creer que ganó,\n"
	.string "para que jamás supiera la verdad.$"

Goldenrod_RadioTower_P4_Reunion_Texto_25:
.string "PRESIDENTE: Interesante.$"

Goldenrod_RadioTower_P4_Reunion_Texto_26:
.string "¿Así que vas tras los LÍDERES DE\n"
	.string "JOHTO? Debo confesarte que me\l"
	.string "apena la transformación que\l"
	.string "sufrirán los GIMNASIOS en este par\l"
	.string "de años que vienen, pero es el\l"
	.string "precio a pagar por el\l"
	.string "progreso, supongo.\l"
	.string "En TRIGAL aún tenemos a una LÍDER,\l"
	.string "más que interesante. Aunque van a\l"
	.string "restaurar el GIMNASIO. Si te das\l"
	.string "prisa, quizás puedas pillarla\l"
	.string "antes de que abandone su puesto.$"

Goldenrod_RadioTower_P4_Reunion_Texto_27:
.string "Espero verte en la gran reunión\n"
	.string "{PLAYER}. Sigue explorando cada\l"
	.string "rincón de JOHTO.$"

Goldenrod_RadioTower_P4_Reunion_Move_1:
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_2:
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_3:
face_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_4:
walk_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_5:
walk_down
walk_down
walk_down
walk_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_6:
emote_exclamation_mark
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_7:
face_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_8:
walk_right
walk_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_9:
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_10:
walk_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_11:
walk_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_12:
walk_left
face_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_13:
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_14:
walk_in_place_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_15:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_16:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_17:
face_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_18:
walk_right
walk_up
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra::
lock
playse SE_EXIT
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
addobject 10
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_2
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_4
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_8
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_7
waitmovement 0x0
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_11
waitmovement 0x0
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_EON_TICKET
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_12
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_13
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_14
waitmovement 0x0
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 8, 0x338, TRUE
setmetatile 12, 8, 0x350, TRUE
setmetatile 11, 9, 0x26F, FALSE
setmetatile 12, 9, 0x358, TRUE
setmetatile 11, 10, 0x3A9, FALSE
setmetatile 12, 10, 0x360, TRUE
special DrawWholeMapView
delay 60
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
waitmovement 0x0
delay 15
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_15
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_12 MSGBOX_AUTOCLOSE
playse SE_EXIT
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
clearflag FLAG_HOENN_275
clearflag FLAG_HOENN_277
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
removeobject 10
setvar VAR_UNUSED_0x40F7, 152
release
end

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10.1:
.string "¡Obtuviste PASE ÉLITE de manos\n"
	.string "POLICÍA!$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_1:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "¿Tú también?\l"
	.string "¡Cuánto tiempo!$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_2:
.string "Después de la caída de OAK,\n"
	.string "GIOVANNI me destinó a HOENN para\l"
	.string "estudiar unas ruinas parecidas a\l"
	.string "las de ISLAS SETE.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_3:
.string "Veo que tú también has\n"
	.string "ascendido. Ya no somos parte de la\l"
	.string "ÉLITE del TEAM ROCKET, {PLAYER},\l"
	.string "somos el TEAM ROCKET.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_4:
.string "Solo GIOVANNI y ATLAS asistirán a\n"
	.string "esta reunión aparte de nosotros.\l"
	.string "Nuestro buen hacer y habilidad en\l"
	.string "el combate nos ha llevado a la\l"
	.string "cima, ahora es cuando podemos usar\l"
	.string "nuestra posición para resolver los\l"
	.string "misterios de est{PAUSE 5}…{PAUSE 5}$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_5:
.string "Sois el ADMIN.JEFE {PLAYER}, y la\n"
	.string "ADMIN.JEFA ANDRA del TEAM ROCKET,\l"
	.string "¿me equivoco?$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_6:
.string "ANDRA: Así es.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_7:
.string "Debéis pasar ya, la reunión está a\n"
	.string "punto de comenzar.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_8:
.string "ANDRA: P{PAUSE 15}-{PAUSE 15}pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Si aquí no hay nadie.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_9:
.string "¿En serio creíais que\n"
	.string "organizaríamos la reunión más\l"
	.string "importante de los últimos 3 años\l"
	.string "en un lugar así?\l"
	.string "Cualquier crío de 10 años podría\l"
	.string "colarse en este despacho, una\l"
	.string "reunión de esta magnitud exige la\l"
	.string "máxima discreción y seguridad.\l"
	.string "Tomad.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10:
.string "Ahora, interactuad con el\n"
	.string "ordenador de la esquina, podréis\l"
	.string "acceder a la verdadera sala de\l"
	.string "reuniones de TORRE RADIO.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_11:
.string "ANDRA: No sé por qué esto me\n"
	.string "es familiar{PAUSE 5}…{PAUSE 5}$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_12:
.string "ANDRA: ¡Vamos allá, {PLAYER}!\n"
	.string "Las personas más influyentes y\l"
	.string "poderosas de las 2 regiones\l"
	.string "estarán aquí. El TEAM\l"
	.string "ROCKET va a cambiar el curso de la\l"
	.string "historia.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1:
face_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_2:
walk_in_place_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3:
emote_exclamation_mark
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_4:
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5:
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_6:
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_7:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_8:
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9:
face_left
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_10:
walk_in_place_left
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_11:
walk_right
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_12:
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_13:
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_14:
face_down
walk_in_place_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_15:
walk_left
walk_down
walk_down
walk_down
walk_right
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_16:
walk_left
walk_left
walk_down
walk_down
walk_right
face_down
step_end

RadioTower_PC::
compare VAR_UNUSED_0x40F7, 151
goto_if_gt RadioTower_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RadioTower_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 8, 0x338, TRUE
setmetatile 12, 8, 0x350, TRUE
setmetatile 11, 9, 0x26F, FALSE
setmetatile 12, 9, 0x358, TRUE
setmetatile 11, 10, 0x3A9, FALSE
setmetatile 12, 10, 0x360, TRUE
setmetatile 12, 11, 0x33B, FALSE
special DrawWholeMapView
delay 60
release
end
