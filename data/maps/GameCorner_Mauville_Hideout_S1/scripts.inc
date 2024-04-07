GameCorner_Mauville_Hideout_S1_MapScripts::
	.byte 0


GameCorner_Mauville_Hideout_S1_NPC2_Domador::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC2_Domador_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC2_Domador_Texto_1:
	.string "Tenemos mucho trabajo, la demanda de\n"
	.string "premios es cada vez mayor.$"


GameCorner_Mauville_Hideout_S1_NPC3_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC3_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC3_Cientifico_Texto_1:
	.string "Nuestro sistema de filas y columnas es\n"
	.string "la mayor estafa legal que vas a\l"
	.string "encontrar en toda HOENN chaval.$"

GameCorner_Mauville_Hideout_S1_NPC6_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC6_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC6_Cientifico_Texto_1:
	.string "Este CASINO estuvo apunto de cerrar\n"
	.string "por su mala gestión. Desde que la actual\l"
	.string "dueña se hizo con él, se ha convertido\l"
	.string "en uno de los negocios más rentables de\l"
	.string "HOENN.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico::
lock
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_7 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_8 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_10 MSGBOX_AUTOCLOSE
release
end

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_1:
	.string "¿Quién está ahí?$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_2:
	.string "Pareces alguien formal, ¿por qué estás\n"
	.string "aquí?$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_3:
	.string "… …$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_4:
	.string "¿Una base encubierta de DEVON? ¿De\n"
	.string "dónde has sacado eso chico? Desde aquí\l"
	.string "solo administramos este humilde CASINO.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_5:
	.string "… …$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_6:
	.string "Te lo acabo de decir: aquí solo hay\n"
	.string "trabajadores del CASINO.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_7:
	.string "Parece que necesitas entenderlo por\n"
	.string "las malas.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_8:
	.string "La JEFA se enfadará.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_9:
	.string "Tú lo has querido, los POKÉMON de\n"
	.string "nuestra JEFA son más fuertes que los\l"
	.string "de un LÍDER de GIMNASIO. Si sigues en\l"
	.string "este plan vas a acabar mal.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_10:
	.string "Los POKÉMON de nuestra JEFA son más\n"
	.string "fuertes que los de un LÍDER de\l"
	.string "GIMNASIO. Si sigues en este plan vas a\l"
	.string "acabar mal.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Despues::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_10 MSGBOX_AUTOCLOSE
release
end

GameCorner_Mauville_EventScript_Primer_Domador::
	trainerbattle_single TRAINER_TRAINER_580, GameCorner_Mauville_Text_PrimerDomadorIntro, GameCorner_Mauville_Text_PrimerDomadorDefeat
	msgbox GameCorner_Mauville_Text_PrimerDomadorPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Segundo_Domador::
	trainerbattle_single TRAINER_TRAINER_581, GameCorner_Mauville_Text_SegundoDomadorIntro, GameCorner_Mauville_Text_SegundoDomadorDefeat
	msgbox GameCorner_Mauville_Text_SegundoDomadorPostBattle, MSGBOX_AUTOCLOSE
	end




