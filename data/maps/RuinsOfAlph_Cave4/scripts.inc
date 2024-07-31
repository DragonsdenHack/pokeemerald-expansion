RuinsOfAlph_Cave4_MapScripts::
	.byte 0

RuinsOfAlphCave4_1::
end

RuinsOfAlph_S4_Entrada_Unowns::
lock
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 6
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_5
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_5 MSGBOX_AUTOCLOSE
addobject 4
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_6
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_7
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_7 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_8
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_9
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_3
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_12
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_13
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_12
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 7
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_14
waitmovement 0x0
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_15
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_16 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_13
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_17 MSGBOX_AUTOCLOSE
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_16
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_17
waitmovement 0x0
delay 15
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_18
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_18 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_5
waitmovement 0x0
removeobject 5
playse SE_EXIT
waitse
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_19
waitmovement 0x0
removeobject 7
playse SE_EXIT
waitse
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
removeobject 4
playse SE_EXIT
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_20
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_21
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
removeobject 6
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
setvar VAR_UNUSED_0x40F7, 176
release
end

RuinsOfAlph_S4_Entrada_Unowns_Texto_1:
	.string "????: For once, you're the first to\n"
	.string "arrive, huh, {PLAYER}?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_2:
	.string "ANDRA: That's right. That door wasn't\n"
	.string "there before. It's like what happened\l"
	.string "back on SEVEN ISLAND, but this seems\l"
	.string "more serious now.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_3:
	.string "GIOVANNI, ARCHER, and a lot of our best\n"
	.string "ROCKETS are coming right now. I\l"
	.string "informed them already.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_4:
	.string "These UNOWN… There's something about\n"
	.string "their appearance… They seem\l"
	.string "incomplete, as if part of something\l"
	.string "major. Don't you think so?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_5:
	.string "????: They are the RUINS OF ALPH\n"
	.string "guardians.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_6:
	.string "ELDER.M: And they will do whatever they\n"
	.string "must so nobody discovers these\l"
	.string "chambers' secrets.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_7:
	.string "ANDRA: So, what's gonna happen if we\n"
	.string "cross through this door?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_8:
	.string "ELDER.M: All the ancestral power\n"
	.string "contained in these ruins will pounce\l"
	.string "over you.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_9:
	.string "????: We have no other option though.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_10:
	.string "ELDER.M: That's right. The ORIGINAL\n"
	.string "DRAGON is impossible to fuse once more.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_11:
.string "{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_12:
	.string "GIOVANNI: That wasn't necessarily my\n"
	.string "aim, ELDER MASTER.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_13:
.string "All hands, advance!\n"
	.string "Come on!$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_14:
.string "ELDER.M: What do you mean?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_15:
	.string "GIOVANNI: We won't miss the chance to\n"
	.string "analyze the power of perhaps the\l"
	.string "greatest POKÉMON of all time. ESSENCE\l"
	.string "POKÉMON? ORIGINAL DRAGON? Maybe\l"
	.string "they're different names for the same\l"
	.string "thing. Either way, we'll find out, and\l"
	.string "with the information gathered here, our\l"
	.string "scientists will be much closer to\l"
	.string "creating the strongest POKÉMON\l"
	.string "possible.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_16:
	.string "ELDER.M: Don't be foolish, GIOVANNI!\n"
	.string "That POKÉMON is beyond any and all of\l"
	.string "your estimations! The priority should\l"
	.string "be to prevent ZEUS from creating it.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_17:
	.string "GIOVANNI: We'll see, ELDER MASTER. How\n"
	.string "about we stop wasting time and enter\l"
	.string "now? ARCHER! Come with me!$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_18:
	.string "An extraordinary DEEP BOND DRAGONITE,\n"
	.string "by the way. I'm sure it has something to\l"
	.string "say to that ORIGINAL DRAGON, if you\l"
	.string "stop underestimating the training that\l"
	.string "brought you here.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_19:
.string "ELDER.M: {PAUSE 15}…{PAUSE 15}$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_20:
	.string "ANDRA: It's the eternal debate, isn't\n"
	.string "it? That's why I decided not to train\l"
	.string "LEGENDARIES. I'm with GIOVANNI-no\l"
	.string "ORIGINAL DRAGON is going to tell me how\l"
	.string "far I can or can't go.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_21:
	.string "No matter what we find behind those\n"
	.string "doors, {PLAYER}, our teams are ready!$"

RuinsOfAlph_S4_Entrada_Unowns_Move_1:
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_3:
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_5:
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_6:
walk_left
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_7:
walk_up
walk_right
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_8:
walk_slow_left
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_9:
walk_up
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_10:
walk_right
walk_in_place_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_11:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_12:
face_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_13:
face_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_14:
walk_left
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_15:
walk_right
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_16:
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_17:
walk_left
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_18:
face_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_19:
walk_right
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_20:
walk_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_21:
walk_in_place_left
step_end

Ruinas_Settile::
lock
compare VAR_UNUSED_0x40F7, 175
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 180
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
setvar VAR_UNUSED_0x40FE, 4
setmetatile 4, 1, 0x17F, FALSE
special DrawWholeMapView
release
end
