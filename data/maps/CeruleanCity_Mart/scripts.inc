CeruleanCity_Mart_MapScripts::
	.byte 0

CeruleanCityMart1::
end



CeruleanCityMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Usa el REPELENTE para evitar a los\n"
.string "bichos y a los POKéMON débiles.\p"
.string "¡Pon a tu POKéMON más fuerte el\n"
.string "primero de la lista para conseguir\l"
.string "mejores resultados!\p"
.string "Si tu primer POKéMON es fuerte,\n"
.string "el REPELENTE tendrá mayor efecto.$"



CeruleanCityMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¿Has visto algún CARAMELORARO?\p"
.string "¡Dicen que los POKéMON suben\n"
.string "un nivel si se comen uno!$"
