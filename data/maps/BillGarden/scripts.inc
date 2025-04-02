BillGarden_MapScripts::
	.byte 0

BillGarden2::
end



BillGarden3::
end



BillGarden5::
end



BillGarden6::
end



BillGarden7::
end



BillGarden8::
end



BillGarden9::
end



BillGarden15::
end

Bill_Garden_Warp_No::
release
end

Bill_Garden_Warp::
msgbox Bill_Garden_Warp_text_1 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Bill_Garden_Warp_No
warp MAP_ROUTE25_BILL_HOUSE, 13, 2
release
end

Bill_Garden_Warp_text_1:
.string "{PAUSE 20}…{PAUSE 20}$"

Bill_Garden_Warp_Text_YesNo:
    .string "…{PAUSE 20}\n"
	.string "…{PAUSE 20}\p"
    .string "This poster seems to be covering some\n"
	.string "tunnel that leads somewhere else.\p"
	.string "Wanna cross it?$"

Bill_Garden_Warp_move1:
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas::
lockall
playse MUS_RG_VICTORY_ROAD
setweather WEATHER_RAIN
applymovement 17, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_1 MSGBOX_AUTOCLOSE
playse SE_DOOR
opendoor 22, 3
waitdooranim
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 18
applymovement 18, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 22, 3
waitdooranim
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
delay 15
msgbox Bill_Garden_Policia_Atlas_text_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, Bill_Garden_Policia_Atlas_move_1.2
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, Bill_Garden_Policia_Atlas_move_1.3
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_2.2 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 18, Bill_Garden_Policia_Atlas_move_1.1
waitmovement 0x0
waitse
msgbox Bill_Garden_Policia_Atlas_text_2.3 MSGBOX_AUTOCLOSE
delay 15
msgbox Bill_Garden_Policia_Atlas_text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
delay 5
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 10
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 11
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
delay 5
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
delay 5
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 15
msgbox Bill_Garden_Policia_Atlas_text_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, Bill_Garden_Policia_Atlas_move_5
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 11, Bill_Garden_Policia_Atlas_move_5.1
waitmovement 0x0
delay 10
msgbox Bill_Garden_Policia_Atlas_text_5.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 18, Bill_Garden_Policia_Atlas_move_2.1
waitmovement 0x0
waitse
msgbox Bill_Garden_Policia_Atlas_text_6 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_7 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
delay 20
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
setvar VAR_UNUSED_0x40F8, 1
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
warpsilent MAP_ROUTE5, 23, 26
release
end

Bill_Garden_Policia_Atlas_move_1:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_1.1:
walk_in_place_down
step_end

Bill_Garden_Policia_Atlas_move_1.2:
face_right
step_end

Bill_Garden_Policia_Atlas_move_1.3:
face_down
step_end

Bill_Garden_Policia_Atlas_move_2:
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas_move_2.1:
walk_in_place_down
walk_in_place_right
step_end

Bill_Garden_Policia_Atlas_move_3:
face_down
emote_exclamation_mark
step_end

Bill_Garden_Policia_Atlas_move_4:
face_right
step_end

Bill_Garden_Policia_Atlas_move_5:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_5.1:
delay_8
face_up
delay_16
face_down
delay_16
face_right
delay_16
face_left
delay_8
walk_in_place_left
step_end


Bill_Garden_Policia_Atlas_text_1:
	.string "You're under arrest, ROCKET. You have\n"
	.string "committed multiple crimes and resisted\l"
	.string "authority. Now, give us back the stolen\l"
	.string "patent.$"

Bill_Garden_Policia_Atlas_text_2:
.string "BILL: Too bad that this has to end like\n"
	.string "this, you should've been informed about\l"
	.string "the consequences of messing up with\l"
	.string "BILL in this region.$"

Bill_Garden_Policia_Atlas_text_2.1:
	.string "Yeah! Honestly, it's a shame that a\n"
	.string "TRAINER like you end up like this, your\l"
	.string "ADMINISTRATORs and EXECUTIVEs aren't\l"
	.string "too good making decisions.$"

Bill_Garden_Policia_Atlas_text_2.2:
	.string "Ho, ho, ho! Let me know, how is the\n"
	.string "feeling of being sent to die by your own\l"
	.string "superiors? It's OK, in the end you are\l"
	.string "just a bunch of moral-less thieves with\l"
	.string "no criteria.$"

Bill_Garden_Policia_Atlas_text_2.3:
	.string "Now, you're alon…!$"

Bill_Garden_Policia_Atlas_text_3:
.string "????: That's wrong.$"

Bill_Garden_Policia_Atlas_text_4:
.string "BILL: CHIEF ADMIN ARCHER{PAUSE 5}…{PAUSE 5}$"

Bill_Garden_Policia_Atlas_text_5:
.string "ARCHER: I couldn't prevent myself from\n"
	.string "hearing some attacks against our\l"
	.string "organization; as you can see, I'm here.\p"
	.string "You're wrong, in TEAM ROCKET we never\n"
	.string "leave alone anyone who deserves it.$"

Bill_Garden_Policia_Atlas_text_5.1:
	.string "Lack of principles?\p"
	.string "Thieves?\p"
	.string "I'm afraid that terms are not\n"
	.string "enough to describe what you're\l"
	.string "doing to the region.$"

Bill_Garden_Policia_Atlas_text_6:
.string "BILL: DETAIN BOTH OF THEM!\p"
	.string "DO NOT LET THEM ESCAPE!$"

Bill_Garden_Policia_Atlas_text_7:
.string "ARCHER: SKARMORY, USE FLY!$"
