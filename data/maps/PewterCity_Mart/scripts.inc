PewterCity_Mart_MapScripts::
	.byte 0

PewterCityMart1::
end



PewterCityMart2::
lock     
faceplayer     
msgbox PewterCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Mart_Text_2:
	.string "Wenn man seine POKéMON eifrig\n"
	.string "trainiert, können selbst schwächere\l"
	.string "POKéMON für Überraschungen gut sein!$"



PewterCityMart3::
lock     
faceplayer     
msgbox PewterCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Mart_Text_3:
	.string "Ein zwielichtiger, alter Mann hat mir\n"
	.string "dieses seltsame POKéMON angedreht!\p"
	.string "Es ist vollkommen schwach und hat\n"
	.string "500¥ gekostet!$"
