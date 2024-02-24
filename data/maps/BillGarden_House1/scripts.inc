BillGarden_House1_MapScripts::
	.byte 0

BillGardenHouse1_3::
end

BillGarden_House1_Bill_Combate::
setvar VAR_UNUSED_0x40F7, 20
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move1
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, BillGarden_House1_Bill_Combate_move2
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_2 MSGBOX_AUTOCLOSE
applymovement 2, BillGarden_House1_Bill_Combate_move3
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_3 MSGBOX_AUTOCLOSE
applymovement 2, BillGarden_House1_Bill_Combate_move4
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_4 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 2, BillGarden_House1_Bill_Combate_move5
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move6
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_1, Route25_BillHouse_Evento_Policia_text_10
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move7
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 3
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox BillGarden_House1_Bill_Combate_Text_7 MSGBOX_DEFAULT
waitfanfare
delay 20
playse SE_POKENAV_ON
delay 5
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move8
msgbox BillGarden_House1_Bill_Combate_Text_8 MSGBOX_AUTOCLOSE
msgbox BillGarden_House1_Bill_Combate_Text_9 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move9
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_10 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setvar VAR_UNUSED_0x40F7, 22
release
end

BillGarden_House1_Bill_Combate_Text_1:
.string "BILL: Stop right there, ROCKET.$"

BillGarden_House1_Bill_Combate_Text_2:
	.string "It should have been more than\n"
	.string "sufficient with three police officers.\l"
	.string "Perhaps my mistake was not hiring\l"
	.string "twenty instead of three.$"

BillGarden_House1_Bill_Combate_Text_3:
	.string "Anyway, you have no way out. Even if you\n"
	.string "defeat me, all the police in CERULEAN\l"
	.string "are coming. You acted hastily...$"

BillGarden_House1_Bill_Combate_Text_4:
	.string "But you know, it's not exactly normal to\n"
	.string "see someone challenge and take down\l"
	.string "three cops all at once.$"

BillGarden_House1_Bill_Combate_Text_5:
	.string "Since you're going to spend a lot of\n"
	.string "time reflecting in jail, I'll at\l"
	.string "least grant you the honor of battling\l"
	.string "with me. Consider yourself fortunate.\l"
	.string "Not everyone gets the chance to\l"
	.string "witness the great collection of BILL,\l"
	.string "the number 1 POKÉMANIAC!$"

BillGarden_House1_Bill_Combate_Text_6:
	.string "This must be a joke.$"

BillGarden_House1_Bill_Combate_Text_7:
	.string "({PLAYER} stole the patent).$"

BillGarden_House1_Bill_Combate_Text_8:
	.string "CERULEAN POLICE: MR.BILL, we inform you\n"
	.string "that we have completely surrounded the\l"
	.string "shed of your secret garden. That\l"
	.string "ROCKET has no way out.$"

BillGarden_House1_Bill_Combate_Text_9:
	.string "BILL: Cool. Just snatch the patent\n"
	.string "before you take him.$"


BillGarden_House1_Bill_Combate_Text_10:
	.string "Well, that's it. Do whatever you want.\n"
	.string "Your only way out is to leave and give\l"
	.string "up. Enjoy your last moments with the\l"
	.string "patent.$"

BillGarden_House1_Bill_Combate_move1:
walk_in_place_up
step_end

BillGarden_House1_Bill_Combate_move2:
face_down
step_end

BillGarden_House1_Bill_Combate_move3:
walk_in_place_down
step_end

BillGarden_House1_Bill_Combate_move4:
walk_in_place_left
walk_in_place_down
step_end

BillGarden_House1_Bill_Combate_move5:
walk_right
walk_down
walk_in_place_right
step_end

BillGarden_House1_Bill_Combate_move6:
walk_in_place_left
step_end

BillGarden_House1_Bill_Combate_move7:
walk_up
walk_in_place_up
step_end

BillGarden_House1_Bill_Combate_move8:
emote_exclamation_mark
step_end

BillGarden_House1_Bill_Combate_move9:
walk_down
face_left
step_end

BillGarden_House1_Detenido::
lock
faceplayer
msgbox BillGarden_House1_Detenido_text_1 MSGBOX_AUTOCLOSE
release
end

BillGarden_House1_Detenido_text_1:
	.string "Well, that's it. Do whatever you want.\n"
	.string "Your only way out is to leave and give\l"
	.string "up. Enjoy your last moments with the\l"
	.string "patent.$"
