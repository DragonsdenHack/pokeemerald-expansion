CeladonCity_Shop_3F_MapScripts::
	.byte 0

CeladonShop3F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_1:
.string "Captured POKéMON are registered\n"
    .string "with an ID No. and the OT.\p"
    .string "OT stands for “Original TRAINER” -\n"
    .string "the TRAINER that caught it first.$"



CeladonShop3F_2::
end



CeladonShop3F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_3:
.string "You can identify POKéMON you get\n"
    .string "in trades by their ID Numbers.$"



CeladonShop3F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_4:
.string "All right!\p"
    .string "My buddy's going to trade me his\n"
    .string "KANGASKHAN for my HAUNTER!$"



CeladonShop3F_5::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_5, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_5:
.string "Come on, HAUNTER!\p"
    .string "I love HAUNTER!\n"
    .string "I collect them!\p"
    .string "Huh?\p"
    .string "HAUNTER turned into a different\n"
    .string "POKéMON while being traded!$"



CeladonShop3FDocumento_100::
msgbox CeladonShop3FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_100:
.string "3F: TV GAME SHOP$"



CeladonShop3FDocumento_101::
msgbox CeladonShop3FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_101:
.string "Red and Green!\n"
    .string "Both are POKéMON!$"




CeladonShop3FDocumento_102::
msgbox CeladonShop3FDocumento_Text_102, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_102:
.string "It's a Super NES.$"



CeladonShop3FDocumento_103::
msgbox CeladonShop3FDocumento_Text_103, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_103:
.string "An RPG!\n"
    .string "There's no time for that!$"



CeladonShop3FDocumento_104::
msgbox CeladonShop3FDocumento_Text_104, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_104:
.string "A sports game!\n"
    .string "Dad'll like that!$"

CeladonShop3FDocumento_105::
msgbox CeladonShop3FDocumento_Text_105, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_105:
.string "A puzzle game!\n"
    .string "Looks addictive!$"



CeladonShop3FDocumento_106::
msgbox CeladonShop3FDocumento_Text_106, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_106:
.string "A fighting game!\n"
    .string "Looks tough!$"

CeladonCity_Shop_3F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE112_STATE, 0
goto_if_gt CeladonCity_Shop_3F_Entrenador_Especial_3
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_Shop_3F_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CONTADOR, CeladonCity_Shop_3F_Entrenador_Especial_Texto_5
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM53
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE112_STATE, 1
release
end

CeladonCity_Shop_3F_Entrenador_Especial_No::
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Shop_3F_Entrenador_Especial_3::
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Shop_3F_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste MT53 GIGA IMPACTO\n"
	.string "de manos de VENDEDOR!$"

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
