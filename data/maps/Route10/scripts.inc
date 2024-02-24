Route10_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0
	
Route10_OnTransition::
setflag FLAG_VISITED_ROUTE_10_FLY
end

Route10_1::
end



Route10_2::
end


Route10_3::
end


Route10_4::
end


Route10_5::
lock         
msgbox Route5_Text_5, MSGBOX_SIGN
release     
end

Route5_Text_5:
	.string "Do you even know what you're saying?\n"
	.string "There's no KANGASKHAN in this place! Do\l"
	.string "you realize what that would mean? The\l"
	.string "SAFARI ZONE would close forever, and\l"
	.string "not only that, people would start\l"
	.string "investigating where it came from; a\l"
	.string "POKÉMON like that doesn't just appear\l"
	.string "out of nowhere!$"



Route10_6::
lock          
msgbox Route5_Text_6, MSGBOX_SIGN
release     
end

Route5_Text_6:
	.string "It's true! I saw a KANGASKHAN inside!$"


Route10_7::
lock     
faceplayer     
msgbox Route5_Text_7, MSGBOX_DEFAULT
release     
end

Route5_Text_7:
	.string "The POWER PLANT has been considered\n"
	.string "our region's patrimony, since now it will\l"
	.string "be protected by police and won't be\l"
	.string "opened for exploration.Better you\l"
	.string "don't try any foolishness or justice\l"
	.string "will pursue you.$"



Route10_8::
lock     
faceplayer     
msgbox Route5_Text_8, MSGBOX_DEFAULT
release     
end

Route5_Text_8:
	.string "The POWER PLANT has been considered\n"
	.string "our region's patrimony, since now it will\l"
	.string "be protected by police and won't be\l"
	.string "opened for exploration.Better you\l"
	.string "don't try any foolishness or justice\l"
	.string "will pursue you.$"


Route10_9::
end


Route10_10::
end


Route10_11::
end


Route10_12::
end


Route10_13::
end



Route10_EventScript_Chica::
	trainerbattle_single TRAINER_MATTHEW, Route10_Text_ChicaIntro, Route10_Text_ChicaDefeated
	msgbox Route10_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker::
	trainerbattle_single TRAINER_BARRY, Route10_Text_HikerIntro, Route10_Text_HikerDefeated
	msgbox Route10_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Necio::
	trainerbattle_single TRAINER_DEAN, Route10_Text_NecioIntro, Route10_Text_NecioDefeated
	msgbox Route10_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker2::
	trainerbattle_single TRAINER_DAISUKE, Route10_Text_Hiker2Intro, Route10_Text_Hiker2Defeated
	msgbox Route10_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker3::
	trainerbattle_single TRAINER_YUJI, Route10_Text_Hiker3Intro, Route10_Text_Hiker3Defeated
	msgbox Route10_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Chica2::
	trainerbattle_single TRAINER_DAVID, Route10_Text_Chica2Intro, Route10_Text_Chica2Defeated
	msgbox Route10_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10Documento_100::
msgbox Route10Documento_Text_100, MSGBOX_SIGN   
end

Route10Documento_Text_100:
.string "ROCK TUNNEL\n"
    .string "Detour to LAVENDER TOWN$"



Route10Documento_101::
msgbox Route10Documento_Text_101, MSGBOX_SIGN   
end

Route10Documento_Text_101:
.string "POWER PLANT$"



Route10Documento_102::
msgbox Route10Documento_Text_102, MSGBOX_SIGN   
end

Route10Documento_Text_102:
.string "ROCK TUNNEL$"

Route10_Combate_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
playse 559
msgbox Route10_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_4
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_5
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox Route10_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Route10_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0
playse 559
msgbox Route10_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_3, Route10_Combate_Andra_Texto_9
msgbox Route10_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_7
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_7
fadescreen 1
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 34
release
end

Route10_Combate_Andra_Texto_1:
	.string "ANDRA: Hey {PLAYER}! Taking\n"
	.string "advantage of your well-deserved free\l"
	.string "time after an excellent job?$"

Route10_Combate_Andra_Texto_2:
	.string "Apparently, further at the south of\n"
	.string "this route, across ROCK TUNNEL, you will\l"
	.string "find LAVENDER TOWN, famous for its vast\l"
	.string "cemetery and supposed evil spirits,\l"
	.string "could the legend be true?$"

Route10_Combate_Andra_Texto_3:
	.string "The fact is that KANTO is more\n"
	.string "interesting than I thought, not going\l"
	.string "further than this, look at that place.$"

Route10_Combate_Andra_Texto_4:
	.string "ANDRA: It is called POWER PLANT, it is\n"
	.string "full of ELECTRIC POKÉMON, I've been\l"
	.string "training there for a good while until\l"
	.string "recently, it is a place completely\l"
	.string "abandoned , with VOLTORBS that\l"
	.string "explodes in your face, steel containers\l"
	.string "that seems radioactive, MAGNEMITES and\l"
	.string "MAGNETON walking around…, it appears\l"
	.string "that certain unethical practices were\l"
	.string "carried out in this place in the past,\l"
	.string "who knows why, anyways I wasn't able to\l"
	.string "go deeper. Police arrived recently with\l"
	.string "an official protection order, that\l"
	.string "keeps safe the PLANT signed by the\l"
	.string "LEAGUE COMMITTEE , according to them\l"
	.string "-the goal is to safeguard the region's\l"
	.string "most iconic locations and species\l"
	.string "diversity-. It is funny, for sure they\l"
	.string "will let any 10 year old kid walk around\l"
	.string "for this place.$"

Route10_Combate_Andra_Texto_5:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route10_Combate_Andra_Texto_6:
	.string "ANDRA: The thing is, that place hides\n"
	.string "something, I've sensed a very powerful\l"
	.string "presence inside, a being capable of\l"
	.string "generating almost infinite energy,\l"
	.string "could there be any ELECTRIC POKÉMON\l"
	.string "with those characteristics? If only I\l"
	.string "could have gone a bit further…$"

Route10_Combate_Andra_Texto_7:
	.string "We might suggest a raid on the POWER\n"
	.string "PLANT to GIOVANNI, in due time of\l"
	.string "course, first we need to prove our\l"
	.string "worth to him, but a POKÉMON with that\l"
	.string "intimidating presence must be very\l"
	.string "strong, maybe our superiors in KANTO\l"
	.string "know more.$"

Route10_Combate_Andra_Texto_8:
	.string "Now that I think about it, it has been a\n"
	.string "while since the last time that we\l"
	.string "battled, there is no doubt that you\l"
	.string "have surpassed any expectation\l"
	.string "defeating our superior at MT.MOON, also\l"
	.string "BILL and then, to a skilled CAPTAIN like\l"
	.string "the one on the SS. ANNE, but…{PAUSE 20} do you\l"
	.string "know what? I haven't been left behind,\l"
	.string "{PLAYER}, I told you I will be the\l"
	.string "strongest GRUNT in the entire\l"
	.string "organization, and I keep it, we're now\l"
	.string "HIGH-RANKING RECRUITS, the thing is;\l"
	.string "who is the best HIGH RANK GRUNT\l"
	.string "TRAINER?$"

Route10_Combate_Andra_Texto_9:
	.string "So it is not enough yet, hehehe, thank\n"
	.string "you for raising the bar.$"

Route10_Combate_Andra_Texto_10:
	.string "ANDRA: I would not like having you as an\n"
	.string "enemy {PLAYER}, I still can't\l"
	.string "understand how that mysterious trainer\l"
	.string "red dressed could defeat you at\l"
	.string "MT.MOON, he must have been a really\l"
	.string "prodigious battling.$"

Route10_Combate_Andra_Texto_11:
	.string "Anyway, it doesn't matter, that kid\n"
	.string "doesn't know who is dealing with, now we\l"
	.string "are moving to CELADON, the central base\l"
	.string "of TEAM ROCKET, we will be finally part\l"
	.string "of the TEAM ROCKET elite. That poor\l"
	.string "kind will regret crossing us on MT.MOON.$"

Route10_Combate_Andra_Texto_12:
	.string "ANDRA: Bah, I will be back to the\n"
	.string "headquarter {PLAYER}, the teleport\l"
	.string "machine should be almost ready, get\l"
	.string "ready and do not be later: CELADON CITY\l"
	.string "IS WAITING!$"

Route10_Combate_Andra_move_1:
walk_in_place_left
step_end

Route10_Combate_Andra_move_2:
emote_exclamation_mark
step_end

Route10_Combate_Andra_move_3:
walk_in_place_right
step_end

Route10_Combate_Andra_move_4:
walk_in_place_down
step_end

Route10_Combate_Andra_move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Route10_Combate_Andra_move_6:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

Route10_Combate_Andra_move_7:
walk_in_place_up
walk_in_place_right
step_end

Route10_Combate_Andra_move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route10Documento_Andra_Parada::
msgbox Route10Documento_Andra_Parada_text_1, MSGBOX_SIGN   
end

Route10Documento_Andra_Parada_text_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route10_Entrenadores_Guays::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Route10_Entrenadores_Guays_Move_1
waitmovement 0x0
msgbox Route10_Entrenadores_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 15, Route10_Entrenadores_Guays_Move_2
applymovement 16, Route10_Entrenadores_Guays_Move_2
waitmovement 0x0
removeobject 15
removeobject 16
setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
setvar VAR_UNUSED_0x40F7, 40
release
end

Route10_Entrenadores_Guays_Texto_1:
	.string "Apparently there are already people\n"
	.string "who are exploring the cave in search of\l"
	.string "that KANGASKHAN, that rumor has spread\l"
	.string "quickly, let's hurry up before someone\l"
	.string "else catches it!$"

Route10_Entrenadores_Guays_Move_1:
walk_in_place_up
step_end

Route10_Entrenadores_Guays_Move_2:
walk_up
walk_up
walk_up
step_end
