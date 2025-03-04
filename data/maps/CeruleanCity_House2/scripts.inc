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
.string "{PAUSE 5}…{PAUSE 5}$"



CeruleanCityHouse2_2::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_2:
.string "Look what you've done! It will take us\n"
	.string "several months to recover from this!$"

CeruleanCity_House2_Batalla_Montañero_move3.1:
emote_exclamation_mark
step_end

CeruleanCityHouse2_Montanero::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
applymovement 3, CeruleanCity_House2_Batalla_Montañero_move1
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.2, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.01, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.1, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.2, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move3
waitmovement 0x0
playse SE_PIN
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move3.1
waitmovement 0x0
waitse
delay 10
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
waitse
delay 10
playse SE_SHOP
waitse
delay 10
playse SE_SHOP
waitse
delay 10
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move7
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6.1, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_TM28
waitfanfare
msgbox CeruleanCity_House2_Batalla_Montañero_Text_7, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SOFT_SAND
waitfanfare
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8.1, MSGBOX_AUTOCLOSE
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
	.string "happens when you go around showing off\l"
	.string "that exclusive TMs.$"

CeruleanCity_House2_Batalla_Montañero_Text_1.1:
    .string "Too bad for you that TM -DIG-\n"
	.string "would be pretty useful for us.\p"
	.string "If you'd played nice, we wouldn't\n"
	.string "have messed up your house.$"
	
CeruleanCity_House2_Batalla_Montañero_Text_1.2:
	.string "Now, we'll just be taking all\l"
	.string "those TMs you were being stingy\l"
	.string "with when we'd asked nicely.$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
	.string "HIKER: I won't hand over even a single\n"
	.string "TM. If we go along with your words,\l"
	.string "you'll abuse our kindness.\p"
	.string "We already know how you'll use them!$"
	
CeruleanCity_House2_Batalla_Montañero_Text_2.01:
	.string "You won't find the TMs because all are\n"
	.string "with me, protected by my POKÉMON.$"

CeruleanCity_House2_Batalla_Montañero_Text_2.1:
	.string "What a pity you're such weaklings!\p"
	.string "My DIG will crash your poor EKANS!$"

CeruleanCity_House2_Batalla_Montañero_Text_2.2:
	.string "C'mon! Let's do this!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
	.string "And this street trash? Who are you?\p"
	.string "Wanna step up and face me?\n"
	.string "You'll regret it!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh{PAUSE 10}…{PAUSE 10} No{PAUSE 10}…{PAUSE 10} Por favor{PAUSE 10}…{PAUSE 10}$"

CeruleanCity_House2_Batalla_Montañero_Text_5:
.string "That's what happens when you\n"
	.string "underestimate ROCKETS.\p"
	.string "You will pay for your arrogance.$"

CeruleanCity_House2_Batalla_Montañero_Text_6:
	.string "What's your name? {PLAYER}?\p"
	.string "Wow! This HIKER had twenty TM DIGs!\n"
	.string "And he was gonna hog it all! Thanks to\l"
	.string "you, we got to nab ‘em. Know that we'll\l"
	.string "put in a good word with PETREL about this.\l"

CeruleanCity_House2_Batalla_Montañero_Text_6.1:
	.string "Take this. You deserve it.$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
	.string "He had this other item too, seemed to\n"
	.string "give more power to GROUND moves. That\l"
	.string "little rascal definitely used it to\l"
	.string "strengthen his DIG. Here. Take it.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
	.string "That's all for now, comrade. With these\n"
	.string "TMs, we'll be able to dig deeper in\l"
	.string "enclosed spaces and bail out of caves\l"
	.string "pretty handily. You collaborated in\l"
	.string "supplying resources to TEAM ROCKET.$"

CeruleanCity_House2_Batalla_Montañero_Text_8.1:
	.string "Good job. Catch you in the BARRACKs.\p"
	.string "You know the one.$"

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
