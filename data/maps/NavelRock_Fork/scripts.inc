NavelRock_Fork_MapScripts::
	.byte 0


NavelRock_Fork_Giovanni::
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Giovanni_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_2
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.3
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_3
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_4
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.2
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_6.4 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5
waitmovement 0x0
delay 15
msgbox NavelRock_Fork_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_5.1
waitmovement 0x0
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Giovanni_Move_6.1
applymovement 1, NavelRock_Fork_Giovanni_Move_6
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
removeobject 1
setvar VAR_UNUSED_0x40F7, 110
release
end

NavelRock_Fork_Giovanni_Move_6.1:
delay_16
face_left
step_end

NavelRock_Fork_Giovanni_Move_5.3:
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
face_down
step_end

NavelRock_Fork_Giovanni_Move_5.2:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end

NavelRock_Fork_Giovanni_Move_5.1:
delay_8
face_left
delay_16
delay_8
step_end

NavelRock_Fork_Giovanni_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

NavelRock_Fork_Giovanni_Move_2:
face_down
step_end

NavelRock_Fork_Giovanni_Move_3:
face_left
step_end

NavelRock_Fork_Giovanni_Move_4:
walk_in_place_down
step_end

NavelRock_Fork_Giovanni_Move_5:
face_up
step_end

NavelRock_Fork_Giovanni_Move_6:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

NavelRock_Fork_Giovanni_Texto_1:
	.string "GIOVANNI: The deeper we go into this\n"
	.string "place, the more sure I am that LUGIA\l"
	.string "and HO-OH are resting here.$"

NavelRock_Fork_Giovanni_Texto_2:
	.string "From this point, the path divides into\n"
	.string "two: one towards the sky, the other\l"
	.string "towards the abyss.\p"
	.string "It seems clear which POKÉMON each\n"
	.string "corresponds to, don't you think?$"

NavelRock_Fork_Giovanni_Texto_3:
    .string "It's odd, but this seems this place was\n"
	.string "intentionally created to confine these\l"
	.string "birds rather than being a remote\l"
	.string "natural area.\p"
	.string "We need to be cautious, {PLAYER}.$"

NavelRock_Fork_Giovanni_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

NavelRock_Fork_Giovanni_Texto_5:
	.string "I'll go after HO-OH, {PLAYER}.\p"
	.string "You'll take care of LUGIA, so\n"
	.string "we'll split up here.$"

NavelRock_Fork_Giovanni_Texto_6:
	.string "Be cautious, {PLAYER}. Just because\n"
	.string "you have a full team of 6 POKÉMON\l"
	.string "doesn't mean that your victory is\l"
	.string "guaranteed.$"

NavelRock_Fork_Giovanni_Texto_6.1:
	.string "In the old days, LUGIA and HO-OH\n"
	.string "were always considered as the most\l"
	.string "powerful POKÉMON of the known world.$"

NavelRock_Fork_Giovanni_Texto_6.2:
	.string "As MAJOR LEGENDARIES, both are\n"
	.string "made of a different material; only\l"
	.string "MEWTWO, with its advanced technology,\l"
	.string "could equal them.$"

NavelRock_Fork_Giovanni_Texto_6.3:
	.string "Refering to LUGIA in particular{PAUSE 15}…{PAUSE 15} is\n"
	.string "exceptionally resilient. You'll need\l"
	.string "more than sheer strength and force to\l"
	.string "defeat it, {PLAYER}.$"

NavelRock_Fork_Giovanni_Texto_6.4:
	.string "But{PAUSE 15}…{PAUSE 15} you aren't\n"
	.string "the KANTO CHAMPION by accident.\p"
	.string "I'm sure you'll find a solution.$"

NavelRock_Fork_Giovanni_Texto_7:
	.string "Alright, let's do this. Good luck,\n"
	.string "{PLAYER}. We'll reconvene here. If\l"
	.string "something goes wrong, call right away.$"

NavelRock_Fork_Giovanni_Texto_8:
	.string "It's amazing to see how much you've\n"
	.string "grown since you became part of our\l"
	.string "organization.$"

NavelRock_Fork_Giovanni_Texto_8.1:
	.string "TEAM ROCKET wouldn't have been\n"
	.string "the same without you.$"

NavelRock_Fork_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Abajo_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Abajo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Abajo_Move_2
waitmovement 0x0
release
end

NavelRock_Fork_Abajo_Move_1:
walk_in_place_up
step_end

NavelRock_Fork_Abajo_Move_2:
walk_slow_down
step_end

NavelRock_Fork_Derecha::
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Derecha_Move_1
waitmovement 0x0
msgbox NavelRock_Fork_Abajo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Fork_Derecha_Move_2
waitmovement 0x0
release
end

NavelRock_Fork_Derecha_Move_1:
walk_in_place_left
step_end

NavelRock_Fork_Derecha_Move_2:
walk_slow_right
step_end

NavelRock_Fork_Abajo_Texto_1:
	.string "-GIOVANNI has already taken this path.-$"
