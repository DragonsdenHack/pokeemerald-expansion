Goldenrod_ShopCenterP3_MapScripts::
	.byte 0

GoldenrodShopCenterP3_1::
end



GoldenrodShopCenterP3_2::
lock     
faceplayer     
msgbox Goldenrod_ShopP3_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP3_Text_2:
	.string "The healing plants they sell here are\n"
	.string "very reasonably priced. One even acts\l"
	.string "like a MAX REVIVE, but I think POKÉMON\l"
	.string "don't like its taste.$"



GoldenrodShopCenterP3_3::
lock     
faceplayer     
msgbox Goldenrod_ShopP3_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP3_Text_3:
	.string "I'll try to scam one of those rich folks\n"
	.string "who don't understand the real worth of\l"
	.string "a POKÉMON in a trade.$"



GoldenrodShopCenterP3_4::
lock     
faceplayer     
msgbox Goldenrod_ShopP3_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP3_Text_4:
	.string "My fathers are going to buy me a\n"
	.string "CYNDAQUIL in the GAME CORNER!$"



GoldenrodShopCenterP3Documento_100::
msgbox GoldenrodShopCenterP3Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP3Documento_Text_100:
.string "Let Us Pump Up Your POKÉMON!\n"
	.string "4F MEDICINE BOX$"
