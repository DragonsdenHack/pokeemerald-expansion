.set LOCALID_LUGIA, 1

NavelRock_Bottom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Bottom_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Bottom_OnResume
	.byte 0

NavelRock_Bottom_OnTransition:
	call_if_set FLAG_CAUGHT_LUGIA, NavelRock_Bottom_EventScript_HideLugia
	call_if_unset FLAG_CAUGHT_LUGIA, NavelRock_Bottom_EventScript_TryShowLugia
	end

NavelRock_Bottom_EventScript_HideLugia::
	setflag FLAG_HIDE_LUGIA
	return

NavelRock_Bottom_EventScript_TryShowLugia::
	goto_if_set FLAG_DEFEATED_LUGIA, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_LUGIA
	return

NavelRock_Bottom_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Bottom_EventScript_TryRemoveLugia
	end

NavelRock_Bottom_EventScript_TryRemoveLugia::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_LUGIA
	return

NavelRock_Bottom_EventScript_Lugia::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_LUGIA
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Bottom_EventScript_DefeatedLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Bottom_EventScript_RanFromLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Bottom_EventScript_RanFromLugia
	setflag FLAG_CAUGHT_LUGIA
	release
	end

NavelRock_Bottom_EventScript_DefeatedLugia::
	setflag FLAG_DEFEATED_LUGIA
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_EventScript_RanFromLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_Combate_Lugia::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LUGIA
addobject 1
delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_LUGIA
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
setvar VAR_TEMP_1, 1
special SpawnCameraObject
setvar VAR_0x8004, 4  @ num loops
setvar VAR_0x8005, 35 @ delay
applymovement 1, NavelRock_Top_Movement_HoOhAppear
applymovement 1, LugiaBattle_Move_1
applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
waitmovement 0
setvar VAR_0x8004, 4  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
	applymovement 1, NavelRock_Top_Movement_HoOhApproach
	waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_3
applymovement 1, LugiaBattle_Move_2
waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_4
waitmovement 0
special RemoveCameraObject
delay 40
	msgbox NavelRock_Bottom_Combate_Lugia_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LUGIA, NavelRock_Bottom_Combate_Lugia_Texto_2
playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LUGIA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_BANG
waitse
delay 30
msgbox NavelRock_Bottom_Combate_Lugia_Texto_4 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PC_OFF
waitse
delay 30
playse SE_EXIT
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 2
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
waitse
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_7
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_8
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox NavelRock_Bottom_Combate_Lugia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.1
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.2
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8.2 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_7.3
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_9
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_6
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.4
waitmovement 0x0
delay 10
removeobject 2
playse SE_EXIT
waitse
setvar VAR_ROUTE106_STATE, 4
setvar VAR_UNUSED_0x40F7, 111
release
end

NavelRock_Bottom_Combate_Lugia_Move_7.4:
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.1:
face_left
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.2:
face_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.3:
walk_in_place_down
step_end

NavelRock_Bottom_Combate_Lugia_Texto_1:
	.string "-Wild LUGIA wants to fight!-$"

NavelRock_Bottom_Combate_Lugia_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}$"

NavelRock_Bottom_Combate_Lugia_Texto_3:
	.string "-Wild Lugia vanished before\n"
	.string "it could be catched.-$"

NavelRock_Bottom_Combate_Lugia_Texto_4:
	.string "-Looks like there's been a big\n"
	.string "eartquake somewhere far away.-$"

NavelRock_Bottom_Combate_Lugia_Texto_5:
.string "ANDRA: {PLAYER}!{PAUSE 55}\p"
	.string "You won't believe it!{PAUSE 35}\p"
	.string "I was wrapping up my research in\n"
	.string "the TANOBY CHAMBERS when the MONEAN\l"
	.string "CHAMBER…$"

NavelRock_Bottom_Combate_Lugia_Texto_5.1:
	.string "Boom! Starts shaking like crazy, and\n"
	.string "a secret passage opens up! It looks\l"
	.string "like it goes even further east! I'm\l"
	.string "gonna go check it out, {PLAYER}!\p"
	.string "If you wanna come see it too,\n"
	.string "now's the time!$"

NavelRock_Bottom_Combate_Lugia_Texto_6:
	.string "GIOVANNI: Did you defeat LUGIA?$"

NavelRock_Bottom_Combate_Lugia_Texto_7:
	.string "I understand. Similar to what happened\n"
	.string "to me, LUGIA also vanished immediately\l"
	.string "after its defeat, making it impossible\l"
	.string "to catch.$"

NavelRock_Bottom_Combate_Lugia_Texto_8:
	.string "They're both gone, yes{PAUSE 15}…{PAUSE 15}…{PAUSE 15} But I think\n"
	.string "we've triggered something important,\l"
	.string "after we were able to defeat them, that\l"
	.string "earthquake{PAUSE 15}…{PAUSE 15}$"

NavelRock_Bottom_Combate_Lugia_Texto_8.1:
	.string "I got a call from our JOHTO HQ, saying it\n"
	.string "seems to have gone down there. Maybe\l"
	.string "this means LUGIA and HO-OH are coming\l"
	.string "back to their old original places.$"

NavelRock_Bottom_Combate_Lugia_Texto_8.2:
	.string "Maybe to{PAUSE 25}…{PAUSE 25} hook up with the\n"
	.string "'ESSENCE POKÉMON'?$"

NavelRock_Bottom_Combate_Lugia_Texto_9:
.string "Wait, what?{PAUSE 45}\p"
	.string "ANDRA was also poking around the\n"
	.string "TANOBY CHAMBERS, and also a passage\l"
	.string "opens up right in the main chamber?$"

NavelRock_Bottom_Combate_Lugia_Texto_10:
	.string "So there were two earthquakes.\n"
	.string "Maybe something hidden in JOHTO got\l"
	.string "uncovered, perhaps LUGIA and HO-OH\l"
	.string "went back there.\p"
	.string "We must check it out.$"

NavelRock_Bottom_Combate_Lugia_Texto_11:
.string "Go with ANDRA, {PLAYER}.\n"
	.string "I'll check out what happened in JOHTO.\l"
	.string "We need to figure this out.$"

NavelRock_Bottom_Combate_Lugia_Move_1:
emote_exclamation_mark
step_end

NavelRock_Bottom_Combate_Lugia_Move_2:
delay_4
delay_4
walk_in_place_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_3:
walk_up
walk_up
walk_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_4:
delay_4
delay_4
walk_down
walk_down
walk_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_4
delay_4
step_end

NavelRock_Bottom_Combate_Lugia_Move_6:
face_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_7:
face_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_8:
walk_left
walk_left
walk_left
walk_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_9:
walk_fast_up
step_end

LugiaBattle_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LugiaBattle_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LugiaBattle_Move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LugiaBattle_Move_4:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

