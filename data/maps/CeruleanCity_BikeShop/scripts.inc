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
.string "No one will let you buy a BICYCLE with\n"
	.string "your dirty money obtained\l"
	.string "dishonorably, get away before I call\l"
	.string "POLICE!$"



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
.string "This place is not for beggar people like\n"
	.string "you that can barely pay for your own\l"
	.string "existence, if you don't have the million\l"
	.string "POKES that cost the BICYCLE, this is\l"
	.string "not your place.$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2:
.string "I will have a conversation with that\n"
	.string "FANS CLUB CHAIRMAN, you are the third\l"
	.string "that comes asking for a new free BIKE\l"
	.string "due to that BIKE VOUCHER, I don't care\l"
	.string "about if he paid it before. Do you know\l"
	.string "how my business reputation goes down\l"
	.string "when people notice that 2 beggar kids\l"
	.string "and a ROCKET goes with my trademark\l"
	.string "BIKES? That affects the final decision\l"
	.string "of those who really buy it, they will\l"
	.string "just buy the BIKE if they know that is\l"
	.string "a product that not many have!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3:
.string "...\n"
	.string "...$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4:
.string "It can't be! A BIKE VOUCHER! Where did\n"
	.string "you get it from?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5:
.string "The FANS CLUB CHAIRMAN from\n"
	.string "VERMILION? And who is he to decide\l"
	.string "that is valid in my shop? I lead a\l"
	.string "serious business not an asylum, do you\l"
	.string "get it? I can't let that people come\l"
	.string "often with a gift VOUCHER, that means\l"
	.string "a one million POKES lose, so much money\l"
	.string "that you will never be able to have it,\l"
	.string "if this shop is successfully it is\l"
	.string "because rich people that doesn't know\l"
	.string "the real value of things and they would\l"
	.string "pay any price for any product, not for\l"
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
