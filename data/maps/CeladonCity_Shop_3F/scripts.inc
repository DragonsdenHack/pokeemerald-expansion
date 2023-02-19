CeladonCity_Shop_3F_MapScripts::
	.byte 0

CeladonShop3F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_1:
.string "¡Los POKéMON capturados tienen un\n"
.string "N.º IDENTIDAD y un EO, el nombre\p"
.string "del ENTRENADOR ORIGINAL\n"
.string "que lo atrapó!$"



CeladonShop3F_2::
end



CeladonShop3F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_3:
.string "¡Puedes identificar a los POKéMON\n"
.string "que hayas cambiado por su N.º ID!$"



CeladonShop3F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_4:
.string "¡Muy bien!\p"
.string "¡Mi compañero va a cambiarme su\n"
.string "KANGASKHAN por mi GRAVELER!$"



CeladonShop3F_5::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_5, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_5:
.string "¡Un GRAVELER!\p"
.string "¡Me gustan los GRAVELER!\n"
.string "¡Los colecciono!\p"
.string "¿Qué?\p"
.string "¡GRAVELER se transformó en otro\n"
.string "POKéMON!$"



CeladonShop3FDocumento_100::
msgbox CeladonShop3FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_100:
.string "P2: VIDEOJUEGOS$"



CeladonShop3FDocumento_101::
msgbox CeladonShop3FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_101:
.string "¡Rojo y Verde!\n"
	.string "¡Dos juegos de POKéMON!$"




CeladonShop3FDocumento_102::
msgbox CeladonShop3FDocumento_Text_102, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_102:
.string "¡Es una SUPER NINTENDO!$"



CeladonShop3FDocumento_103::
msgbox CeladonShop3FDocumento_Text_103, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_103:
.string "Un juego de rol.\n"
	.string "¡Genial! ¡Pero no tengo tiempo!$"



CeladonShop3FDocumento_104::
msgbox CeladonShop3FDocumento_Text_104, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_104:
	.string "¡Un juego de deportes!$"




CeladonShop3FDocumento_105::
msgbox CeladonShop3FDocumento_Text_105, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_105:
.string "¡Un juego de puzzles!\n"
	.string "¡Parece muy adictivo!$"



CeladonShop3FDocumento_106::
msgbox CeladonShop3FDocumento_Text_106, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_106:
.string "¡Un juego de lucha!\n"
	.string "¡Parece muy difícil!$"

CeladonCity_Shop_3F_Entrenador_Especial::
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE112_STATE, 1
release
end

CeladonCity_Shop_3F_Entrenador_Especial_Texto_1:
.string "Si un POKÉMON resiste un\n"
	.string "movimiento físico y usa CONTADOR,\l"
	.string "le devolverá a su rival el doble\l"
	.string "de daño que acaba de provocarle.\l"
	.string "¡Es por eso que hay que asegurarse\l"
	.string "de que nuestros movimientos\l"
	.string "físicos son definitivos y no dan\l"
	.string "opción a que el rival mueva!\l"
	.string "¡Si me derrotas te enseñaré como\l"
	.string "destrozar a tu rival de un solo\l"
	.string "golpe!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_2:
.string "¿Aceptas el reto?$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_3:
.string "GIGA IMPACTO tiene la friolera de\n"
	.string "150 de POTENCIA, usado en POKÉMON\l"
	.string "del tipo NORMAL también recibirá\l"
	.string "STAB.\l"
	.string "¡TAUROS o SNORLAX son las mejores\l"
	.string "opciones, darán la estocada final\l"
	.string "a ese POKÉMON tan difícil de\l"
	.string "tumbar ya lo verás!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_4:
.string "¡No te arrepentirás!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_5:
.string "¡Guau!\n"
	.string "¡Qué potencia!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_6:
.string "¡Tus POKÉMON son un torbellino\n"
	.string "ofensivo chico!\l"
	.string "¡Esta MT te vendrá perfecta!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_7:
.string "¡Tú te lo pierdes!$"
