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
msgbox NavelRock_Bottom_Combate_Lugia_Texto_4 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_5 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 40
playse SE_EXIT
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 2
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_7
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_8
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox NavelRock_Bottom_Combate_Lugia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_9
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_6
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
removeobject 2
fadescreen 1
delay 20
fadescreen 0
setvar VAR_UNUSED_0x40F7, 111
release
end

NavelRock_Bottom_Combate_Lugia_Texto_1:
	.string "Wild LUGIA wants to fight!$"

NavelRock_Bottom_Combate_Lugia_Texto_2:
.string "...$"

NavelRock_Bottom_Combate_Lugia_Texto_3:
	.string "Wild Lugia vanished before it could be\n"
	.string "catched.$"

NavelRock_Bottom_Combate_Lugia_Texto_4:
	.string "Looks like there's been a big eartquake\n"
	.string "somewhere far away.$"

NavelRock_Bottom_Combate_Lugia_Texto_5:
	.string "ANDRA: {PLAYER}! You won't believe it!\n"
	.string "I was wrapping up my research in the\l"
	.string "TANOBY CHAMBERS, and boom, the MONEAN\l"
	.string "CHAMBER starts shaking like crazy, and\l"
	.string "a secret passage opens up! It looks\l"
	.string "like it goes even further east! I'm\l"
	.string "gonna go check it out, {PLAYER}! If\l"
	.string "you wanna come see it too, now's the\l"
	.string "time!$"

NavelRock_Bottom_Combate_Lugia_Texto_6:
	.string "GIOVANNI: Did you defeat LUGIA,\n"
	.string "{PLAYER}?$"

NavelRock_Bottom_Combate_Lugia_Texto_7:
	.string "I understand. Similar to what happened\n"
	.string "to me, LUGIA also vanished immediately\l"
	.string "after its defeat, making it impossible\l"
	.string "to catch.$"

NavelRock_Bottom_Combate_Lugia_Texto_8:
	.string "I got a call from our JOHTO HQ, saying it\n"
	.string "seems to have gone down there. Maybe\l"
	.string "this means LUGIA and HO-OH are heading\l"
	.string "back to their old stomping grounds,\l"
	.string "maybe to... hook up with that ESSENCE\l"
	.string "POKÉMON?$"

NavelRock_Bottom_Combate_Lugia_Texto_9:
	.string "Wait, what? ANDRA was poking around the\n"
	.string "TANOBY CHAMBERS, and boom, a passage\l"
	.string "opens up right in the main chamber?$"

NavelRock_Bottom_Combate_Lugia_Texto_10:
	.string "So there were two earthquakes. Maybe\n"
	.string "something hidden in JOHTO got\l"
	.string "uncovered. Perhaps LUGIA and HO-OH\l"
	.string "went back there. We should check it out.$"

NavelRock_Bottom_Combate_Lugia_Texto_11:
	.string "Go with ANDRA, {PLAYER}. I'll check\n"
	.string "out what happened in JOHTO. We need to\l"
	.string "figure this out.$"

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

