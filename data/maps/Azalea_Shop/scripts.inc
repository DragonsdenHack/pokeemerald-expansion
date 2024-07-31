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
	.string "In AZALEA TOWN, we specialize in\n"
	.string "CHARCOAL production. No, the irony of\l"
	.string "selling something to help flambé our\l"
	.string "GYM's POKÉMON isn't lost on us.$"



AzaleaShop3::
lock     
faceplayer     
msgbox AzaleaShop_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaShop_Text_3:
	.string "The SACRED ASH is the most potent\n"
	.string "healing item in existence, capable of\l"
	.string "fully restoring even every fainted\l"
	.string "POKÉMON on the team. Its origins lie in\l"
	.string "ECRUTEAK CITY.$"



AzaleaShop4::
lock     
faceplayer     
msgbox AzaleaShop_Text_4, MSGBOX_DEFAULT
release     
end

AzaleaShop_Text_4:
	.string "I love the peace and tranquility around\n"
	.string "these parts! GOLDENROD CITY's\l"
	.string "overwhelming in comparison!$"
