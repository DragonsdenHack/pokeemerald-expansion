FuchsiaCity_Path_MapScripts::
	.byte 0

FuchsiaCityPath1::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_1, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_1:
	.string "Enjoy the safari and excuse me for the\n"
	.string "inconveniences.$"



FuchsiaCityPath2::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_2:
	.string "The SAFARI ZONE was originally a\n"
	.string "project financed by KOGA and an\l"
	.string "unknown investor, whoever he is, we\l"
	.string "must thank him for everything good\l"
	.string "that has been given to FUCHSIA.$"


FuchsiaCity_Path_Barrera_Der::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_2
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_2::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Centro::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_3
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_3::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.1
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Izq::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_4
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_4::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.2
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Texto_1:
	.string "Stop right there, ROCKET, did you really\n"
	.string "think that we would let you in? The\l"
	.string "LEAGUE COMMITTEE rules are clear: the\l"
	.string "ROCKETS have no access to any service\l"
	.string "except the POKÉMON CENTER, turn around\l"
	.string "immediately if you don't want trouble.$"

FuchsiaCity_Path_Barrera_Texto_2:
.string "... ...$"

FuchsiaCity_Path_Barrera_Texto_3:
.string "Hold on…\n"
	.string "That pass…\l"
	.string "Let me see it!$"

FuchsiaCity_Path_Barrera_Texto_4:
	.string "Hmm… Signed by KOGA himself…\n"
	.string "Apparently everything is in order, you\l"
	.string "must be someone very important to have\l"
	.string "obtained this pass, I recommend you to\l"
	.string "not go around wearing those clothes,\l"
	.string "not even to make jokes on that, the\l"
	.string "LANCE's government is increasingly\l"
	.string "taking more restrictive measures\l"
	.string "against TEAM ROCKET, and it is\l"
	.string "completely justified.$"

FuchsiaCity_Path_Barrera_Texto_5:
	.string "Have a nice day sir, and excuse me for\n"
	.string "the confusion.$"

FuchsiaCity_Path_Barrera_Move_1:
walk_in_place_left
step_end

FuchsiaCity_Path_Barrera_Move_2:
walk_slow_down
step_end

FuchsiaCity_Path_Barrera_Move_3:
emote_exclamation_mark
step_end

FuchsiaCity_Path_Barrera_Move_4:
face_right
step_end

FuchsiaCity_Path_Barrera_Move_4.1:
walk_right
step_end

FuchsiaCity_Path_Barrera_Move_4.2:
walk_right
walk_right
step_end
