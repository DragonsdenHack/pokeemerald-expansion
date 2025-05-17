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
	.string "SIEGFRIED hat euch offiziell den\n"
	.string "Zutritt zum PRISMANIA-EINKAUFSCENTER\l"
	.string "verboten. Habt ihr auch verdient.\p"
	.string "Vielleicht lernt ihr dadurch endlich\n"
	.string "einmal, die Rechte eurer Mitmenschen\l"
	.string "zu respektieren!$"

UndergroundPath6F_Text_2:
.string "A juzgar por tu indumentaria, yo\n"
.string "diría que perteneces a una\l"
.string "organización muy respetada.\l"
.string "Y además…{PAUSE 60}no sé por qué,\l"
.string "pero tu cara me es familiar…$"
