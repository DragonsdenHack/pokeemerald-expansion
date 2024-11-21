CeruleanCity_BikeShop_MapScripts::
	.byte 0

CeruleanCityBikeShop1::
end



CeruleanCityBikeShop2::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_2:
.string "¡Un ROCKET!\n"
.string "¡No me hagas daño!$"



CeruleanCityBikeShop3::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_3:
.string "Nadie va a dejarte comprar una\n"
.string "BICI con tu sucio dinero ganado de\l"
.string "forma deshonrosa, ¡vete antes de\l"
.string "que llame a la POLICÍA!$"



CeruleanCityBikeShopDocumento_100::
msgbox CeruleanCityDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityBikeShopDocumento_Text_100:
.string "¡Una bici nueva y brillante!$"


CeruleanCity_BikeShop_Secundaria_Bicicleta::
compare VAR_UNUSED_0x409B, 3
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_3
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 2
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_2
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_2::
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1
waitmovement 0x0
waitse
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.1
waitmovement 0x0
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.2
waitmovement 0x0
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2
waitmovement 0x0
waitse
playse 495
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BONOBICI, CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2
waitmovement 0x0
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_MACH_BIKE
waitfanfare
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 4
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.1:
face_up
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.2:
face_left
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_3::
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.1 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.2 MSGBOX_AUTOCLOSE
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1:
.string "Este lugar no es para mendigos\n"
	.string "como vosotros que apenas podéis\l"
	.string "pagar por vuestra existencia, si no\l"
	.string "tienes el millón de POKES que cuesta\l"
	.string "la BICICLETA, no pintas nada aquí.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2:
.string "Voy a tener una charla con ese\n"
	.string "PRESIDENTE del CLUB DE FANS, eres\l"
	.string "el tercero que me viene mendigando\l"
	.string "una BICI gratis gracias a ese\l"
	.string "BONO, no importa que lo haya\l"
	.string "pagado él antes.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.1:
	.string "¿Sabes cómo se resiente la\n"
	.string "reputación de mi negocio al\l"
	.string "enterarse la gente de que un par\l"
	.string "de críos vulgares y un ROCKET van\l"
	.string "con BICIS de mi marca?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.2:
	.string "¡Eso condiciona la decisión final\n"
	.string "de los que de verdad me compran,\l"
	.string "solo comprarán la BICI si saben\l"
	.string "que es un producto que muy pocos\l"
	.string "tienen!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4:
.string "¡No puede ser!\n"
	.string "¡Un BONO BICI!\l"
	.string "¿De dónde lo has sacado?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5:
.string "¿El PRESIDENTE del\n"
	.string "CLUB de FANS de CARMÍN?\l"
	.string "¿Y quién es él para determinar que\l"
	.string "eso tiene validez en mi tienda?\l"
	.string "Yo dirijo aquí un negocio, no un\l"
	.string "asilo, ¿comprendes?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.1:
	.string "No puedo dejar que vengan cada dos\n"
	.string "por tres con un BONO de regalo, eso\l"
	.string "supone una pérdida de 1.000.000¥.\l"
	.string "Alguien como tú no ganará tal cifra\l"
	.string "en su vida.$"
	
CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.2:
	.string "Si esta tienda tiene éxito es por\n"
	.string "ricachones que no conocen el valor\l"
	.string "real de las cosas, y están dispuestos\l"
	.string "a pagar cualquier precio por cualquier\l"
	.string "producto, no por ladrones que viven\l"
	.string "al día como tú.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6:
.string "¡Has hecho que me irrite!\n"
	.string "¡Verás cómo tratamos aquí a\l"
	.string "ladrones que vienen intentando ser\l"
	.string "legales!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7:
.string "¡NO!\n"
	.string "¡Mis POKÉMON amaestrados a golpe\l"
	.string "de látigo!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8:
.string "¡Mis bravos POKÉMON!\n"
	.string "¡Esto no entraba en mis planes, no\l"
	.string "esperaba que un ROCKET tuviera\l"
	.string "respuesta a mis POKÉMON!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9:
.string "Mira, te cambiaré ese maldito BONO\n"
	.string "por la BICI y todo arreglado.\l"
	.string "¿Vale?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10:
.string "{PLAYER} cambió el\n"
	.string "BONO BICI por una BICICLETA.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1:
emote_exclamation_mark
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2:
walk_in_place_left
step_end
