MtMoon_2F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, MtMoon_2F_OnFrame
map_script MAP_SCRIPT_ON_RESUME, MtMoon_2F_OnResume
	.byte 0

MtMoon_2F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 11, MtMoon_2F_AltoRango
	.2byte 0

MtMoon_2F_OnResume:
	call MtMoon_2F_SetupEscapeWarp
	end

MtMoon_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE4, 32, 6
	return

MtMoon_2F_AltoRango_move2.1:
walk_in_place_right
step_end

MtMoon_2F_AltoRango_move3.1:
walk_up
walk_left
step_end

MtMoon_2F_AltoRango_move3.2:
walk_up
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_move3.3:
walk_up
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_move3.4:
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

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
delay 15
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
delay 15
applymovement 6, MtMoon_2F_AltoRango_move2.1
waitmovement 0x0
delay 35
msgbox MtMoon_2F_AltoRango_Text_3, MSGBOX_AUTOCLOSE
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_4, MSGBOX_AUTOCLOSE
delay 15
applymovement 3, MtMoon_2F_AltoRango_move4
waitmovement 0x0
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.1, MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.2, MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.3, MSGBOX_AUTOCLOSE
applymovement 1, MtMoon_2F_AltoRango_move4
applymovement 2, MtMoon_2F_AltoRango_move4
applymovement 3, MtMoon_2F_AltoRango_move4
applymovement 4, MtMoon_2F_AltoRango_move4
applymovement 5, MtMoon_2F_AltoRango_move4
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_5, MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
waitse
delay 10
msgbox MtMoon_2F_AltoRango_Text_6, MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
applymovement 5, MtMoon_2F_AltoRango_move3.4
applymovement 4, MtMoon_2F_AltoRango_move3.3
applymovement 2, MtMoon_2F_AltoRango_move3.2
applymovement 1, MtMoon_2F_AltoRango_move3.1
waitmovement 0x0
playse SE_EXIT
removeobject 1
delay 15
playse SE_EXIT
removeobject 2
delay 25
playse SE_EXIT
removeobject 4
delay 10
playse SE_EXIT
removeobject 5
delay 10
applymovement 6, MtMoon_2F_AltoRango_move5
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_7, MSGBOX_AUTOCLOSE
delay 10
applymovement 6, MtMoon_2F_AltoRango_move5.1
waitmovement 0x0
removeobject 6
playse SE_EXIT
fadeoutbgm 0
waitse
playse 500
applymovement 3, MtMoon_2F_AltoRango_move6
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MtMoon_2F_AltoRango_move6.1
waitmovement 0x0
delay 10
msgbox MtMoon_2F_AltoRango_Text_8.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MtMoon_2F_AltoRango_move5.2
waitmovement 0x0
delay 10
msgbox MtMoon_2F_AltoRango_Text_8.2, MSGBOX_AUTOCLOSE
applymovement 3, MtMoon_2F_AltoRango_move5.1
waitmovement 0x0
removeobject 3
playse SE_EXIT
waitse
setvar VAR_UNUSED_0x40F7, 12
release
end

MtMoon_2F_AltoRango_move6.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

MtMoon_2F_AltoRango_move5.2:
walk_in_place_right
step_end

MtMoon_2F_AltoRango_move5.1:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_Text_1:
.string "As you can see, the situation has\n"
	.string "become serious.$"

MtMoon_2F_AltoRango_Text_2:
.string "What kind of joke is this, GRUNT? Your\n"
	.string "presence was required a long time ago\l"
	.string "and you have the guts to come late!\p"
	.string "Do you think you're better than your\n"
	.string "comrades? I hope you have a good\l"
	.string "excuse for that, GRUNT!$"

MtMoon_2F_AltoRango_Text_3:
	.string "Helping other GRUNTs with their mission\n"
	.string "doesn't relieve you of your own duties.\l"
	.string "You'd better compensate for this\l"
	.string "insubordination with a good\l"
	.string "performance on this mission; luckily\l"
	.string "for you, we're still in the middle of it.$"

MtMoon_2F_AltoRango_Text_4:
	.string "Let's recap. We've snagged one\n"
	.string "FOSSIL, thanks to GRUNT ANDRA.$"

MtMoon_2F_AltoRango_Text_4.1:
	.string "But, as many of you know, a mysterious\n"
	.string "TRAINER was carrying a WARTORTLE, one\l"
	.string "of the 3 KANTO STARTERS, and has\l"
	.string "already defeated 4 of us, snatching us\l"
	.string "2 FOSSILS.$"

MtMoon_2F_AltoRango_Text_4.2:
	.string "We know that there are still FOSSILS.\n"
	.string "The priority will be to find them and\l"
	.string "prevent that TRAINER from taking them\l"
	.string "away from us again.$"

MtMoon_2F_AltoRango_Text_4.3:
	.string "If you see him, call me: I'll show\n"
	.string "him the difference between a TEAM\l"
	.string "ROCKET GRUNT, and a HIGH RANKED one.\p"
	.string "Is that clear?$"

MtMoon_2F_AltoRango_Text_5:
.string "ROGER THAT, HIGH-RANK FRANK!!$"

MtMoon_2F_AltoRango_Text_6:
	.string "Well then. Get moving!\p"
	.string "You shambling pile of bones!$"

MtMoon_2F_AltoRango_Text_7:
.string "I'm remembering both your name and your\n"
	.string "face. You'll learn really badly how we\l"
	.string "manage this, newbie.\p"
	.string "ROCKET discipline is non-negotiable.$"

MtMoon_2F_AltoRango_Text_8:
	.string "Hey, don't worry about that.\p"
	.string "He's just peeved, cause his clean\n"
	.string "mission record's just been smashed by\l"
	.string "some ten year old kid.$"
	
MtMoon_2F_AltoRango_Text_8.1:
	.string "I haven't seen this WARTORTLE yet.\n"
	.string "If we meet, I'll have no mercy!\p"
	.string "Let's show everyone how strong\n"
	.string "we CHRONO ISLAND GRUNTS are!$"

MtMoon_2F_AltoRango_Text_8.2:
	.string "I wish you luck, {PLAYER}.$"

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
