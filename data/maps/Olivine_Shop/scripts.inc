Olivine_Shop_MapScripts::
	.byte 0

OlivineShop1::
end



OlivineShop2::
lock     
faceplayer     
msgbox OlivineCity_Shop_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Shop_Text_2:
	.string "I'd like them to sell PEARL and BIG\n"
	.string "PEARL, but those items are very scarce\l"
	.string "in JOHTO, even in maritime places like\l"
	.string "this. Some people say that the SEAFOAM\l"
	.string "ISLANDS in KANTO are full of these\l"
	.string "items.$"



OlivineShop3::
lock     
faceplayer     
msgbox OlivineCity_Shop_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Shop_Text_3:
	.string "Buy MYSTIC WATER and you'll see how hard\n"
	.string "WATER-TYPE POKÉMON hit!$"



OlivineShop4::
lock     
faceplayer     
msgbox OlivineCity_Shop_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Shop_Text_4:
	.string "2 years ago, they used to sell SACRED\n"
	.string "ASH. Now ECRUTEAK CITY is the only one\l"
	.string "that keeps selling it. It's\l"
	.string "understandable, since they are limited.\l"
	.string "Within another couple of years, they\l"
	.string "won't be found anywhere.$"
