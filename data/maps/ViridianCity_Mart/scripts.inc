ViridianCity_Mart_MapScripts::
	.byte 0

ViridianCityMart1::
end



ViridianCityMart2::
lock     
faceplayer     
msgbox ViridianCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_Mart_Text_2:
.string "Yo tengo algunas POCIONES.\p"
.string "Nunca sabes cuándo pueden\n"
.string "necesitarlas tus POKéMON.$"



ViridianCityMart3::
lock     
faceplayer     
msgbox ViridianCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

ViridianCity_Mart_Text_3:
.string "En esta tienda venden muchos\n"
.string "ANTÍDOTOS, creo.$"
