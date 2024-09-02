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
	.string "ANDRA: It sure was easier to waltz\n"
	.string "on in than it looked, eh?$"

SsAnne_1F_Andra_Ida_Text_2:
	.string "Most of this luxury cruise's passengers\n"
	.string "are foreigners. It'll be easier to blend\l"
	.string "in and hop into the CAPTAIN's cabin\l"
	.string "without getting side-eyed. Once we get\l"
	.string "in, we'll track the jar and sneak it off.$"

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
	.string "CAPTAIN was sturdy, eh? Never seen\l"
	.string "POKÉMON like those. Probably from\l"
	.string "abroad. Anyway, we're got that relic…$"

SsAnne_1F_Andra_Vuelta_Text_2:
	.string "S. S. ANNE: Notice to the passengers.\n"
	.string "The party is now over. Please return to\l"
	.string "your cabins to allow the crew to\l"
	.string "commence cleanup.$"

SsAnne_1F_Andra_Vuelta_Text_3:
	.string "ANDRA: Guess that's our cue too. By the\n"
	.string "by, I found a bunch of this here on the\l"
	.string "CAPTAIN's table. I'd bet it'll be a good\l"
	.string "help for you too.$"

SsAnne_1F_Andra_Vuelta_Text_4:
	.string "Catch you in the barracks, {PLAYER}.$"

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
.string "(I have nothing else to do here.)$"


SsAnne_1F_Acabado_move_1:
walk_in_place_up
step_end

SsAnne_1F_Acabado_move_2:
walk_up
step_end
