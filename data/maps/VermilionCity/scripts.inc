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
	.string "All the pollution that's been cropping\n"
	.string "up in the region must be your fault!\l"
	.string "Your GRIMER and KOFFING are destroying\l"
	.string "the environment!$"


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
	.string "????: Careful there, kid. You'd better\n"
	.string "respect the peace around here if you\l"
	.string "don't wanna find yourself in hot water.\l"
	.string "I warned you.$"

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
	.string "Things've been looking up for us since\n"
	.string "the failure at MT. MOON. It was just\l"
	.string "about time for them to recognize your\l"
	.string "skill. Now that we're HIGH RANK GRUNTS,\l"
	.string "you know what that means, don't you?\l"
	.string "They'll assign us more important\l"
	.string "missions, so we'll be moving between the\l"
	.string "big fishes of this organization. This\l"
	.string "doesn't seem like your run-of-the-mill\l"
	.string "mission either: you see our faces when\l"
	.string "we learned GIOVANNI himself ordered\l"
	.string "this mission?$"

VermilioCity_Motorista_Text_3:
	.string "Whatever's in that CAPTAIN's flask,\n"
	.string "we'll find it. I wonder if we'll get to see\l"
	.string "GIOVANNI hims…$"

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
	.string "TETSUO: Hey, look. Lemme tell you what\n"
	.string "we're gonna do here. I scoped this guy\l"
	.string "out, and he loves marine POKÉMON. I'm\l"
	.string "gonna rile him up so you guys can sneak\l"
	.string "onto the S.S. ANNE.$"

VermilioCity_Motorista_Text_8:
	.string "TETSUO: When I give the order, hurry\n"
	.string "aboard and leave the rest to me…$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: HEY, YOU!$"

VermilioCity_Motorista_Text_10:
	.string "Yeah, you! The heck're you wasting away\n"
	.string "in a dump like this for, fawning over\l"
	.string "your squishy, wimpy WATER POKÉMON?\l"
	.string "Darn those TENTACOOL! All they're good\l"
	.string "for is clogging up our summer!$"

VermilioCity_Motorista_Text_11:
	.string "SAILOR: What did you just say?\n"
	.string "Run that by me again, you POISON-loving\l"
	.string "runt! Newsflash-TENTACOOL's a POISON\l"
	.string "POKÉMON too!$"

VermilioCity_Motorista_Text_12:
	.string "TETSUO: Yeah, whatever. Real POISON\n"
	.string "POKÉMON like WEEZING, GENGAR, or GOLBAT\l"
	.string "can handle their worst enemy, no\l"
	.string "problem: GROUND POKÉMON. TENTACOOL\l"
	.string "and TENTACRUEL though? All that WATER\l"
	.string "sure doesn't do jack to keep ‘em from\l"
	.string "getting buried-all it does is just wash\l"
	.string "out everything that makes a POISON\l"
	.string "POKÉMON good! All WATER's good for is\l"
	.string "just drowning out all the positives of\l"
	.string "every other type!$"

VermilioCity_Motorista_Text_13:
	.string "SAILOR: Oh, that's it, you bastard! I'll\n"
	.string "make you pay for running your\l"
	.string "motormouth over the purity of WATER\l"
	.string "POKÉMON! Now lemme show you just how\l"
	.string "wrong you really are!$"

VermilioCity_Motorista_Text_14:
.string "ANDRA: Now, {PLAYER}!$"

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
	.string "Ooh, those big-headed jerks from the\n"
	.string "FAN CLUB just keep mocking my project!\l"
	.string "They're all so high and mighty just\l"
	.string "because they've got some uncommon\l"
	.string "POKÉMON. If I had some POKÉMON besides\l"
	.string "my beloved MACHOP, I'd teach ‘em a thing\l"
	.string "or two!$"

VermilionCity_Secundaria_AncianoMachop_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

VermilionCity_Secundaria_AncianoMachop_Texto_3:
	.string "You're looking a little green to be\n"
	.string "facing that CHAIRMAN either. Come back\l"
	.string "when you're stronger if you want a good\l"
	.string "deal.$"

VermilionCity_Secundaria_AncianoMachop_Texto_4:
.string "My project is going very well! In 3 years\n"
	.string "this place will have a building even\l"
	.string "bigger than SILPH HEADQUARTERS of\l"
	.string "SAFFRON! You will see it!$"

VermilionCity_Secundaria_AncianoMachop_Texto_5:
	.string "So you whooped him! Honestly, I had my\n"
	.string "doubts about you! I won't deny their\l"
	.string "POKÉMON are uncommon in these parts.\l"
	.string "But I'll bet his ego dropped after\l"
	.string "getting beaten in front of his\l"
	.string "followers! I'll bet you'll put my\l"
	.string "HITMONLEE to good use!$"

VermilionCity_Secundaria_AncianoMachop_Texto_6:
.string "YOU GOT A HITMONLEE AT LV:20!!$"

VermilionCity_Secundaria_AncianoMachop_Texto_7:
	.string "This here's one of KANTO's most rare and\n"
	.string "renown FIGHTING POKEMON. They've got a\l"
	.string "real kick to them. This one was wasted\l"
	.string "on me, but something tells me it'll be in\l"
	.string "good hands with you.$"

VermilionCity_Secundaria_AncianoMachop_Texto_8:
	.string "How's the mission going?$"

VermilionCity_Secundaria_AncianoMachop_Texto_9:
	.string "Oh! A HIGH RANK ROCKET GRUNT? Mm, yes,\n"
	.string "your POKÉMON seem to pack a punch. Tell\l"
	.string "me, would you like to do a little job for\l"
	.string "me?$"

VermilionCity_Secundaria_AncianoMachop_Texto_10:
	.string "Good! Now listen up! The CHAIRMAN of\n"
	.string "the local FAN CLUB's got a big\l"
	.string "reputation here, and now he's gone and\l"
	.string "made fun of my aspirations. He's\l"
	.string "complained about my project-says in\l"
	.string "three years, this'll stay an empty solar,\l"
	.string "and I'll be long gone.$"

VermilionCity_Secundaria_AncianoMachop_Texto_11:
	.string "Now see here. What I want you to do is\n"
	.string "teach him a lesson in front of all his\l"
	.string "followers. He's always jabbering on\l"
	.string "about being a good TRAINER, talking a\l"
	.string "big game about catching over a hundred\l"
	.string "POKÉMON and being a match for a GYM\l"
	.string "LEADER. So if you beat him, his\l"
	.string "reputation will plummet, and all his\l"
	.string "credibility will be gone with the wind.$"

VermilionCity_Secundaria_AncianoMachop_Texto_12:
	.string "Now I won't move a step. I'll be right\n"
	.string "here with a big reward for you if you\l"
	.string "can pull it off.$"

VermilionCity_Secundaria_AncianoMachop_Texto_13:
.string "No? Well{PAUSE 15}…{PAUSE 15}\n"
	.string "If you change your mind, I'll be right here.$"

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
	.string "here is due to you!\l"
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
	.string "Motormouth! A pack of WAILORD could\n"
	.string "wash away your BIKE PATH with their\l"
	.string "WATER SPOUT and leave you high and dry!\l"
	.string "So you tell me again just how useless\l"
	.string "they are!$"

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
	.string "No one's getting into the dock without\n"
	.string "my say so, ROCKET! Now beat it!$"

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
	.string "Did you know WEEZING can learn\n"
	.string "THUNDERBOLT? I'll fry all your aquatic\l"
	.string "POKÉMON with this move!$"
