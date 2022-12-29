Goldenrod_ShopCenterP1_MapScripts::
	.byte 0

GoldenrodShopCenterP1_1::
end



GoldenrodShopCenterP1_2::
end



GoldenrodShopCenterP1_3::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_3:
.string "Poca gente lo sabe, pero las\n"
.string "bebidas de estas máquinas\l"
.string "expendedoras son mucho más\l"
.string "económicas que las POCIONES\l"
.string "corrientes.\l"
.string "¡He oído que la LECHE-MU-MU lo es\l"
.string "aún más!$"



GoldenrodShopCenterP1_4::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_4:
.string "Compré un LARVITAR en el CASINO,\n"
.string "ahora estoy pagando a un experto\l"
.string "para que lo convierta en\l"
.string "TYRANITAR. Dicen que es el POKÉMON\l"
.string "más fuerte de JOHTO, sin tener en\l"
.string "cuenta LEGENDARIOS.\l"
.string "¡Todos me respetarán!$"



GoldenrodShopCenterP1_5::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_5:
.string "Dicen que el CENTRO COMERCIAL de\n"
.string "AZULONA es aún más grande que\l"
.string "este.\l"
.string "¿Será cierto?$"


GoldenrodShopCenterP1Documento_100::
msgbox GoldenrodShopCenterP1Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP1Documento_Text_100:
.string "Tu Compañero de Viaje\n"
	.string "P1 TIENDA DE ENTRENADORES$"
