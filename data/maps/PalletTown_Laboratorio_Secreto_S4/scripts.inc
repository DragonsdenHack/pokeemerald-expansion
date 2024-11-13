PalletTown_Laboratorio_Secreto_S4_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_Laboratorio_Secreto_S4_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S4_OnFrame
	.byte 0

PalletTown_Laboratorio_Secreto_S4_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 55, PalletTown_Laboratorio_Secreto_S4_Gray
	.2byte 0

PalletTown_Laboratorio_Secreto_S4_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 56
end

PalletTown_Laboratorio_Secreto_S4_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 56, PalletTown_Laboratorio_Secreto_S4_Oak
	.2byte 0

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua::
lock
compare VAR_UNUSED_0x40F8, 36
goto_if_gt PalletTown_Laboratorio_Secreto_S4_Segunda_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 6, 17, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1
waitmovement 0x0
waitse
delay 10
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_722, PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_7
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 37
release
end

PalletTown_Laboratorio_Secreto_S4_Segunda_Estatua_Despues:
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_10 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_3:
	.string "'Simulador de combate avanzado VI.\n"
	.string "Nivel de dificultad: 10.'$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_4:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_5:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_6:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_8:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_9:
	.string "'Lo exclusivo es valioso.'$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua.\n"
	.string "Su contraseña era:\l"
	.string "'Lo exclusivo es valioso'$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 36
goto_if_gt PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Lo exclusivo es valioso'.$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 9, 14, 0x282, FALSE
setmetatile 9, 13, 0x282, FALSE
setmetatile 10, 15, 0x281, FALSE
setmetatile 10, 14, 0x281, FALSE
setmetatile 10, 13, 0x281, FALSE
setmetatile 11, 13, 0x281, FALSE
setmetatile 11, 14, 0x281, FALSE
setmetatile 11, 15, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end


PalletTown_Laboratorio_Secreto_S4_Llave::
delay 10
compare VAR_UNUSED_0x40F8, 37
goto_if_gt PalletTown_Laboratorio_Secreto_S4_Llave_Despues
msgbox PalletTown_Laboratorio_Secreto_S4_Llave_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S4_Llave_Texto_1:
	.string "Para abrir esta puerta parece\n"
	.string "necesaria una llave.$"

PalletTown_Laboratorio_Secreto_S4_Llave_Despues::
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 17, 4, 0x2E7, FALSE
setmetatile 18, 4, 0x2E6, FALSE
setmetatile 17, 5, 0x282, FALSE
setmetatile 18, 5, 0x282, FALSE
setmetatile 17, 6, 0x2B3, FALSE
setmetatile 18, 6, 0x2B4, FALSE
special DrawWholeMapView
delay 20
release
end

Laboratorio_S4_Eusine_Bill_Move_1:
emote_exclamation_mark
step_end

Laboratorio_S4_Eusine_Bill_Move_1.1:
emote_exclamation_mark
delay_8
face_down
step_end

Laboratorio_S4_Eusine_Bill_Move_2:
delay_16
face_down
step_end

Laboratorio_S4_Eusine_Bill_Move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_4:
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_4.1:
walk_right
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_5:
walk_in_place_up
step_end

Laboratorio_S4_Eusine_Bill_Move_5.1:
walk_in_place_down
step_end

Laboratorio_S4_Eusine_Bill_Move_5.2:
walk_slow_down
step_end

Laboratorio_S4_Eusine_Bill_Move_6:
face_right
step_end

Laboratorio_S4_Eusine_Bill_Move_7:
face_up
step_end

Laboratorio_S4_Eusine_Bill_Move_8:
delay_16
delay_8
face_up
step_end

Laboratorio_S4_Eusine_Bill_Move_9:
delay_16
face_left
delay_16
delay_16
walk_in_place_up
step_end

Laboratorio_S4_Eusine_Bill_Move_10:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_11:
walk_slow_down
walk_slow_down
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_11.1:
walk_up
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_12:
face_up
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

Laboratorio_S4_Eusine_Bill_Move_12.1:
face_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

Laboratorio_S4_Eusine_Bill_Move_13:
face_left
step_end

Laboratorio_S4_Eusine_Bill_Move_14:
walk_in_place_right
step_end

Laboratorio_S4_Eusine_Bill_Move_15:
walk_left
walk_down
walk_left
face_right
step_end

Laboratorio_S4_Eusine_Bill_Move_16:
delay_16
delay_16
delay_16
walk_in_place_up
delay_16
face_left
step_end

Laboratorio_S4_Eusine_Bill_Move_17:
walk_right
walk_down
delay_16
delay_16
face_left
step_end

Laboratorio_S4_Eusine_Bill_Move_18:
lock_facing_direction
walk_fast_left
unlock_facing_direction
step_end

Laboratorio_S4_Eusine_Bill_Move_19:
walk_slow_left
step_end

Laboratorio_S4_Eusine_Bill_Move_20:
walk_slow_right
step_end

Laboratorio_S4_Eusine_Bill_Move_21:
delay_16
face_down
delay_16
delay_8
face_right
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_22:
delay_16
face_right
delay_16
delay_8
face_down
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_23:
face_right
delay_16
walk_in_place_right
step_end

Laboratorio_S4_Eusine_Bill_Move_24:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

Laboratorio_S4_Eusine_Bill_Move_25:
face_left
delay_16
delay_8
face_right
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_26:
face_up
delay_16
delay_8
face_right
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_27:
delay_16
delay_8
face_right
delay_16
delay_16
face_up
delay_16
delay_16
step_end

Laboratorio_S4_Eusine_Bill_Move_28:
walk_right
walk_right
walk_up
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_29:
walk_right
face_up
step_end

Laboratorio_S4_Eusine_Bill::
lock
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_2 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_242
removeobject 3
delay 10
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM50
msgbox Laboratorio_S4_Eusine_Bill_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_4 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_283
addobject 4
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_2
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_S4_Eusine_Bill_Move_11
waitmovement 0x0
special RemoveCameraObject
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_3
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_4
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_6 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 15
addobject 5
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_3
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_4
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_5.2
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_5.1
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_6
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_6
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_7
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_6
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_8
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_9
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_19 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_20 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_21 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_1.1
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_1.1
waitmovement 0x0
waitse
delay 15
clearflag FLAG_HOENN_284
addobject 6
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_10
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_4.1
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_25 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_12
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_27 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5.1
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_30 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_6
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_12.1
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_31 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_32 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5.1
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_35 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_38 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_12.1
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_39 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_13
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_14
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_40 MSGBOX_AUTOCLOSE
delay 25
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_7
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_41 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_42 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_14
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_15
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_17
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_43 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_44 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_14
waitmovement 0x0
waitse
msgbox Laboratorio_S4_Eusine_Bill_Texto_45 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_242
setflag FLAG_HOENN_283
setflag FLAG_HOENN_284
choose_mons
multi_2_vs_2 1581, Laboratorio_S4_Eusine_Bill_Texto_46, 1582, Laboratorio_S4_Eusine_Bill_Texto_47, 1587, 6
switch VAR_RESULT
case 1, Laboratorio_S4_Eusine_Bill_Ganado
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
release
end

Laboratorio_S4_Eusine_Bill_Ganado::
delay 10
playse SE_PIN
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_48 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_242
playse SE_BREAKABLE_DOOR
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_18
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_49 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_23
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_50 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_51 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_52 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_19
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_53 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_54 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_55 MSGBOX_AUTOCLOSE
delay 25
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_20
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_56 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_21
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_57 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_7
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_2
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_58 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_5
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_S4_Eusine_Bill_Move_11.1
waitmovement 0x0
special RemoveCameraObject
msgbox Laboratorio_S4_Eusine_Bill_Texto_59 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_60 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_22
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_61 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_5.1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_23
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Laboratorio_S4_Eusine_Bill_Texto_62 MSGBOX_DEFAULT
waitfanfare
msgbox Laboratorio_S4_Eusine_Bill_Texto_63 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_24
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_64 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_25
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_65 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_26
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_66 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_13
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_20
waitmovement 0x0
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_67 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_68 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_27
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_27
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_27
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_28
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_70 MSGBOX_AUTOCLOSE
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_29
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_71 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Laboratorio_S4_Eusine_Bill_Texto_72 MSGBOX_AUTOCLOSE
delay 35
msgbox Laboratorio_S4_Eusine_Bill_Texto_73 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_2
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_74 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_75 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_30
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_76 MSGBOX_AUTOCLOSE
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_77 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_7
waitmovement 0x0
delay 15
msgbox Laboratorio_S4_Eusine_Bill_Texto_78 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_S4_Eusine_Bill_Move_31
waitmovement 0x0
delay 15
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 17, 4, 0x2E7, FALSE
setmetatile 18, 4, 0x2E6, FALSE
setmetatile 17, 5, 0x282, FALSE
setmetatile 18, 5, 0x282, FALSE
setmetatile 17, 6, 0x2B3, FALSE
setmetatile 18, 6, 0x2B4, FALSE
special DrawWholeMapView
delay 20
applymovement 5, Laboratorio_S4_Eusine_Bill_Move_32
waitmovement 0x0
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_6
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_13
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_79 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_33
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_80 MSGBOX_AUTOCLOSE
delay 25
msgbox Laboratorio_S4_Eusine_Bill_Texto_81 MSGBOX_AUTOCLOSE
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_7
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_82 MSGBOX_AUTOCLOSE
delay 25
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_6
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_83 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_34
waitmovement 0x0
msgbox Laboratorio_S4_Eusine_Bill_Texto_84 MSGBOX_AUTOCLOSE
delay 20
msgbox Laboratorio_S4_Eusine_Bill_Texto_85 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_S4_Eusine_Bill_Move_35
applymovement 4, Laboratorio_S4_Eusine_Bill_Move_32
waitmovement 0x0
setflag FLAG_HOENN_284
setflag FLAG_HOENN_283
setflag FLAG_HOENN_285
removeobject 4
removeobject 5
removeobject 6
setvar VAR_UNUSED_0x40F8, 38
release
end

Laboratorio_S4_Eusine_Bill_Move_35:
delay_16
face_left
delay_16
delay_8
face_down
step_end

Laboratorio_S4_Eusine_Bill_Move_34:
walk_right
walk_right
walk_right
walk_right
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_33:
walk_slow_right
step_end

Laboratorio_S4_Eusine_Bill_Move_32:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Laboratorio_S4_Eusine_Bill_Move_31:
walk_up
walk_up
walk_up
walk_up
step_end

Laboratorio_S4_Eusine_Bill_Move_30:
walk_down
step_end

Laboratorio_S4_Eusine_Bill_Texto_1:
	.string "… …$"

Laboratorio_S4_Eusine_Bill_Texto_2:
	.string "Parece una MT.$"

Laboratorio_S4_Eusine_Bill_Texto_3:
	.string "¡Obtuviste la MT 130 TRIATAQUE!$"

Laboratorio_S4_Eusine_Bill_Texto_4:
	.string "????: Deja eso donde estaba.$"

Laboratorio_S4_Eusine_Bill_Texto_5:
	.string "BILL: Siempre has tenido la mala\n"
	.string "costumbre de robar mis inventos.$"

Laboratorio_S4_Eusine_Bill_Texto_6:
	.string "Después de todo, sigues siendo el mismo\n"
	.string "ladrón que entró a mi casa.$"

Laboratorio_S4_Eusine_Bill_Texto_7:
	.string "????: Te lo advertí, {PLAYER}.$"

Laboratorio_S4_Eusine_Bill_Texto_8:
	.string "EUSINE: Aquellos que se nieguen a\n"
	.string "abrazar el cambio están condenados\l"
	.string "a desaparecer.$"

Laboratorio_S4_Eusine_Bill_Texto_9:
	.string "Ese día ha llegado, y tú pareces seguir\n"
	.string "aferrado a lo mismo.$"

Laboratorio_S4_Eusine_Bill_Texto_10:
	.string "… …$"

Laboratorio_S4_Eusine_Bill_Texto_11:
	.string "No me malinterpretes.\n"
	.string "Eres un gran ENTRENADOR.$"

Laboratorio_S4_Eusine_Bill_Texto_12:
	.string "Derrotaste al MAESTRO DUN, al cual\n"
	.string "admiro profundamente, y al resto de\l"
	.string "grandes entrenadores de JOHTO.$"

Laboratorio_S4_Eusine_Bill_Texto_13:
	.string "Pero todos ellos se han quedado atrás,\n"
	.string "ya tocaron techo.\l"
	.string "Me sorprende que alguien como tú\l"
	.string "reniegue de algo tan evidente.$"

Laboratorio_S4_Eusine_Bill_Texto_14:
	.string "BILL: Es normal.$"

Laboratorio_S4_Eusine_Bill_Texto_15:
	.string "{PLAYER} solo confía en su habilidad\n"
	.string "natural para el combate.$"

Laboratorio_S4_Eusine_Bill_Texto_16:
	.string "Tiene gracia, porque compartes muchas\n"
	.string "similitudes con LANCE, cuando dejó todo\l"
	.string "en manos de sus sagrados POKÉMON.$"

Laboratorio_S4_Eusine_Bill_Texto_17:
	.string "Lo único que te diferencia\n"
	.string "de él es que…$"

Laboratorio_S4_Eusine_Bill_Texto_18:
	.string "EUSINE: …lo sagrado eres tú en sí\n"
	.string "mismo, tu talento innato.$"

Laboratorio_S4_Eusine_Bill_Texto_19:
	.string "Pero eso, como todo lo demás, tiene un\n"
	.string "límite.$"

Laboratorio_S4_Eusine_Bill_Texto_20:
	.string "Los dioses han sido buenos contigo,\n"
	.string "{PLAYER}. Pero lo que ellos dan,\l"
	.string "también pueden quitarlo.$"

Laboratorio_S4_Eusine_Bill_Texto_21:
	.string "¡Ahora que incluso ellos ya no son un\n"
	.string "misterio, tú también dejarás de serlo!$"

Laboratorio_S4_Eusine_Bill_Texto_22:
	.string "????: No sabes de lo que hablas.$"

Laboratorio_S4_Eusine_Bill_Texto_23:
	.string "ANDRA: Has abandonado todo lo que\n"
	.string "predicabas únicamente por más poder.$"

Laboratorio_S4_Eusine_Bill_Texto_24:
	.string "Ese discurso en TORRE DUN: la historia\n"
	.string "del DRAGÓN SAGRADO, el camino del\l"
	.string "ENTRENADOR…$"

Laboratorio_S4_Eusine_Bill_Texto_25:
	.string "A la hora de la verdad, jamás creíste\n"
	.string "en ello. En el momento en que todos esos\l"
	.string "frutos se te pusieron enfrente, los\l"
	.string "tomaste de forma indiscriminada.$"

Laboratorio_S4_Eusine_Bill_Texto_26:
	.string "Así que… no te atrevas a dar lecciones\n"
	.string "a nadie.$"

Laboratorio_S4_Eusine_Bill_Texto_27:
	.string "EUSINE: ¿Qué sabréis vosotros? Apenas\n"
	.string "3 años entrenando, ¡¿y me hablas de\l"
	.string "esperar y tener paciencia?!$"

Laboratorio_S4_Eusine_Bill_Texto_28:
	.string "¡¡10!!$"

Laboratorio_S4_Eusine_Bill_Texto_29:
	.string "¡10 años estuve esperando la bendición\n"
	.string "de SUICUNE!$"

Laboratorio_S4_Eusine_Bill_Texto_30:
	.string "La única realidad es que los dioses\n"
	.string "son crueles y vengativos, bendicen a\l"
	.string "unos pocos e ignoran al resto, ¿por qué\l"
	.string "ahora deberíamos seguir mostrándoles\l"
	.string "respetos?$"

Laboratorio_S4_Eusine_Bill_Texto_31:
	.string "Es más, aunque el verdadero SUICUNE se\n"
	.string "me presentara, lo rechazaría.$"

Laboratorio_S4_Eusine_Bill_Texto_32:
	.string "Ya no lo quiero, hace mucho que dejó de\n"
	.string "ser sagrado para mí.$"

Laboratorio_S4_Eusine_Bill_Texto_33:
	.string "ANDRA: Por eso no te escogió, porque lo\n"
	.string "único que te importaba de él era eso.$"

Laboratorio_S4_Eusine_Bill_Texto_34:
	.string "EUSINE: Ahora tengo 3 BESTIAS mucho\n"
	.string "más fuertes que las originales.$"

Laboratorio_S4_Eusine_Bill_Texto_35:
	.string "¡3 FUERTE VÍNCULO que superan incluso\n"
	.string "a los del MAESTRO DUN!$"

Laboratorio_S4_Eusine_Bill_Texto_36:
	.string "ANDRA: Lo único que esas aberraciones\n"
	.string "tienen de FUERTE VÍNCULO es el nombre.$"

Laboratorio_S4_Eusine_Bill_Texto_37:
	.string "EUSINE: Podrás decir lo que quieras,\n"
	.string "pero al final del día tengo tres\l"
	.string "POKÉMON con la -&- al final.$"

Laboratorio_S4_Eusine_Bill_Texto_38:
	.string "Cada uno de ellos, estadística por\n"
	.string "estadística, superior a los\l"
	.string "originales EN, RAI y SUI.$"

Laboratorio_S4_Eusine_Bill_Texto_39:
	.string "A efectos prácticos, tengo 3\n"
	.string "LEGENDARIOS FUERTE VÍNCULO.$"

Laboratorio_S4_Eusine_Bill_Texto_40:
	.string "BILL: Y todo gracias al sistema actual,\n"
	.string "al que tú buenamente has contribuido y\l"
	.string "del que ahora reniegas.$"

Laboratorio_S4_Eusine_Bill_Texto_41:
	.string "EUSINE: Dime, ANDRA. ¿Qué tienes tú?$"

Laboratorio_S4_Eusine_Bill_Texto_42:
	.string "ANDRA: Yo no voy a alardear de ello.\n"
	.string "Lo váis a ver vosotros mismos.$"

Laboratorio_S4_Eusine_Bill_Texto_43:
	.string "BILL: Llegó el momento, {PLAYER}.$"

Laboratorio_S4_Eusine_Bill_Texto_44:
	.string "Dudo que tus viajes por HOENN te\n"
	.string "hayan hecho mejorar mucho más.$"

Laboratorio_S4_Eusine_Bill_Texto_45:
	.string "¡Ahora verás a los prototipos de nivel\n"
	.string "II en su máximo esplendor!$"

Laboratorio_S4_Eusine_Bill_Texto_46:
	.string "¡¿Qué ha sido eso?!$"

Laboratorio_S4_Eusine_Bill_Texto_47:
	.string "De modo que…$"

Laboratorio_S4_Eusine_Bill_Texto_48:
	.string "EUSINE: ¡¿Cómo es esto posible?!$"

Laboratorio_S4_Eusine_Bill_Texto_49:
	.string "¿Por qué tienes 3 FUERTE VÍNCULO\n"
	.string "distintos?$"

Laboratorio_S4_Eusine_Bill_Texto_50:
	.string "Muy pocos han hallado el ideal una sola\n"
	.string "vez, y solo el GRAN MAESTRO pudo\l"
	.string "hallarlo en tres ocasiones.\l"
	.string "¡¿Por qué tú también?!$"

Laboratorio_S4_Eusine_Bill_Texto_51:
	.string "ANDRA: Has olvidado tus propias\n"
	.string "palabras.$"

Laboratorio_S4_Eusine_Bill_Texto_52:
	.string "EUSINE: ¿A qué te refieres?$"

Laboratorio_S4_Eusine_Bill_Texto_53:
	.string "En TORRE DUN me dijiste: 'El mero hecho\n"
	.string "de definir algo ya lo limita. Si ese\l"
	.string "POKÉMON llegó hasta ese punto, no fue\l"
	.string "por pararse a pensar en si era o no\l"
	.string "posible, simplemente lo hizo.'$"

Laboratorio_S4_Eusine_Bill_Texto_54:
	.string "Ahora veo que solo escupías de memoria\n"
	.string "lo que el MAESTRO DUN te había\l"
	.string "enseñado. Otros sí que lo pusimos en\l"
	.string "práctica.$"

Laboratorio_S4_Eusine_Bill_Texto_55:
	.string "EUSINE: … …$"

Laboratorio_S4_Eusine_Bill_Texto_56:
	.string "BILL: Debe resultar difícil, {PLAYER}.$"

Laboratorio_S4_Eusine_Bill_Texto_57:
	.string "Ver cómo alguien te sobrepasa en tu\n"
	.string "propio terreno, y además tu máxima\l"
	.string "rival.$"

Laboratorio_S4_Eusine_Bill_Texto_58:
	.string "ANDRA: Se acabaron los juegos, BILL.$"

Laboratorio_S4_Eusine_Bill_Texto_59:
	.string "Se requiere de una LLAVE para seguir\n"
	.string "avanzando. Nos la vas a dar por las\l"
	.string "buenas o por las malas.$"

Laboratorio_S4_Eusine_Bill_Texto_60:
	.string "BILL: Tranquila, ANDRA.\n"
	.string "Estoy conforme.$"

Laboratorio_S4_Eusine_Bill_Texto_61:
	.string "Por primera vez, he visto dónde está el\n"
	.string "límite de {PLAYER}. Todo gracias a ti.$"

Laboratorio_S4_Eusine_Bill_Texto_62:
	.string "¡Obtuviste la LLAVE S4!$"

Laboratorio_S4_Eusine_Bill_Texto_63:
	.string "Lamento deciros que más allá del P5,\n"
	.string "ninguno de nosotros tiene permiso de\l"
	.string "acceso.$"

Laboratorio_S4_Eusine_Bill_Texto_64:
	.string "Y aunque quisiéramos entrar, no\n"
	.string "podríamos: hay prototipos de nivel III\l"
	.string "guardando la zona.$"

Laboratorio_S4_Eusine_Bill_Texto_65:
	.string "EUSINE y yo somos activos valiosos\n"
	.string "para la creación de prototipos de nivel\l"
	.string "II, por eso tenemos competencias hasta\l"
	.string "esa planta.$"

Laboratorio_S4_Eusine_Bill_Texto_66:
	.string "Pero lo que hay a partir del P6, solo OAK\n"
	.string "sabe de ello.$"

Laboratorio_S4_Eusine_Bill_Texto_67:
	.string "EUSINE: Si hubierais asistido a la III\n"
	.string "CONFERENCIA de TRIGAL, os haríais a la\l"
	.string "idea.$"

Laboratorio_S4_Eusine_Bill_Texto_68:
	.string "ANDRA: No quiero hacerme a la idea,\n"
	.string "quiero saber exactamente lo que ahí se\l"
	.string "guarda.$"

Laboratorio_S4_Eusine_Bill_Texto_70:
	.string "EUSINE: ¿Qué más da lo que haya?$"

Laboratorio_S4_Eusine_Bill_Texto_71:
	.string "Es una mala época para perseguir la\n"
	.string "virtud. El mundo ya es tuyo, solo tienes\l"
	.string "que rendirte.$"

Laboratorio_S4_Eusine_Bill_Texto_72:
	.string "¡¿A qué viene esa persistencia sin\n"
	.string "sentido?!$"

Laboratorio_S4_Eusine_Bill_Texto_73:
	.string "ANDRA: Al contrario.$"

Laboratorio_S4_Eusine_Bill_Texto_74:
	.string "Esta época es mejor para poner a prueba\n"
	.string "la virtud que ninguna otra antes en la\l"
	.string "historia.$"

Laboratorio_S4_Eusine_Bill_Texto_75:
	.string "La única que permite diferenciar\n"
	.string "quiénes en el pasado hubieran caído\l"
	.string "ante las tentaciones de hoy. Ahora es\l"
	.string "cuando más sentido tiene ir tras ella.$"

Laboratorio_S4_Eusine_Bill_Texto_76:
	.string "Tú has demostrado ser uno de los que\n"
	.string "hubieran caído.$"

Laboratorio_S4_Eusine_Bill_Texto_77:
	.string "EUSINE: … …$"

Laboratorio_S4_Eusine_Bill_Texto_78:
	.string "ANDRA: Pero yo no lo seré.$"

Laboratorio_S4_Eusine_Bill_Texto_79:
	.string "BILL: ¿Qué hay de ti, {PLAYER}?$"

Laboratorio_S4_Eusine_Bill_Texto_80:
	.string "¿Qué es lo que te mueve para seguir\n"
	.string "bajando?$"

Laboratorio_S4_Eusine_Bill_Texto_81:
	.string "¿La virtud? No me hagas reír.$"

Laboratorio_S4_Eusine_Bill_Texto_82:
	.string "ANDRA lo tiene claro, por\n"
	.string "eso te ha sobrepasado.$"

Laboratorio_S4_Eusine_Bill_Texto_83:
	.string "Pero tú… es solo otro maldito evento\n"
	.string "más para ti, ¿verdad?$"

Laboratorio_S4_Eusine_Bill_Texto_84:
	.string "BILL: Puede…$"

Laboratorio_S4_Eusine_Bill_Texto_85:
	.string "…puede que no te guste lo que\n"
	.string "encuentres ahí abajo.$"

Laboratorio_Secreto_S4_Oak_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Laboratorio_Secreto_S4_Oak_Move_2:
walk_in_place_down
step_end

Laboratorio_Secreto_S4_Oak_Move_3:
walk_slow_down
walk_slow_down
step_end

Laboratorio_Secreto_S4_Oak_Move_4:
face_left
step_end

Laboratorio_Secreto_S4_Oak_Move_5:
walk_in_place_left
step_end

Laboratorio_Secreto_S4_Oak_Move_6:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Laboratorio_Secreto_S4_Oak_Move_7:
delay_16
face_right
delay_16
delay_8
face_up
step_end

Laboratorio_Secreto_S4_Oak_Move_8:
delay_16
face_left
delay_16
delay_16
face_down
delay_16
step_end

Laboratorio_Secreto_S4_Oak_Move_9:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_Laboratorio_Secreto_S4_Oak::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S4_Oak_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PalletTown_Laboratorio_S6_Despues_Texto_53 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Despues_Texto_54 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_55 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_55.1 MSGBOX_AUTOCLOSE
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_2
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Despues_Texto_55.2 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_3
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S4_Oak_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Despues_Texto_55.3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_55.4 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_4
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_56 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_56.1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_6
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S4_Oak_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Despues_Texto_57 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_58 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_59 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_60 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Despues_Texto_61 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Despues_Texto_62 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, Laboratorio_Secreto_S4_Oak_Move_9
waitmovement 0x0
delay 15
setvar VAR_UNUSED_0x40F8, 56
warpsilent MAP_PALLET_TOWN_LABORATORIO_SECRETO_S6, 14, 4
delay 100
release
end

