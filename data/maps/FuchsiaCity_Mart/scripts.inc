FuchsiaCity_Mart_MapScripts::
	.byte 0

FuchsiaCityMart1::
end



FuchsiaCityMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿Tienes alguna bandera de la ZONA\n"
.string "del SAFARI?\p"
.string "¿Tienes cartas? ¿Y calendarios?$"



FuchsiaCityMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¿Has probado VELOCIDAD X?\n"
.string "¡Da más velocidad a los POKéMON\l"
.string "en combate!$"
