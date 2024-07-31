CeruleanCity_House2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_House2_OnFrame
	.byte 0

CeruleanCity_House2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 10, CeruleanCityHouse2_Montanero
	.2byte 0

CeruleanCityHouse2_1::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_1, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_1:
.string "…$"



CeruleanCityHouse2_2::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_2:
.string "Look what you've done! It will take us\n"
	.string "several months to recover from this!$"

CeruleanCityHouse2_Montanero::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
applymovement 3, CeruleanCity_House2_Batalla_Montañero_move1
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move3
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_3, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move4
waitmovement 0x0
trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, CeruleanCity_House2_Batalla_Montañero_Text_4
msgbox CeruleanCity_House2_Batalla_Montañero_Text_5, MSGBOX_AUTOCLOSE
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move5
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
delay 10
playse SE_SHOP
delay 10
playse SE_SHOP
delay 20
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move7
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_TM28
waitfanfare
msgbox CeruleanCity_House2_Batalla_Montañero_Text_7, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SOFT_SAND
waitfanfare
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
delay 20
removeobject 3
removeobject 4
fadescreen 0
setvar VAR_UNUSED_0x40F7, 11
release
end

CeruleanCity_House2_Batalla_Montañero_Text_1:
	.string "It's over, HIKER. This is just what\n"
	.string "happens you go around showing off your\l"
	.string "exclusive TMs. Too bad for you that TM\l"
	.string "DIG happens to be pretty useful for us.\l"
	.string "If you'd played nice, we wouldn't have\l"
	.string "messed up your house. Now, for playing\l"
	.string "hard to get, we'll just be taking all\l"
	.string "those TMs you were being stingy with\l"
	.string "when we'd asked nicely.$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
	.string "HIKER: I won't hand over even a single\n"
	.string "TM. If we go along with your words,\l"
	.string "you'll abuse our kindness. We already\l"
	.string "know how you'll use them. You won't find\l"
	.string "the TMs because they're with me. You'll\l"
	.string "have to beat me in battle. What a pity\l"
	.string "you're such weaklings! My DIG will bury\l"
	.string "your poor EKANS and RATTATA. C'mon!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
	.string "And this street RATTATA? Who are you?\n"
	.string "Wanna step up and face me? You'll\l"
	.string "regret it!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh…{PAUSE 20} No…{PAUSE 20} Please…{PAUSE 20}$"

CeruleanCity_House2_Batalla_Montañero_Text_5:
.string "That's what happens when you\n"
	.string "underestimate ROCKETS. You will pay for\l"
	.string "your arrogance.$"

CeruleanCity_House2_Batalla_Montañero_Text_6:
	.string "What's your name again? {PLAYER}?\n"
	.string "Wow! This HIKER had twenty TM DIGs! And\l"
	.string "he was gonna hog it all! Thanks to you,\l"
	.string "we got to nab ‘em. Know that we'll put in\l"
	.string "a good word with PETREL about this.\l"
	.string "Take this. You deserve it.$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
	.string "He had this other item too-seemed to\n"
	.string "give more oomph to GROUND moves. That\l"
	.string "little rascal definitely used it to\l"
	.string "strengthen his DIG. Here. Take it.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
	.string "That's all for now, comrade. With these\n"
	.string "TMs, we'll be able to dig deeper in\l"
	.string "enclosed spaces and bail out of caves\l"
	.string "pretty handily. You collaborated in\l"
	.string "supplying resources to our\l"
	.string "organization. Good job. Catch you in the\l"
	.string "BARRACKs. You know the one.$"

CeruleanCity_House2_Batalla_Montañero_move1:
walk_in_place_right
step_end

CeruleanCity_House2_Batalla_Montañero_move2:
walk_in_place_left
step_end

CeruleanCity_House2_Batalla_Montañero_move3:
walk_right
step_end

CeruleanCity_House2_Batalla_Montañero_move4:
walk_left
step_end

CeruleanCity_House2_Batalla_Montañero_move5:
walk_right
walk_right
face_up
step_end

CeruleanCity_House2_Batalla_Montañero_move6:
face_down
step_end

CeruleanCity_House2_Batalla_Montañero_move7:
walk_left
face_up
step_end
