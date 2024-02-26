Violet_Shop_MapScripts::
	.byte 0

VioletShop1::
end



VioletShop2::
lock     
faceplayer     
msgbox VioletCity_Shop_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_Shop_Text_2:
	.string "Not far from here are the RUINS OF\n"
	.string "ALPH, and within lies a significant\l"
	.string "mystery yet to be solved, I'm certain.$"



VioletShop3::
lock     
faceplayer     
msgbox VioletCity_Shop_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_Shop_Text_3:
	.string "The ROCK POKÉMON have a great\n"
	.string "advantage against the FLYING, but still\l"
	.string "FALKNER destroyed my team!$"



VioletShop4::
lock     
faceplayer     
msgbox VioletCity_Shop_Text_4, MSGBOX_DEFAULT
release     
end

VioletCity_Shop_Text_4:
	.string "In JOHTO, there isn't as much\n"
	.string "competition as in KANTO to be the best\l"
	.string "TRAINER, but the search for that bond\l"
	.string "with your team means that,\l"
	.string "unintentionally, several of the old\l"
	.string "masters in this region are the best\l"
	.string "TRAINERS.$"
