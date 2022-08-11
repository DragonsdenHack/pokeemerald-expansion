CeladonCity_Shop_4F_MapScripts::
	.byte 0

CeladonShop4F-1::
end



CeladonShop4F-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¡Me han contado una cosa!\p"
.string "¡Puedes huir de un POKéMON\n"
.string "salvaje si le distraes con un\l"
.string "POKé MUÑECO!$"



CeladonShop4F-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Compraré un POKé MUÑECO\n"
.string "para mi novia!\p"
.string "Seguro que es el último grito\n"
.string "en regalos.$"
