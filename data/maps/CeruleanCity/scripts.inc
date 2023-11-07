CeruleanCity_MapScripts::
	.byte 0

CeruleanCity1::
lock     
faceplayer     
msgbox CeruleanCity_Text1, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text1:
.string "This is the CERULEAN CAVE. A very\n"
	.string "powerful POKÉMON resides here. Entry\l"
	.string "is prohibited for the entire population\l"
	.string "of KANTO, just the ELITE 4 has\l"
	.string "permission to enter here. Better you\l"
	.string "keep the distances!$"


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
.string "You are incredible, {PLAYER}! Did you\n"
	.string "see his face when you defeated his\l"
	.string "elite POKÉMON with DIG? I hope that\l"
	.string "our reward would be enough of your\l"
	.string "grace, I will stay here for a bit longer.\l"
	.string "Be careful, no one will take off me this\l"
	.string "TM DIG!$"


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
.string "A POKéMON can be made to hold an item.\l"
	.string "Some items can even be used by the\l"
	.string "holding POKéMON in battle.$"

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
	.string "CERULEAN CITY POKéMON GYM\n"
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
.string "(ANDRA is waiting for me in ROUTE 5\n"
	.string "DAYCARE to see what PETREL wants from\l"
	.string "us, I can't leave her now).$"


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
.string "Hey, ROCKET! Would you like to do a good\n"
	.string "deal? PETREL ordered me and another\l"
	.string "GRUNT a mission on CERULEAN CITY and\l"
	.string "we thought that would be good having\l"
	.string "some extra help, are you in?l"
	.string "...\l"
	.string "...\l"
	.string "Nice!\l"
	.string "Let's go!$"

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
.string "(My mission is going to MT.MOON to\n"
	.string "collect FOSSILS, not walking around\l"
	.string "CERULEAN CITY).$"


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
.string "(PETREL wants you on his office, where\n"
	.string "are you going?).$"

CeruleanCity_Nino::
lock
faceplayer
msgbox CeruleanCity_Nino_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nino_Texto_1:
.string "My mom said that men like you that have\n"
	.string "a R on your clothes are bad people.$"

CeruleanCity_Bayas::
lock
faceplayer
msgbox CeruleanCity_Bayas_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Bayas_Texto_1:
.string "Brave daring. Did you know this city has\n"
	.string "the biggest policial base in KANTO?.\l"
	.string "Come on… ROCKET, just give me an\l"
	.string "excuse to call them here.$"

CeruleanCity_Nina::
lock
faceplayer
msgbox CeruleanCity_Nina_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nina_Texto_1:
.string "My SLOWBRO is a lazy POKÉMON. A bit of\n"
	.string "curtness would work, you ROCKET\l"
	.string "probably are experts, aren't you.$"
