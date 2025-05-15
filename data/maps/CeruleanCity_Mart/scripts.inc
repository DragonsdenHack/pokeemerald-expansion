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
	.string "Benutze einen SCHUTZ, um Käfer und\n"
	.string "schwächere POKéMON von dir\l"
	.string "fernzuhalten! Für optimalen Schutz\l"
	.string "solltest du das stärkste POKéMON an\l"
	.string "die Spitze der Liste setzen! Wenn das\l"
	.string "POKéMON, das an erster Stelle steht,\l"
	.string "stark ist, wirkt SCHUTZ noch besser!$"



CeruleanCityMart3::
lock     
faceplayer     
msgbox CeruleanCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_Mart_Text_3:
	.string "Besitzt du SONDERBONBONs? Gibt man\n"
	.string "einem POKéMON ein solches BONBON, dann\l"
	.string "erreicht es den nächsten Level!$"
