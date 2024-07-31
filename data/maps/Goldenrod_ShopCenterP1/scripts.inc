Goldenrod_ShopCenterP1_MapScripts::
	.byte 0

GoldenrodShopCenterP1_1::
end



GoldenrodShopCenterP1_2::
end



GoldenrodShopCenterP1_3::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_3:
	.string "Not many people know this, but the\n"
	.string "drinks from these vending machines are\l"
	.string "much more affordable than regular\l"
	.string "POTIONS. I've heard that MOOMOO MILK is\l"
	.string "even cheaper!$"



GoldenrodShopCenterP1_4::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_4:
	.string "I bought a LARVITAR at the GAME\n"
	.string "CORNER, and now, I'm paying an expert to\l"
	.string "turn it into a TYRANITAR. They say it's\l"
	.string "the strongest POKÉMON in JOHTO-barring\l"
	.string "LEGENDARIES, of course. Everyone will\l"
	.string "respect me!$"



GoldenrodShopCenterP1_5::
lock     
faceplayer     
msgbox Goldenrod_ShopP1_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP1_Text_5:
	.string "Apparently the shopping center in\n"
	.string "CELADON is even bigger than this one.\l"
	.string "Could it be true?$"


GoldenrodShopCenterP1Documento_100::
msgbox GoldenrodShopCenterP1Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP1Documento_Text_100:
.string "Your Travel Companion\n"
	.string "2F TRAINER'S MARKET$"
