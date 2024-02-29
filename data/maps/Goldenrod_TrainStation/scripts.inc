Goldenrod_TrainStation_MapScripts::
	.byte 0

TrainStation1::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_1:
	.string "They haven't started the construction\n"
	.string "in SAFFRON yet. It's normal for them to\l"
	.string "be further behind, considering all the\l"
	.string "chaos they've had in the POKÉMON\l"
	.string "LEAGUE…$"



TrainStation2::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_2:
	.string "This door leads to the PRESIDENT's\n"
	.string "office; only authorized personnel are\l"
	.string "allowed to enter.$"



TrainStation3::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_3:
	.string "Be careful, man. While we prepare the\n"
	.string "ground for the construction of the\l"
	.string "tracks, you can come and have a look.$"



TrainStation4::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_4:
	.string "The MAGNETRAIN will levitate through\n"
	.string "magnetism, reaching speeds of up to 310\l"
	.string "mph. It will arrive in SAFFRON in a\l"
	.string "matter of minutes!$"



TrainStation5::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_5:
	.string "KANTO and JOHTO are closer than ever\n"
	.string "before! Isn't that great?$"

Goldenrod_TrainStation_Frontera::
compare VAR_UNUSED_0x40F7, 135
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_TrainStation_Frontera_Move_1
waitmovement 0x0
msgbox Goldenrod_TrainStation_Frontera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 134
goto_if_gt Goldenrod_TrainStation_Frontera_2
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_TrainStation_Frontera_Move_2
waitmovement 0x0
release
end

Goldenrod_TrainStation_Frontera_2::
delay 20
msgbox Goldenrod_TrainStation_Frontera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Goldenrod_TrainStation_Frontera_Move_3
waitmovement 0x0
msgbox Goldenrod_TrainStation_Frontera_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 136
release
end

Goldenrod_TrainStation_Frontera_Texto_1:
	.string "I apologize, youngster, only authorized\n"
	.string "personnel are permitted entry from this\l"
	.string "point onward. I hope you understand.$"

Goldenrod_TrainStation_Frontera_Texto_2:
.string "...\n"
	.string "...$"

Goldenrod_TrainStation_Frontera_Texto_3:
	.string "Hold on a moment, that's the RADIO PASS.\n"
	.string "Your PRESIDENT has funded a good\l"
	.string "portion of the project connecting\l"
	.string "GOLDENROD with CELADON. You say you\l"
	.string "just want to take a look beyond the\l"
	.string "tracks? As an honorary member of the\l"
	.string "RADIO TOWER, you could be considered\l"
	.string "authorized personnel, so you may\l"
	.string "proceed. But proceed with caution;\l"
	.string "we're in the midst of constructing the\l"
	.string "tracks.$"


Goldenrod_TrainStation_Frontera_Move_1:
walk_in_place_right
step_end

Goldenrod_TrainStation_Frontera_Move_2:
walk_slow_down
step_end

Goldenrod_TrainStation_Frontera_Move_3:
emote_exclamation_mark
step_end
