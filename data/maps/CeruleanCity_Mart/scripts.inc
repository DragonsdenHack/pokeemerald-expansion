CeruleanCity_Mart_MapScripts::
	.byte 0

CeruleanCityMart1::
end



CeruleanCityMart2::
lock     
faceplayer     
msgbox CeruleanCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_Mart_Text_2:
.string "Use REPELS to avoid bugs and weak\n"
	.string "POKÉMON. Place your strongest POKÉMON\l"
	.string "at the top of your team to achieve\l"
	.string "better results! If your first POKéMON\l"
	.string "is strong, the REPEL will have a greater\l"
	.string "effect.$"



CeruleanCityMart3::
lock     
faceplayer     
msgbox CeruleanCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_Mart_Text_3:
.string "Have you seen any RARE CANDY? They say\n"
	.string "POKÉMON level up if they eat one!$"
