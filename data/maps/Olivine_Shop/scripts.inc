Olivine_Shop_MapScripts::
	.byte 0

OlivineShop1::
end



OlivineShop2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Me gustaría que vendieran PERLA y\n"
.string "PERLA GRANDE, pero esos objetos\l"
.string "son muy escasos en JOHTO, incluso\l"
.string "en lugares marítimos como este.\l"
.string "Dicen que las ISLAS ESPUMA de\l"
.string "KANTO están repletas de estos\l"
.string "objetos.$"



OlivineShop3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Compra AGUA MÍSTICA y verás lo\n"
.string "duro que pegan los POKÉMON TIPO\l"
.string "AGUA!$"



OlivineShop4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "Hace 2 años, vendían CENIZA\n"
.string "SAGRADA. Ahora CIUDAD IRIS es la\l"
.string "única ciudad que aún la vende. Es\l"
.string "comprensible, ya que son\l"
.string "limitadas. Dentro de otro par de\l"
.string "años no podrán encontrarse en\l"
.string "ningún lugar.$"
