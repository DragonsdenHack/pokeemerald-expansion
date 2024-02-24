CeladonCity_Shop_5F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Shop_5F_OnFrame
	.byte 0

CeladonCity_Shop_5F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 6, CeladonCity_Shop_5F_Oak
	.2byte 0
	

CeladonShop5F_1::
end



CeladonShop5F_2::
end



CeladonShop5F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_3:
.string "I'm here for POKÉMON stat\n"
    .string "enhancers.\p"
    .string "PROTEIN increases the base ATTACK\n"
    .string "power.\p"
    .string "IRON increases the base DEFENSE\n"
    .string "stat.$"



CeladonShop5F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_4:
.string "POKÉMON stat enhancers can be\n"
    .string "bought only here.\p"
    .string "HP UP increases the base HP of a\n"
    .string "POKÉMON.\p"
    .string "CALCIUM raises the base SP. ATK\n"
    .string "stat of one POKÉMON.\p"
    .string "ZINC boosts the base SP. DEF stat\n"
    .string "of one POKÉMON.\p"
    .string "CARBOS enhances the base SPEED\n"
    .string "stat.$"



CeladonShop5FDocumento_100::
msgbox CeladonShop5FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop5FDocumento_Text_100:
.string "5F: DRUGSTORE$"

CeladonCity_Shop_5F_Oak::
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_1, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_2, MSGBOX_AUTOCLOSE
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_3, MSGBOX_AUTOCLOSE
applymovement 1, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_4, MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, CeladonCity_Shop_5F_Oak_move_4
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_5, MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_5
applymovement 5, CeladonCity_Shop_5F_Oak_move_6
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 5
delay 80
msgbox CeladonCity_Shop5F_Text_Oak_6, MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CeladonCity_Shop_5F_Oak_move_7
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_7, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_8, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_8
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_9, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_9
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_10, MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
delay 20
playse SE_PIN
applymovement 7, CeladonCity_Shop_5F_Oak_move_11
applymovement 6, CeladonCity_Shop_5F_Oak_move_10
waitmovement 0x0
delay 20
playse SE_POKENAV_OFF
msgbox CeladonCity_Shop5F_Text_Oak_11, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_12, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_13, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_VERMILION_CITY, 23, 31
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
release
end

CeladonCity_Shop5F_Text_Oak_1:
	.string "SUPERNERD: 9800 POKÉ?! This is a scam!\n"
	.string "Just a month ago it cost 7000! And a\l"
	.string "year ago it cost 3000!$"


CeladonCity_Shop5F_Text_Oak_2:
	.string "SALESMAN: I'm not the one who set up\n"
	.string "the prices, those above had\l"
	.string "established that manipulating a\l"
	.string "POKÉMON EV's must be expensive.$"


CeladonCity_Shop5F_Text_Oak_3:
	.string "SUPERNERD: Expensive? No one will buy\n"
	.string "PROTEIN nor CALCIUM at this price.\l"
	.string "People will be so limited by the ones\l"
	.string "that are found around.$"


CeladonCity_Shop5F_Text_Oak_4:
	.string "SALESMAN: Those are the prices that\n"
	.string "the POKÉMON LEAGUE COMMITTEE\l"
	.string "established, we just are following\l"
	.string "orders.$"


CeladonCity_Shop5F_Text_Oak_5:
	.string "SUPERNERD: How would I raise my\n"
	.string "MAGNEMITE's SPECIAL ATTACK now? It\l"
	.string "doesn't make any sense!$"


CeladonCity_Shop5F_Text_Oak_6:
	.string "????: Quite the opposite, makes all\n"
	.string "thet sense that can be given at this\l"
	.string "region.$"


CeladonCity_Shop5F_Text_Oak_7:
	.string "GIRL: So stupid. Could go up at POKÉMON\n"
	.string "TOWER and train there his MAGNEMITE.$"


CeladonCity_Shop5F_Text_Oak_8:
	.string "????: Not everyone has been educated\n"
	.string "as you, DAISY. Reliable information is\l"
	.string "not common today. There are people who\l"
	.string "keep believing that there are just 150\l"
	.string "POKÉMON species. If they knew how big\l"
	.string "this world is…$"


CeladonCity_Shop5F_Text_Oak_9:
	.string "DAISY: It's not surprising that no one\n"
	.string "has approached the POKÉMON LEAGUE in\l"
	.string "the last few years. Do you think those\l"
	.string "two have any chance?$"


CeladonCity_Shop5F_Text_Oak_10:
	.string "????: They just started their trip. It\n"
	.string "is too soon to predict something, but\l"
	.string "the potential that they have is\l"
	.string "encouraging, especially…$"


CeladonCity_Shop5F_Text_Oak_11:
	.string "Hello? MR.LANCE. Okay. Right away.$"


CeladonCity_Shop5F_Text_Oak_12:
	.string "They are calling me from POKÉMON LEAGUE\n"
	.string "HQ. Shopping is over, DAYSI.$"


CeladonCity_Shop5F_Text_Oak_13:
	.string "DAISY: It is okay, we have 50 VITAMINS\n"
	.string "for each one of the 6 stats, good\l"
	.string "enough for this week.$"

CeladonCity_Shop_5F_Oak_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_2:
walk_in_place_left
step_end


CeladonCity_Shop_5F_Oak_move_3:
walk_in_place_right
step_end

CeladonCity_Shop_5F_Oak_move_4:
face_right
step_end

CeladonCity_Shop_5F_Oak_move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_6:
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_7:
face_left
step_end

CeladonCity_Shop_5F_Oak_move_8:
face_up
step_end

CeladonCity_Shop_5F_Oak_move_9:
walk_in_place_down
step_end

CeladonCity_Shop_5F_Oak_move_10:
emote_exclamation_mark
walk_left
step_end

CeladonCity_Shop_5F_Oak_move_11:
emote_exclamation_mark
face_left
step_end
