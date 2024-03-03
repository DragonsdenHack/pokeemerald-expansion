Goldenrod_RadioTower_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Goldenrod_RadioTower_OnFrame
	.byte 0

Goldenrod_RadioTower_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 132, Goldenrod_RadioTower_Encuentro_Atlas
	.2byte 0

RadioTower_1::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_1:
	.string "Welcome to RADIO TOWER, gentleman. The\n"
	.string "LUCKY NUMBER SHOW is not available yet.$"



RadioTower_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_2:
	.string "Welcome to RADIO TOWER, gentleman. The\n"
	.string "LUCKY NUMBER SHOW is not available yet.$"



RadioTower_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_3:
	.string "The RADIO TOWER is enormous, but it is\n"
	.string "hard to get lost here, everything is so\l"
	.string "well-organized.$"



RadioTower_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_4:
	.string "SILPH has had no trouble providing us\n"
	.string "with a legion of GROWLITHE for our\l"
	.string "units. Gestures like that go a long way\l"
	.string "in rebuilding trust between regions.$"



RadioTower_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_5:
	.string "We have learned from what happened to\n"
	.string "SILPH. An assault like the one that\l"
	.string "occurred there will not happen in a\l"
	.string "place like this. And certainly not by\l"
	.string "those ROCKET!$"



RadioTower_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_6:
	.string "Have you heard about the SAFARI ZONE?\n"
	.string "It is amazing, but apparently it will be\l"
	.string "closed soon.$"



RadioTower_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_7:
	.string "The radio shows… The POKÉMON TALK… The\n"
	.string "songs from some DJ… All of that is just\l"
	.string "a facade, trust me. In this building, we\l"
	.string "deal with much more important matters\l"
	.string "than all those useless trivialities.$"



RadioTower_8::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_8, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_8:
	.string "The stocks of RADIO TOWER will rise\n"
	.string "exponentially in the next two years,\l"
	.string "trust me. Invest in them!$"



RadioTower_9::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_9:
	.string "They say there's a BIKE SHOP in KANTO\n"
	.string "that sells them for 1 MILLION POKÉ. I'd\l"
	.string "like to go there and get one, it would\l"
	.string "make me stand out from the crowd.$"



RadioTower_11::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_11, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_11:
	.string "Despite JOHTO winning the war, KANTO is\n"
	.string "more technologically advanced. This\l"
	.string "building is a clear example of that, as\l"
	.string "it imitates much of the aesthetic and\l"
	.string "resources of KANTO's biggest financial\l"
	.string "symbol: SILPH.$"



GoldenrodRadioTowerDocumento_100::
msgbox GoldenrodRadioTowerDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerDocumento_Text_100:
.string "1F RECEPTION\n"
	.string "2F SALES\l"
	.string "3F PERSONNEL\l"
	.string "4F PRODUCTION\l"
	.string "5F DIRECTOR'S OFFICE$"

Goldenrod_RadioTower_Encuentro_Atlas::
lock
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_Encuentro_Atlas_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_Encuentro_Atlas_Move_2
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_4
waitmovement 0x0
delay 15
showmoneybox 0, 0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_3 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_4 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_4
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_Encuentro_Atlas_Move_5
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_5
waitmovement 0x0
delay 15
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_6
waitmovement 0x0
delay 15
applymovement 1, Goldenrod_RadioTower_Encuentro_Atlas_Move_7
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RAINBOW_PASS
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_7.1 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_Encuentro_Atlas_Move_10
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_10
waitmovement 0x0
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_11
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_4
waitmovement 0x0
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_Encuentro_Atlas_Move_5
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 10
setvar VAR_UNUSED_0x40F7, 133
release
end

Goldenrod_RadioTower_Encuentro_Atlas_Texto_7.1:
	.string "You obtained a RADIO PASS from the\n"
	.string "receptionist!$"

Goldenrod_RadioTower_Encuentro_Atlas_Move_1.1:
walk_up
walk_in_place_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Texto_1:
.string "ARCHER: Ah, {PLAYER}!$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_2:
	.string "I see you're in great shape, though I'm\n"
	.string "not surprised, strolling around JOHTO\l"
	.string "does everyone good.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_3:
	.string "There's a lot to do in GOLDENROD CITY,\n"
	.string "isn't there? The truth is, it offers\l"
	.string "more possibilities than any other city\l"
	.string "in KANTO, and it's because of that, and\l"
	.string "your great service already providing\l"
	.string "data on 2 DEEP BOND POKÉMON, that\l"
	.string "GIOVANNI has asked me to give you this.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_4:
	.string "(YOU HAVE JUST EARNED 500000 POKÉ)$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_5:
	.string "We're not in CELADON, here you can buy\n"
	.string "and spend COINS, a ROCKET of your\l"
	.string "hierarchy should have access to all the\l"
	.string "offerings of GOLDENROD.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_6:
	.string "Leaving that aside, let's move on to the\n"
	.string "reason for our little meeting here. Come\l"
	.string "with me.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_7:
	.string "ARCHER: Okay, with this, you'll be able\n"
	.string "to go up to the upper floors and gain\l"
	.string "access to the DIRECTOR'S office, which\l"
	.string "is why we're here.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_8:
	.string "Judging by its exterior, you've likely\n"
	.string "concluded that this place is the JOHTO\l"
	.string "equivalent of SILPH; it's where the\l"
	.string "most significant decisions affecting\l"
	.string "the immediate future of KANTO and\l"
	.string "JOHTO will be made.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_9:
	.string "GIOVANNI wants us to brief the\n"
	.string "DIRECTOR on the real situation in\l"
	.string "KANTO, and thereby convince him to call\l"
	.string "for a large meeting to address once and\l"
	.string "for all what to do with the destiny of\l"
	.string "these two regions.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_10:
	.string "You made the current situation\n"
	.string "possible by defeating LANCE, which is\l"
	.string "why your presence here is of vital\l"
	.string "importance.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_11:
	.string "I'll be waiting for you in the DIRECTOR'S\n"
	.string "office. Pleasure to see you again,\l"
	.string "ADMIN.CHIEF {PLAYER}.$"

Goldenrod_RadioTower_Encuentro_Atlas_Move_1:
emote_exclamation_mark
face_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_2:
walk_up
face_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_4:
walk_in_place_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_down
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_6:
walk_in_place_down
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_7:
walk_in_place_up
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_8:
face_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_9:
face_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_10:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_11:
face_up
step_end
