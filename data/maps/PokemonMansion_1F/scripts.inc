PokemonMansion_1F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_OnLoad
map_script MAP_SCRIPT_ON_RESUME, PokemonMansion_1F_OnResume
	.byte 0

PokemonMansion_1F_OnResume:
	call PokemonMansion_1F_SetupEscapeWarp
	end

PokemonMansion_1F_SetupEscapeWarp::
	setescapewarp MAP_CINNABAR_ISLAND, 8, 4
	return
	
PokemonMansion_1F_OnLoad::
	call_if_set FLAG_UNUSED_0x041, PokemonMansion_EventScript_PressSwitch_1F
	end	

PokemonMansion1F_1::
end



PokemonMansion1F_2::
end



PokemonMansion1F_3::
end



PokemonMansion1F_4::
end



PokemonMansion1F_5::
end



PokemonMansion1F_6::
lock
faceplayer
msgbox PokemonMansion1F_6_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion1F_6_Move_1
waitmovement 0x0
release
end

PokemonMansion1F_6_Move_1:
face_left
step_end

PokemonMansion1F_6_Texto_1:
	.string "Mind your own business, we're not doing\n"
	.string "anything irregular or anything like\l"
	.string "that, so disappear.$"



PokemonMansion1F_7::
lock
faceplayer
msgbox PokemonMansion1F_7_Texto_1 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion1F_7_Move_1
waitmovement 0x0
release
end

PokemonMansion1F_7_Move_1:
face_up
step_end

PokemonMansion1F_7_Texto_1:
	.string "Do you want something, ROCKET? Can't\n"
	.string "you see we're just two honest workers\l"
	.string "trying to make a living like everyone\l"
	.string "else? Don't waste any more of our time.$"



PokemonMansion1F_EventScript_Chico::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, PokemonMansion1F_Text_ChicoIntro, PokemonMansion1F_Text_ChicoDefeated
	msgbox PokemonMansion1F_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion1F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ANDREW, PokemonMansion1F_Text_CientificoIntro, PokemonMansion1F_Text_CientificoDefeated
	msgbox PokemonMansion1F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_1F_Ladrones_Centro::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0X0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0X0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5.1
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0x0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5.2
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones::
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement 7, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion_1F_Ladrones_Move_6
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_9 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_1F_Ladrones_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox PokemonMansion_1F_Ladrones_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_1, PokemonMansion_1F_Ladrones_Texto_11
applymovement 7, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion_1F_Ladrones_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox PokemonMansion_1F_Ladrones_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_2, PokemonMansion_1F_Ladrones_Texto_14
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_4
applymovement 7, PokemonMansion_1F_Ladrones_Move_4
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_16 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 8
applymovement 8, PokemonMansion_1F_Ladrones_Move_10
waitmovement 0x0
applymovement 6, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_17 MSGBOX_AUTOCLOSE
msgbox PokemonMansion_1F_Ladrones_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 8, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_19 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_11
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_20 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_12
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PokemonMansion_1F_Ladrones_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_119_SCOTT
trainerbattle_no_intro TRAINER_LADRON_3, PokemonMansion_1F_Ladrones_Texto_22
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_13
applymovement 7, PokemonMansion_1F_Ladrones_Move_14
waitmovement 0x0
playse SE_PIN
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 8, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement 6, PokemonMansion_1F_Ladrones_Move_9
applymovement 8, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
delay 15
playse MUS_OBTAIN_ITEM
additem ITEM_PROTEIN, 10
msgbox PokemonMansion_1F_Ladrones_Texto_25 MSGBOX_DEFAULT
waitse
delay 15
playse MUS_OBTAIN_ITEM
additem ITEM_RARE_CANDY, 3
msgbox PokemonMansion_1F_Ladrones_Texto_26 MSGBOX_DEFAULT
delay 15
playfanfare MUS_OBTAIN_TMHM
msgbox PokemonMansion_1F_Ladrones_Texto_27 MSGBOX_DEFAULT
givemon SPECIES_CHARMANDER, 5, ITEM_CHARCOAL
waitfanfare
playse SE_PIN
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_28 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_29 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox PokemonMansion_1F_Ladrones_Texto_30 MSGBOX_DEFAULT
waitse
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_16
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_31 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
fadescreen 1
removeobject 6
removeobject 7
removeobject 8
fadescreen 0
setvar VAR_UNUSED_0x4091, 2
release
end

PokemonMansion_1F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 0
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end
	
PokemonMansion_2F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 1
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_3F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 2
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end
	
PokemonMansion_B1F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 3
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end


@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
PokemonMansion_EventScript_SecretSwitch::
	msgbox PokemonMansion_Text_PressSecretSwitch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PokemonMansion_EventScript_DontPressSwitch
	msgbox PokemonMansion_Text_WhoWouldnt
	goto_if_set FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08, PokemonMansion_EventScript_ResetSwitch
	setflag FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08
	switch VAR_0x8004
	case 0, PokemonMansion_EventScript_PressSwitch_1F
	case 1, PokemonMansion_EventScript_PressSwitch_2F
	case 2, PokemonMansion_EventScript_PressSwitch_3F
	case 3, PokemonMansion_EventScript_PressSwitch_B1F
	end

PokemonMansion_EventScript_ResetSwitch::
	clearflag FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08
	switch VAR_0x8004
	case 0, PokemonMansion_EventScript_ResetSwitch_1F
	case 1, PokemonMansion_EventScript_ResetSwitch_2F
	case 2, PokemonMansion_EventScript_ResetSwitch_3F
	case 3, PokemonMansion_EventScript_ResetSwitch_B1F
	end

PokemonMansion_EventScript_DontPressSwitch::
	msgbox PokemonMansion_Text_NotQuiteYet
	releaseall
	end

PokemonMansion_EventScript_PressSwitch_1F::
	setmetatile 22, 10, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 23, 10, METATILE_PokemonMansion_Floor, 0
	setmetatile 24, 10, METATILE_PokemonMansion_Floor, 0
	setmetatile 22, 11, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 23, 11, METATILE_PokemonMansion_Floor, 0
	setmetatile 24, 11, METATILE_PokemonMansion_Floor, 0
	setmetatile 27, 25, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 28, 25, METATILE_PokemonMansion_Floor, 0
	setmetatile 29, 25, METATILE_PokemonMansion_Floor, 0
	setmetatile 27, 26, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 28, 26, METATILE_PokemonMansion_Floor, 0
	setmetatile 29, 26, METATILE_PokemonMansion_Floor, 0
	setmetatile 32, 25, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 33, 25, METATILE_PokemonMansion_Floor, 0
	setmetatile 34, 25, METATILE_PokemonMansion_Floor, 0
	setmetatile 32, 26, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 33, 26, METATILE_PokemonMansion_Floor, 0
	setmetatile 34, 26, METATILE_PokemonMansion_Floor, 0
	setmetatile 31, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 32, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 33, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 31, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 32, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 33, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile  5,  4, METATILE_PokemonMansion_Statue_RedEyes, 0
	return

PokemonMansion_EventScript_ResetSwitch_1F::
	setmetatile 22, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 23, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 24, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 22, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 23, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 24, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile 27, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 28, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 29, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 27, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 28, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 29, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile 32, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 33, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 34, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 32, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 33, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 34, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile 31, 18, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 32, 18, METATILE_PokemonMansion_Floor, 0
	setmetatile 33, 18, METATILE_PokemonMansion_Floor, 0
	setmetatile 31, 19, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 32, 19, METATILE_PokemonMansion_Floor, 0
	setmetatile 33, 19, METATILE_PokemonMansion_Floor, 0
	setmetatile  5,  4, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return

PokemonMansion_EventScript_PressSwitch_2F::
	setmetatile 24, 14, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 25, 14, METATILE_PokemonMansion_Floor, 0
	setmetatile 26, 14, METATILE_PokemonMansion_Floor, 0
	setmetatile 24, 15, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 25, 15, METATILE_PokemonMansion_Floor, 0
	setmetatile 26, 15, METATILE_PokemonMansion_Floor, 0
	setmetatile 10, 28, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
	setmetatile 10, 29, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
	setmetatile 10, 30, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 10, 31, METATILE_PokemonMansion_Floor, 0
	setmetatile 10, 32, METATILE_PokemonMansion_Wall_EndCap, 0
	setmetatile 12,  4, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
	setmetatile 12,  5, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
	setmetatile 12,  6, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
	setmetatile 12,  7, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
	setmetatile 12,  8, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
	setmetatile  2, 15, METATILE_PokemonMansion_Statue_RedEyes, 0
	return

PokemonMansion_EventScript_ResetSwitch_2F::
	setmetatile 24, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 25, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 26, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 24, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 25, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 26, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile 10, 28, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
	setmetatile 10, 29, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
	setmetatile 10, 30, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
	setmetatile 10, 31, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
	setmetatile 10, 32, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
	setmetatile 12,  4, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
	setmetatile 12,  5, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
	setmetatile 12,  6, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 12,  7, METATILE_PokemonMansion_Floor, 0
	setmetatile 12,  8, METATILE_PokemonMansion_Wall_EndCap, 0
	setmetatile  2, 15, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return

PokemonMansion_EventScript_PressSwitch_3F::
	setmetatile 17, 11, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 18, 11, METATILE_PokemonMansion_Floor, 0
	setmetatile 19, 11, METATILE_PokemonMansion_Floor, 0
	setmetatile 17, 12, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 18, 12, METATILE_PokemonMansion_Floor, 0
	setmetatile 19, 12, METATILE_PokemonMansion_Floor, 0
	setmetatile 21,  4, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
	setmetatile 21,  5, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
	setmetatile 21,  6, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
	setmetatile 21,  7, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
	setmetatile 21,  8, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
	setmetatile 12,  4, METATILE_PokemonMansion_Statue_RedEyes, 0
	return

PokemonMansion_EventScript_ResetSwitch_3F::
	setmetatile 17, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 18, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 19, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 17, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
	setmetatile 18, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
	setmetatile 19, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
	setmetatile 21,  4, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
	setmetatile 21,  5, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
	setmetatile 21,  6, METATILE_PokemonMansion_Floor_ShadeFull, 0
	setmetatile 21,  7, METATILE_PokemonMansion_Floor, 0
	setmetatile 21,  8, METATILE_PokemonMansion_Wall_EndCap, 0
	setmetatile 12,  4, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return

PokemonMansion_EventScript_PressSwitch_B1F::
	setmetatile 33, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 34, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 35, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 33, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft_Basement, 1
	setmetatile 34, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid_Basement, 1
	setmetatile 35, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight_Basement, 1
	setmetatile 16, 26, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
	setmetatile 16, 27, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
	setmetatile 16, 28, METATILE_PokemonMansion_Barrier_Vertical_MidShadow_Basement, 1
	setmetatile 16, 29, METATILE_PokemonMansion_Barrier_Vertical_Mid_Basement, 1
	setmetatile 16, 30, METATILE_PokemonMansion_Barrier_Vertical_Bottom_Basement, 1
	setmetatile 12,  8, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
	setmetatile 12,  9, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
	setmetatile 12, 10, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 12, 11, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 12, 12, METATILE_PokemonMansion_Wall_EndCap_Basement, 0
	setmetatile 20, 22, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 21, 22, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 22, 22, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 20, 23, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 21, 23, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 22, 23, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 24, 28, METATILE_PokemonMansion_Statue_RedEyes_Basement, 0
	setmetatile 27,  4, METATILE_PokemonMansion_Statue_RedEyes_Basement, 0
	return

PokemonMansion_EventScript_ResetSwitch_B1F::
	setmetatile 33, 20, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 34, 20, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 35, 20, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 33, 21, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 34, 21, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 35, 21, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 16, 26, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
	setmetatile 16, 27, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
	setmetatile 16, 28, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
	setmetatile 16, 29, METATILE_PokemonMansion_BasementFloor, 0
	setmetatile 16, 30, METATILE_PokemonMansion_Wall_EndCap_Basement, 0
	setmetatile 12,  8, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
	setmetatile 12,  9, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
	setmetatile 12, 10, METATILE_PokemonMansion_Barrier_Vertical_MidShadow_Basement, 1
	setmetatile 12, 11, METATILE_PokemonMansion_Barrier_Vertical_Mid_Basement, 1
	setmetatile 12, 12, METATILE_PokemonMansion_Barrier_Vertical_Bottom_Basement, 1
	setmetatile 20, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
	setmetatile 21, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
	setmetatile 22, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
	setmetatile 20, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft_Basement, 1
	setmetatile 21, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid_Basement, 1
	setmetatile 22, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight_Basement, 1
	setmetatile 24, 28, METATILE_PokemonMansion_Statue_BlackEyes_Basement, 0
	setmetatile 27,  4, METATILE_PokemonMansion_Statue_BlackEyes_Basement, 0
	return
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@	


PokemonMansion_Text_PressSecretSwitch:
.string "Es una puta estatua."
.string "$"	

PokemonMansion_Text_WhoWouldnt:
.string "¿Quién no lo haría?"
.string "$"

PokemonMansion_Text_NotQuiteYet:
.string "No."
.string "$"



PokemonMansion_1F_Ladrones_Texto_1:
	.string "We've got everything we need to get out\n"
	.string "of here for good!$"

PokemonMansion_1F_Ladrones_Texto_2:
	.string "Yeah, it's not wise to stay in KANTO any\n"
	.string "longer. We're too well-known here, and\l"
	.string "we've swindled too many people. We'll\l"
	.string "start a new chapter in JOHTO, even\l"
	.string "though its residents are somewhat less\l"
	.string "affluent than those here…{PAUSE 20}$"

PokemonMansion_1F_Ladrones_Texto_3:
	.string "Who are you? A ROCKET? Mind your own\n"
	.string "business. If your business isn't\l"
	.string "working out, it's not our problem.$"

PokemonMansion_1F_Ladrones_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

PokemonMansion_1F_Ladrones_Texto_5:
	.string "What are you saying? Do you want to\n"
	.string "retrieve the 2 million POKÉ we charged a\l"
	.string "scientist for a METEORITE?$"

PokemonMansion_1F_Ladrones_Texto_6:
	.string "That's all in the past. He should have\n"
	.string "realized it at the time, under the law,\l"
	.string "he can't do anything now because the\l"
	.string "deadline for claims has expired, we have\l"
	.string "his money now, legitimately, don't you\l"
	.string "understand? That's what it means to\l"
	.string "know the law well, kid, those who know it\l"
	.string "best are the ones who seem to be\l"
	.string "cheating.$"

PokemonMansion_1F_Ladrones_Texto_7:
	.string "Now get out of here. We're in the middle\n"
	.string "of moving out. Once we cross the border\l"
	.string "of MT. SILVER, KANTO's justice won't be\l"
	.string "able to touch us. We'll already be far\l"
	.string "away. Far away and loaded!$"

PokemonMansion_1F_Ladrones_Texto_8:
	.string "So you insist. You ROCKET guys are\n"
	.string "ignorant. Instead of acting in the\l"
	.string "shadows like us, you make your misdeeds\l"
	.string "public, and everyone media-blasts you\l"
	.string "for it.$"

PokemonMansion_1F_Ladrones_Texto_9:
	.string "What are you saying? Isn't it about\n"
	.string "stealing from people, but about\l"
	.string "gathering resources and sending a\l"
	.string "clear message to the KANTO region?$"

PokemonMansion_1F_Ladrones_Texto_10:
	.string "The last thing I need is a ROCKET giving\n"
	.string "me moral lessons! You're about to\l"
	.string "experience the power of the best\l"
	.string "POKEMON you can find on the black\l"
	.string "market!$"

PokemonMansion_1F_Ladrones_Texto_11:
.string "It can't be!\n"
	.string "I've been scammed!$"

PokemonMansion_1F_Ladrones_Texto_12:
	.string "They said these POKEMON could handle\n"
	.string "any ROUTE TRAINER, this won't finish\l"
	.string "like this.$"

PokemonMansion_1F_Ladrones_Texto_13:
	.string "So you're still insisting that we give\n"
	.string "you back that money, not only will we\l"
	.string "not give it back, but we'll also take the\l"
	.string "money you already have!$"

PokemonMansion_1F_Ladrones_Texto_14:
.string "Have I lost too?$"

PokemonMansion_1F_Ladrones_Texto_15:
	.string "Where did you buy those POKÉMON? I was\n"
	.string "told there were no better specimens\l"
	.string "left on the black market. It can't be!$"

PokemonMansion_1F_Ladrones_Texto_16:
	.string "Can I know what you're doing? We agreed\n"
	.string "to leave this place and head to JOHTO\l"
	.string "10 minutes ago.$"

PokemonMansion_1F_Ladrones_Texto_17:
	.string "This guy wants to get back the money\n"
	.string "that scientist paid us for the rock\l"
	.string "from MT. MOON.$"

PokemonMansion_1F_Ladrones_Texto_18:
.string "Wait a moment…{PAUSE 30}\n"
	.string "I've seen you before…{PAUSE 20}$"

PokemonMansion_1F_Ladrones_Texto_19:
	.string "The rookie ROCKET I fooled on MT. MOON!\n"
	.string "Haven't you had enough?$"

PokemonMansion_1F_Ladrones_Texto_20:
	.string "Maybe now you have a better idea of how\n"
	.string "things work here in KANTO, but you're\l"
	.string "still an amateur compared to us. Nobody\l"
	.string "surpasses us in cunning, in seizing the\l"
	.string "moment and striking when the most\l"
	.string "vulnerable victim is present.$"

PokemonMansion_1F_Ladrones_Texto_21:
	.string "For that, you need intelligence and\n"
	.string "intuition! And my intuition tells me\l"
	.string "that your team is too tired to handle\l"
	.string "another battle!$"

PokemonMansion_1F_Ladrones_Texto_22:
	.string "Where did you get that strength from?\n"
	.string "This wasn't part of our plans!$"

PokemonMansion_1F_Ladrones_Texto_23:
	.string "Damn it, don't think you'll get away with\n"
	.string "this, ROCKET. I fooled you once and I\l"
	.string "can do it again…{PAUSE 20}$"

PokemonMansion_1F_Ladrones_Texto_24:
.string "W-wait!\n"
	.string "Where the hell are you going?\l"
	.string "There's nothing there!$"

PokemonMansion_1F_Ladrones_Texto_25:
.string "{PLAYER} found 10 PROTEINS!$"

PokemonMansion_1F_Ladrones_Texto_26:
	.string "{PLAYER} found 3 RARE CANDIES!$"

PokemonMansion_1F_Ladrones_Texto_27:
	.string "{PLAYER} obtained a LV.5\n"
	.string "CHARMANDER!!$"

PokemonMansion_1F_Ladrones_Texto_28:
	.string "NO!! The CHARMANDER I was going to sell\n"
	.string "in JOHTO! They give 4 million POKÉ for it\l"
	.string "there!$"

PokemonMansion_1F_Ladrones_Texto_29:
	.string "What do you think you're doing,\n"
	.string "ROCKET?! Stop and…{PAUSE 20}!$"

PokemonMansion_1F_Ladrones_Texto_30:
	.string "{PLAYER} found the 2 million POKÉS\n"
	.string "stolen from the scientist!$"

PokemonMansion_1F_Ladrones_Texto_31:
	.string "It is enough! Don't think that you have\n"
	.string "won, ROCKET! Most of the commodities\l"
	.string "are already on the truck, way to JOHTO!$"

PokemonMansion_1F_Ladrones_Texto_32:
	.string "Someone like you will never visit JOHTO,\n"
	.string "so this is a for-ever-goodbye.\l"
	.string "Take pleasure in the poverty that\l"
	.string "afflicts this region, TEAM ROCKET!\l"
	.string "Poverty that we have helped create,\l"
	.string "hahaha!$"

PokemonMansion_1F_Ladrones_Move_1:
emote_exclamation_mark
step_end

PokemonMansion_1F_Ladrones_Move_2:
walk_in_place_down
step_end

PokemonMansion_1F_Ladrones_Move_3:
face_left
step_end

PokemonMansion_1F_Ladrones_Move_4:
face_right
step_end

PokemonMansion_1F_Ladrones_Move_5:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_5.1:
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_5.2:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_6:
walk_down
walk_right
walk_right
step_end

PokemonMansion_1F_Ladrones_Move_7:
walk_in_place_right
step_end

PokemonMansion_1F_Ladrones_Move_8:
walk_right
walk_right
walk_in_place_down
step_end

PokemonMansion_1F_Ladrones_Move_9:
face_up
step_end

PokemonMansion_1F_Ladrones_Move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_11:
walk_in_place_left
step_end

PokemonMansion_1F_Ladrones_Move_12:
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_13:
walk_up
step_end

PokemonMansion_1F_Ladrones_Move_14:
slide_left
walk_in_place_right
step_end

PokemonMansion_1F_Ladrones_Move_15:
walk_in_place_up
step_end

PokemonMansion_1F_Ladrones_Move_16:
face_down
step_end
