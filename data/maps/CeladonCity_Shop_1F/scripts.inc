CeladonCity_Shop_1F_MapScripts::
	.byte 0

CeladonShop1F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop1F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop1F_Text_1:
.string "Hello!\n"
    .string "Welcome to CELADON DEPT. STORE.\p"
    .string "The board on the right describes\n"
    .string "the store layout.$"



CeladonShop1FDocumento_100::
msgbox CeladonShop1FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_100:
.string "1F: SERVICE COUNTER\p"
    .string "2F: TRAINER'S MARKET\p"
    .string "3F: TV GAME SHOP\p"
    .string "4F: WISE MAN GIFTS\p"
    .string "5F: DRUGSTORE\p"
    .string "ROOFTOP SQUARE: VENDING MACHINES$"

CeladonShop1FDocumento_101::
msgbox CeladonShop1FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop1FDocumento_Text_101:
.string "1F: SERVICE COUNTER$"
