PewterCity_Mart_MapScripts::
	.byte 0

PewterCityMart1::
end



PewterCityMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¡Podrían suceder cosas buenas si\n"
.string "entrenaras rápidamente a tus\l"
.string "POKéMON, hasta a los más débiles!$"



PewterCityMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Un misterioso anciano me vendió\n"
.string "este extraño pez POKéMON!\p"
.string "¡Es muy débil y cuesta 500[$]!$"
