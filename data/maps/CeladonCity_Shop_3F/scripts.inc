CeladonCity_Shop_3F_MapScripts::
	.byte 0

CeladonShop3F-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¡Los POKéMON capturados tienen un\n"
.string "N.º IDENTIDAD y un EO, el nombre\p"
.string "del ENTRENADOR ORIGINAL\n"
.string "que lo atrapó!$"



CeladonShop3F-2::
end



CeladonShop3F-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Puedes identificar a los POKéMON\n"
.string "que hayas cambiado por su N.º ID!$"



CeladonShop3F-4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "¡Muy bien!\p"
.string "¡Mi compañero va a cambiarme su\n"
.string "KANGASKHAN por mi GRAVELER!$"



CeladonShop3F-5::
lock     
faceplayer     
msgbox Text_5, MSGBOX_DEFAULT
release     
end

Text_5:
.string "¡Un GRAVELER!\p"
.string "¡Me gustan los GRAVELER!\n"
.string "¡Los colecciono!\p"
.string "¿Qué?\p"
.string "¡GRAVELER se transformó en otro\n"
.string "POKéMON!$"
