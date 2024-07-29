CeruleanCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition::
setflag FLAG_VISITED_CERULEAN_CITY
end

CeruleanCity1::
lock     
faceplayer     
msgbox CeruleanCity_Text1, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text1:
	.string "This is CERULEAN CAVE. A dangerous\n"
	.string "POKÉMON resides here. Entry's\l"
	.string "prohibited for the entire population of\l"
	.string "KANTO. Only the ELITE FOUR has\l"
	.string "permission to enter. You'd better keep\l"
	.string "your distance!$"


CeruleanCity2::
end


CeruleanCity3::
end


CeruleanCity4::
lock     
faceplayer     
msgbox CeruleanCity_Text4, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text4:
	.string "You're incredible, {PLAYER}! Did you\n"
	.string "see his face when you curbstomped his\l"
	.string "elite POKÉMON and their DIG? I hope\l"
	.string "this reward suffices your grace. I'll\l"
	.string "stick around a bit longer myself.\l"
	.string "Careful now. No one's taking this TM DIG\l"
	.string "off my hands!$"


CeruleanCity5::
lock     
faceplayer     
msgbox CeruleanCity_Text5, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text5:
.string "You are a ROCKET? Thief, defraud,\n"
	.string "extort and lie. It's a tough life, isn't\l"
	.string "it?$"


CeruleanCity6::
end


CeruleanCity7::
end


CeruleanCity8::
lock     
faceplayer     
msgbox CeruleanCity_Text8, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text8:
.string "So you want all POKÉMON and all the\n"
	.string "money of the world for yourself?\l"
	.string "Interesting.$"


CeruleanCity9::
lock     
faceplayer     
msgbox CeruleanCity_Text9, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text9:
.string "I want a bright red bicycle. I'll keep it\n"
	.string "at home, so it won't get dirty.$"



CeruleanCityDocumento_100::
msgbox CeruleanCityDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_100:
.string "A new and shiny bicycle!$"


CeruleanCityDocumento_101::
msgbox CeruleanCityDocumento_Text_101, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_101:
.string "Grass and caves handled easily!\n"
	.string "BIKE SHOP$"



CeruleanCityDocumento_102::
lock
msgbox CeruleanCityDocumento_Text_102, MSGBOX_SIGN 
release  
end

CeruleanCityDocumento_Text_102:
	.string "TRAINER TIPS\n"
.string "A POKÉMON can be made to hold an item.\l"
	.string "Some items can even be used by the\l"
	.string "holding POKÉMON in battle.$"

CeruleanCityDocumento_103::
msgbox CeruleanCityDocumento_Text_103, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_103:
	.string "CERULEAN CITY\n"
	.string "A Mysterious, Blue Aura Surrounds It.$"



CeruleanCityDocumento_104::
msgbox CeruleanCityDocumento_Text_104, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_104:
	.string "CERULEAN CITY POKÉMON GYM\n"
	.string "LEADER: MISTY\l"
	.string "The Tomboyish Mermaid!$"

CeruleanCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove1
waitmovement 0x0
msgbox CeruleanCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove2
waitmovement 0x0
release     
end

CeruleanCity_Text_Izq:     
	.string "(ANDRA's waiting for me in the DAYCARE\n"
	.string "on ROUTE 5 to see what PETREL needs.\l"
	.string "Can't be abandoning her now.)$"


CeruleanCityIzqMove1:
walk_in_place_slow_left
step_end

CeruleanCityIzqMove2:
walk_left
step_end


CeruleanCity_Rocket_Excavar::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Rocket_Excavar_move1
applymovement 4, CeruleanCity_Rocket_Excavar_move2
waitmovement 0
playse SE_PIN
applymovement 4, CeruleanCity_Rocket_Excavar_move3
msgbox CeruleanCity_Rocket_Excavar_Text_1, MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_CERULEAN_CITY_HOUSE2, 5, 5
release
end



CeruleanCity_Rocket_Excavar_Text_1:
	.string "Hey, ROCKET! You want in on a good deal?\n"
	.string "PETREL sent me and another GRUNT on a\l"
	.string "mission in CERULEAN CITY, and we\l"
	.string "thought an extra hand would do some\l"
	.string "good. You in?$"

CeruleanCity_Rocket_Excavar_move1:
walk_in_place_up
step_end

CeruleanCity_Rocket_Excavar_move2:
walk_slow_right
walk_slow_left
face_down
step_end

CeruleanCity_Rocket_Excavar_move3:
emote_exclamation_mark
walk_down
step_end


CeruleanCityAbajo::     
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityAbajoMove1
waitmovement 0
msgbox CeruleanCity_Text_Abajo, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityAbajoMove2
waitmovement 0
release     
end

CeruleanCity_Text_Abajo:     
	.string "(My mission's going to MT. MOON to\n"
	.string "collect FOSSILs, not roaming CERULEAN\l"
	.string "CITY.)$"


CeruleanCityAbajoMove1:
walk_in_place_slow_down
step_end

CeruleanCityAbajoMove2:
walk_down
step_end

CeruleanCityAbajo_2::     
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityAbajoMove1
waitmovement 0
msgbox CeruleanCity_Text_Abajo_2, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityAbajoMove2
waitmovement 0
release     
end

CeruleanCity_Text_Abajo_2:
	.string "(PETREL wants me in his office.\n"
	.string "Where exactly am I off to?)$"

CeruleanCity_Nino::
lock
faceplayer
msgbox CeruleanCity_Nino_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nino_Texto_1:
	.string "My momma said men like you with an\n"
	.string "R on your clothes are baddies.$"

CeruleanCity_Bayas::
lock
faceplayer
msgbox CeruleanCity_Bayas_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Bayas_Texto_1:
	.string "Bold of you. Did you know this city's got\n"
	.string "the biggest police station in KANTO?\l"
	.string "C'mon… Just land me the excuse to phone\l"
	.string "over the boys, ROCKET.$"

CeruleanCity_Nina::
lock
faceplayer
msgbox CeruleanCity_Nina_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nina_Texto_1:
	.string "My SLOWBRO's pretty lazy. I'd bet some\n"
	.string "discipline would shape it up, but I don't\l"
	.string "suppose you ROCKETs would have any\l"
	.string "experience with that, now would you?$"
