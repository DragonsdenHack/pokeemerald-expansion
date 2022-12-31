CeladonCity_Shop_1F_MapScripts::
	.byte 0

CeladonShop1F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop1F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop1F_Text_1:
.string "¡Hola! Éste es el CENTRO\n"
.string "COMERCIAL de AZULONA.\p"
.string "El tablero de la derecha es un\n"
.string "plano de las tiendas.$"



CeladonShop1FDocumento_100::
msgbox CeladonShop1FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_100:
    .string "PB: PUESTO DE INFORMACIÓN\p"
	.string "P1: TIENDA DE ENTRENADORES\p"
	.string "P2: VIDEOJUEGOS\p"
	.string "P3: REGALOS\p"
	.string "P4: FARMACIA\p"
	.string "ÚLTIMO PISO: DISTRIBUIDORES$"



CeladonShop1FDocumento_101::
msgbox CeladonShop1FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_101:
	.string "PB: PUESTO DE INFORMACIÓN$"
