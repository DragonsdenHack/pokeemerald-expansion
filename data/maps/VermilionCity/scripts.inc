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
	.string "ROUTE and from there to here.$"


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
.string "-I should go to heal my team,\n"
	.string "just in case.-$"


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
.string "-I should go to heal my team,\n"
	.string "just in case.-$"


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

VermilionCitySurge_move_2:
delay_16
face_right
delay_16
delay_16
delay_16
face_down
step_end

VermilionCitySurge_move_3:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end

VermilionCitySurge:: 
playse SE_SLIDING_DOOR
opendoor 15, 6
waitdooranim
addobject 12
waitse
playse SE_PIN
applymovement 12, VerdanturfTown_Move_9
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move1
waitmovement 0x0
closedoor 15, 6
waitdooranim
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
fadeoutbgm 0
playse 507
delay 20
msgbox VermilionCity_Text_Surge, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move_2
applymovement 12, VermilionCitySurge_move_3
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 12
delay 10
fadeoutbgm 0
playse 525
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
setflag FLAG_HOENN_700
setflag FLAG_HOENN_699
setflag FLAG_HOENN_698
setflag FLAG_HOENN_697
setflag FLAG_HOENN_696
setflag FLAG_HOENN_695
setflag FLAG_HOENN_694
setflag FLAG_HOENN_693
setflag FLAG_HOENN_692
setflag FLAG_HOENN_691
setflag FLAG_HOENN_690
setflag FLAG_HOENN_689
setflag FLAG_HOENN_688
setflag FLAG_HOENN_687
setflag FLAG_HOENN_686
setflag FLAG_HOENN_685
setflag FLAG_HOENN_684
setflag FLAG_HOENN_683
setflag FLAG_HOENN_682
setflag FLAG_HOENN_681
setflag FLAG_HOENN_680
setflag FLAG_HOENN_679
setflag FLAG_HOENN_678
setflag FLAG_HOENN_677
setflag FLAG_HOENN_676
setflag FLAG_HOENN_675
setflag FLAG_HOENN_674
setflag FLAG_HOENN_673
setflag FLAG_HOENN_672
setflag FLAG_HOENN_671
setflag FLAG_HOENN_670
setflag FLAG_HOENN_669
setflag FLAG_HOENN_668
setflag FLAG_HOENN_667
setflag FLAG_HOENN_666
setflag FLAG_HOENN_665
setflag FLAG_HOENN_664
setflag FLAG_HOENN_663
setflag FLAG_HOENN_662
setflag FLAG_HOENN_661
setflag FLAG_HOENN_660
setflag FLAG_HOENN_659
setflag FLAG_HOENN_658
setflag FLAG_HOENN_657
setflag FLAG_HOENN_656
setflag FLAG_HOENN_655
setflag FLAG_HOENN_654
setflag FLAG_HOENN_653
setflag FLAG_HOENN_652
setflag FLAG_HOENN_651
setflag FLAG_HOENN_650
setflag FLAG_HOENN_649
setflag FLAG_HOENN_648
setflag FLAG_HOENN_647
setflag FLAG_HOENN_646
setflag FLAG_HOENN_645
setflag FLAG_HOENN_644
setflag FLAG_HOENN_643
setflag FLAG_HOENN_642
setflag FLAG_HOENN_641
setflag FLAG_HOENN_640
setvar VAR_UNUSED_0x40F7, 7
release
end

VermilionCity_Text_Surge:
	.string "????: Careful there, kid. You'd better\n"
	.string "respect the peace around here if you\l"
	.string "don't wanna find yourself in hot water.\p"
	.string "I warned you.$"

VermilionCitySurge_move1:
emote_exclamation_mark
face_up
delay_8
lock_facing_direction
walk_down
unlock_facing_direction
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

VermilioCity_Motorista_move_4.1:
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end


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
delay 10
applymovement 9, VermilioCity_Motorista_move_4.1
waitmovement 0x0
delay 10
msgbox VermilioCity_Motorista_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilioCity_Motorista_Text_2.2 MSGBOX_AUTOCLOSE
delay 10
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
delay 15
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
waitse
msgbox VermilioCity_Motorista_Text_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, VermilioCity_Motorista_move_12
waitmovement 0x0
waitse
playse SE_BREAKABLE_DOOR
applymovement 5, VermilioCity_Motorista_move_13
waitmovement 0x0
waitse
delay 10
msgbox VermilioCity_Motorista_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_14
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_12 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, VermilioCity_Motorista_move_8
waitmovement 0x0
waitse
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
	.string "wild card to enter S.S. ANNE?\p"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "I see.$"

VermilioCity_Motorista_Text_2:
	.string "Things've been looking up for us since\n"
	.string "the failure at MT. MOON. It was just\l"
	.string "about time for them to recognize your\l"
	.string "skill, and now we're here, as HIGH\l"
	.string "RANK GRUNTS.$"

VermilioCity_Motorista_Text_2.1:
	.string "You know what that means, don't you?\p"
	.string "They'll assign us more important\n"
	.string "missions, so we'll be moving between the\l"
	.string "big fishes of this organization. This\l"
	.string "doesn't seem like a run-of-the-mill\l"
	.string "mission either.$"

VermilioCity_Motorista_Text_2.2:
	.string "Did you see our faces when\n"
	.string "we knew about GIOVANNI himself\l"
	.string "ordering this mission?$"

VermilioCity_Motorista_Text_3:
	.string "Whatever's in that CAPTAIN's flask,\n"
	.string "we'll find it. I wonder if we'll get\l"
	.string "to see GIOVANNI after…$"

VermilioCity_Motorista_Text_4:
.string "You must be the HIGH RANK GRUNTS\n"
	.string "sent by PETREL, aren't you?$"

VermilioCity_Motorista_Text_5:
.string "ANDRA: Indeed, so who are you?$"

VermilioCity_Motorista_Text_6:
.string "TETSUO, one of KANTO BIKERS\n"
	.string "ASSOCIATION bosses, but it doesn't\l"
	.string "matters right now.$"

VermilioCity_Motorista_Text_7:
	.string "Hey, look. Lemme tell you what\n"
	.string "we're gonna do here. I scoped this guy\l"
	.string "out, and he loves marine POKÉMON.\p"
	.string "I'm gonna rile him up so you guys can\n"
	.string "sneak onto the S.S. ANNE.$"

VermilioCity_Motorista_Text_8:
	.string "When I give the order, hurry\n"
	.string "aboard and leave the rest to me…$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: HEY, YOU!$"

VermilioCity_Motorista_Text_10:
	.string "Yeah, you! The heck're you wasting away\n"
	.string "in a dump like this for, fawning over\l"
	.string "your squishy, wimpy WATER POKÉMON?\p"
	.string "Darn those TENTACOOL! All they're good\n"
	.string "for is clogging up our summer!$"

VermilioCity_Motorista_Text_11:
	.string "SAILOR: What did you just say?\p"
	.string "Run that by me again, you POISON-loving\n"
	.string "runt! Newsflash-TENTACOOL's a POISON\l"
	.string "POKÉMON too!$"

VermilioCity_Motorista_Text_12:
	.string "TETSUO: Yeah, whatever. Real POISON\n"
	.string "POKÉMON like WEEZING, GENGAR, or\l"
	.string "GOLBAT, can handle their worst enemy,\l"
	.string "no problem: GROUND POKÉMON. TENTACOOL\l"
	.string "and TENTACRUEL though? All that WATER\l"
	.string "sure doesn't do jack to keep ‘em from\l"
	.string "getting buried; all it does is just wash\l"
	.string "out everything that makes a POISON\l"
	.string "POKÉMON good! All WATER's good for is\l"
	.string "just drowning out all the positives of\l"
	.string "every other type!$"

VermilioCity_Motorista_Text_13:
	.string "SAILOR: Oh, that's it, you bastard!\p"
	.string "I'll make you pay for running your\n"
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
delay_16
walk_in_place_up
delay_8
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
delay 25
playse SE_SLIDING_DOOR
opendoor 29, 17
waitdooranim
addobject 7
applymovement 7, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 29, 17
waitdooranim
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
	.string "Oh!\p"
	.string "A HIGH-RANK ROCKET GRUNT?\p"
	.string "Mmm{PAUSE 15}…{PAUSE 15} yes, your POKÉMON seem strong.\p"
	.string "Tell me, would you like to do a little\n"
	.string "job for me?$"

VermilionCity_Secundaria_AncianoMachop_Texto_10:
	.string "Good! Now listen up! The CHAIRMAN of\n"
	.string "the local FAN CLUB's got a big\l"
	.string "reputation here, and now he's gone and\l"
	.string "made fun of my aspirations. He's\l"
	.string "complained about my project; says\l"
	.string "in three years, this'll stay an\l"
	.string "empty solar, and I'll be long gone.$"

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
	.string "If you change your mind, I'll be here.$"

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
.string "Did you know WEEZING can\n"
	.string "learn THUNDERBOLT?\p"
	.string "I'm going to sweep your entire\n"
	.string "WATER-TYPE team with one single\l"
	.string "move!$"

Vermilion_Anciano_Bill::
lock
msgbox Vermilion_Anciano_Bill_Texto_1 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_2 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_3 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_4 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_5 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_6 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_7 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_8 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_9 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_10 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_11 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_12 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_13 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_14 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_15 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_16 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_17 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_18 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_19 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_20 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_21 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_22 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_23 MSGBOX_AUTOCLOSE
release
end

Vermilion_Anciano_Bill_Texto_1:
	.string "Ha sido duro, MACHOP, pero ya tenemos\n"
	.string "todo listo para iniciar la construcción.$"

Vermilion_Anciano_Bill_Texto_2:
	.string "¡Vamos a honrar la región de KANTO y el\n"
	.string "ARCHI7 como ningún otro lugar lo hizo\l"
	.string "antes!$"

Vermilion_Anciano_Bill_Texto_3:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_4:
	.string "POLICÍA de MESETA AÑIL.$"

Vermilion_Anciano_Bill_Texto_5:
	.string "¿Q-qué ocurre?$"

Vermilion_Anciano_Bill_Texto_6:
	.string "Hemos identificado irregularidades en\n"
	.string "este terreno. No es apto para la\l"
	.string "construcción, y está usted incurriendo\l"
	.string "en un delito.$"

Vermilion_Anciano_Bill_Texto_7:
	.string "Eso… ¡eso es imposible! Me dijeron que\n"
	.string "todo estaba en regla, íbamos a empezar\l"
	.string "a construir mañana.$"

Vermilion_Anciano_Bill_Texto_8:
	.string "La legislatura ha cambiado.$"

Vermilion_Anciano_Bill_Texto_9:
	.string "No… ¡no podéis hacerme esto!$"

Vermilion_Anciano_Bill_Texto_10:
	.string "¿Tenéis idea de todo lo que he pasado\n"
	.string "para llegar hasta aquí? ¿La cantidad de\l"
	.string "trabajo y dinero que he invertido para\l"
	.string "ello?$"

Vermilion_Anciano_Bill_Texto_11:
	.string "¡Llevo toda la vida trabajando por este\n"
	.string "sueño!$"

Vermilion_Anciano_Bill_Texto_12:
	.string "Los sueños a veces no se cumplen,\n"
	.string "anciano. De hecho, lo normal, es que no\l"
	.string "lo hagan. Bienvenido al mundo real.$"

Vermilion_Anciano_Bill_Texto_13:
	.string "¡No! ¡No tenéis derecho!$"

Vermilion_Anciano_Bill_Texto_14:
	.string "¡Lleváoslo de aquí!$"

Vermilion_Anciano_Bill_Texto_15:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_16:
	.string "El COMITÉ de la LIGA POKÉMON se\n"
	.string "encargará de ti.$"

Vermilion_Anciano_Bill_Texto_17:
	.string "????: ¿Y bien?$"

Vermilion_Anciano_Bill_Texto_18:
	.string "SR.BILL. Misión cumplida, el ANCIANO y\n"
	.string "su MACHOP no interferirán en su\l"
	.string "proyecto.$"

Vermilion_Anciano_Bill_Texto_19:
	.string "BILL: Perfecto.$"

Vermilion_Anciano_Bill_Texto_20:
	.string "¿Quiere que eliminemos también el claro\n"
	.string "de tierra?$"

Vermilion_Anciano_Bill_Texto_21:
	.string "BILL: No, es irrelevante. Jamás hizo\n"
	.string "pública la naturaleza de su proyecto.$"

Vermilion_Anciano_Bill_Texto_22:
	.string "BILL: Quedará como un vestigio de lo\n"
	.string "que una vez pudo ser. La gente\l"
	.string "inventará divertidas historias,\l"
	.string "elucubrará teorías… y yo me reiré de\l"
	.string "todas ellas desde arriba.$"

Vermilion_Anciano_Bill_Texto_23:
	.string "Como usted guste, SR.BILL.$"

Vermilion_Cazabichos::
lock
delay 15
msgbox Vermilion_Cazabichos_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Vermilion_Cazabichos_Move_2
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Vermilion_Cazabichos_Move_3
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Vermilion_Cazabichos_Move_5
applymovement 13, Vermilion_Cazabichos_Move_4
waitmovement 0x0
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Vermilion_Cazabichos_Move_4.1
waitmovement 0x0
special RemoveCameraObject
msgbox Vermilion_Cazabichos_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_6
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_1
waitmovement 0x0
setflag FLAG_HOENN_673
removeobject 13
playse SE_EXIT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Vermilion_Cazabichos_Move_4.2
waitmovement 0x0
special RemoveCameraObject
setvar VAR_SCOTT_STATE, 2
release
end

Vermilion_Cazabichos_Move_4.1:
walk_up
step_end

Vermilion_Cazabichos_Move_4.2:
walk_down
step_end

Vermilion_Cazabichos_Move_6:
face_down
step_end

Vermilion_Cazabichos_Move_5:
walk_down
walk_left
walk_left
face_up
step_end

Vermilion_Cazabichos_Move_4:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
face_right
step_end

Vermilion_Cazabichos_Move_3:
face_left
step_end

Vermilion_Cazabichos_Move_2:
face_player
step_end

Vermilion_Cazabichos_Move_1:
face_right
delay_16
walk_in_place_right
step_end

Vermilion_Cazabichos_Texto_1:
	.string "Look at those rats…$"

Vermilion_Cazabichos_Texto_2:
	.string "They hid the door so no one would ask\n"
	.string "questions.$"

Vermilion_Cazabichos_Texto_3:
	.string "But I know every inch of my house.$"

Vermilion_Cazabichos_Texto_4:
	.string "Ha! Just as I thought. Those gorillas\n"
	.string "didn't even see it.$"

Vermilion_Cazabichos_Texto_5:
	.string "… …$"

Vermilion_Cazabichos_Texto_6:
	.string "I ain't a good TRAINER, but if lending\n"
	.string "you a helping hand would make a\n"
	.string "difference, I'll do it.$"

Vermilion_Cazabichos_Texto_7:
	.string "Those last announcements LANCE made\n"
	.string "made me lose my faith.$"

Vermilion_Cazabichos_Texto_8:
	.string "But now that I see you here, I realized\n"
	.string "we have one last resort: using sheer\n"
	.string "force.$"


Vermilion_Activador_Entrada::
compare VAR_SCOTT_STATE, 1
goto_if_gt Vermilion_Activador_Entrada_Pasa
release
end

Vermilion_Activador_Entrada_Pasa::
delay 15
msgbox Vermilion_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Vermilion_Activador_Entrada_Pasa_No
warp MAP_VERMILION_CITY_SECUNDARIA, 0, 2
release
end

Vermilion_Activador_Entrada_Texto_1:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Vermilion_Activador_Entrada_Pasa_Text_YesNo:
	.string "You can access the house via this\n"
	.string "passage. Wanna go though?$"

Vermilion_Activador_Entrada_Pasa_No::
release
end
