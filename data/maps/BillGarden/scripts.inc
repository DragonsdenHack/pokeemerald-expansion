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
	.string "…{PAUSE 20}\l"
    .string "This poster seems to be covering some\l"
	.string "tunnel that leads somewhere else.\l"
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
msgbox Bill_Garden_Policia_Atlas_text_1 MSGBOX_AUTOCLOSE
playse SE_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 18
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_1
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_2 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
applymovement 16, Bill_Garden_Policia_Atlas_move_2
delay 20
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
delay 20
fadescreen 1
playse SE_M_FLY
delay 15
fadescreen 0
addobject 11
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Bill_Garden_Policia_Atlas_move_2
applymovement 10, Bill_Garden_Policia_Atlas_move_3
applymovement 19, Bill_Garden_Policia_Atlas_move_3
applymovement 12, Bill_Garden_Policia_Atlas_move_2
applymovement 13, Bill_Garden_Policia_Atlas_move_2
applymovement 14, Bill_Garden_Policia_Atlas_move_2
applymovement 1, Bill_Garden_Policia_Atlas_move_2
applymovement 17, Bill_Garden_Policia_Atlas_move_2
applymovement 16, Bill_Garden_Policia_Atlas_move_2
msgbox Bill_Garden_Policia_Atlas_text_4 MSGBOX_AUTOCLOSE
applymovement 11, Bill_Garden_Policia_Atlas_move_5
waitmovement 0x0
msgbox Bill_Garden_Policia_Atlas_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Bill_Garden_Policia_Atlas_move_2
msgbox Bill_Garden_Policia_Atlas_text_6 MSGBOX_AUTOCLOSE
msgbox Bill_Garden_Policia_Atlas_text_7 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
delay 20
playse SE_M_FLY
setvar VAR_UNUSED_0x40FF, 1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
warp MAP_ROUTE5, 23, 26
release
end

Bill_Garden_Policia_Atlas_move_1:
walk_in_place_up
step_end

Bill_Garden_Policia_Atlas_move_2:
emote_exclamation_mark
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

Bill_Garden_Policia_Atlas_text_1:
	.string "You're under arrest, ROCKET. You have\n"
	.string "committed multiple crimes and resisted\l"
	.string "authority. Now, give us back the stolen\l"
	.string "patent.$"

Bill_Garden_Policia_Atlas_text_2:
	.string "BILL: A real shame it all ends this way.\n"
	.string "You should've been better informed of\l"
	.string "the consequences of getting tangled\l"
	.string "with BILL of KANTO. A darned shame,\l"
	.string "truly, that a TRAINER like you ends\l"
	.string "here. All thanks to the shoddy\l"
	.string "decision-making of your ADMINs and\l"
	.string "EXECUTIVEs. So how's that death\l"
	.string "sentence your superiors've given you\l"
	.string "feel now? Doesn't matter, you're just\l"
	.string "a pack of immoral crooks without any\l"
	.string "standards. Now, you're alon-$"

Bill_Garden_Policia_Atlas_text_3:
.string "????: You're wrong.$"

Bill_Garden_Policia_Atlas_text_4:
.string "BILL: BOSS ADMIN ARCHER…$"

Bill_Garden_Policia_Atlas_text_5:
	.string "ARCHER: I couldn't help hearing that\n"
	.string "smear against our organization. As you\l"
	.string "can see, I'm here. So you're wrong:\l"
	.string "TEAM ROCKET never abandons those who\l"
	.string "require aid. Unprincipled? Thieving? I'm\l"
	.string "afraid those terms don't quite live up\l"
	.string "to the damage you're doing to the\l"
	.string "region.$"

Bill_Garden_Policia_Atlas_text_6:
.string "BILL: DETAIN BOTH OF THEM! DO NOT LET\n"
	.string "THEM ESCAPE!$"

Bill_Garden_Policia_Atlas_text_7:
.string "ARCHER: SKARMORY, USE FLY!$"
