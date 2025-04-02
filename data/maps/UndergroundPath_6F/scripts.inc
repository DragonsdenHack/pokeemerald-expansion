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
	.string "LANCE recently banned you from\n"
	.string "entering the CELADON DEPT. STORE, too.\l"
	.string "I'm glad about that, you have to learn\l"
	.string "to respect the law!$"

UndergroundPath6F_Text_2:
.string "A juzgar por tu indumentaria, yo\n"
.string "diría que perteneces a una\l"
.string "organización muy respetada.\l"
.string "Y además…{PAUSE 60}no sé por qué,\l"
.string "pero tu cara me es familiar…$"
