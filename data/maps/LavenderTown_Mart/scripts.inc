LavenderTown_Mart_MapScripts::
	.byte 0

LavenderTownMart-1::
end



LavenderTownMart-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "A veces, coincidirás con parejas\n"
.string "de ENTRENADORES que te retarán\l"
.string "con dos POKéMON a la vez.\p"
.string "Cuando esto ocurra, para luchar\n"
.string "tú también necesitarás dos POKéMON.$"



LavenderTownMart-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¿Conoces REVIVIR?\n"
.string "Devuelve la energía a los POKéMON\l"
.string "debilitados.$"



LavenderTownMart-4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "Estoy buscando algunos objetos que\n"
.string "aumenten las habilidades de los\l"
.string "POKéMON en un sólo combate.\p"
.string "Estoy buscando ATAQUE X,\n"
.string "DEFENSA X, VELOCIDAD X y\l"
.string "ESPECIAL X.\p"
.string "¿Sabes dónde encontrarlos?$"
