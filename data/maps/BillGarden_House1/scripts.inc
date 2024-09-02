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
	.string "Three cops ought to have done the job.\n"
	.string "But maybe my restraint in taking three\l"
	.string "was a mistake, as opposed to the twenty\l"
	.string "I should've done from the start.$"

BillGarden_House1_Bill_Combate_Text_3:
	.string "Either way, there's no exit. Say you\n"
	.string "beat me. The whole of CERULEAN law\l"
	.string "enforcement's on its way now. You were\l"
	.string "just too brash…$"

BillGarden_House1_Bill_Combate_Text_4:
	.string "Still, it's not all that common to see\n"
	.string "someone successfully defy three\l"
	.string "officers.$"

BillGarden_House1_Bill_Combate_Text_5:
	.string "But since you'll be sitting in the clank\n"
	.string "for a long time, I'll at least give you\l"
	.string "the honor of battling me. Lucky you. Not\l"
	.string "every day does anyone have the\l"
	.string "opportunity to witness the great\l"
	.string "collection of BILL, number one\l"
	.string "POKÉMANIAC!$"

BillGarden_House1_Bill_Combate_Text_6:
	.string "This must be a joke.$"

BillGarden_House1_Bill_Combate_Text_7:
	.string "({PLAYER} stole the patent.)$"

BillGarden_House1_Bill_Combate_Text_8:
	.string "CERULEAN POLICE: MR.BILL, we inform you\n"
	.string "that we have completely surrounded the\l"
	.string "shed of your secret garden. That\l"
	.string "ROCKET has no way out.$"

BillGarden_House1_Bill_Combate_Text_9:
	.string "BILL: Perfect. Make sure to take the\n"
	.string "patent off his hands before you take\l"
	.string "him away.$"

BillGarden_House1_Bill_Combate_Text_10:
	.string "It's over. Do whatever you want. Your\n"
	.string "sole option's to go out and submit.\l"
	.string "Enjoy your last moments with the\l"
	.string "patent in your hands.$"

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
	.string "It's over. Do whatever you want. Your\n"
	.string "sole option's to go out and submit.\l"
	.string "Enjoy your last moments with the\l"
	.string "patent in your hands.$"
