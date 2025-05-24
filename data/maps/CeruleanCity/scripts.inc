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
.string "FAHRRADLADEN\p"
	.string "Fahre leicht und schnell mit\n"
	.string "dem Rad durch Höhlen und Gras!$"



CeruleanCityDocumento_102::
lock
msgbox CeruleanCityDocumento_Text_102, MSGBOX_SIGN 
release  
end

CeruleanCityDocumento_Text_102:
.string "TIPPS FÜR TRAINER\p"
	.string "Einem POKéMON kann ein Item zum Halten\n"
	.string "gegeben werden. Manche Items können\l"
	.string "sogar vom POKéMON im Kampf eingesetzt\l"
	.string "werden.$"

CeruleanCityDocumento_103::
msgbox CeruleanCityDocumento_Text_103, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_103:
	.string "AZURIA CITY\p"
	.string "Eine mysteriöse blaue Aura\n"
	.string "umgibt die Stadt!$"


CeruleanCityDocumento_104::
msgbox CeruleanCityDocumento_Text_104, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_104:
	.string "AZURIA CITY POKéMON-ARENA\n"
	.string "ARENALEITERIN: MISTY\l"
	.string "Die Burschikose Meerjungfrau!$"

CeruleanCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove1
waitmovement 0x0
msgbox CeruleanCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove2
waitmovement 0x0
release     
end

CeruleanCity_Text_Izq:     
	.string "-ANDRA's waiting for me in the DAYCARE\n"
	.string "on ROUTE 5 to see what PETREL needs.\p"
	.string "Can't be abandoning her now.-$"


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
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Rocket_Excavar_move1
waitmovement 0x0
delay 10
msgbox CeruleanCity_Rocket_Excavar_Text_1.1, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_Rocket_Excavar_Text_1.2, MSGBOX_AUTOCLOSE
delay 10
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_CERULEAN_CITY_HOUSE2, 5, 5
release
end



CeruleanCity_Rocket_Excavar_Text_1:
	.string "Hey ROCKET! Bock ein bisschen Kasse zu\n"
	.string "machen? LAMBDA hat mir und 'nem\l"
	.string "anderen RÜPEL eine Mission in AZURIA\l"
	.string "CITY gegeben und wir dachten, ein\l"
	.string "bisschen zusätzliche Hilfe könnte\l"
	.string "nicht schaden. Biste dabei?$"

CeruleanCity_Rocket_Excavar_Text_1.1:
	.string "…\n"
	.string "…$"

CeruleanCity_Rocket_Excavar_Text_1.2:
	.string "Geil!\p"
	.string "Los geht's!$"

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
	.string "-Meine Mission lautet, auf dem MONDBERG\n"
	.string "FOSSILIEN zu sammeln, und nicht in\l"
	.string "AZURIA CITY rumzugammeln.-$"


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
	.string "-LAMBDA hat mich in sein Büro bestellt.\n"
	.string "Warum laufe ich also in diese Richtung?-$"

CeruleanCity_Nino::
lock
faceplayer
msgbox CeruleanCity_Nino_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nino_Texto_1:
	.string "Meine Mama sagt, Leute wie du mit einem\n"
	.string "R auf der Kleidung sind böse.$"

CeruleanCity_Bayas::
lock
faceplayer
msgbox CeruleanCity_Bayas_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Bayas_Texto_1:
	.string "Mutig von dir. Wusstest du, dass diese\n"
	.string "Stadt die größte Polizeistation in ganz\l"
	.string "KANTO hat? Komm schon {PAUSE 15}…{PAUSE 15} ROCKET, Gib mir\l"
	.string "einen Grund, die Jungs zu holen! Bitte!$"

CeruleanCity_Nina::
lock
faceplayer
msgbox CeruleanCity_Nina_Texto_1 MSGBOX_NPC
release
end

CeruleanCity_Nina_Texto_1:
	.string "Mein LAHMUS ist ziemlich faul. Ich\n"
	.string "wette, ein bisschen Disziplin würde ihm\l"
	.string "guttun. Nicht, dass ihr ROCKETs etwas\l"
	.string "davon versteht. Ist doch so, oder?$"
