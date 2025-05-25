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
	.string "Wie ihr sehen könnt, hat sich\n"
	.string "die Lage verkompliziert.$"

MtMoon_2F_AltoRango_Text_2:
	.string "Sag mal, ist das dein Ernst, RÜPEL?! Du\n"
	.string "hättest schon längst hier sein sollen\l"
	.string "und dann hast du auch noch die Nerven,\l"
	.string "dich zu verspäten! Denkst du, du bist\l"
	.string "was Besseres als deine Kameraden?!\p"
	.string "Ich hoffe, du hast eine verdammt\n"
	.string "gute Erklärung parat!$"

MtMoon_2F_AltoRango_Text_3:
	.string "Anderen RÜPELN bei ihrer Mission zu\n"
	.string "helfen, entbindet dich nicht von deinen\l"
	.string "eigenen Pflichten! Du kannst deine\l"
	.string "Befehlsverweigerung nur mit einer\l"
	.string "herausragenden Leistung bei dieser\l"
	.string "Mission ausgleichen! Zu deinem Glück\l"
	.string "sind wir hier noch nicht fertig!$"

MtMoon_2F_AltoRango_Text_4:
	.string "Okay, fassen wir zusammen. Momentan\n"
	.string "haben wir dank RÜPEL ANDRA bisher ein\l"
	.string "FOSSIL.$"

MtMoon_2F_AltoRango_Text_4.1:
	.string "Wie einige von euch wissen, ist hier ein\n"
	.string "mysteriöser Trainer unterwegs, der ein\l"
	.string "SCHILLOK mit sich führt - eines der\l"
	.string "STARTER-POKéMON der Region. Er hat\l"
	.string "bereits vier unserer Leute erledigt\l"
	.string "und sich zwei FOSSILIEN unter den\l"
	.string "Nagel gerissen!$"

MtMoon_2F_AltoRango_Text_4.2:
	.string "Wir wissen, dass es noch weitere\n"
	.string "FOSSILIEN gibt. Unsere oberste\l"
	.string "Priorität ist es, sie zuerst zu\l"
	.string "finden und zu verhindern, dass uns\l"
	.string "dieser TRAINER erneut reinlegt.$"

MtMoon_2F_AltoRango_Text_4.3:
	.string "Solltet ihr ihn irgendwo sehen,\n"
	.string "sagt mir sofort Bescheid!\p"
	.string "Ich kümmere mich dann um ihn!$"

MtMoon_2F_AltoRango_Text_5:
.string "JAWOHL, SIR!!$"

MtMoon_2F_AltoRango_Text_6:
	.string "Gut. Dann macht euch an die\n"
	.string "Arbeit, ihr faulen Säcke!$"

MtMoon_2F_AltoRango_Text_7:
	.string "Ich werde mir deinen Namen und dein\n"
	.string "Gesicht merken! Du wirst lernen, wie die\l"
	.string "Dinge hier laufen, Frischling! Disziplin\l"
	.string "ist bei TEAM ROCKET nicht verhandelbar!$"

MtMoon_2F_AltoRango_Text_8:
	.string "Hey, Mann. Mach dir keinen Stress wegen\n"
	.string "dem Typen. Der ist nur angepisst, weil\l"
	.string "so ein zehnjähriger Knirps seine\l"
	.string "perfekte Missionsquote ruiniert hat.$"
	
MtMoon_2F_AltoRango_Text_8.1:
	.string "Ich habe den Kleinen noch nicht\n"
	.string "gesehen, aber wenn er mir über den Weg\l"
	.string "läuft, werde ich keine Gnade zeigen!\p"
	.string "Zeigen wir allen, wie stark wir EILAND\n"
	.string "FÜNF RÜPEL sind!$"

MtMoon_2F_AltoRango_Text_8.2:
	.string "Auf eine erfolgreiche Suche!$"

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
