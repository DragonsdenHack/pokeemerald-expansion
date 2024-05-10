NewMauville_Inside_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
	.byte 0

NewMauville_Inside_OnResume:
	call_if_eq VAR_TEMP_1, 1, NewMauville_Inside_EventScript_SetBarrierStateBlueButton
	call_if_eq VAR_TEMP_2, 1, NewMauville_Inside_EventScript_SetBarrierStateGreenButton
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_EventScript_TryRemoveVoltorb
	end

NewMauville_Inside_EventScript_TryRemoveVoltorb::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

NewMauville_Inside_OnTransition:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	call_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb1
	call_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb2
	call_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb3
	end

NewMauville_Inside_EventScript_ShowVoltorb1::
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
	return

NewMauville_Inside_EventScript_ShowVoltorb2::
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
	return

NewMauville_Inside_EventScript_ShowVoltorb3::
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
	return

NewMauville_Inside_OnLoad:
	call_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
	end

NewMauville_Inside_EventScript_BlueButton::
	lockall
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, 0
	playse SE_PIN
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
	special DrawWholeMapView
	releaseall
	end

NewMauville_Inside_EventScript_GreenButton::
	lockall
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 1
	playse SE_PIN
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
	special DrawWholeMapView
	releaseall
	end

NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
	return

NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
	return

NewMauville_Inside_EventScript_RedButton::
	lockall
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
	setvar VAR_NEW_MAUVILLE_STATE, 2
	releaseall
	end

NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
	special DrawWholeMapView
	return

NewMauville_Inside_EventScript_Generator::
	lockall
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, NewMauville_Inside_EventScript_GeneratorOff
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
	releaseall
	end

NewMauville_Inside_EventScript_GeneratorOff::
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
	releaseall
	end

NewMauville_Inside_EventScript_Voltorb1::
	lock
	faceplayer
	setwildbattle SPECIES_VOLTORB, 100, ITEM_NONE
	waitse
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb1
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb1
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb1
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
	release
	end

NewMauville_Inside_EventScript_DefeatedVoltorb1::
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
	goto Common_EventScript_RemoveStaticPokemon
	end

NewMauville_Inside_EventScript_Voltorb2::
	lock
	faceplayer
	setwildbattle SPECIES_VOLTORB, 100, ITEM_NONE
	waitse
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb2
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
	release
	end

NewMauville_Inside_EventScript_DefeatedVoltorb2::
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
	goto Common_EventScript_RemoveStaticPokemon
	end

NewMauville_Inside_EventScript_Voltorb3::
	lock
	faceplayer
	setwildbattle SPECIES_VOLTORB, 100, ITEM_NONE
	waitse
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NewMauville_Inside_EventScript_DefeatedVoltorb3
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewMauville_Inside_EventScript_DefeatedVoltorb3
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NewMauville_Inside_EventScript_DefeatedVoltorb3
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
	release
	end

NewMauville_Inside_EventScript_DefeatedVoltorb3::
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
	goto Common_EventScript_RemoveStaticPokemon
	end

NewMauville_Inside_Text_GeneratorRadiatingHeat:
	.string "The generator is radiating heat that\n"
	.string "can be felt even at a distance.\p"
	.string "It looks like it should be turned off\n"
	.string "as soon as possible.$"

NewMauville_Inside_Text_GeneratorQuietedDown:
	.string "The generator quieted down.$"

NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped:
	.string "{PLAYER} stepped on the switch.\p"
	.string "Click…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "The generator appears to have\n"
	.string "stopped…{PAUSE 5}$"

NewMauville_Inside_NPC9_Cientifico::
lock
faceplayer
msgbox NewMauville_Inside_NPC9_Cientifico_Texto_1 MSGBOX_NPC
release
end

NewMauville_Inside_NPC9_Cientifico_Texto_1:
	.string "La tecnología de esta CENTRAL es tan\n"
	.string "precaria comparada con la nuestra{PAUSE 5}…{PAUSE 5}$"

NewMauville_Inside_NPC12_Cientifico::
lock
faceplayer
msgbox NewMauville_Inside_NPC12_Cientifico_Texto_1 MSGBOX_NPC
release
end

NewMauville_Inside_NPC12_Cientifico_Texto_1:
	.string "La verdad es que, salvo su generador,\n"
	.string "hay muy poco rescatable de este lugar.$"

NewMauville_Inside_Move_1:
walk_in_place_up
step_end

NewMauville_Inside_Move_2:
delay_8
delay_8
face_left
delay_8
delay_8
delay_8
face_up
delay_8
step_end

NewMauville_Inside_Move_3:
delay_8
delay_8
face_left
delay_8
delay_8
delay_8
walk_slow_up
delay_8
step_end

NewMauville_Inside_Move_4:
delay_8
delay_8
face_left
delay_8
delay_8
walk_in_place_left
delay_8
step_end

NewMauville_Inside_Move_5:
delay_8
face_down
delay_8
delay_8
step_end

NewMauville_Inside_Move_6:
delay_8
walk_slow_down
step_end

NewMauville_Inside_Move_7:
walk_left
walk_up
step_end

NewMauville_Inside_Move_8:
delay_8
face_left
step_end

NewMauville_Inside_Move_9:
delay_8
walk_in_place_down
delay_8
face_left
step_end

NewMauville_Inside_Move_10:
face_down
step_end

NewMauville_Inside_Move_11:
walk_slow_up
step_end

NewMauville_Inside_Move_12:
walk_in_place_down
step_end

NewMauville_Inside_Move_13:
walk_in_place_up
step_end

NewMauville_Inside_Move_14:
walk_down
step_end

NewMauville_Inside_Move_15:
delay_8
delay_8
walk_slow_right
delay_8
walk_in_place_right
step_end

NewMauville_Inside_Move_16:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

NewMauville_Inside_Move_16.1:
delay_16
face_right
delay_16
delay_16
face_down
delay_16
delay_16
delay_16
face_left
step_end


NewMauville_Inside_Encuentro_Rasmus::
lock
applymovement OBJ_EVENT_ID_PLAYER, NewMauville_Inside_Move_1
waitmovement 0x0
delay 15
playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 25
playse SE_PC_OFF
waitse
delay 25
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_1 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_2
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_2 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_3
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_4
waitmovement 0x0
playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_BALL_TRADE
delay 15
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_5
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 16, NewMauville_Inside_Move_6
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NewMauville_Inside_Move_7
waitmovement 0x0
applymovement 16, NewMauville_Inside_Move_8
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_8 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_9
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_10
waitmovement 0x0
delay 10
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 16, NewMauville_Inside_Move_11
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_11 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_12
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NewMauville_Inside_Move_13
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_14 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_14
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_591, NewMauville_Inside_Encuentro_Rasmus_Texto_15
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_16 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_15
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_17 MSGBOX_AUTOCLOSE
applymovement 16, NewMauville_Inside_Move_14
waitmovement 0x0
msgbox NewMauville_Inside_Encuentro_Rasmus_Texto_18 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NewMauville_Inside_Move_16.1
applymovement 16, NewMauville_Inside_Move_16
waitmovement 0x0
setflag FLAG_HOENN_3
fadescreen 1
removeobject 16
removeobject 13
removeobject 14
removeobject 11
removeobject 9
removeobject 12
removeobject 15
removeobject 10
delay 20
fadescreen 0
setvar VAR_UNUSED_0x40F7, 226
release
end

NewMauville_Inside_Encuentro_Rasmus_Texto_1:
	.string "????: De nuevo se ha debilitado.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_2:
	.string "Estos ULTRAENTES… El singular reparto\n"
	.string "de STATS es muy interesante, pero no\l"
	.string "parecen dar para mucho más.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_3:
	.string "El inmenso ATAQUE ESPECIAL de\n"
	.string "XURKITREE es muy goloso, pero su\l"
	.string "proyección acaba ahí.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_4:
	.string "Al final los ADMIN de DEVON tendrán\n"
	.string "razón, la verdadera base para lograr\l"
	.string "STATS que se acerquen al límite\l"
	.string "absoluto está en los{PAUSE 15}…{PAUSE 15}$"

NewMauville_Inside_Encuentro_Rasmus_Texto_5:
	.string "Tú de nuevo.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_6:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 15}$"

NewMauville_Inside_Encuentro_Rasmus_Texto_7:
	.string "Reconozco que esa insistencia en\n"
	.string "perseguirnos me causa curiosidad.\l"
	.string "¿Crees que vas a lograr algo con ello?$"

NewMauville_Inside_Encuentro_Rasmus_Texto_8:
	.string "La única manera de entender un\n"
	.string "acontecimiento es causarlo tú mismo.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_9:
	.string "Aunque sepas que acabo de torturar a\n"
	.string "un XURKITREE para estimular su ATAQUE\l"
	.string "ESPECIAL, las consecuencias de ello\l"
	.string "escapan a tu comprensión.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_10:
	.string "Pretendéis detener a DEVON únicamente\n"
	.string "porque ignoráis nuestro verdadero\l"
	.string "poder, teméis que sea algo que ponga en\l"
	.string "duda vuestra futura hegemonía en el\l"
	.string "mundo POKÉMON, ¿no es así?$"

NewMauville_Inside_Encuentro_Rasmus_Texto_11:
	.string "Con eso ya sé todo lo que debo saber\n"
	.string "sobre la calidad de vuestra\l"
	.string "organización, estáis condenados al\l"
	.string "fracaso.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_12:
	.string "¿Y tú? ¿Temes el verdadero alcance de\n"
	.string "nuestros recursos?$"

NewMauville_Inside_Encuentro_Rasmus_Texto_13:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 15}$"

NewMauville_Inside_Encuentro_Rasmus_Texto_14:
	.string "Déjame comprobar eso que acabas de\n"
	.string "decir.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_15:
	.string "No es para tanto{PAUSE 5}…{PAUSE 5}$"

NewMauville_Inside_Encuentro_Rasmus_Texto_16:
	.string "Tu nivel de combate es admirable, no\n"
	.string "discutiré eso, pero{PAUSE 25}…{PAUSE 15}$"

NewMauville_Inside_Encuentro_Rasmus_Texto_17:
	.string "Sin todos los elementos necesarios en\n"
	.string "la ecuación, tu nivel eventualmente\l"
	.string "quedará relegado. Solo tienes que echar\l"
	.string "un vistazo al progreso de los últimos 3\l"
	.string "años, ahora todos se ríen de ese LANCE\l"
	.string "y sus antaño temidos dragones.$"

NewMauville_Inside_Encuentro_Rasmus_Texto_18:
	.string "DEVON tiene grandes planes entre\n"
	.string "manos, no puedo perder el tiempo con\l"
	.string "alguien que en el futuro próximo solo\l"
	.string "será otra reliquia.$"


NewMauville_Inside_EventScript_Primer_Cientifico::
	trainerbattle_single TRAINER_TRAINER_586, NewMauville_Inside_Text_PrimerCientificoIntro, NewMauville_Inside_Text_PrimerCientificoDefeat
	msgbox NewMauville_Inside_Text_PrimerCientificoPostBattle, MSGBOX_AUTOCLOSE
	end

NewMauville_Inside_EventScript_Segundo_Cientifico::
	trainerbattle_single TRAINER_TRAINER_587, NewMauville_Inside_Text_SegundoCientificoIntro, NewMauville_Inside_Text_SegundoCientificoDefeat
	msgbox NewMauville_Inside_Text_SegundoCientificoPostBattle, MSGBOX_AUTOCLOSE
	end

NewMauville_Inside_EventScript_Primer_Policia::
	trainerbattle_single TRAINER_TRAINER_588, NewMauville_Inside_Text_PrimerPoliciaIntro, NewMauville_Inside_Text_PrimerPoliciaDefeat
	msgbox NewMauville_Inside_Text_PrimerPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

NewMauville_Inside_EventScript_Segundo_Policia::
	trainerbattle_single TRAINER_TRAINER_589, NewMauville_Inside_Text_SegundoPoliciaIntro, NewMauville_Inside_Text_SegundoPoliciaDefeat
	msgbox NewMauville_Inside_Text_SegundoPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

NewMauville_Inside_EventScript_Tercer_Cientifico::
	trainerbattle_single TRAINER_TRAINER_590, NewMauville_Inside_Text_TercerCientificoIntro, NewMauville_Inside_Text_TercerCientificoDefeat
	msgbox NewMauville_Inside_Text_TercerCientificoPostBattle, MSGBOX_AUTOCLOSE
	end
