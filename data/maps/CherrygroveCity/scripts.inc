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
	.string "Despite there being nothing\n"
	.string "interesting at the media level on these\l"
	.string "routes, there are very wise people\l"
	.string "living here, you can learn a lot from\l"
	.string "them.$"


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
	.string "If you keep doing SURF, further to the\n"
	.string "west you'll get to the southern ROUTE of\l"
	.string "VIOLET CITY, but to do that, first you\l"
	.string "must master the currents.$"


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
	.string "FALKNER: Go with all out, MOLTRES, that\n"
	.string "PIDGEOT is questioning your LEGENDARY\l"
	.string "status. Show all your power!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_2:
.string "Trees!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_3:
	.string "FALKNER: Good…{PAUSE 20} Well held, that\n"
	.string "HURRICANE hits harder and harder.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_4:
.string "{PLAYER}!\n"
	.string "You again!\l"
	.string "I see that you're not satisfied with\l"
	.string "just visiting the typical cities and\l"
	.string "places of JOHTO, you want to immerse\l"
	.string "yourself and learn about every corner\l"
	.string "of this region, that's good.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_5:
	.string "FALKNER: Let me introduce you to\n"
	.string "HORACE, he's my most advanced student,\l"
	.string "by far. Usually, we come here for\l"
	.string "training; this small islet is perfect for\l"
	.string "our birds to spread their wings with\l"
	.string "complete freedom.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_6:
	.string "Today we were putting his PIDGEOT to\n"
	.string "the test. Yes, it's the fourth bird in\l"
	.string "discord, behind ARTICUNO, ZAPDOS and\l"
	.string "MOLTRES in the hierarchy of KANTO\l"
	.string "birds.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_7:
	.string "Did you know its MEGA EVOLUTION\n"
	.string "reaches the 579 BASE points? Only 1\l"
	.string "point less than the 580 that the\l"
	.string "LEGENDARY BIRDS have.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_8:
	.string "Some people say it's a sign, and proof\n"
	.string "that the genetic differences between\l"
	.string "species are unavoidable, and a normal\l"
	.string "pokémon will never be able to reach the\l"
	.string "Olympus of the LEGENDARIES, I think it's\l"
	.string "just a coincidence.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_9:
	.string "HORACE has taken care of his PIDGEOT\n"
	.string "since he can remember. Since he was a\l"
	.string "child and this imponent PIDGEOT that\l"
	.string "you are seeing right now was nothing\l"
	.string "more than a weak and fragile PIDGEY, he\l"
	.string "believed in it. All those things aren't\l"
	.string "invisible, {PLAYER}, then they're\l"
	.string "reflected in the battlefield.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_10:
.string "PIDGEOT: Bi bibii!$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_11:
	.string "HORACE's PIDGEOT can face fairly\n"
	.string "against any well-trained LEGENDARY,\l"
	.string "you just saw it, and combines the best\l"
	.string "offensive and defensive attributes\l"
	.string "that a PIDGEOT could have.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_12:
	.string "Being a MEGA EVOLUTION is a powerful\n"
	.string "POKÉMON to scary any other, RAPIDASH\l"
	.string "is the only one in my team that could\l"
	.string "face it in a 1vs1, HORACE has achieved\l"
	.string "that the SAGE MASTER of SPROUT TOWER\l"
	.string "achieved with his small BELLSPROUT, but\l"
	.string "in a PIDGEOT instead.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_13:
	.string "What I mean is that we just know a few\n"
	.string "things about this world {PLAYER},\l"
	.string "despite all the places we have visited,\l"
	.string "there is always a moment to be\l"
	.string "surprised, and every POKÉMON has its\l"
	.string "place if you really believe in it.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_14:
	.string "Now for real, I leave VIOLET CITY and\n"
	.string "JOHTO, a new journey begins for me.$"

CherrygroveCity_Entrenamiento_Pegaso_Texto_15:
	.string "HORACE will be pleased to train with you\n"
	.string "{PLAYER}, you won't find a better\l"
	.string "birdkeeper than him, neither on KANTO\l"
	.string "or JOHTO, I'm sure he can teach you\l"
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
.string "¡Obtuviste PIDGEOTITA de manos de\n"
	.string "ENTRENADOR!$"



msgbox Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_1:
.string "...\n"
	.string "...$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_2:
	.string "It is said that on ROUTE 13 and 14 of\n"
	.string "KANTO a lot of bird keepers in the\l"
	.string "region walk around there to fight and\l"
	.string "enjoy their birds, I would like to visit\l"
	.string "that place someday.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_3:
.string "Would you like to fight against me now?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_4:
	.string "So you were the only one able to defeat\n"
	.string "FALKNER in a serious 6vs6 match. It\l"
	.string "would be a real honor for me to have a\l"
	.string "battle with you.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_5:
.string "Do you agree?$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_6:
	.string "That is what I expected, my birds are\n"
	.string "ready to fly. I won't make it easy for\l"
	.string "you!$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_7:
.string "My PIDGEOT's impetus faded…$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_8:
	.string "I'm very impressed, FALKNER was not\n"
	.string "exaggerating about you, I want to give\l"
	.string "you this.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_9:
	.string "Just a few know the real PIDGEOT's\n"
	.string "potential, even less the ones who have\l"
	.string "the necessary item to activate it, with\l"
	.string "the PIDGEOTITE you would, just FALKNER\l"
	.string "and me have one in the entire region.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Texto_10:
	.string "It is okay, I will keep training here if\n"
	.string "you change your mind.$"

Cherrygrove_Combate_Pidgeot_Perfecto_Move_1:
face_player
step_end
