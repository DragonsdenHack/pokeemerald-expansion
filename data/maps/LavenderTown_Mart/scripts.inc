LavenderTown_Mart_MapScripts::
	.byte 0

LavenderTownMart_1::
end



LavenderTownMart_2::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_2, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_2:
.string "A veces, coincidirás con parejas\n"
.string "de ENTRENADORES que te retarán\l"
.string "con dos POKéMON a la vez.\p"
.string "Cuando esto ocurra, para luchar\n"
.string "tú también necesitarás dos POKéMON.$"



LavenderTownMart_3::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_3:
.string "¿Conoces REVIVIR?\n"
.string "Devuelve la energía a los POKéMON\l"
.string "debilitados.$"



LavenderTownMart_4::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_4:
.string "Estoy buscando algunos objetos que\n"
.string "aumenten las habilidades de los\l"
.string "POKéMON en un sólo combate.\p"
.string "Estoy buscando ATAQUE X,\n"
.string "DEFENSA X, VELOCIDAD X y\l"
.string "ESPECIAL X.\p"
.string "¿Sabes dónde encontrarlos?$"
