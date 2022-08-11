Ecruteak_Shop_MapScripts::
	.byte 0

EcruteakShop1::
end



EcruteakShop2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "CIUDAD IRIS es la única que vende\n"
.string "C.SAGRADA aún, cuesta 14000\l"
.string "POKÉS, pero ya te digo que este\l"
.string "objeto en KANTO costaría mucho\l"
.string "más.$"



EcruteakShop3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¿Te imaginas presenciar toda la\n"
.string "región desde la cima de TORRE\l"
.string "CAMPANA?\l"
.string "Aunque eso es imposible, no puedo\l"
.string "ni cruzar la puerta que lleva a\l"
.string "SENDA DINDÓN.$"



EcruteakShop4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "Cambio[.]\n"
.string "Cambio[.]\l"
.string "Y más cambio[.]\l"
.string "¡Todo es cambio!$"
