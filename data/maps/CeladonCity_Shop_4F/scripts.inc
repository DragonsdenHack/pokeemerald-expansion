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
.string "I heard something useful.\p"
    .string "If a wild POKéMON appears, you can\n"
    .string "distract it with a POKé DOLL.\p"
    .string "You can run away while the wild\n"
    .string "POKéMON is distracted.$"



CeladonShop4F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop4F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop4F_Text_3:
.string "I'm getting a present for my\n"
    .string "girlfriend.\p"
    .string "I guess a POKé DOLL will be it.\n"
    .string "It's the popular thing.$"



CeladonShop4FDocumento_100::
msgbox CeladonShop4FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop4FDocumento_Text_100:
.string "Express yourself with gifts!\n"
    .string "4F: WISE MAN GIFTS\p"
    .string "Evolution Special!\n"
    .string "Element STONES on sale now!$"
