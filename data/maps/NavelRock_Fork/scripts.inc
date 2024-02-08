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
msgbox NavelRock_Fork_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Fork_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_3
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, NavelRock_Fork_Giovanni_Move_4
waitmovement 0x0
msgbox NavelRock_Fork_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
msgbox NavelRock_Fork_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, NavelRock_Fork_Giovanni_Move_5
waitmovement 0x0
delay 15
msgbox NavelRock_Fork_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, NavelRock_Fork_Giovanni_Move_6
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
removeobject 1
setvar VAR_UNUSED_0x40F7, 110
release
end

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
	.string "towards the abyss. It seems clear which\l"
	.string "POKÉMON each corresponds to, don't you\l"
	.string "think?$"

NavelRock_Fork_Giovanni_Texto_3:
    .string "It's odd, but this seems this place was\n"
	.string "intentionally created to confine these\l"
	.string "birds rather than being a remote\l"
	.string "natural area. We need to be cautious,\l"
	.string "{PLAYER}.$"

NavelRock_Fork_Giovanni_Texto_4:
.string "GIOVANNI: ...$"

NavelRock_Fork_Giovanni_Texto_5:
	.string "I will go after HO-OH, {PLAYER}. I'll\n"
	.string "take the stairs leading to the top of\l"
	.string "this place. You'll take care of LUGIA, so\l"
	.string "we'll split up here.$"

NavelRock_Fork_Giovanni_Texto_6:
	.string "Be cautious, {PLAYER}. Just because\n"
	.string "you have a full team of 6 POKÉMON\l"
	.string "doesn't mean you're guaranteed\l"
	.string "success. LUGIA and HO-OH have always\l"
	.string "been considered the most powerful\l"
	.string "POKÉMON in KANTO and JOHTO. They're\l"
	.string "legendary creatures on another level,\l"
	.string "made of a different material. Only\l"
	.string "MEWTWO, with its advanced technology,\l"
	.string "could equal them. LUGIA, in particular,\l"
	.string "is exceptionally resilient. You'll need\l"
	.string "more than sheer strength and force to\l"
	.string "defeat it, {PLAYER}. But as the KANTO\l"
	.string "CHAMPION, I'm confident you'll find a\l"
	.string "solution.$"

NavelRock_Fork_Giovanni_Texto_7:
	.string "Alright, let's do this. Good luck,\n"
	.string "{PLAYER}. We'll reconvene here. If\l"
	.string "something goes wrong, call right away.$"

NavelRock_Fork_Giovanni_Texto_8:
	.string "It's amazing to see how much you've\n"
	.string "grown since you became part of our\l"
	.string "organization. TEAM ROCKET wouldn't\l"
	.string "have been the same without you.$"


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
	.string "GIOVANNI has already taken this path.$"
