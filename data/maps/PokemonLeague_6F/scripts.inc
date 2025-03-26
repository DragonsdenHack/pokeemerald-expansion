PokemonLeague_6F_MapScripts::
	.byte 0

PokemonLeague_6F_Final_Centro::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Der::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.1
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Izq::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final::
delay 15
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_5
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4.1
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_4.2
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_4.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_8
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_6.1
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_9
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 20
applymovement 2, PokemonLeague_6F_Final_Move_10
waitmovement 0x0
delay 30
msgbox PokemonLeague_6F_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 30
trainerbattle_no_intro TRAINER_ROJO_2, PokemonLeague_6F_Final_Texto_22
delay 20
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_23 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_11
applymovement 2, PokemonLeague_6F_Final_Move_12
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_25 MSGBOX_AUTOCLOSE
playse MUS_DUMMY
delay 20
msgbox PokemonLeague_6F_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 40
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
addobject 3
playse SE_PIN
delay 40
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
waitmovement 0x0
applymovement 3, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse MUS_HALL_OF_FAME_ROOM
applymovement 1, PokemonLeague_6F_Final_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_15
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_16
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, PokemonLeague_6F_Final_Move_17
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_29 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_17.4
applymovement 1, PokemonLeague_6F_Final_Move_17.5
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_32 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_33 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_35 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
applymovement 3, PokemonLeague_6F_Final_Move_20
applymovement 1, PokemonLeague_6F_Final_Move_21
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_8
applymovement 2, PokemonLeague_6F_Final_Move_22
waitmovement 0x0
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 7, 2, 0x248, TRUE
setmetatile 7, 1, 0x240, TRUE
setmetatile 8, 2, 0x16B, TRUE
setmetatile 8, 1, 0x299, TRUE
setmetatile 9, 1, 0x240, TRUE
setmetatile 9, 2, 0x248, TRUE
special DrawWholeMapView
delay 30
applymovement 3, PokemonLeague_6F_Final_Move_24
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_23
waitmovement 0x0
special RemoveCameraObject
playse SE_EXIT
delay 30
applymovement 1, PokemonLeague_6F_Final_Move_25
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
addobject 3
waitse
delay 10
playse SE_PIN
special SpawnCameraObject
applymovement 3, PokemonLeague_6F_Final_Move_27
applymovement 1, PokemonLeague_6F_Final_Move_26
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_28
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonLeague_6F_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_38 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_39 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_39.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_41 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_41.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_43 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_45 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_30
waitmovement 0x0
waitse
delay 10
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
msgbox PokemonLeague_6F_Final_Texto_46 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LANCE_2, PokemonLeague_6F_Final_Texto_47
playse MUS_RG_VICTORY_GYM_LEADER
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
msgbox PokemonLeague_6F_Final_Texto_48 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_49 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
addobject 4
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
applymovement 2, PokemonLeague_6F_Final_Move_13
applymovement 3, PokemonLeague_6F_Final_Move_13
applymovement 4, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse 567
msgbox PokemonLeague_6F_Final_Texto_50 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_31
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_51 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_THROW
waitse
delay 10
playse SE_BALL_TRAY_EXIT
msgbox PokemonLeague_6F_Final_Texto_52 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_53 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_54 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_55 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, PokemonLeague_6F_Final_Move_28
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_56 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_58 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_33
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
setflag FLAG_NUEVA_854
clearflag FLAG_UNUSED_0x26E
setvar VAR_UNUSED_0x40F7, 94
dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
delay 40
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

PokemonLeague_6F_Final_Move_1.1:
emote_exclamation_mark
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_29.2:
face_left
step_end

PokemonLeague_6F_Final_Move_29.1:
face_down
step_end

PokemonLeague_6F_Final_Move_27.2:
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_left
delay_16
delay_8
face_up
step_end

PokemonLeague_6F_Final_Move_27.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_17.4:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_17.5:
jump_in_place_down
step_end

PokemonLeague_6F_Final_Move_17.1:
face_up
step_end

PokemonLeague_6F_Final_Move_17.2:
face_right
step_end

PokemonLeague_6F_Final_Move_17.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

PokemonLeague_6F_Final_Move_6.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_4.3:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_7.1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_4.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

PokemonLeague_6F_Final_Move_4.2:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Texto_1:
	.string "-OAK finished entering RED's data in the\n"
	.string "HALL OF FAME.-$"

PokemonLeague_6F_Final_Texto_2:
	.string "OAK: It is official now, you are the new\n"
	.string "CHAMPION, you accomplished the purpose\l"
	.string "that you were created for.$"

PokemonLeague_6F_Final_Texto_3:
.string "OAK: …$"

PokemonLeague_6F_Final_Texto_4:
	.string "OAK: I know why you are here, ROCKET,\n"
	.string "you think crowning you as the CHAMPION\l"
	.string "you will gain enough influence to clean\l"
	.string "up the image of TEAM ROCKET and\l"
	.string "restore autonomy to the population of\l"
	.string "KANTO.$"

PokemonLeague_6F_Final_Texto_5:
	.string "I know perfectly your BOSS, wanted to\n"
	.string "save the region at his own way and just\l"
	.string "brought ruin.$"

PokemonLeague_6F_Final_Texto_6:
	.string "He and his silly followers didn't realize\n"
	.string "that they approached everything the\l"
	.string "wrong way; creating a POKÉMON with\l"
	.string "overwhelming and uncontrollable power\l"
	.string "results in exactly that:\p"
	.string "Being unable to control it.$"

PokemonLeague_6F_Final_Texto_7:
	.string "Instead, we left unexplored the most\n"
	.string "crucial aspect in the equation that\l"
	.string "leads to victory in battles.$"

PokemonLeague_6F_Final_Texto_8:
	.string "An unbeatable TRAINER, capable of\n"
	.string "independently making the best possible\l"
	.string "decisions regarding POKÉMON capture,\l"
	.string "battle strategy, training, and\l"
	.string "allocation of items and moves, able to\l"
	.string "maximize a team of 6 POKÉMON with the\l"
	.string "available resources.$"

PokemonLeague_6F_Final_Texto_9:
	.string "Is not that much better than depending\n"
	.string "on just one overpowered POKÉMON.\p"
	.string "That would be managed by the clumsy\n"
	.string "hands of a human susceptible to\l"
	.string "failure?$"

PokemonLeague_6F_Final_Texto_10:
	.string "To all the rest of mortals, RED will be\n"
	.string "considered unreachable, since he is the\l"
	.string "limit, I personally made sure he covers\l"
	.string "every possible variable that could\l"
	.string "affect a battle, he is the perfect\l"
	.string "combination of technology and\l"
	.string "humanity.$"
	
PokemonLeague_6F_Final_Texto_10.1:
	 .string "But{PAUSE 25}…{PAUSE 25} most importantly{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_11:
	.string "Unlike MEWTWO, all its potential, the\n"
	.string "possibilities that it offers and its\l"
	.string "resources, is purposeless, no\l"
	.string "questions, RED is just an empty shell,\l"
	.string "prepared to be replaced by anyone.$"

PokemonLeague_6F_Final_Texto_11.1:
	.string "You're right, ROCKET.\p"
	.string "Thereby enabling RED to assume the\n"
	.string "purpose of whoever handles him like\l"
	.string "a simple puppet.$"

PokemonLeague_6F_Final_Texto_12:
	.string "You will understand then, the\n"
	.string "importance of having something like him\l"
	.string "with these characteristics, in a world\l"
	.string "where absolutely everyone, as a\l"
	.string "universal principle, shuts up in front\l"
	.string "of you if you can defeat them in a\l"
	.string "battle; becoming the CHAMPION of this\l"
	.string "silly game holds the same weight as the\l"
	.string "GOVERNOR himself.$"

PokemonLeague_6F_Final_Texto_12.1:
	.string "That means{PAUSE 15}…{PAUSE 15} whoever controls RED\l"
	.string "has the power to change everything, to\l"
	.string "adapt to any situation, and ultimately\l"
	.string "emerge victorious at the end of the\l"
	.string "day. There is no escape possibility.$"

PokemonLeague_6F_Final_Texto_13:
	.string "Don't you notice? No one, not even\n"
	.string "LANCE, would win against a RED\l"
	.string "long-term, exposed to enough\l"
	.string "stimulus to perfect his team.$"

PokemonLeague_6F_Final_Texto_14:
	.string "Do you think that I do not want to use\n"
	.string "it for saving KANTO from LANCE tyranny?\p"
	.string "If not for starting my own dictature?$"

PokemonLeague_6F_Final_Texto_15:
	.string "Not even god has an answer for that\n"
	.string "question, ROCKET, you would not have\l"
	.string "a way to know it.$"

PokemonLeague_6F_Final_Texto_16:
	.string "So you want to stop me, even after\n"
	.string "all you have heard.$"

PokemonLeague_6F_Final_Texto_17:
	.string "Quite typical of criminals like you, they\n"
	.string "think they are free, with a choice\l"
	.string "capacity and an entire world full of\l"
	.string "possibilities at their feet, until\l"
	.string "reality knocks them down with a single\l"
	.string "stroke, without even giving them time\l"
	.string "to understand what has happened, just\l"
	.string "like the insect that is crushed in a\l"
	.string "second fraction.$"

PokemonLeague_6F_Final_Texto_18:
	.string "Excuse RED, entering the HALL OF FAME\n"
	.string "was his unique purpose. Beyond that,\l"
	.string "and once his purpose is finished,\l"
	.string "nothing that occurs afterward can be\l"
	.string "retained in his memory, it simply does\l"
	.string "not exist for him. Nevertheless, he\l"
	.string "keeps his combat functions.$"

PokemonLeague_6F_Final_Texto_19:
	.string "No one has even been close to\n"
	.string "defeating him. If that's what you want,\l"
	.string "you'll get what you're looking for,\l"
	.string "you're merely another pawn that I'll\l"
	.string "have to silence following our ridiculous\l"
	.string "combat code.$"

PokemonLeague_6F_Final_Texto_20:
	.string "Go ahead ROCKET. Face the wall that you\n"
	.string "will never surpass no matter how much\l"
	.string "you effort!$"

PokemonLeague_6F_Final_Texto_21:
.string "RED: …$"

PokemonLeague_6F_Final_Texto_22:
.string "…!$"

PokemonLeague_6F_Final_Texto_23:
.string "NO!\p"
	.string "IMPOSIBLE!\p"
	.string "INCONCEIVABLE!$"

PokemonLeague_6F_Final_Texto_24:
	.string "You must not have won! RED was made\n"
	.string "specifically for this! There is not any\l"
	.string "possible way that you could have\l"
	.string "defeated him with your resources that\l"
	.string "you have and the POKÉMON that you can\l"
	.string "catch in KANTO!$"

PokemonLeague_6F_Final_Texto_25:
.string "There isn't any other possible explanation!\p"
	.string "YOU!\p"
	.string "You…!$"

PokemonLeague_6F_Final_Texto_26:
.string "????: We had a deal, OAK.$"

PokemonLeague_6F_Final_Texto_27:
.string "OAK: Oh{PAUSE 25},{PAUSE 25} LANCE{PAUSE 25}…{PAUSE 15}\p"
	.string "I{PAUSE 25}-{PAUSE 25}was{PAUSE 25}…{PAUSE 25}\p"
	.string "Was{PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_28:
	.string "LANCE: -A Trainer beyond reach,\n"
	.string "unbeatable by anyone, capable of\l"
	.string "guaranteeing us a CHAMPION aligned\l"
	.string "with our interests, impossible to\l"
	.string "overthrow, and who will maintain said\l"
	.string "position for as long as we desire-.$"

PokemonLeague_6F_Final_Texto_29:
	.string "That were your words, OAK, when you\n"
	.string "convinced me to re-open the chance\l"
	.string "to win the LEAGUE CHAMPIONSHIP.$"

PokemonLeague_6F_Final_Texto_30:
	.string "You presented it to me as a way to bring\n"
	.string "back the illusion and hope to KANTO,\l"
	.string "along with a method to gain that\l"
	.string "difficult loyalty and trust in the\l"
	.string "system.$"

PokemonLeague_6F_Final_Texto_30.1:
	.string "Yes, a brilliant strategy, OAK; this\n"
	.string "way, we could achieve our goals without\l"
	.string "getting deeply involved, as the LEAGUE\l"
	.string "CHAMPIONSHIP would be little more than\l"
	.string "an illusion for any citizen, already\l"
	.string "overwhelmed by the hard work routine.$"

PokemonLeague_6F_Final_Texto_30.2:
	.string "Preventing them from excelling in\n"
	.string "anything beyond their daily lives…$"

PokemonLeague_6F_Final_Texto_30.3:
	.string "Especially with a TRAINER like RED, a\n"
	.string "symbol of perfection and the ultimate\l"
	.string "strategist in combat.\p"
	.string "Defeating him, then, must be a\n"
	.string "statistically impossible feat to\l"
	.string "achieve in the current KANTO.$"

PokemonLeague_6F_Final_Texto_31:
	.string "It appears, OAK, that it hasn't even\n"
	.string "been a citizen who has surpassed your\l"
	.string "mastermind experiment.$"

PokemonLeague_6F_Final_Texto_31.1:
	.string "A ROCKET, OAK!\p"
	.string "HAS BEEN A ROCKET!$"

PokemonLeague_6F_Final_Texto_31.2:
	.string "Perhaps you underestimated the\n"
	.string "effects of that excessive work you\l"
	.string "spoke of as a performance inhibitor,\l"
	.string "at least for those capable of surviving\l"
	.string "it and redirecting it in the correct\l"
	.string "direction.$"

PokemonLeague_6F_Final_Texto_32:
	.string "OAK: Lemme{PAUSE 15}…{PAUSE 15} let you explain{PAUSE 25}…{PAUSE 25} MR.LANCE{PAUSE 15}…{PAUSE 15}\p"
	.string "RED was not ready yet, still needs\n"
	.string "to be exposed at…$"

PokemonLeague_6F_Final_Texto_33:
	.string "LANCE: I've had enough of listening to\n"
	.string "you talk, OAK, I don't want assumptions.\p"
	.string "I want results.\n"
	.string "We'll handle this in my own way.$"

PokemonLeague_6F_Final_Texto_34:
	.string "I should've advised myself that\n"
	.string "such a thing might happen with you.$"

PokemonLeague_6F_Final_Texto_34.1:
	.string "When I employed a stronger team than\n"
	.string "the one I used against the other 3\l"
	.string "competitors, to quickly remove you from\l"
	.string "the competition, and still you came out\l"
	.string "unscathed.$"

PokemonLeague_6F_Final_Texto_34.2:
	.string "But don't worry.\p"
	.string "I won't repeat that mistake.$"

PokemonLeague_6F_Final_Texto_35:
.string "OAK: Wh{PAUSE 15}-{PAUSE 15}what are you{PAUSE 15}…{PAUSE 15} going to do?$"

PokemonLeague_6F_Final_Texto_36:
.string "OAK: We a{PAUSE 15}-{PAUSE 15}are doomed{PAUSE 15}…{PAUSE 15}\p"
	.string "He is{PAUSE 15}…{PAUSE 15}\p"
	.string "Going to{PAUSE 15}…{PAUSE 15}\p"
	.string "Release the beas…$"

PokemonLeague_6F_Final_Texto_37:
	.string "LANCE: CHAMPION, GOVERNOR{PAUSE 15}…{PAUSE 15}\p"
	.string "Just words, who has the power\n"
	.string "rules the world.$"

PokemonLeague_6F_Final_Texto_38:
	.string "Why do you think people love and\n"
	.string "venerate that much  both LEGENDARIES\l"
	.string "and PSEUDOLEGENDARIES?\p"
	.string "We don't care where they come from.\p"
	.string "Only thing that we care about is; that\n"
	.string "compared to the rest of POKÉMON, they\l"
	.string "have a great and exceptional unique\l"
	.string "power.$"

PokemonLeague_6F_Final_Texto_39:
	.string "That's where its magic lies, in the\n"
	.string "unknown of that power, and in this case,\l"
	.string "it's inaccessible to the rest.$"
	
PokemonLeague_6F_Final_Texto_39.1:
	.string "As far as I know, science has not yet\n"
	.string "managed to reproduce the miraculous\l"
	.string "combination capable of emulate the\l"
	.string "power of a LEGENDARY POKÉMON.$"

PokemonLeague_6F_Final_Texto_40:
	.string "So many years of hard work to discover\n"
	.string "better fruits in nature, OAK.$"

PokemonLeague_6F_Final_Texto_40.1:
	.string "You were foolish to believe you could\n"
	.string "play with the rules of the game better\l"
	.string "than the creator of those rules.$"

PokemonLeague_6F_Final_Texto_41:
	.string "I will do what I should have done a\n"
	.string "long time ago: govern this region\l"
	.string "with no mercy.$"

PokemonLeague_6F_Final_Texto_41.1:
	.string "YES! Who better than me, LANCE?\p"
	.string "The greatest expert in the most sacred\n"
	.string "and powerful type that exists: the\l"
	.string "DRAGON TYPE, to assume that role.$"

PokemonLeague_6F_Final_Texto_42:
	.string "Concerning you, ROCKET.\p"
	.string "That's simple: after crushing you like\n"
	.string "a simple insect, I will publicly expose\l"
	.string "whatever is left of you and your team,\l"
	.string "as an example and a warning of what\l"
	.string "awaits anyone daring to show the\l"
	.string "slightest insubordination against\l"
	.string "my government.$"

PokemonLeague_6F_Final_Texto_43:
	.string "But, be positive.\p"
	.string "You shall be remembered as the one\n"
	.string "that made 'LANCE I' use his sacred\l"
	.string "POKÉMON just before the dawn of the\l"
	.string "new era of his reign…$"

PokemonLeague_6F_Final_Texto_44:
.string "LANCE: {PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_45:
	.string "{PAUSE 15}…{PAUSE 15} There is no honor in beating up\n"
	.string "an opponent weakened by the hard way\l"
	.string "to this room: I want you to see how I\l"
	.string "crush your team at ist's peak.\p"
	.string "You'll understand once and for all\n"
	.string "that there are powers that mortals\l"
	.string "like you can only bow to them.$"

PokemonLeague_6F_Final_Texto_46:
	.string "I AM THE STATE!!$"

PokemonLeague_6F_Final_Texto_47:
.string "My dragons!\p"
	.string "My sacred beasts!\p"
	.string "How?$"

PokemonLeague_6F_Final_Texto_48:
	.string "LANCE: This can't be! No one had stood a\n"
	.string "chance against my best POKÉMON; they\l"
	.string "are the best around! There's nothing\l"
	.string "stronger in the entire KANTO region!$"

PokemonLeague_6F_Final_Texto_49:
	.string "????: You are wrong, LANCE.$"

PokemonLeague_6F_Final_Texto_50:
	.string "GIOVANNI: Your ego and arrogance have\n"
	.string "led to your downfall; while you were\l"
	.string "complacent in the safety of a power\l"
	.string "whose origin you were unaware of{PAUSE 15}…{PAUSE 15}\p"
	.string "Others toiled tirelessly, we knew your\n"
	.string "limits and strove day by day to forge an\l"
	.string "even greater power.$"

PokemonLeague_6F_Final_Texto_51:
	.string "With no necessity feeding your power,\n"
	.string "it has weakened, and during this time,\l"
	.string "our greatest motivation was to\l"
	.string "challenge your tyranny.\p"
	.string "Now, it's time for you to return to\n"
	.string "the nature which belongs to it.$"

PokemonLeague_6F_Final_Texto_52:
.string "LANCE: NO! ENTEI, RAIKOU, SUICUNE!$"

PokemonLeague_6F_Final_Texto_53:
	.string "GIOVANNI: {PLAYER}! I never thought\n"
	.string "you could go this far. As soon as ANDRA\l"
	.string "notified me of the situation and your\l"
	.string "achievement in the HALL OF FAME, I\l"
	.string "chose to come personally, even at the\l"
	.string "risk of attracting media attention!\p"
	.string "You've proven the invaluable worth of\n"
	.string "properly trained POKÉMON, regardless\l"
	.string "of their origin, you have made them a\l"
	.string "totally champions, capable of\l"
	.string "overcoming any situation!$"

PokemonLeague_6F_Final_Texto_54:
	.string "Those who thought they had control\n"
	.string "over everything in their surroundings,\l"
	.string "simplifying the world to a simple\l"
	.string "equation.$"

PokemonLeague_6F_Final_Texto_55:
.string "OAK: …$"

PokemonLeague_6F_Final_Texto_56:
	.string "GIOVANNI: And whose who played the\n"
	.string "role of gods, thinking themselves\l"
	.string "superior to the rest simply by\l"
	.string "being born that way.$"

PokemonLeague_6F_Final_Texto_57:
	.string "{PLAYER}! You've proven that, in the\n"
	.string "end, nothing exceeds the action driven\l"
	.string "by an unbreakable will to achieve a\l"
	.string "top milestone!$"

PokemonLeague_6F_Final_Texto_58:
	.string "There is no doubt: only someone like\n"
	.string "you, deserves a place in the history\l"
	.string "books, immortalized in the HALL OF FAME!\p"
	.string "Nothing will be the same after this!$"

PokemonLeague_6F_Final_Move_1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.1:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.2:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_3:
face_left
step_end

PokemonLeague_6F_Final_Move_4:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_5:
walk_in_place_up
delay_1
delay_2
face_down
step_end

PokemonLeague_6F_Final_Move_6:
walk_slow_up
face_down
step_end

PokemonLeague_6F_Final_Move_7:
face_down
step_end

PokemonLeague_6F_Final_Move_8:
face_up
step_end

PokemonLeague_6F_Final_Move_9:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_10:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_11:
walk_fast_down
walk_fast_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_12:
walk_up
face_down
step_end

PokemonLeague_6F_Final_Move_13:
emote_exclamation_mark
face_down
step_end

PokemonLeague_6F_Final_Move_14:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_15:
slide_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_16:
delay_8
walk_slow_up
delay_16
walk_in_place_up
delay_8
step_end

PokemonLeague_6F_Final_Move_17:
delay_8
walk_slow_right
delay_16
walk_in_place_right
delay_8
step_end

PokemonLeague_6F_Final_Move_18:
walk_left
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_19:
delay_8
walk_slow_up
walk_slow_up
step_end

PokemonLeague_6F_Final_Move_20:
walk_right
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_21:
walk_right
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_22:
walk_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_23:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

PokemonLeague_6F_Final_Move_24:
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


PokemonLeague_6F_Final_Move_25:
walk_up
walk_left
walk_left
walk_left
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_26:
emote_exclamation_mark
face_right
step_end

PokemonLeague_6F_Final_Move_27:
walk_fast_down
walk_fast_left
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_28:
face_right
step_end

PokemonLeague_6F_Final_Move_29:
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_30:
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_31:
walk_up
step_end

PokemonLeague_6F_Final_Move_32:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_33:
walk_slow_up
walk_slow_right
walk_slow_up
walk_in_place_up
step_end
