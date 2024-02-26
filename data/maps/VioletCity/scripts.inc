VioletCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_OnTransition
	.byte 0

VioletCity_OnTransition::
setflag FLAG_VISITED_VIOLET_CITY
end

VioletCity1::
end


VioletCity2::
lock     
faceplayer     
msgbox VioletCity_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_Text_2:
	.string "This temple was erected by my\n"
	.string "ancestors 1000 years ago to honor the\l"
	.string "resilience of BELLSPROUT. The current\l"
	.string "ELDER of the SPROUT TOWER still\l"
	.string "possesses the last specimen of that\l"
	.string "sacred BELLSPROUT lineage. Yes, his\l"
	.string "BELLSPROUT is the strongest in the\l"
	.string "world, and only those deserving will\l"
	.string "witness something that many believe to\l"
	.string "be impossible.$"



VioletCity3::
lock     
faceplayer     
msgbox VioletCity_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_Text_3:
	.string "A few days ago, I enjoyed a refreshing\n"
	.string "swim in the lake surrounding our pagoda.\l"
	.string "They say it's prohibited, but they have\l"
	.string "no idea how wonderful it feels to take a\l"
	.string "bath with such a scenic backdrop.$"


VioletCity4::
lock     
faceplayer     
msgbox VioletCity_Text_4, MSGBOX_DEFAULT
release     
end

VioletCity_Text_4:
	.string "FALKNER's father is super cool! He has\n"
	.string "some POKÉMON I've never seen before, I\l"
	.string "think some of them are even\l"
	.string "LEGENDARIES from other regions!$"


VioletCity5::
lock     
faceplayer     
msgbox VioletCity_Text_5, MSGBOX_DEFAULT
release     
end

VioletCity_Text_5:
	.string "You're not from around here, are you? I\n"
	.string "recommend visiting the Trainer School.\l"
	.string "Our SPROUT TOWER is also very famous.$"


VioletCity6::
lock     
faceplayer     
msgbox VioletCity_Text_6, MSGBOX_DEFAULT
release     
end

VioletCity_Text_6:
	.string "These flowers only grow in VIOLET CITY,\n"
	.string "contributing to the characteristic\l"
	.string "nostalgic fragrance that pervades the\l"
	.string "area.$"


VioletCity7::
end


VioletCity8::
end


VioletCity9::
lock     
faceplayer     
msgbox VioletCity_Text_9, MSGBOX_DEFAULT
release     
end

VioletCity_Text_9:
	.string "A POKÉMON under a TRAINER's care is far\n"
	.string "stronger than its wild counterpart of\l"
	.string "the same species. This serves as\l"
	.string "evidence that the harmony between\l"
	.string "humans and POKÉMON is beneficial.$"


VioletCity10::
lock     
faceplayer     
msgbox VioletCity_Text_18, MSGBOX_DEFAULT
release     
end

VioletCity_Text_18:
	.string "FALKNER senior plans to hand over the\n"
	.string "GYM to his son, also named FALKNER. I\l"
	.string "hope he does a good job when that\l"
	.string "occurs.$"


VioletCity11::
end


VioletCity12::
end



VioletCityDocumento_100::
msgbox VioletCityDocumento_Text_100, MSGBOX_SIGN   
end

VioletCityDocumento_Text_100:
.string "VIOLET CITY\n"
	.string "The City of Nostalgic Scents.$"



VioletCityDocumento_101::
msgbox VioletCityDocumento_Text_101, MSGBOX_SIGN   
end

VioletCityDocumento_Text_101:
.string "VIOLET CITY GYM\n"
	.string "LEADER: FALKNER\l"
	.string "A genius of high flights\l"
	.string "and 1001 journeys!$"



VioletCity_Chicos_Escuela::
clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, VioletCity_Chicos_Escuela_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VioletCity_Chicos_Escuela_Move_2
waitmovement 0x0
applymovement 7, VioletCity_Chicos_Escuela_Move_3
waitmovement 0x0
msgbox VioletCity_Chicos_Escuela_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, VioletCity_Chicos_Escuela_Move_4
waitmovement 0x0
msgbox VioletCity_Chicos_Escuela_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, VioletCity_Chicos_Escuela_Move_5
applymovement 8, VioletCity_Chicos_Escuela_Move_5
waitmovement 0x0
playse SE_DOOR
delay 20
playse SE_EXIT
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
removeobject 7
removeobject 8
setvar VAR_UNUSED_0x40F7, 120
release
end

VioletCity_Chicos_Escuela_Texto_1:
	.string "Come on, hurry up! FALKNER's dad is\n"
	.string "going to teach a special class about\l"
	.string "FLYING TYPE POKÉMON.$"

VioletCity_Chicos_Escuela_Texto_2:
	.string "We can't miss this opportunity, who\n"
	.string "knows how much longer he'll be in VIOLET\l"
	.string "CITY before embarking on a new journey!$"

VioletCity_Chicos_Escuela_Move_1:
walk_in_place_up
step_end

VioletCity_Chicos_Escuela_Move_2:
emote_exclamation_mark
step_end

VioletCity_Chicos_Escuela_Move_3:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
face_left
step_end

VioletCity_Chicos_Escuela_Move_4:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

VioletCity_Chicos_Escuela_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end
