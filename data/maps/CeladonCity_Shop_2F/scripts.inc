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
.string "We have a customer, LANCE, who\n"
    .string "occasionally comes.\p"
    .string "He always buys capes.\p"
    .string "I wonder… Does he have many\n"
    .string "identical capes at home?$"

CeladonShop2F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop2F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop2F_Text_4:
.string "For long outings, you should buy\n"
    .string "REVIVE.$"


CeladonShop2FDocumento_100::
msgbox CeladonShop2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop2FDocumento_Text_100:
.string "Top-Grade Items for TRAINERS!\p"
    .string "2F: TRAINER'S MARKET$"
