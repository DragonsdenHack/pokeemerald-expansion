Ecruteak_Shop_MapScripts::
	.byte 0

EcruteakShop1::
end



EcruteakShop2::
lock     
faceplayer     
msgbox Ecruteak_ShopText_2, MSGBOX_DEFAULT
release     
end

Ecruteak_ShopText_2:
	.string "ECRUTEAK CITY is the only place that\n"
	.string "still sells SACRED ASH, it costs 14000\l"
	.string "POKÉ, but I can tell you that this item\l"
	.string "would cost much more in KANTO.$"



EcruteakShop3::
lock     
faceplayer     
msgbox Ecruteak_ShopText_3, MSGBOX_DEFAULT
release     
end

Ecruteak_ShopText_3:
	.string "Can you imagine witnessing the entire\n"
	.string "region from the top of BELL TOWER?\l"
	.string "Although that's impossible, I can't even\l"
	.string "cross the door that leads to BELLCHIME\l"
	.string "TRAIL.$"



EcruteakShop4::
lock     
faceplayer     
msgbox Ecruteak_ShopText_4, MSGBOX_DEFAULT
release     
end

Ecruteak_ShopText_4:
.string "Change…\n"
.string "Change…\l"
.string "And more change…\l"
.string "Everything is in change!$"
