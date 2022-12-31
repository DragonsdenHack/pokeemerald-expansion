CeladonCity_Shop_4F_MapScripts::
	.byte 0

CeladonShop4F_1::
end



CeladonShop4F_2::
lock     
faceplayer     
msgbox CeladonCity_Shop4F_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop4F_Text_2:
.string "¡Me han contado una cosa!\p"
.string "¡Puedes huir de un POKéMON\n"
.string "salvaje si le distraes con un\l"
.string "POKé MUÑECO!$"



CeladonShop4F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop4F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop4F_Text_3:
.string "¡Compraré un POKé MUÑECO\n"
.string "para mi novia!\p"
.string "Seguro que es el último grito\n"
.string "en regalos.$"



CeladonShop4FDocumento_100::
msgbox CeladonShop4FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop4FDocumento_Text_100:
.string "¡Dilo con un regalo!\p"
	.string "P3: REGALOS\p"
	.string "¡Evolución Especial!\n"
	.string "¡Diversas PIEDRAS elementales\l"
	.string "en venta!$"
