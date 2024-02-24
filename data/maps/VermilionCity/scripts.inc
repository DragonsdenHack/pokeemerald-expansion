VermilionCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, VermillionCity_OnTransition
	.byte 0

VermillionCity_OnTransition::
setflag FLAG_VISITED_VERMILION_CITY
end

VermilionCity1::
lock     
faceplayer     
msgbox VermilionCity_Text1, MSGBOX_DEFAULT
release     
end

VermilionCity_Text1:
.string "All this pollution that has been seen in\n"
	.string "the region must be your fault! Your\l"
	.string "GRIMERs and KOFFINGs destroy the\l"
	.string "environment!$"


VermilionCity2::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 32
goto_if_gt VermilionCity2_2
msgbox VermilionCity2_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_2::
msgbox VermilionCity2_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_Texto_2:
.string "So, the S.S. ANNE has departed? It'll be\n"
	.string "back in VERMILION about this time next\l"
	.string "year.$"

VermilionCity2_Texto_1:
.string "Did you see the S.S. ANNE moored in the\n"
	.string "harbor?$"


VermilionCity3::
end


VermilionCity4::
end


VermilionCity5::
end


VermilionCity6::
lock     
faceplayer     
msgbox VermilionCity_Text6, MSGBOX_DEFAULT
release     
end

VermilionCity_Text6:
.string "You ROCKETs will soon lose the privilege\n"
	.string "of being able to use our maritime\l"
	.string "transport. I've heard that the LEAGUE\l"
	.string "COMMITTEE will approve a law that\l"
	.string "prohibits the transportation of\l"
	.string "ROCKETs on the VERMILION-FIVE ISLAND\l"
	.string "route and from there to here.$"


VermilionCity7::
end


VermilionCity8::
end


VermilionCity9::
end


VermilionCity10::
end


VermilionCity11::
end



VermilionCityDocumento_100::
msgbox VermilionCityDocumento_Text_100, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_100:
.string "POKÉMON FAN CLUB\n"
	.string "All POKÉMON fans welcome!$"



VermilionCityDocumento_101::
msgbox VermilionCityDocumento_Text_101, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_101:
	.string "VERMILION CITY LEADER GYM\n"
	.string "LEADER: LT. SURGE\l"
	.string "The lighting American!$"



VermilionCityDocumento_102::
msgbox VermilionCityDocumento_Text_102, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_102:
	.string "VERMILION CITY\n"
	.string "The Port of Exquisite\l"
	.string "Sunsets.$"



VermilionCityDocumento_103::
msgbox VermilionCityDocumento_Text_103, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_103:
	.string "VERMILION HARBOR$"



VermilionCityDocumento_104::
msgbox VermilionCityDocumento_Text_104, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_104:
	.string "Notice!\n"
.string "ROUTE 12 may be blocked off by a\l"
	.string "sleeping POKÉMON. Detour through ROCK\l"
	.string "TUNNEL to LAVENDER TOWN. VERMILION\l"
	.string "POLICE.$"

VermilionCityDerecha::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove1
waitmovement 0
msgbox VermilionCity_Text_Derecha, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove2
waitmovement 0
release     
end

VermilionCity_Text_Derecha:     
.string "(I should go to heal my team, just in\n"
	.string "case).$"


VermilionCityDerechaMove1:
walk_in_place_slow_down
step_end

VermilionCityDerechaMove2:
walk_down
step_end


VermilionCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove1
waitmovement 0
msgbox VermilionCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove2
waitmovement 0
release     
end

VermilionCity_Text_Izq:     
.string "(I should go to heal my team, just in\n"
	.string "case).$"


VermilionCityIzqMove1:
walk_in_place_slow_left
step_end

VermilionCityIzqMove2:
walk_left
step_end

VermilionCityFlag::     
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 7
removeobject 12
release     
end

VermilionCitySurge:: 
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move1
waitmovement 0x0
fadeoutbgm 0
playse 507
delay 20
msgbox VermilionCity_Text_Surge, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
fadescreen 1
delay 20
removeobject 12
fadescreen 0
delay 10
fadeoutbgm 0
playse 525
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setvar VAR_UNUSED_0x40F7, 7
release
end

VermilionCity_Text_Surge:
.string "????: Be careful kid, I hope you will\n"
	.string "respect this peaceful place if you\l"
	.string "don't want to get into trouble. I warned\l"
	.string "you.$"

VermilionCitySurge_move1:
emote_exclamation_mark
jump_special_down
face_up
step_end

VermilioCity_Motorista::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.1
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.2
waitmovement 0x0
goto VermilioCity_Motorista_4


VermilioCity_Motorista_4::
delay 5
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 9
applymovement 9, VermilioCity_Motorista_move_3
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_1 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_4
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_2 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_5
applymovement 9, VermilioCity_Motorista_move_5
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 10
applymovement 10, VermilioCity_Motorista_move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_7
applymovement 9, VermilioCity_Motorista_move_7
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_4 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_8
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_5 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_9
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_6 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_10
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_7 MSGBOX_AUTOCLOSE
msgbox VermilioCity_Motorista_Text_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
applymovement 10, VermilioCity_Motorista_move_11
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, VermilioCity_Motorista_move_12
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, VermilioCity_Motorista_move_13
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_14
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_12 MSGBOX_AUTOCLOSE
applymovement 5, VermilioCity_Motorista_move_8
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_13 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_15
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_16
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_17
applymovement 9, VermilioCity_Motorista_move_17
waitmovement 0x0
delay 10
applymovement 9, VermilioCity_Motorista_move_18
waitmovement 0x0
removeobject 9
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
playse SE_EXIT
addobject 11
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setvar VAR_UNUSED_0x40DC, 1
setvar VAR_UNUSED_0x40F7, 24
release
end

VermilioCity_Motorista_Text_1:
.string "ANDRA: Any signal about our supposed\n"
	.string "wild card to enter S.S. ANNE?$"

VermilioCity_Motorista_Text_2:
.string "The situation seems to have improved a\n"
	.string "lot for us since MT. MOON failure, it was\l"
	.string "just about time for them to recognize\l"
	.string "your skills, now we are HIGH RANK\l"
	.string "GRUNTS, you know what it means, don't\l"
	.string "you?. They will assign us missions that\l"
	.string "are more important, so we will be able\l"
	.string "to move between the big fishes of this\l"
	.string "organization, this doesn't seem like a\l"
	.string "conventional mission. Did you see our\l"
	.string "faces when we knew that GIOVANNI\l"
	.string "himself ordered this mission?$"

VermilioCity_Motorista_Text_3:
.string "Whatever that would contain that\n"
	.string "CAPTAIN's jar, we will find it{PAUSE 15}…{PAUSE 15} I\l"
	.string "wonder if we will be able to see\l"
	.string "GIOVANNI hims….$"

VermilioCity_Motorista_Text_4:
.string "You should be the HIGH RANK GRUNTS\n"
	.string "sent by ARCHER, aren't you?$"

VermilioCity_Motorista_Text_5:
.string "ANDRA: Indeed, so who are you?$"

VermilioCity_Motorista_Text_6:
.string "TETSUO, one of KANTO MOTORISTS\n"
	.string "ASSOCIATION bosses, but it doesn't\l"
	.string "care right now.$"

VermilioCity_Motorista_Text_7:
.string "TETSUO: Hey look, I will tell you two\n"
	.string "what are we going to do, I had searched\l"
	.string "about this guy and I found he loves\l"
	.string "marine POKÉMONs, if I am able to hurt\l"
	.string "him about his preferences, I will get\l"
	.string "his attention enough time to you two\l"
	.string "be able to enter the S.S. ANNE.$"

VermilioCity_Motorista_Text_8:
.string "TETSUO. When I order you two, you will go\n"
	.string "ahead and quickly enter the ship,\l"
	.string "leaving all the rest in my hands…$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: HEY, YOU!$"

VermilioCity_Motorista_Text_10:
.string "Yeah you, I don't know why you are\n"
	.string "wasting your time in a place like this,\l"
	.string "dedicating your life into WATER type\l"
	.string "POKÉMONs that are useless and just are\l"
	.string "hindrance. Damn it,those TENTACOOL,\l"
	.string "they are just there to ruin our spring!$"

VermilioCity_Motorista_Text_11:
.string "What did you just say? How do you dare\n"
	.string "POISON type POKÉMONs lover! If you\l"
	.string "didn't know, TENTACOOL is a POISON\l"
	.string "type too!$"

VermilioCity_Motorista_Text_12:
.string "TETSUO: Yeah I know, but real POISON\n"
	.string "type POKÉMONS, like WEEZING, GENGAR or\l"
	.string "GOLBAT know how to deal with their\l"
	.string "worst enemy: GROUND type, TENTACOOL\l"
	.string "and TENTACRUEL counterwise can't fight\l"
	.string "against them back, they got\l"
	.string "contaminated by the worst type of all:\l"
	.string "the WATER, which means they are out\l"
	.string "from all virtudes that a real POISON\l"
	.string "would have. WATER type just\l"
	.string "intoxicates the rest of types!$"

VermilioCity_Motorista_Text_13:
.string "SAILOR: I won't accept that you talk\n"
	.string "about aquatic POKÉMONs in that way,\l"
	.string "dirty MOTORIST corrupted by the toxic\l"
	.string "smell of his WEEZINGs! I will prove that\l"
	.string "you are wrong!$"

VermilioCity_Motorista_Text_14:
.string "ANDRA: Now {PLAYER}!$"

VermilioCity_Motorista_move_1:
walk_in_place_left
step_end

VermilioCity_Motorista_move_2:
emote_exclamation_mark
walk_down
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.1:
emote_exclamation_mark
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.2:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_4:
walk_in_place_up
walk_in_place_left
step_end

VermilioCity_Motorista_move_5:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_7:
face_up
step_end

VermilioCity_Motorista_move_8:
walk_in_place_up
step_end

VermilioCity_Motorista_move_9:
walk_in_place_down
step_end

VermilioCity_Motorista_move_10:
walk_in_place_left
walk_in_place_down
step_end

VermilioCity_Motorista_move_11:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end

VermilioCity_Motorista_move_12:
emote_exclamation_mark
step_end

VermilioCity_Motorista_move_13:
emote_exclamation_mark
walk_in_place_up
step_end

VermilioCity_Motorista_move_14:
walk_down
step_end

VermilioCity_Motorista_move_15:
walk_in_place_up
walk_in_place_down
step_end

VermilioCity_Motorista_move_16:
walk_in_place_right
step_end

VermilioCity_Motorista_move_17:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
step_end

VermilioCity_Motorista_move_18:
walk_in_place_left
walk_in_place_down
walk_slow_down
walk_slow_down
step_end

VermilionCity_Rojo::
lockall
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Rojo_move1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move2
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 7
delay 30
applymovement 7, VermilionCity_Rojo_move3
waitmovement 0x0
delay 20
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move4
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
setvar VAR_UNUSED_0x40F7, 29
release
end

VermilionCity_Rojo_move1:
emote_exclamation_mark
walk_in_place_down
step_end

VermilionCity_Rojo_move2:
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
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


VermilionCity_Rojo_move3:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


VermilionCity_Rojo_move4:
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
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilionCity_Secundaria_AncianoMachop::
lock
faceplayer
compare VAR_UNUSED_0x409B, 2
goto_if_gt VermilionCity_Secundaria_AncianoMachop_6
compare VAR_UNUSED_0x409B, 2
goto_if_eq VermilionCity_Secundaria_AncianoMachop_5
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 1
goto_if_eq VermilionCity_Secundaria_AncianoMachop_4
compare VAR_UNUSED_0x40F7, 22
goto_if_gt VermilionCity_Secundaria_AncianoMachop_2
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_3 MSGBOX_AUTOCLOSE
release
end





VermilionCity_Secundaria_AncianoMachop_2::
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Secundaria_AncianoMachop_3
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_10 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_11 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 1
release
end


VermilionCity_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_5:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONLEE, 20, ITEM_SCOPE_LENS
waitfanfare
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 3
release
end

VermilionCity_Secundaria_AncianoMachop_6:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_4 MSGBOX_AUTOCLOSE
release
end



VermilionCity_Secundaria_AncianoMachop_Texto_1:
.string "Those arrogant people from FANS CLUB,\n"
	.string "don't stop making fun of my project,\l"
	.string "they think they are cool and\l"
	.string "untouchable just because they have\l"
	.string "uncommon POKÉMON. If I had some\l"
	.string "POKÉMON besides my beloved MACHOP, I\l"
	.string "would like to teach them a lesson.$"

VermilionCity_Secundaria_AncianoMachop_Texto_2:
.string "...\n"
	.string "...$"

VermilionCity_Secundaria_AncianoMachop_Texto_3:
.string "You don't look like you have enough\n"
	.string "experience to face CHAIRMAN from\l"
	.string "there either. Come back when you get\l"
	.string "stronger if you want to do a good deal.$"

VermilionCity_Secundaria_AncianoMachop_Texto_4:
.string "My project is going very well! In 3 years\n"
	.string "this place will have a building even\l"
	.string "bigger than SILPH HEADQUARTERS of\l"
	.string "SAFFRON! You will see it!$"

VermilionCity_Secundaria_AncianoMachop_Texto_5:
.string "Honestly I doubt you could had a\n"
	.string "chance! I won't deny that their\l"
	.string "POKÉMON are uncommon in this city! I'm\l"
	.string "sure his ego went down after losing in\l"
	.string "front of his Followers!$"

VermilionCity_Secundaria_AncianoMachop_Texto_6:
.string "YOU GOT A HITMONLEE AT LV:20!!$"

VermilionCity_Secundaria_AncianoMachop_Texto_7:
.string "This is one of the FIGHT POKÉMON most\n"
	.string "rare and appreciated of this region,\l"
	.string "the force of their kicks is unmatched,\l"
	.string "with me was wasted, for sure you can\l"
	.string "use it better.$"

VermilionCity_Secundaria_AncianoMachop_Texto_8:
.string "How it's the mission going?$"

VermilionCity_Secundaria_AncianoMachop_Texto_9:
.string "Oh! HIGH RANK GRUNT ROCKET? Mmm yes,\n"
	.string "your POKÉMONS seems a bit strong, tell\l"
	.string "me, would you like to do a little job for\l"
	.string "me?$"

VermilionCity_Secundaria_AncianoMachop_Texto_10:
.string "Nice! Listen up, the CHAIRMAN of FANS\n"
	.string "CLUB of this city is a person of big\l"
	.string "reputation, who has just complained\l"
	.string "about my project and making fun of my\l"
	.string "aspirations, he thinks in 3 years this\l"
	.string "place will keep being an empty solar\l"
	.string "and I will be gone.$"

VermilionCity_Secundaria_AncianoMachop_Texto_11:
.string "What I want you to do is you to\n"
	.string "teaching him a lesson in front of all of\l"
	.string "his followers, he's always being proud\l"
	.string "of being a good TRAINER, have caught\l"
	.string "more than 100 POKÉMON and have a GYM'S\l"
	.string "LEADER fight level, if you can defeat\l"
	.string "him there, all his reputation will be\l"
	.string "gone and will lose his credibility.$"

VermilionCity_Secundaria_AncianoMachop_Texto_12:
.string "I won't move from here, I will be waiting\n"
	.string "for you with a big reward if you do what\l"
	.string "I asked for.$"

VermilionCity_Secundaria_AncianoMachop_Texto_13:
.string "No? Well{PAUSE 15}…{PAUSE 15} If you change your mind I will\n"
	.string "be here.$"

VermilionCity_Secundaria_AncianoMachop_Move_1:
emote_exclamation_mark
step_end


VermilionCity_Primer_NPC::
lock
faceplayer
msgbox VermilionCity_Primer_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Primer_NPC_Texto_1:
.string "All this polution around\n"
	.string "here it's due to you!\l"
	.string "That's for sure, GRIMER\l"
	.string "and KOFFING are the\l"
	.string "worst KANTO POKÉMON!$"

VermilionCity_Barco::
lock
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 27
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Barco_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

VermilionCity_Marinero::
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 27
lock
faceplayer
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Marinero_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Marinero_2::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Marinero_3::
msgbox VermilionCity_Marinero_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Marinero_Texto_1:
.string "Insolent motorist! That a pack of\n"
	.string "WAILORDS pounce with their SPLASH on\l"
	.string "your BIKE PATH and remain it flooded,\l"
	.string "you will tell me there if the marine\l"
	.string "POKÉMON are useful serving or not!$"

VermilionCity_Barco_3::
release
end

VermilionCity_Barco_2::
applymovement 5, VermilionCity_Barco_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_2
waitmovement 0x0
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Barco_Move_3
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Barco_Move_1:
face_left
step_end

VermilionCity_Barco_Move_2:
face_right
step_end

VermilionCity_Barco_Move_3:
face_up
step_end

VermilionCity_Barco_Move_4:
walk_slow_up
walk_slow_up
step_end

EventScript_Mas::
multichoice 22, 0, MULTI_ISLAS2, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Setima
release
end

VermilionCity_Barco_Texto_1:
.string "No one can enter the dock without my\n"
	.string "consentment, ROCKET! Go away from\l"
	.string "here!$"

VermilionCity_Barco_Texto_2:
.string "Ah, you have a RAINBOW PASS. Would you\n"
	.string "like to board a SEAGALLOP ferry?$"

VermilionCity_Barco_Texto_3:
.string "Okay, everything's in order for you to\n"
	.string "board a special ferry. SEAGALLOP\l"
	.string "HI-SPEED 7 will be departing\l"
	.string "immediately.$"

VermilionCity_Barco_Texto_4:
.string "All right! Everyone on the SEAGALLOP\n"
	.string "HI-SPEED 7 board!$"

EventScript_Setima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 33 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Exta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 32 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Inta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 31 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Cuarta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 30 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


EventScript_Prima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 27 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Secunda::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 28 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Tera::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 34 @BANCO DE MAPA
setvar VAR_0x8001 0 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


IslaPrima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAPRIMA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

EventScript_Carmin::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 1 @BANCO DE MAPA
setvar VAR_0x8001 5 @NUMERO DE MAPA
setvar VAR_0x8002 23 @POSICION X
setvar VAR_0x8003 31 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

IslaPrima_Secunda::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASECUNDA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

IslaTera_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLATERA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Mas
release
end

IslaCuarta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLACUARTA, 0
switch VAR_RESULT
case 0, EventScript_Inta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

EventScript_Mas2::
multichoice 22, 0, MULTI_ISLASCLASIC, 0	
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Tera
release
end

IslaInta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAINTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaExta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAEXTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaSetima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASETIMA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Mas2
release
end

Vermilion_Motorista::
lock
msgbox Vermilion_Motorista_Texto_1 MSGBOX_DEFAULT
release
end

Vermilion_Motorista_Texto_1:
.string "Did you know that WEEZING can learn\n"
	.string "THUNDERBOLT? I'll melt all your aquatic\l"
	.string "POKÉMON with this movement!$"
