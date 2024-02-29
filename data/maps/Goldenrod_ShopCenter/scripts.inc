Goldenrod_ShopCenter_MapScripts::
	.byte 0

GoldenrodShopCenter1::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_1:
.string "Welcome to GOLDENROD DEPT.STORE.$"



GoldenrodShopCenter2::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_2:
	.string "Apparently, they teach useful moves on\n"
	.string "the upper floors. I'll check it out.$"



GoldenrodShopCenter3::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_3:
.string "I love shopping!$"



GoldenrodShopCenter4::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_4:
.string "Mamá es una experta en gangas.\n"
.string "Siempre compra cosas a precios más\l"
.string "bajos.$"



GoldenrodShopCenterDocumento_100::
msgbox GoldenrodShopCenterDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterDocumento_Text_100:
.string "PB INFORMACIÓN\n"
	.string "P1 TIENDA DE ENTRENADORES\l"
	.string "P2 ARTÍCULOS DE COMBATE\l"
	.string "P3 BOTIQUÍN\l"
	.string "P4 MOVIMIENTOS POKÉMON\l"
	.string "P5 ÚLTIMO PISO$"
