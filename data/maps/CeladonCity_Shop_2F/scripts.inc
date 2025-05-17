CeladonCity_Shop_2F_MapScripts::
	.byte 0

CeladonShop2F_1::
end



CeladonShop2F_2::
end



CeladonShop2F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop2F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop2F_Text_3:
	.string "Es gibt einen Kunden namens SIEGFRIED,\n"
	.string "der gelegentlich vorbeikommt. Er kauft\l"
	.string "stets Umhänge. Ich frage mich, ob er\l"
	.string "viele gleiche Umhänge zu Hause hat.$"

CeladonShop2F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop2F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop2F_Text_4:
	.string "Vor längeren Ausflügen solltest\n"
	.string "du BELEBER kaufen.$"


CeladonShop2FDocumento_100::
msgbox CeladonShop2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop2FDocumento_Text_100:
.string "Nützliche Items für TRAINER!\p"
    .string "1S: ZUBEHÖR FÜR TRAINER$"
