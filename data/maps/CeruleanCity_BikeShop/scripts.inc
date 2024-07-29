CeruleanCity_BikeShop_MapScripts::
	.byte 0

CeruleanCityBikeShop1::
end



CeruleanCityBikeShop2::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_2:
.string "A ROCKET!\n"
.string "Don't hurt me!$"



CeruleanCityBikeShop3::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_3:
	.string "No one'll sell you a BICYCLE here with\n"
	.string "your dirty blood money. Now scat before\l"
	.string "I call the POLICE!$"



CeruleanCityBikeShopDocumento_100::
msgbox CeruleanCityDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityBikeShopDocumento_Text_100:
.string "A new and shiny bicycle!$"


CeruleanCity_BikeShop_Secundaria_Bicicleta::
compare VAR_UNUSED_0x409B, 3
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_3
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 2
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_2
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_2::
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1
waitmovement 0x0
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BONOBICI, CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2
waitmovement 0x0
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_MACH_BIKE
waitfanfare
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 4
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_3::
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2 MSGBOX_AUTOCLOSE
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1:
	.string "This isn't the place for beggars like\n"
	.string "you who can hardly afford their own\l"
	.string "existence. If you aren't stacked with\l"
	.string "the millions of POKÉ that BICYCLEs\l"
	.string "cost, you just don't belong.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2:
	.string "I'll be having a chat with that FAN CLUB\n"
	.string "CHAIRMAN later. You're the third punk in\l"
	.string "a row to waltz on in for a free BICYCLE\l"
	.string "with that BIKE VOUCHER of his. I don't\l"
	.string "give a flying RATTATA about him paying\l"
	.string "the cost for it! You see how my\l"
	.string "business's rep tanks when people catch\l"
	.string "wind about two brats and a ROCKET\l"
	.string "walking out with my trademark BIKEs?\l"
	.string "That plays into the final decision of my\l"
	.string "buyers. They'll buy me out if it's a\l"
	.string "product of prestige and scarcity!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4:
.string "It can't be! A BIKE VOUCHER! Where did\n"
	.string "you get it from?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5:
	.string "That FAN CLUB CHAIRMAN in VERMILION?\n"
	.string "And who is he to decide if that's valid\l"
	.string "in my shop? I lead a serious business,\l"
	.string "not some dingey asylum. Do you get it? I\l"
	.string "can't just let people barge in with a\l"
	.string "gift VOUCHER. That's one million down\l"
	.string "the drain-so many fat stacks that\l"
	.string "someone like you couldn't ever dream of.\l"
	.string "If this shop sees any success, it's\l"
	.string "'cause of rich dummies who'd pay any\l"
	.string "price in their blissful ignorance, not\l"
	.string "thieves like you.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6:
.string "You made me get mad! You will see how we\n"
	.string "deal with thieves like you that come\l"
	.string "trying to be legal.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7:
.string "NO! My trained POKÉMON with a wip!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8:
.string "My brave POKÉMON! This is not what I\n"
	.string "planned, I didn't expect that a ROCKET\l"
	.string "could fight back my POKÉMON!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9:
.string "Hey look, I will exchange that damn\n"
	.string "VOUCHER for the BICYCLE and alright. Is\l"
	.string "it okay?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10:
.string "{PLAYER} exchanged the BIKE VOUCHER\n"
	.string "for a BICYCLE.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1:
emote_exclamation_mark
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2:
walk_in_place_left
step_end
