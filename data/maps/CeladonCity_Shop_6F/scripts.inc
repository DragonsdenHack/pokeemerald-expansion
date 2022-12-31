CeladonCity_Shop_6F_MapScripts::
	.byte 0

CeladonShop6F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop6F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop6F_Text_1:
.string "Mi hermano dice que no hable con\n"
.string "gente del TEAM ROCKET.$"



CeladonShop6F_2::
lock     
faceplayer     
msgbox CeladonCity_Shop6F_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop6F_Text_2:
.string "Mi hermana es ENTRENADORA,\n"
.string "¡de verdad!\p"
.string "¡Pero es tan infantil que me vuelve\n"
.string "loco!$"



CeladonShop6FDocumento_100::
msgbox CeladonShop6FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop6FDocumento_Text_100:
.string "ÚLTIMO PISO:\n"
	.string "DISTRIBUIDORES$"
