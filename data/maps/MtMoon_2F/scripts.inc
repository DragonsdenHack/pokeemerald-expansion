MtMoon_2F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, MtMoon_2F_OnFrame
	.byte 0

MtMoon_2F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 11, MtMoon_2F_AltoRango
	.2byte 0

MtMoon_2F_AltoRango::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_1, MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 6, MtMoon_2F_AltoRango_move2
waitmovement 0x0
fadeoutbgm 0
playse 486
msgbox MtMoon_2F_AltoRango_Text_2, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_3, MSGBOX_AUTOCLOSE
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_4, MSGBOX_AUTOCLOSE
applymovement 1, MtMoon_2F_AltoRango_move4
applymovement 2, MtMoon_2F_AltoRango_move4
applymovement 3, MtMoon_2F_AltoRango_move4
applymovement 4, MtMoon_2F_AltoRango_move4
applymovement 5, MtMoon_2F_AltoRango_move4
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_5, MSGBOX_AUTOCLOSE
msgbox MtMoon_2F_AltoRango_Text_6, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 4
removeobject 5
fadescreen 0
applymovement 6, MtMoon_2F_AltoRango_move5
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_7, MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
fadeoutbgm 0
playse 500
removeobject 6
fadescreen 0
applymovement 3, MtMoon_2F_AltoRango_move6
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_8, MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 12
release
end

MtMoon_2F_AltoRango_Text_1:
.string "As you can see, the situation has\n"
	.string "gotten complicated.$"

MtMoon_2F_AltoRango_Text_2:
.string "What kind of joke is this, GRUNT? Your\n"
	.string "presence was required a long time ago\l"
	.string "and you have the guts to come late! You\l"
	.string "think you're better than your comrades?\l"
	.string "I hope you have a good excuse for that,\l"
	.string "GRUNT!$"

MtMoon_2F_AltoRango_Text_3:
.string "The fact that you have helped other\n"
	.string "GRUNTS with their mission doesn't\l"
	.string "release you from completing your own\l"
	.string "mission. You better compensate this\l"
	.string "insubordination with a good\l"
	.string "performance in this mission, lucky for\l"
	.string "you we are still in the middle of it.$"

MtMoon_2F_AltoRango_Text_4:
.string "OK. Let's recap:We have collected one\n"
	.string "FOSSIL so far, found by GRUNT ANDRA.\l"
	.string "Our priority is finding more while we\l"
	.string "prevent that trainer from messing up\l"
	.string "with us again. If you find him, tell me so\l"
	.string "I can beat him.$"

MtMoon_2F_AltoRango_Text_5:
.string "ROGER THAT, HIGH RANK FRANK!!$"

MtMoon_2F_AltoRango_Text_6:
.string "Well then. Get moving, you stack of\n"
	.string "useless bones!$"

MtMoon_2F_AltoRango_Text_7:
.string "I'm remembering both your name and your\n"
	.string "face. You'll learn really badly how we\l"
	.string "manage this, newbie. ROCKET discipline\l"
	.string "is non-negotiable.$"

MtMoon_2F_AltoRango_Text_8:
.string "Hey, don't take him that seriously, he's\n"
	.string "just frustrated ‘cause he has just\l"
	.string "signed some successful missions as a\l"
	.string "HIGH RANK and suddenly the situation\l"
	.string "has been compromised ‘cause a\l"
	.string "10-year-old dude. I haven't seen that\l"
	.string "kid yet, but if I see him, I'll show no\l"
	.string "mercy! Let's show everyone how powerful\l"
	.string "we are, CHRONO ISLAND GRUNTS. Good luck\l"
	.string "on your search, by the way.$"

MtMoon_2F_AltoRango_move1:
walk_in_place_left
step_end

MtMoon_2F_AltoRango_move2:
face_right
emote_exclamation_mark
step_end

MtMoon_2F_AltoRango_move3:
walk_in_place_down
step_end

MtMoon_2F_AltoRango_move4:
walk_in_place_up
step_end

MtMoon_2F_AltoRango_move5:
walk_down
walk_right
walk_right
step_end

MtMoon_2F_AltoRango_move6:
walk_up
walk_right
walk_right
step_end
