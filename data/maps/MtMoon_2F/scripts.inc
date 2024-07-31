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
	.string "Helping other GRUNTs with their mission\n"
	.string "doesn't relieve you of your own duties.\l"
	.string "You'd better compensate for this\l"
	.string "insubordination with a good\l"
	.string "performance on this mission. Luckily\l"
	.string "for you, we're still in the middle of it.$"

MtMoon_2F_AltoRango_Text_4:
	.string "Okay-recap. We've snagged one FOSSIL so\n"
	.string "far, thanks to GRUNT ANDRA. Our\l"
	.string "priority's tracking more while keeping\l"
	.string "that trainer with the WARTORTLE from\l"
	.string "messing with us again. If you see him,\l"
	.string "get me so I can take him.$"

MtMoon_2F_AltoRango_Text_5:
.string "ROGER THAT, HIGH RANK FRANK!!$"

MtMoon_2F_AltoRango_Text_6:
	.string "Well then. Get moving, you\n"
	.string "shambling pile of bones.$"

MtMoon_2F_AltoRango_Text_7:
.string "I'm remembering both your name and your\n"
	.string "face. You'll learn really badly how we\l"
	.string "manage this, newbie. ROCKET discipline\l"
	.string "is non-negotiable.$"

MtMoon_2F_AltoRango_Text_8:
	.string "Hey, don't you worry about that guy.\n"
	.string "He's just peeved ‘cause his clean\l"
	.string "mission record's just been smashed by\l"
	.string "some ten-year-old. I haven't seen that\l"
	.string "kid yet, but if we meet, he's getting no\l"
	.string "mercy! Let's show everyone how strong\l"
	.string "we CHRONO ISLAND GRUNTS are. Here's to\l"
	.string "a successful search too!$"

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
