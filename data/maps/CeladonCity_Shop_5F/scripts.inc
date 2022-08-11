CeladonCity_Shop_5F_MapScripts::
	.byte 0

CeladonShop5F-1::
end



CeladonShop5F-2::
end



CeladonShop5F-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡He venido a por dispositivos de\n"
.string "mejora de los POKéMON!\p"
.string "Las PROTEÍNAS aumentan la potencia\n"
.string "del ATAQUE.\p"
.string "El HIERRO aumenta la DEFENSA.$"



CeladonShop5F-4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "¡Los dispositivos de mejora de los\n"
.string "POKéMON sólo se venden aquí!\p"
.string "MÁS PS aumenta los PS básicos\n"
.string "de un POKéMON.\p"
.string "Usa CALCIO para aumentar las\n"
.string "habilidades ESPECIALES.\p"
.string "ZINC aumenta la DEF. ESP.\n"
.string "de un POKéMON.\p"
.string "Usa CARBURANTE para aumentar\n"
.string "la VELOCIDAD.$"
