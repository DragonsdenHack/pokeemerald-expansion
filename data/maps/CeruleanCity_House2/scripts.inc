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
.string "It's over HIKER, this is what happens\n"
	.string "when you are going to show off about\l"
	.string "your exclusive TMs, unfortunately for\l"
	.string "you, that TM DIG would be pretty useful\l"
	.string "for us, if you had been nice we wouldn't\l"
	.string "have messed up your house. Now for\l"
	.string "being like that we will steal all those\l"
	.string "MT's and you are that possessive that\l"
	.string "you don't want to share a few with us\l"
	.string "when we asked gently.$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
.string "HIKER: I won't give you even one TM. If\n"
	.string "we are nice with you, you abuse us, we\l"
	.string "already know how you spend them. You\l"
	.string "are not going to find the TMs because I\l"
	.string "have them, you must beat me in combat.\l"
	.string "What a pity that you are so weaklings,\l"
	.string "my DIG will crush your poor EKANS and\l"
	.string "RATTATA. Come on!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
.string "And this street thrash? Who are you?\n"
	.string "Do you want to challenge me?\l"
	.string "You will regret!!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh… No… Please…$"

CeruleanCity_House2_Batalla_Montañero_Text_5:
.string "That's what happens when you\n"
	.string "underestimate ROCKETS. You will pay for\l"
	.string "your arrogance.$"

CeruleanCity_House2_Batalla_Montañero_Text_6:
.string "What is your name?\n"
	.string "¿{PLAYER}?\l"
	.string "Wow!\l"
	.string "This HIKER had 20 TMs DIG!\l"
	.string "And he wanted it all for himself!\l"
	.string "¡Y las quería todas para él!\l"
    .string "Due to you we were able to get them. Be\l"
	.string "sure that I will talk to PETREL about\l"
	.string "this. Take this, you deserve it.$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
.string "He had this other item, which seems to\n"
	.string "be to rise GROUND type movements'\l"
	.string "power, that rascal for sure used it to\l"
	.string "do more damage with DIG, keep it for\l"
	.string "you.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
.string "That's all comrade, with these TMs we\n"
	.string "will be able to do improvements on our\l"
	.string "investigations in closed places and get\l"
	.string "out from caves in an easy way. You\l"
	.string "collaborated by supplying resources to\l"
	.string "our organization. Good Job. See you\l"
	.string "later in the BARRACK, you know where.$"

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
