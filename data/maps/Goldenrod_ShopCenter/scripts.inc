Goldenrod_ShopCenter_MapScripts::
	.byte 0

GoldenrodShopCenter1::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_1:
.string "Welcome to GOLDENROD DEPT.STORE.$"



GoldenrodShopCenter2::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_2:
	.string "Apparently, they teach useful moves on\n"
	.string "the upper floors. I'll check it out.$"



GoldenrodShopCenter3::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_3:
.string "I love shopping!$"



GoldenrodShopCenter4::
lock     
faceplayer     
msgbox Goldenrod_Shop_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_Shop_Text_4:
	.string "Mom's good at bargain hunting. She\n"
	.string "always buys stuff at lower prices.$"



GoldenrodShopCenterDocumento_100::
msgbox GoldenrodShopCenterDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterDocumento_Text_100:
.string "1F SERVICE COUNTER\n"
	.string "2F TRAINER'S MARKET\l"
	.string "3F BATTLE COLLECTION\l"
	.string "5F TM CORNER\l"
	.string "6F TRANQUIL SQUARE\l"
	.string "ROOFTOP LOOKOUT$"
