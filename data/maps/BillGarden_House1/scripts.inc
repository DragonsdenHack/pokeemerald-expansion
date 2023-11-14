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
.string "BILL: Stop right here, ROCKET.$"

BillGarden_House1_Bill_Combate_Text_2:
.string "It should have been enough with 3\n"
	.string "polices. Maybe my mistake was not hiring\l"
	.string "20 but just 3.$"

BillGarden_House1_Bill_Combate_Text_3:
.string "Anyway, you have no exit, even if you\n"
	.string "can defeat me, all of CERULEAN polices\l"
	.string "is on it's way, you acted rushed…$"

BillGarden_House1_Bill_Combate_Text_4:
.string "However, it isn't common that someone to\n"
	.string "defy 3 police officers and emerge\l"
	.string "victorious.$"

BillGarden_House1_Bill_Combate_Text_5:
.string "Because you will be in jail\n"
	.string "contemplating for a long time, at least\l"
	.string "I'll give you the honor of fighting me,\l"
	.string "lucky you. Not every day does anyone\l"
	.string "have the opportunity to witness BILL's\l"
	.string "great collection, TOP 1 POKÉMANIAC!$"

BillGarden_House1_Bill_Combate_Text_6:
.string "This has to be a joke.$"

BillGarden_House1_Bill_Combate_Text_7:
.string "({PLAYER} stole the patent).$"

BillGarden_House1_Bill_Combate_Text_8:
.string "CERULEAN POLICE: SIR BILL, we inform\n"
	.string "you that we have surrounded the house\l"
	.string "in your secret garden. That ROCKET has\l"
	.string "no chance.$"

BillGarden_House1_Bill_Combate_Text_9:
.string "BILL: Perfect. Make sure to take the\n"
	.string "patent off from him before you take him\l"
	.string "away.$"

BillGarden_House1_Bill_Combate_Text_10:
.string "It is over. Do whatever you want to do,\n"
	.string "your unique option is go out and get\l"
	.string "submitted. Enjoy your last moments with\l"
	.string "the patent in your hands.$"

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
.string "It is over. Do whatever you want to do,\n"
	.string "your unique option is go out and get\l"
	.string "submitted. Enjoy your last moments with\l"
	.string "the patent in your hands.$"
