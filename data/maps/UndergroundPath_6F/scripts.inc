UndergroundPath_6F_MapScripts::
	.byte 0

UndergroundPath6F_1::
lock     
faceplayer     
msgbox UndergroundPath6F_Text_1, MSGBOX_DEFAULT
release     
end

UndergroundPath6F_2::
lock     
faceplayer     
msgbox UndergroundPath6F_Text_2, MSGBOX_DEFAULT
release     
end

UndergroundPath6F_Text_1:
.string "LANCE os prohibió hace poco entrar\n"
.string "también al CENTRO COMERCIAL\l"
.string "AZULONA, os está bien empleado así\l"
.string "aprenderéis a respetar los\l"
.string "derechos de los ciudadanos.$"

UndergroundPath6F_Text_2:
.string "A juzgar por tu indumentaria, yo\n"
.string "diría que perteneces a una\l"
.string "organización muy respetada.\l"
.string "Y además…{PAUSE 60}no sé por qué,\l"
.string "pero tu cara me es familiar…$"