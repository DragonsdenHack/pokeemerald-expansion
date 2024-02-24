SsAnne_1F_MapScripts::
	.byte 0

SsAnne_1F_Andra_Ida::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Ida_move_1
applymovement 2, SsAnne_1F_Andra_Ida_move_2
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_1F_Andra_Ida_move_3
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_2 MSGBOX_AUTOCLOSE
msgbox SsAnne_1F_Andra_Ida_Text_3 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_1F_Andra_Ida_move_4
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 2
setvar VAR_UNUSED_0x40F7, 25
release
end

SsAnne_1F_Andra_Ida_Text_1:
.string "ANDRA: It was easier to enter than it\n"
	.string "seemed, eh?$"

SsAnne_1F_Andra_Ida_Text_2:
.string "Most of this luxury cruise passengers\n"
	.string "are not from KANTO, that will give us\l"
	.string "some advantage of going unnoticed and\l"
	.string "entering CAPTAIN's cabin with no\l"
	.string "suspicions, once there we will identify\l"
	.string "the jar and we will take it.$"

SsAnne_1F_Andra_Ida_Text_3:
.string "Let's go.$"

SsAnne_1F_Andra_Ida_move_1:
walk_in_place_down
step_end

SsAnne_1F_Andra_Ida_move_2:
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_3:
walk_in_place_down
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_4:
walk_down
step_end

SsAnne_1F_Andra_Vuelta::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_1
waitmovement 0x0
applymovement 3, SsAnne_1F_Andra_Vuelta_move_2
waitmovement 0x0
msgbox SsAnne_1F_Andra_Vuelta_Text_1 MSGBOX_DEFAULT
delay 10
playse SE_DING_DONG
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_3
applymovement 3, SsAnne_1F_Andra_Vuelta_move_4
waitmovement 0x0
msgbox SsAnne_1F_Andra_Vuelta_Text_2 MSGBOX_DEFAULT
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Vuelta_move_5
waitmovement 0x0
msgbox SsAnne_1F_Andra_Vuelta_Text_3 MSGBOX_DEFAULT
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM01
waitfanfare
msgbox SsAnne_1F_Andra_Vuelta_Text_4 MSGBOX_DEFAULT
applymovement 3, SsAnne_1F_Andra_Vuelta_move_6
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 3
setvar VAR_UNUSED_0x40F7, 28
release
end

SsAnne_1F_Andra_Vuelta_Text_1:
.string "ANDRA: We did it, {PLAYER}! That\n"
	.string "CAPTAIN was a rock, eh. I have never\l"
	.string "seen POKÉMON like those, they should be\l"
	.string "from other regions. Anyways, we have\l"
	.string "that relic…$"

SsAnne_1F_Andra_Vuelta_Text_2:
.string "SS.ANNE: Notice to all ship's crew. Party\n"
	.string "finished, please everyone go back to\l"
	.string "their cabins to facilitate staff\l"
	.string "cleaning tables and other things.$"

SsAnne_1F_Andra_Vuelta_Text_3:
.string "ANDRA: We better go away now. By the\n"
	.string "way I found a lot of these on the\l"
	.string "CAPTAIN board, I am sure it would be\l"
	.string "helpful for you too.$"

SsAnne_1F_Andra_Vuelta_Text_4:
	.string "See you in the HQ {PLAYER}..$"

SsAnne_1F_Andra_Vuelta_move_1:
walk_up
walk_up
walk_up
walk_up
step_end

SsAnne_1F_Andra_Vuelta_move_2:
face_down
step_end

SsAnne_1F_Andra_Vuelta_move_3:
face_down
emote_exclamation_mark
step_end

SsAnne_1F_Andra_Vuelta_move_4:
emote_exclamation_mark
step_end

SsAnne_1F_Andra_Vuelta_move_5:
face_up
step_end

SsAnne_1F_Andra_Vuelta_move_6:
walk_up
step_end


SsAnne_1F_Acabado::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Acabado_move_1
waitmovement 0x0
msgbox SsAnne_1F_Acabado_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Acabado_move_2
waitmovement 0x0
release
end

SsAnne_1F_Acabado_Text_1:
.string "(I have nothing else to do here).$"


SsAnne_1F_Acabado_move_1:
walk_in_place_up
step_end

SsAnne_1F_Acabado_move_2:
walk_up
step_end
