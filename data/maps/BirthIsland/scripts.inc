BirthIsland_MapScripts::
	.byte 0


BirthIsland_Blaine::
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
applymovement 2, BirthIsland_Blaine_Move_3
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_1 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_4
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_3
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_4 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_5 MSGBOX_AUTOCLOSE
delay 40
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_2
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 5
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_5
applymovement 2, BirthIsland_Blaine_Move_6
waitmovement 0x0
applymovement 5, BirthIsland_Blaine_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 2, BirthIsland_Blaine_Move_2
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_7 MSGBOX_AUTOCLOSE
msgbox BirthIsland_Blaine_Texto_8 MSGBOX_AUTOCLOSE
addobject 3
addobject 4
addobject 6
addobject 7
delay 10
applymovement 3, BirthIsland_Blaine_Move_7
waitmovement 0x0
applymovement 4, BirthIsland_Blaine_Move_8
waitmovement 0x0
applymovement 6, BirthIsland_Blaine_Move_9
waitmovement 0x0
applymovement 7, BirthIsland_Blaine_Move_10
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_11
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
applymovement 5, BirthIsland_Blaine_Move_11.1
waitmovement 0x0
delay 15
removeobject 1
delay 15
applymovement 5, BirthIsland_Blaine_Move_12
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_13
applymovement 5, BirthIsland_Blaine_Move_14
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_15
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, BirthIsland_Blaine_Move_16
waitmovement 0x0
removeobject 5
applymovement 3, BirthIsland_Blaine_Move_17
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_3
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANNIKA, BirthIsland_Blaine_Texto_13 
applymovement 6, BirthIsland_Blaine_Move_18
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_14
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JAZMYN, BirthIsland_Blaine_Texto_15
msgbox BirthIsland_Blaine_Texto_16 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 3
removeobject 4
removeobject 6
removeobject 7
fadescreen 0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Blaine_Move_13
applymovement 2, BirthIsland_Blaine_Move_19
waitmovement 0x0
msgbox BirthIsland_Blaine_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, BirthIsland_Blaine_Move_15
waitmovement 0x0
delay 20
msgbox BirthIsland_Blaine_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 112
release
end

BirthIsland_Blaine_Texto_1:
	.string "ANDRA: You came, {PLAYER}!$"

BirthIsland_Blaine_Texto_2:
	.string "I've visited the ruins beside this\n"
	.string "island, but I haven't found anything\l"
	.string "noteworthy. However, this...$"

BirthIsland_Blaine_Texto_3:
	.string "When I arrived, there was nothing, but\n"
	.string "as soon as I positioned myself in the\l"
	.string "center, the stone inside the jar we\l"
	.string "stole began to glow, and then this odd\l"
	.string "triangle appeared.$"

BirthIsland_Blaine_Texto_4:
	.string "Just when I arrived, the rock broke the\n"
	.string "jar and it shot out to the triangle,\l"
	.string "being absorbed by it.$"

BirthIsland_Blaine_Texto_5:
	.string "The CAPTAIN said it belongs to some\n"
	.string "POKÉMON with LEGENDARY and\l"
	.string "PSEUDOLEGENDARY properties at the\l"
	.string "same time, could this strange object\l"
	.string "contain the POKÉMON? Which POKÉMON\l"
	.string "would it be?$"

BirthIsland_Blaine_Texto_6:
	.string "????: That POKÉMON is DEOXYS, girl, a\n"
	.string "space virus with a genetic combination\l"
	.string "impossible to imitate here on the\l"
	.string "planet.$"

BirthIsland_Blaine_Texto_7:
.string "ANDRA: You! Betrayer!$"

BirthIsland_Blaine_Texto_8:
.string "BLAINE: Betrayer for who?\n"
	.string "For TEAM ROCKET?\l"
	.string "Of course yeah.$"

BirthIsland_Blaine_Texto_9:
	.string "You can be as strong as you want to be,\n"
	.string "but you won't have time to defeat four\l"
	.string "of our top scientists while preventing\l"
	.string "him from escaping with this object.$"

BirthIsland_Blaine_Texto_10:
	.string "OAK sends you a message, {PLAYER}, if\n"
	.string "you have the courage, we await you in\l"
	.string "the depths of the POKÉMON MANSION, he\l"
	.string "wants you to see firsthand the true\l"
	.string "power of technology and science,\l"
	.string "before revealing it to the world, to\l"
	.string "demonstrate that your victories\l"
	.string "against RED and LANCE were nothing but\l"
	.string "mere mistakes, now that he has found\l"
	.string "the formula to have a perfect team,\l"
	.string "nothing can stand in his way, we will\l"
	.string "rebuild KANTO in our own way.$"

BirthIsland_Blaine_Texto_11:
	.string "Have a good day.$"

BirthIsland_Blaine_Texto_12:
	.string "By the time you have defeated us,\n"
	.string "BLAINE will already be far away from\l"
	.string "here.$"

BirthIsland_Blaine_Texto_13:
	.string "I have completed my role in the plan.$"

BirthIsland_Blaine_Texto_14:
	.string "Once BLAINE hands over the triangle to\n"
	.string "OAK, we will have all the elements\l"
	.string "needed for our major strategy, and\l"
	.string "nobody will be able to halt our\l"
	.string "progress.$"

BirthIsland_Blaine_Texto_15:
	.string "Console yourself with this unimportant\n"
	.string "victory, ROCKET.$"

BirthIsland_Blaine_Texto_16:
	.string "There's nothing left for us here, you\n"
	.string "can't catch up to BLAINE anymore,\l"
	.string "you've failed!$"

BirthIsland_Blaine_Texto_17:
	.string "ANDRA: We must notify GIOVANNI about\n"
	.string "this, {PLAYER}. They've stolen that\l"
	.string "triangle just when we found it. Could\l"
	.string "they have been keeping an eye on us all\l"
	.string "that time?$"

BirthIsland_Blaine_Texto_18:
	.string "See you at the headquarters,\n"
	.string "{PLAYER}.$"

BirthIsland_Blaine_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BirthIsland_Blaine_Move_2:
emote_exclamation_mark
step_end

BirthIsland_Blaine_Move_3:
face_down
step_end

BirthIsland_Blaine_Move_4:
face_up
step_end

BirthIsland_Blaine_Move_5:
walk_left
face_down
step_end

BirthIsland_Blaine_Move_6:
walk_right
walk_down
step_end

BirthIsland_Blaine_Move_7:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
step_end

BirthIsland_Blaine_Move_8:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

BirthIsland_Blaine_Move_9:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
face_right
step_end

BirthIsland_Blaine_Move_10:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
face_left
step_end

BirthIsland_Blaine_Move_11:
walk_up
walk_up
step_end

BirthIsland_Blaine_Move_11.1:
walk_in_place_up
step_end

BirthIsland_Blaine_Move_12:
walk_down
step_end

BirthIsland_Blaine_Move_13:
face_right
step_end

BirthIsland_Blaine_Move_14:
face_left
step_end

BirthIsland_Blaine_Move_15:
walk_in_place_down
step_end

BirthIsland_Blaine_Move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

BirthIsland_Blaine_Move_17:
walk_in_place_up
step_end

BirthIsland_Blaine_Move_18:
walk_in_place_right
step_end

BirthIsland_Blaine_Move_19:
walk_left
step_end
