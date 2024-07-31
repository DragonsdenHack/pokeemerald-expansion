CherrygroveCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_OnTransition
	.byte 0

CherrygroveCity_OnTransition::
setflag FLAG_VISITED_CHERRYGROVE_CITY
end

CherrygroveCity1::
lock     
faceplayer     
msgbox CherrygroveCity_Text_1, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_1:
	.string "There's nothing for the media to buzz\n"
	.string "about on these routes, but there are\l"
	.string "some wise people living here you could\l"
	.string "learn a lot from.$"


CherrygroveCity2::
end



CherrygroveCity3::
end


CherrygroveCity4::
lock     
faceplayer     
msgbox CherrygroveCity_Text_4, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_4:
	.string "Some fishermen and swimmers venture\n"
	.string "beyond these waters. It's dangerous,\l"
	.string "but the catch you can get is better.$"


CherrygroveCity5::
end


CherrygroveCity6::
lock     
faceplayer     
msgbox CherrygroveCity_Text_6, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_6:
	.string "If you SURF further west, you'll reach\n"
	.string "the ROUTE south of VIOLET CITY, but to\l"
	.string "do that, you must first master the\l"
	.string "currents.$"


CherrygroveCity7::
lock
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1, MSGBOX_DEFAULT
release
end


CherrygroveCity8::
lock     
faceplayer     
msgbox CherrygroveCity_Text_8, MSGBOX_DEFAULT
release     
end

CherrygroveCity_Text_8:
	.string "When I was a kid, I was a brilliant\n"
	.string "TRAINER! This is my advice: Catch a lot\l"
	.string "of POKÉMON! And treat them with a lot\l"
	.string "of love!$"



CherrygroveCityDocumento_100::
msgbox CherrygroveCityDocumento_Text_100, MSGBOX_SIGN   
end

CherrygroveCityDocumento_Text_100:
.string "CHERRYGROVE CITY\n"
	.string "The city of the pretty\l"
	.string "and vibrant flowers.$"

CherrygroveCity_Corriente::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Corriente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_2
waitmovement 0x0
release
end

CherrygroveCity_Corriente_Texto_1:
.string "(The currents are\n"
	.string "too strong).$"

CherrygroveCity_Corriente_Move_1:
walk_in_place_up
step_end

CherrygroveCity_Corriente_Move_2:
walk_slow_down
step_end



CherrygroveCity_Corriente_Arriba::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Corriente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Corriente_Move_2.1
waitmovement 0x0
release
end

CherrygroveCity_Corriente_Move_2.1:
walk_slow_up
step_end

CherrygroveCity_Entrenamiento_Pegaso::
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_1
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
delay 30
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_2
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_EFFECTIVE
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_RAZOR_WIND
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TAKE_DOWN
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_WING_ATTACK
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TWISTER
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 3, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 2, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_9
applymovement 5, CherrygroveCity_Entrenamiento_Pegaso_Move_9
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_11
applymovement 5, CherrygroveCity_Entrenamiento_Pegaso_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_13
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_10 MSGBOX_DEFAULT
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_14
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_13
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_7
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
applymovement 7, CherrygroveCity_Entrenamiento_Pegaso_Move_12
waitmovement 0x0
msgbox CherrygroveCity_Entrenamiento_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
fadescreen 1
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
removeobject 7
fadescreen 0
setvar VAR_UNUSED_0x40FD, 2
release
end

CherrygroveCity_Entrenamiento_Pegaso_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_2:
walk_fast_left
walk_fast_left
walk_in_place_right
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_3:
jump_special_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_4:
jump_special_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_5:
slide_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_6:
slide_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_7:
face_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_8:
face_up
step_end


CherrygroveCity_Entrenamiento_Pegaso_Move_9:
emote_exclamation_mark
face_left
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_10:
walk_left
walk_up
walk_up
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_11:
walk_left
walk_down
walk_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_12:
walk_in_place_down
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_13:
face_right
step_end

CherrygroveCity_Entrenamiento_Pegaso_Move_14:
face_left
step_end

CherrygroveCity_Entrenamiento_Pegaso_Texto_1:
	.string "FALKNER: Go all out, MOLTRES! That\n"
	.string "PIDGEOT's challenging your LEGENDARY\l"
	.string "status, so show it all your power!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_2:
.string "Trees!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_3:
	.string "FALKNER: Good… Well held. That\n"
	.string "HURRICANE just hits harder and harder.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_4:
	.string "{PLAYER}! You again! I see you're not\n"
	.string "satisfied with the typical tourist\l"
	.string "traps of JOHTO. You want to immerse\l"
	.string "yourself in and learn about every\l"
	.string "corner of this region. That's good.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_5:
	.string "FALKNER: Let me introduce you to\n"
	.string "HORACE. He's my most advanced student,\l"
	.string "by far. Usually, we come here for\l"
	.string "training. This small islet is perfect for\l"
	.string "our birds to spread their wings with\l"
	.string "complete freedom.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_6:
	.string "Today, we'd put his PIDGEOT through its\n"
	.string "paces. Yes, it's fourth in the hierarchy\l"
	.string "of KANTO birds, tailing the likes of\l"
	.string "ARTICUNO, ZAPDOS, and MOLTRES.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_7:
	.string "Did you know its MEGA EVOLUTION\n"
	.string "reaches a BASE of 579? Just one point\l"
	.string "short of the 580 the LEGENDARY BIRDs\l"
	.string "share.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_8:
	.string "Some take that difference as proof of\n"
	.string "the genetic limits between species-that\l"
	.string "a normal POKÉMON will never match the\l"
	.string "OLYMPUS of the LEGENDARIES. But I\l"
	.string "think it's just a coincidence.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_9:
	.string "HORACE has taken care of his PIDGEOT\n"
	.string "since he can remember. From childhood\l"
	.string "nursing this once-frail PIDGEY, he kept\l"
	.string "his belief in it-and now stands the same,\l"
	.string "mighty PIDGEOT before you. None of it's\l"
	.string "invisible, {PLAYER}. It carries\l"
	.string "through in battle.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_10:
.string "PIDGEOT: Bi bibii!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_11:
	.string "HORACE's PIDGEOT can handle itself\n"
	.string "against any well-trained LEGENDARY.\l"
	.string "You saw it for yourself-it's combined the\l"
	.string "best offensive and defensive\l"
	.string "attributes a PIDGEOT could have.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_12:
	.string "A POKÉMON capable of MEGA EVOLUTION is\n"
	.string "fearsome to any other. Even in my own\l"
	.string "team, RAPIDASH is the only one who\l"
	.string "could go toe-to-toe with it. What the\l"
	.string "SAGE MASTER of SPROUT TOWER has\l"
	.string "achieved in a BELLSPROUT, HORACE has\l"
	.string "done as well through a PIDGEOT.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_13:
	.string "What I mean is we know so little of this\n"
	.string "world, {PLAYER}. Despite our travels,\l"
	.string "there's always something to catch our\l"
	.string "eyes, and every POKÉMON has its place\l"
	.string "if you really believe in it.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_14:
	.string "This time for real, I'm putting VIOLET\n"
	.string "CITY and JOHTO behind me to embark on a\l"
	.string "whole new journey.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_15:
	.string "HORACE will be pleased to train with\n"
	.string "you, {PLAYER}. You won't find a better\l"
	.string "birdkeeper than him, neither in KANTO\l"
	.string "nor in JOHTO. I'm sure he can teach you\l"
	.string "something new.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_16:
.string "MOLTRES!\n"
	.string "FLY!$"


Cherrygrove_Combate_Pidgeot_Perfecto::
lock 
compare VAR_UNUSED_0x40FD, 3
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_5
compare VAR_UNUSED_0x40FD, 2
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_2
compare VAR_UNUSED_0x40FD, 1
goto_if_gt Cherrygrove_Combate_Pidgeot_Perfecto_3
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1 MSGBOX_DEFAULT
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_2::
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Cherrygrove_Combate_Pidgeot_Perfecto_No
goto Cherrygrove_Combate_Pidgeot_Perfecto_4


Cherrygrove_Combate_Pidgeot_Perfecto_3::
faceplayer
setvar VAR_UNUSED_0x40FD, 3
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_4 MSGBOX_AUTOCLOSE
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Cherrygrove_Combate_Pidgeot_Perfecto_No
goto Cherrygrove_Combate_Pidgeot_Perfecto_4

Cherrygrove_Combate_Pidgeot_Perfecto_4::
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 2, Cherrygrove_Combate_Pidgeot_Perfecto_Move_1
waitmovement 0x0
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PEGASO_DISCIPULO, Cherrygrove_Combate_Pidgeot_Perfecto_Texto_7
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_PIDGEOTITE
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FD, 4
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_5::
faceplayer
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2 MSGBOX_AUTOCLOSE
release
end


Cherrygrove_Combate_Pidgeot_Perfecto_No::
msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_10 MSGBOX_AUTOCLOSE
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1.1:
.string "You obtained a PIDGEOTITE\n"
	.string "from the BIRD KEEPER!$"



msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2:
	.string "It's said that many birdkeepers in\n"
	.string "KANTO tend to roam ROUTEs 13 and 14,\l"
	.string "either battling or basking with their\l"
	.string "birds. I'd like to pay that place a visit\l"
	.string "someday.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_3:
.string "Would you like to fight against me now?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_4:
	.string "So you were the only one to beat\n"
	.string "FALKNER in a serious six-on-six match.\l"
	.string "It'd be a real honor for me to battle\l"
	.string "you.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_5:
.string "Do you agree?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_6:
	.string "That's what I expected. My birds are\n"
	.string "ready to fly. I won't make it easy for\l"
	.string "you!$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_7:
.string "My PIDGEOT's impetus faded…$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_8:
	.string "I'm very impressed. FALKNER wasn't\n"
	.string "exaggerating about you. I want to give\l"
	.string "you this.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_9:
	.string "Few know of PIDGEOT's real potential,\n"
	.string "and fewer yet have the necessary item\l"
	.string "to achieve it-the PIDGEOTITE. Only\l"
	.string "FALKNER and I have one in the entire\l"
	.string "region.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_10:
	.string "It's okay. I'll be training here if you\n"
	.string "change your mind.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Move_1:
face_player
step_end
