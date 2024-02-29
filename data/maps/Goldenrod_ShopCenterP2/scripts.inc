Goldenrod_ShopCenterP2_MapScripts::
	.byte 0

GoldenrodShopCenterP2_1::
end



GoldenrodShopCenterP2_2::
lock     
faceplayer     
msgbox Goldenrod_ShopP2_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP2_Text_2:
	.string "That spoiled brat from the downstairs\n"
	.string "apartment… All the POKÉMON he has are\l"
	.string "bought… I hope he loses all his battles\l"
	.string "for having them at 0 in EVs…$"



GoldenrodShopCenterP2_3::
lock     
faceplayer     
msgbox Goldenrod_ShopP2_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP2_Text_3:
	.string "You never know what treasures you'll\n"
	.string "find when you go shopping. That's why I\l"
	.string "love being here!$"



GoldenrodShopCenterP2Documento_100::
msgbox GoldenrodShopCenterP2Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP2Documento_Text_100:
.string "For Victory line Seekers\n"
	.string "3F BATTLE COLLECTION$"
