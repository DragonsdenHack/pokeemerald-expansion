CinnabarIsland_Laboratory2_MapScripts::
	.byte 0

CinnabarIslandLaboratory2_1::
end



CinnabarIslandLaboratory2_2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "EEVEE puede evolucionar\n"
.string "y convertirse en tres tipos\l"
.string "de POKéMON.$"



CinnabarIslandLaboratory2Documento_100::
msgbox CinnabarIslandLaboratory2Documento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_100:
.string "¡Un bote de ámbar!$"



CinnabarIslandLaboratory2Documento_101::
msgbox CinnabarIslandLaboratory2Documento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_101:
.string "¡Hay un correo electrónico!\p"
	.string "…\p"
	.string "Los 3 legendarios pájaros POKéMON\n"
	.string "son ARTICUNO, ZAPDOS y MOLTRES.\p"
	.string "Desconocemos sus guaridas.\p"
	.string "Pensamos explorar la cueva\n"
	.string "que hay cerca de la CELESTE.\p"
	.string "De: EQUIPO de INVESTIGACIÓN\n"
	.string "POKéMON{PAUSE 5}…{PAUSE 5}$"

CinnabarIsland_Laboratory2_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE117_STATE, 0
goto_if_gt CinnabarIsland_Laboratory2_Entrenador_Especial_3
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt CinnabarIsland_Laboratory2_Entrenador_Especial_2
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_3::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_2::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarIsland_Laboratory2_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHALECOASALTO, CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_8
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_ASSAULT_VEST
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE117_STATE, 1
release
end


CinnabarIsland_Laboratory2_Entrenador_Especial_2_No::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste CHALECO ASALTO de\n"
	.string "manos de SUPERNECIO!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1:
.string "No tienes idea de la inmensidad de\n"
	.string "variables que podemos utilizar a\l"
	.string "nuestro favor para afrontar una\l"
	.string "batalla POKÉMON con mayores\l"
	.string "probabilidades de éxito, si los\l"
	.string "científicos de este laboratorio al\l"
	.string "menos tuvieran un mínimo de\l"
	.string "conocimientos de combate.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_2:
.string "…\n"
	.string "…$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_3:
.string "No, tú tampoco pareces tenerlos,\n"
	.string "tal vez si reunes todas las\l"
	.string "MEDALLAS te de la oportunidad de\l"
	.string "enfrentarme.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4:
.string "El CHALECO ASALTO aumenta en un\n"
	.string "50% la DEFENSA ESPECIAL del\l"
	.string "POKÉMON que lo lleve equipado,\l"
	.string "pero solo permite emplear\l"
	.string "movimientos de daño directo, es un\l"
	.string "objeto perfecto para frenar en\l"
	.string "seco a atacantes especiales.\l"
	.string "¡Funciona especialmente bien con\l"
	.string "POKÉMON con la habilidad\l"
	.string "REGENERACIÓN, y movimientos como\l"
	.string "PUÑO DRENAJE o GIGADRENADO!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_5:
.string "¡Vaya!\n"
	.string "Parece que hay algo rescatable\l"
	.string "dentro de la mediocridad de esta\l"
	.string "isla, ¿así que aspiras a derrotar\l"
	.string "a la ÉLITE 4?\l"
	.string "Si eres capaz de derrotarme en un\l"
	.string "combate, te daré algo que te\l"
	.string "ayudará con ello.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_7:
.string "Así habla un ENTRENADOR de verdad.\n"
	.string "¡No te arrepentirás!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_8:
.string "¡Oh!\n"
	.string "¡Si que vas en serio con el reto\l"
	.string "de la ÉLITE 4!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_9:
.string "Me ha quedado claro que eres de\n"
	.string "esos tipos que tienen en cuenta\l"
	.string "cada detalle dentro de una\l"
	.string "batalla, y miran minuciosamente\l"
	.string "los mejores objetos para construir\l"
	.string "un gran equipo, a alguien como tú\l"
	.string "jamás le debería de faltar esto en\l"
	.string "su arsenal de posibles opciones.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_10:
.string "No sabes lo que te pierdes chaval,\n"
	.string "espero que cuando te golpeen con\l"
	.string "RAYO o PSÍQUICO te tumben de un\l"
	.string "solo golpe por haberme negado este\l"
	.string "combate…$"
