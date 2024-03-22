Cherry_Shop_MapScripts::
	.byte 0

CherryShop1::
end


CherryShop2::
lock     
faceplayer     
msgbox CherryShop_Text_2, MSGBOX_DEFAULT
release     
end

CherryShop_Text_2:
	.string "Sometimes, you'll encounter pairs of\n"
	.string "TRAINERS who will challenge you with\l"
	.string "two POKÉMON at once. When this happens,\l"
	.string "you'll also need two POKÉMON to battle.$"



CherryShop3::
lock     
faceplayer     
msgbox CherryShop_Text_3, MSGBOX_DEFAULT
release     
end

CherryShop_Text_3:
.string "Do you know REVIVE?\n"
.string "It restores the energy to\l"
.string "fainted POKÉMON.$"



CherryShop4::
lock     
faceplayer     
msgbox CherryShop_Text_4, MSGBOX_DEFAULT
release     
end

CherryShop_Text_4:
	.string "I'm looking for items that boost\n"
	.string "POKÉMON's abilities in a single battle.\l"
	.string "Specifically, I'm searching for X\l"
	.string "ATTACK, X DEFENSE, X SPEED, and X SP.\l"
	.string "ATTACK. Do you know where to find them?$"
