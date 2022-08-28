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
.string "¡Podrían suceder cosas buenas si\n"
.string "entrenaras rápidamente a tus\l"
.string "POKéMON, hasta a los más débiles!$"



PewterCityMart3::
lock     
faceplayer     
msgbox PewterCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Mart_Text_3:
.string "¡Un misterioso anciano me vendió\n"
.string "este extraño pez POKéMON!\p"
.string "¡Es muy débil y cuesta 500!$"
