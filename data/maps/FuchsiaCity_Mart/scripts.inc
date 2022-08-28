FuchsiaCity_Mart_MapScripts::
	.byte 0

FuchsiaCityMart1::
end



FuchsiaCityMart2::
lock     
faceplayer     
msgbox FuchsiaCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Mart_Text_2:
.string "¿Tienes alguna bandera de la ZONA\n"
.string "del SAFARI?\p"
.string "¿Tienes cartas? ¿Y calendarios?$"



FuchsiaCityMart3::
lock     
faceplayer     
msgbox FuchsiaCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Mart_Text_3:
.string "¿Has probado VELOCIDAD X?\n"
.string "¡Da más velocidad a los POKéMON\l"
.string "en combate!$"
