CeruleanCity_BikeShop_MapScripts::
	.byte 0

CeruleanCityBikeShop1::
end



CeruleanCityBikeShop2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¡Un ROCKET!\n"
.string "¡No me hagas daño!$"



CeruleanCityBikeShop3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Nadie va a dejarte comprar una\n"
.string "BICI con tu sucio dinero ganado de\l"
.string "forma deshonrosa, ¡vete antes de\l"
.string "que llame a la POLICÍA!$"
