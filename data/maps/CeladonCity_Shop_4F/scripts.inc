CeladonCity_Shop_4F_MapScripts::
	.byte 0

CeladonShop4F_1::
end



CeladonShop4F_2::
lock     
faceplayer     
msgbox CeladonCity_Shop4F_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop4F_Text_2:
	.string "Ich habe einen Tipp bekommen! Du\n"
	.string "kannst vor wilden POKéMON fliehen, wenn\l"
	.string "du sie mit einer POKéPUPPE ablenkst!$"

CeladonShop4F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop4F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop4F_Text_3:
	.string "Ich kaufe ein Geschenk für meine\n"
	.string "Freundin. Sie freut sich bestimmt\l"
	.string "über eine POKéPUPPE!$"



CeladonShop4FDocumento_100::
msgbox CeladonShop4FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop4FDocumento_Text_100:
	.string "Bereite anderen mit Geschenken eine\n"
	.string "Freude! S3: GESCHENKARTIKEL\l"
	.string "SONDERANGEBOTE!\p"
	.string "Sonderpreise für ELEMENT-STEINE!$"
