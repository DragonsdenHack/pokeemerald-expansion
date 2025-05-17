CeladonCity_Shop_6F_MapScripts::
	.byte 0

CeladonShop6F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop6F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop6F_Text_1:
	.string "Mein Bruder hat mir gesagt, nicht mit\n"
	.string "Leuten von TEAM ROCKET zu reden.$"



CeladonShop6F_2::
lock     
faceplayer     
msgbox CeladonCity_Shop6F_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop6F_Text_2:
	.string "Ob du es glaubst oder nicht: Meine\n"
	.string "Schwester ist eine TRAINERin! Aber sie\l"
	.string "ist so kindisch!\p"
	.string "Ich werde noch ganz verrückt!$"



CeladonShop6FDocumento_100::
msgbox CeladonShop6FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop6FDocumento_Text_100:
.string "ROOFTOP SQUARE:\n"
    .string "VENDING MACHINES$"
