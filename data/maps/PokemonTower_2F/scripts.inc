PokemonTower_2F_MapScripts::
	.byte 0

PokemonTower2F_2::
lock     
faceplayer     
msgbox PokemonTower2F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_2:
.string "Even we could not identify the\n"
    .string "wayward ghosts.\p"
    .string "A SILPH SCOPE might be able to\n"
    .string "unmask them.$"

PokemonTower2F_1::
lock     
faceplayer     
msgbox PokemonTower2F_Text_1, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_1:
	.string "Get in your business {PLAYER}, no one\n"
	.string "must access the last floor!$"

PokemonTower2F_Azul::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.1
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_5
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_6
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_6
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_2::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.2
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_5.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_5.1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_6.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_4.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_Texto_1:
.string "BLUE: So you are already here…{PAUSE 20}$"

PokemonTower2F_Azul_Texto_2:
	.string "The other ROCKETs are already on the\n"
	.string "upstairs floors, causing riots and\l"
	.string "catching CUBONES; if that FUJI loves it\l"
	.string "so much this place, should not take long\l"
	.string "to come here.$"

PokemonTower2F_Azul_Texto_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower2F_Azul_Texto_4:
.string "Hey! Do not get confused!\p"
	.string "I'm not part of TEAM ROCKET, I'm just\n"
	.string "some kind of a collaborator that does\l"
	.string "some specific works and favors.\l"
	.string "Did you get it?$"

PokemonTower2F_Azul_Texto_5:
	.string "All I want is getting stronger, to\n"
	.string "someday be the KANTO'S CHAMPION.\p"
	.string "TEAM ROCKET could help me to discover\n"
	.string "many of the secrets that the region\l"
	.string "hides and provide me with technology,\l"
	.string "something that in this region seems\l"
	.string "like no one is willing to give.$"

PokemonTower2F_Azul_Texto_6:
	.string "That's the only way that I will prove\n"
	.string "once at all that I am better than RED.\p"
	.string "RED…{PAUSE 20}$"

PokemonTower2F_Azul_Texto_7:
	.string "My grandfather, OAK, has always had\n"
	.string "a preference for him, but I have a\l"
	.string "bad feeling about him.$"
	
PokemonTower2F_Azul_Texto_7.1:
	.string "No one can be so downright\n"
	.string "perfect, he seems to always\l"
	.string "have everything in order, considering\l"
	.string "all possible options in battle, and\l"
	.string "that silence…{PAUSE 30}\l"
	
PokemonTower2F_Azul_Texto_7.2:
	.string "That's the most irritating\n"
	.string "part, he doesn't even bother to engage\l"
	.string "in conversation; he arrives, defeats\l"
	.string "you, and leaves you there, as if you\l"
	.string "were just a mere formality for him,\l"
	.string "before continuing to his next\l"
	.string "destination.$"

PokemonTower2F_Azul_Texto_8:
	.string "FUJI: The channelers told me that the\n"
	.string "TEAM ROCKET is collecting CUBONES\l"
	.string "skulls, do you know something kid?$"

PokemonTower2F_Azul_Texto_9:
	.string "BLUE: I have heard that they are\n"
	.string "upstairs, on the fourth floor, old man.$"

PokemonTower2F_Azul_Texto_10:
	.string "FUJI: I hope you don't make the mistake\n"
	.string "to help your comrades, kid. I have\l"
	.string "nothing against you all, but I won't\l"
	.string "allow you to disturb the peace of this\l"
	.string "place.$"

PokemonTower2F_Azul_Texto_11:
	.string "BLUE: Cool, first part of the missión\n"
	.string "accomplished, {PLAYER}. FUJI ate the\l"
	.string "bait, all you need to do is make sure he\l"
	.string "stays here until PROTON arrives.$"

PokemonTower2F_Azul_Texto_12:
	.string "As for me, I'll stay here as GIOVANNI\n"
	.string "said, I will warn you if RED comes here.\l"
	.string "Do not worry, I will entertain for a\l"
	.string "while!$"

PokemonTower2F_Azul_Move_1:
emote_exclamation_mark
step_end

PokemonTower2F_Azul_Move_1.1:
walk_in_place_up
step_end

PokemonTower2F_Azul_Move_1.2:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_2:
walk_in_place_down
step_end

PokemonTower2F_Azul_Move_2.1:
face_right
step_end

PokemonTower2F_Azul_Move_3:
face_up
step_end

PokemonTower2F_Azul_Move_3.1:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4.1:
walk_in_place_right
step_end


PokemonTower2F_Azul_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
step_end

PokemonTower2F_Azul_Move_5.1:
face_down
step_end

PokemonTower2F_Azul_Move_6:
face_right
step_end

PokemonTower2F_Azul_Move_6.1:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_up
walk_slow_up
step_end

PokemonTower2F_Azul_Move_7:
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

PokemonTower2F_Azul_Move_7.1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end


PokemonTower2F_Azul_Move_8:
face_down
step_end

