Azalea_Shop_MapScripts::
	.byte 0

AzaleaShop1::
end



AzaleaShop2::
lock     
faceplayer     
msgbox AzaleaShop_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaShop_Text_2:
	.string "In AZALEA TOWN we specialize in\n"
	.string "CHARCOAL production. It's kinda funny\l"
	.string "because it strengthens the FIRE moves,\l"
	.string "to which our GRASS and BUG TYPES are\l"
	.string "most vulnerable!$"



AzaleaShop3::
lock     
faceplayer     
msgbox AzaleaShop_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaShop_Text_3:
	.string "The SACRED ASH is the most powerful\n"
	.string "healing item existent, so much that it\l"
	.string "restores the health of all fainted\l"
	.string "POKÉMON. It originates from ECRUTEAK\l"
	.string "CITY.$"



AzaleaShop4::
lock     
faceplayer     
msgbox AzaleaShop_Text_4, MSGBOX_DEFAULT
release     
end

AzaleaShop_Text_4:
	.string "I love the peace and tranquility that is\n"
	.string "felt around here! GOLDENROD CITY is\l"
	.string "overwhelming in comparison!$"
