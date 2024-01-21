Route7_Path_MapScripts::
	.byte 0

Route7Path_1::
end

Route7_Path_Frontera::
lock
playse SE_PIN
applymovement 1, Route7_Path_Frontera_move1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route7_Path_Frontera_move2
waitmovement 0x0
msgbox Route7_Path_Frontera_Text MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route7_Path_Frontera_move3
waitmovement 0x0
release
end

Route7_Path_Frontera_Text:
.string "What kind of joke is this?\n"
	.string "Only the elite enters this city.\l"
	.string "Disappear if you don't want an\l"
	.string "expedited record!$"

Route7_Path_Frontera_move1:
emote_exclamation_mark
step_end

Route7_Path_Frontera_move2:
face_up
step_end

Route7_Path_Frontera_move3:
walk_slow_left
step_end
