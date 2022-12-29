Goldenrod_ShopCenterP2_MapScripts::
	.byte 0

GoldenrodShopCenterP2_1::
end



GoldenrodShopCenterP2_2::
lock     
faceplayer     
msgbox Goldenrod_ShopP2_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP2_Text_2:
.string "Ese niño mimado del piso de\n"
.string "abajo…\l"
.string "Todos los POKÉMON que tiene son\l"
.string "comprados…\l"
.string "Espero que pierda todos sus\l"
.string "combates por tenerlos a 0 en\l"
.string "puntos de esfuerzo…$"



GoldenrodShopCenterP2_3::
lock     
faceplayer     
msgbox Goldenrod_ShopP2_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP2_Text_3:
.string "Nunca sabes lo que puedes\n"
.string "encontrarte cuando vas de compras.\l"
.string "¡Por eso me encanta estar aquí!$"



GoldenrodShopCenterP2Documento_100::
msgbox GoldenrodShopCenterP2Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP2Documento_Text_100:
.string "Para los amantes de la victoria\n"
	.string "P2 COLECCIÓN DE COMBATE$"
