Route5_Path_MapScripts::
	.byte 0

Route5Path_1::
lock
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Route5Path_2
msgbox Route5Path_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route5Path_2::
msgbox Route5Path_1_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route5Path_1_Texto_2:
	.string "ROCKETS, your time is running out. There\n"
    .string "won't be a place for you in KANTO.$"

Route5Path_1_Texto_1:
	.string "Do you find it amusing to invade the\n"
    .string "city, ROCKET? Just wait and see.$"


Route5_Path_Frontera::
lock
playse SE_PIN
applymovement 1, Route5_Path_Frontera_move1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route5_Path_Frontera_move2
waitmovement 0x0
msgbox Route5_Path_Frontera_Text MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route5_Path_Frontera_move3
waitmovement 0x0
release
end

Route5_Path_Frontera_Text:
	.string "What kind of joke is this? Only the\n"
    .string "elite of the region enters this city.\l"
    .string "Disappear, ROCKET, if you don't want to\l"
    .string "be expelled.$"

Route5_Path_Frontera_move1:
emote_exclamation_mark
step_end

Route5_Path_Frontera_move2:
face_left
step_end

Route5_Path_Frontera_move3:
walk_slow_up
step_end
