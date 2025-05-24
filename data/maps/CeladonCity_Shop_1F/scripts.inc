CeladonCity_Shop_1F_MapScripts::
	.byte 0

CeladonShop1F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop1F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop1F_Text_1:
	.string "Willkommen im EINKAUFSZENTRUM von\n"
	.string "PRISMANIA CITY! Auf der Tafel rechts\n"
	.string "findest du eine Übersicht.$"



CeladonShop1FDocumento_100::
msgbox CeladonShop1FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_100:
.string "EG: KUNDEN-INFORMATION\p"
    .string "1S: ZUBEHÖR FÜR TRAINER\p"
    .string "2S: VIDEOSPIELE-SHOP\p"
    .string "3S: GESCHENKARTIKEL\p"
    .string "4S: DROGERIE\p"
    .string "DACHGARTEN: AUTOMATEN$"

CeladonShop1FDocumento_101::
msgbox CeladonShop1FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_101:
.string "EG: KUNDENINFORMATION$"
