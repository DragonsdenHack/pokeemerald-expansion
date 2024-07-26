Cave_Regigigas_S8_MapScripts::
	.byte 0

Cave_Regigigas_S8_Amatista_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_1
waitmovement 0x0
goto Cave_Regigigas_S8_Amatista

Cave_Regigigas_S8_Amatista_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_1.1
waitmovement 0x0
goto Cave_Regigigas_S8_Amatista

Cave_Regigigas_S8_Amatista_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_1.2
waitmovement 0x0
goto Cave_Regigigas_S8_Amatista

Cave_Regigigas_S8_Amatista_Move_1.2:
walk_slow_up
walk_slow_left
walk_slow_up
walk_slow_left
walk_slow_up
step_end

Cave_Regigigas_S8_Amatista_Move_1.1:
walk_slow_up
walk_slow_left
walk_slow_up
walk_slow_up
step_end

Cave_Regigigas_S8_Amatista_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Cave_Regigigas_S8_Amatista_Move_2:
face_down
step_end

Cave_Regigigas_S8_Amatista_Move_3:
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

Cave_Regigigas_S8_Amatista::
lock
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_4 MSGBOX_AUTOCLOSE
delay 25
msgbox Cave_Regigigas_S8_Amatista_Texto_5 MSGBOX_AUTOCLOSE
delay 25
msgbox Cave_Regigigas_S8_Amatista_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_2
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S8_Amatista_Move_4
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_DETECT
dofieldeffectsparkle 13, 17, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
setvar VAR_RESULT, 4
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
setflag FLAG_HOENN_67
clearflag FLAG_HOENN_3
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_9
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
special FadeOutOrbEffect
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 6
addobject 2
delay 5
removeobject 2
addobject 6
delay 5
removeobject 2
addobject 6
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
waitmoncry
delay 50
playse SE_PIN
applymovement 3, Cave_Regigigas_S8_Amatista_Move_5
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_6.1
applymovement 3, Cave_Regigigas_S8_Amatista_Move_6
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_9 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S8_Amatista_Move_4.1
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_14 MSGBOX_AUTOCLOSE
delay 25
msgbox Cave_Regigigas_S8_Amatista_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, Cave_Regigigas_S8_Amatista_Move_5
waitmovement 0x0
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, Cave_Regigigas_S8_Amatista_Move_5
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_12
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_29 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S8_Amatista_Move_13
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_14
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_30 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_32 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S8_Amatista_Move_15
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S8_Amatista_Move_4.2
waitmovement 0x0
special RemoveCameraObject
msgbox Cave_Regigigas_S8_Amatista_Texto_35 MSGBOX_AUTOCLOSE
choose_mons
multi_2_vs_1 1536, Cave_Regigigas_S8_Amatista_Texto_36, 1557, 6
msgbox Cave_Regigigas_S8_Amatista_Texto_37 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
delay 15
applymovement 1, Cave_Regigigas_S8_Amatista_Move_11
waitmovement 0x0
playse SE_BALL_THROW
waitse
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
setflag FLAG_HOENN_3
removeobject 6
playse SE_BALL_OPEN
clearflag FLAG_HOENN_4
addobject 7
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HOENN_4
removeobject 7
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_39 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_15
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_40 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_18
applymovement 3, Cave_Regigigas_S8_Amatista_Move_17
applymovement 1, Cave_Regigigas_S8_Amatista_Move_16
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_43 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, Cave_Regigigas_S8_Amatista_Move_17
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_44 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_5
applymovement 3, Cave_Regigigas_S8_Amatista_Move_5
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_7
applymovement 3, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
delay 15
clearflag FLAG_HOENN_1
addobject 4
applymovement 4, Cave_Regigigas_S8_Amatista_Move_19
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_45 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_46 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S8_Amatista_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_47 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S8_Amatista_Move_20
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_48 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_49 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_50 MSGBOX_AUTOCLOSE
playse SE_BALL_OPEN
clearflag FLAG_HOENN_2
addobject 5
waitse
delay 15
playmoncry SPECIES_WHISMUR, CRY_MODE_ENCOUNTER
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_51 MSGBOX_AUTOCLOSE
waitmoncry
playse SE_LEDGE
applymovement 5, Cave_Regigigas_S8_Amatista_Move_21
waitmovement 0x0
delay 10
playse SE_LEDGE
applymovement 5, Cave_Regigigas_S8_Amatista_Move_21
waitmovement 0x0
playse SE_BALL_THROW
waitse
playse SE_PIN
applymovement 3, Cave_Regigigas_S8_Amatista_Move_5
applymovement 5, Cave_Regigigas_S8_Amatista_Move_22
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S8_Amatista_Texto_52 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S8_Amatista_Texto_53 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S8_Amatista_Move_23
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_54 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S8_Amatista_Move_18
applymovement 3, Cave_Regigigas_S8_Amatista_Move_22
waitmovement 0x0
applymovement 1, Cave_Regigigas_S8_Amatista_Move_24
waitmovement 0x0
applymovement 4, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_55 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Cave_Regigigas_S8_Amatista_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Cave_Regigigas_S8_Amatista_Move_15
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_57 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S8_Amatista_Move_27
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_26
applymovement 1, Cave_Regigigas_S8_Amatista_Move_25
waitmovement 0x0
setflag FLAG_HOENN_69
removeobject 1
msgbox Cave_Regigigas_S8_Amatista_Texto_58 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_17
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_59 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_60 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_61 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_17
waitmovement 0x0
clearflag FLAG_HOENN_69
setflag FLAG_HOENN_1
clearflag FLAG_HOENN_68
clearflag FLAG_HOENN_67
msgbox Cave_Regigigas_S8_Amatista_Texto_62 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_679, Cave_Regigigas_S8_Amatista_Texto_63
setflag FLAG_HOENN_67
setflag FLAG_HOENN_2
setflag FLAG_HOENN_69
removeobject 2
removeobject 1
removeobject 5
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_28
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_64 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_8
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_65 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_66 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_29
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_67 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_17
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_68 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_30
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_69 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S8_Amatista_Move_31
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_7
applymovement 4, Cave_Regigigas_S8_Amatista_Move_31
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_70 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_32
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_71 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_72 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S8_Amatista_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_73 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_32.1
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_74 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_75 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S8_Amatista_Move_33
waitmovement 0x0
delay 25
setflag FLAG_HOENN_1
removeobject 4
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S8_Amatista_Move_36
applymovement 3, Cave_Regigigas_S8_Amatista_Move_34
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_76 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S8_Amatista_Move_15
waitmovement 0x0
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_77 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_35
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_78 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_29
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_79 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_80 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S8_Amatista_Texto_81 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_4.3
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_82 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_18
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_83 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_7
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_84 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S8_Amatista_Move_15
waitmovement 0x0
msgbox Cave_Regigigas_S8_Amatista_Texto_85 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S8_Amatista_Move_25
waitmovement 0x0
setflag FLAG_HOENN_59
setflag FLAG_HOENN_2
setflag FLAG_HOENN_69
setflag FLAG_HOENN_1
setflag FLAG_HOENN_68
setflag FLAG_HOENN_67
clearflag FLAG_HOENN_677
removeobject 5
removeobject 3
setvar VAR_UNUSED_0x40F8, 23
release
end

Cave_Regigigas_S8_Amatista_Move_36:
walk_up
walk_left
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_35:
walk_slow_right
step_end

Cave_Regigigas_S8_Amatista_Move_4.3:
walk_slow_down
walk_slow_down
step_end

Cave_Regigigas_S8_Amatista_Move_34:
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_33:
walk_slow_down
delay_16
walk_slow_down
delay_16
delay_16
delay_16
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Cave_Regigigas_S8_Amatista_Move_32.1:
face_up
delay_16
delay_16
delay_16
face_down
delay_16
delay_16
walk_slow_up
step_end

Cave_Regigigas_S8_Amatista_Move_32:
face_up
delay_16
delay_16
walk_slow_left
delay_16
delay_16
face_down
delay_16
delay_16
walk_slow_up
step_end

Cave_Regigigas_S8_Amatista_Move_31:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Cave_Regigigas_S8_Amatista_Move_30:
delay_16
face_right
delay_16
delay_16
face_left
delay_16
delay_16
face_down
delay_16
step_end

Cave_Regigigas_S8_Amatista_Move_29:
walk_slow_left
step_end

Cave_Regigigas_S8_Amatista_Move_28:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

Cave_Regigigas_S8_Amatista_Move_27:
delay_16
delay_16
delay_16
delay_16
walk_in_place_left
step_end

Cave_Regigigas_S8_Amatista_Move_26:
delay_16
delay_16
delay_16
walk_down
walk_down
delay_16
face_right
step_end

Cave_Regigigas_S8_Amatista_Move_25:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Cave_Regigigas_S8_Amatista_Move_24:
walk_slow_down
step_end

Cave_Regigigas_S8_Amatista_Move_23:
walk_down
face_left
step_end

Cave_Regigigas_S8_Amatista_Move_22:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Cave_Regigigas_S8_Amatista_Move_21:
jump_in_place_up
step_end

Cave_Regigigas_S8_Amatista_Move_20:
delay_16
face_left
delay_16
delay_16
walk_slow_down
step_end

Cave_Regigigas_S8_Amatista_Move_4.2:
walk_fast_down
walk_fast_down
step_end

Cave_Regigigas_S8_Amatista_Move_19:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_18:
face_right
step_end

Cave_Regigigas_S8_Amatista_Move_17:
walk_in_place_left
step_end

Cave_Regigigas_S8_Amatista_Move_16:
walk_down
delay_16
face_right
step_end

Cave_Regigigas_S8_Amatista_Move_15:
walk_in_place_down
step_end

Cave_Regigigas_S8_Amatista_Move_14:
face_right
delay_16
delay_8
walk_in_place_right
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_13:
face_left
delay_16
delay_8
walk_in_place_left
delay_16
face_up
step_end

Cave_Regigigas_S8_Amatista_Move_12:
walk_fast_up
step_end

Cave_Regigigas_S8_Amatista_Move_11:
walk_in_place_up
step_end

Cave_Regigigas_S8_Amatista_Move_10:
face_left
step_end

Cave_Regigigas_S8_Amatista_Move_9:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

Cave_Regigigas_S8_Amatista_Move_8:
face_up
step_end

Cave_Regigigas_S8_Amatista_Move_7:
face_down
step_end

Cave_Regigigas_S8_Amatista_Move_4.1:
walk_down
walk_down
step_end

Cave_Regigigas_S8_Amatista_Move_5:
emote_exclamation_mark
step_end

Cave_Regigigas_S8_Amatista_Move_6:
walk_up
walk_up
step_end

Cave_Regigigas_S8_Amatista_Move_6.1:
walk_up
step_end

Cave_Regigigas_S8_Amatista_Texto_1:
	.string "ADM.AMATISTA: Qué interesante...$"

Cave_Regigigas_S8_Amatista_Texto_2:
	.string "El misterio, seguir órdenes del TEAM\n"
	.string "ROCKET, ver de lo que son capaces\l"
	.string "vuestros POKÉMON...$"

Cave_Regigigas_S8_Amatista_Texto_3:
	.string "No importan los motivos que os hayan\n"
	.string "llevado hasta aquí, lo que estáis al\l"
	.string "borde de presenciar no os dejará\l"
	.string "indiferentes.$"

Cave_Regigigas_S8_Amatista_Texto_4:
	.string "De todos los orbes, el ORBE MORADO ha\n"
	.string "sido el mejor guardado por la tradición\l"
	.string "del MONTE PÍRICO.$"

Cave_Regigigas_S8_Amatista_Texto_5:
	.string "ANDRA: Oh…$"

Cave_Regigigas_S8_Amatista_Texto_6:
	.string "ADM.AMATISTA: Y por una buena razón: el\n"
	.string "lugar en el que su brillo cobra sentido\l"
	.string "es mucho más ignoto e inaccesible, así\l"
	.string "como el POKÉMON que despierta más\l"
	.string "antiguo y sagrado…$"

Cave_Regigigas_S8_Amatista_Texto_7:
	.string "Cualquiera puede llegar a las\n"
	.string "profundidades de la CAVERNA ABISAL o\l"
	.string "el MONTE CENIZO, pero aquí…$"

Cave_Regigigas_S8_Amatista_Texto_8:
	.string "Aquí solo llegan los elegidos, ¡y me\n"
	.string "alegra que seáis vosotros los\l"
	.string "afortunados! ¡Observad!$"

Cave_Regigigas_S8_Amatista_Texto_9:
	.string "ANDRA: Ese POKÉMON… rebosa un poderío\n"
	.string "físico inmenso, puede que sea hasta…$"

Cave_Regigigas_S8_Amatista_Texto_10:
	.string "ADM.AMATISTA: ¿Inmedible?$"

Cave_Regigigas_S8_Amatista_Texto_11:
	.string "ANDRA: Sí, inmedible o al menos… una\n"
	.string "fuerza bruta mayor a todo lo demás.$"

Cave_Regigigas_S8_Amatista_Texto_12:
	.string "ADM.AMATISTA: Como no puede ser de\n"
	.string "otro modo; el mundo tal y como lo\l"
	.string "conocemos fue moldeado por REGIGIGAS.$"

Cave_Regigigas_S8_Amatista_Texto_13:
	.string "Esta es su verdadera forma, aquella\n"
	.string "capaz de mover continentes enteros.$"

Cave_Regigigas_S8_Amatista_Texto_14:
	.string "ANDRA: Es impresionante, pero…$"

Cave_Regigigas_S8_Amatista_Texto_15:
	.string "ADM.AMATISTA: Pero ya habéis\n"
	.string "enfrentado cosas más grandes antes,\l"
	.string "¿no?$"

Cave_Regigigas_S8_Amatista_Texto_16:
	.string "ANDRA: ¡¿Cómo sabes…?!$"

Cave_Regigigas_S8_Amatista_Texto_17:
	.string "ADM.AMATISTA: Permíteme discrepar. Ese\n"
	.string "POKÉMON ESENCIA podrá ser más\l"
	.string "poderoso en términos absolutos, aún\l"
	.string "así…$"

Cave_Regigigas_S8_Amatista_Texto_18:
	.string "Lo que de verdad importa en un combate\n"
	.string "es la eficiencia; aquello que puedes\l"
	.string "controlar y aplicar a tu favor.$"

Cave_Regigigas_S8_Amatista_Texto_19:
	.string "En este caso… ese poderío… ese ATAQUE\n"
	.string "FÍSICO… es tan descomunal que, a pesar\l"
	.string "de ser finito, sus límites superiores\l"
	.string "son desconocidos para todos nosotros.$"

Cave_Regigigas_S8_Amatista_Texto_20:
	.string "Algo que, en la práctica, lo convierte en\n"
	.string "algo infinito.$"

Cave_Regigigas_S8_Amatista_Texto_21:
	.string "ANDRA: ¿Infinito?$"

Cave_Regigigas_S8_Amatista_Texto_22:
	.string "ADM.AMATISTA: Así es. El tipo de poder\n"
	.string "que, bien reconducido, podría desbordar\l"
	.string "todo cuanto se le pusiera enfrente.$"

Cave_Regigigas_S8_Amatista_Texto_23:
	.string "ANDRA: ¿Incluso…?$"

Cave_Regigigas_S8_Amatista_Texto_24:
	.string "ADM.AMATISTA: Incluso al tan adorado\n"
	.string "'POKÉMON ESENCIA'.$"

Cave_Regigigas_S8_Amatista_Texto_25:
	.string "ANDRA: ¡Basta de palabrería! Lo que\n"
	.string "dices ya lo aplicó {PLAYER} en RUINAS\l"
	.string "ALFA, ¡sin necesidad de tanto poder!$"

Cave_Regigigas_S8_Amatista_Texto_26:
	.string "ADM.AMATISTA: Tienes razón, pero\n"
	.string "olvidas que, a igualdad de habilidades,\l"
	.string "será el poder lo que marque la\l"
	.string "diferencia.$"

Cave_Regigigas_S8_Amatista_Texto_27:
	.string "Demostré superarte en habilidad en\n"
	.string "PUEBLO LAVANDA, ANDRA.$"

Cave_Regigigas_S8_Amatista_Texto_28:
	.string "¿En serio crees que ahora, empleando un\n"
	.string "poder mucho mayor, tienes una sola\l"
	.string "oportunidad?$"

Cave_Regigigas_S8_Amatista_Texto_29:
	.string "ANDRA: Puede que yo sola no, pero…$"

Cave_Regigigas_S8_Amatista_Texto_30:
	.string "Si lo que dices es cierto, no deberías\n"
	.string "tener problema en aplastarnos a los\l"
	.string "dos, ¿verdad?$"

Cave_Regigigas_S8_Amatista_Texto_31:
	.string "ADM.AMATISTA: ¡Jua, ja, ja! ¡Parece que\n"
	.string "has ganado algo de sensatez!$"

Cave_Regigigas_S8_Amatista_Texto_32:
	.string "No tendré problema en derrotaros al\n"
	.string "mismo tiempo, será más rápido e\l"
	.string "indoloro.$"

Cave_Regigigas_S8_Amatista_Texto_33:
	.string "Después de todo, habéis olvidado\n"
	.string "que…seguís siendo finitos.$"

Cave_Regigigas_S8_Amatista_Texto_34:
	.string "Y ante algo infinito, como lo que tenéis\n"
	.string "delante…$"

Cave_Regigigas_S8_Amatista_Texto_35:
	.string "¡No importa cuantos vengan ni lo que\n"
	.string "hagan! ¡Nadie podrá detenerme!$"

Cave_Regigigas_S8_Amatista_Texto_36:
	.string "Parece que mis cálculos fallaron.$"

Cave_Regigigas_S8_Amatista_Texto_37:
	.string "ADM.AMATISTA: Mmm… muy interesante.$"

Cave_Regigigas_S8_Amatista_Texto_38:
	.string "Felicidades. Acabáis de definir un\n"
	.string "nuevo límite. Y este no creo que pueda\l"
	.string "superarse, al menos en cuanto a fuerza\l"
	.string "bruta.$"

Cave_Regigigas_S8_Amatista_Texto_39:
	.string "En base a ello podremos también definir\n"
	.string "el límite en el resto de parámetros que\l"
	.string "influyen en el poder de un POKÉMON.$"

Cave_Regigigas_S8_Amatista_Texto_40:
	.string "Esta expedición ha superado nuestros\n"
	.string "pronósticos. Os estoy agradecido:\l"
	.string "vuestros viajes y experiencias han\l"
	.string "proporcionado una valiosa información\l"
	.string "a DEVON, una vez más.$"

Cave_Regigigas_S8_Amatista_Texto_41:
	.string "ANDRA: ¿Agradecido? ¡No vas\n"
	.string "a ir a ninguna parte!$"

Cave_Regigigas_S8_Amatista_Texto_42:
	.string "Te hemos derrotado: REGIGIGAS y ese\n"
	.string "ORBE MORADO se vienen con nosotros.$"

Cave_Regigigas_S8_Amatista_Texto_43:
	.string "ADM.AMATISTA: Me temo que eso no va a\n"
	.string "ser posible.$"

Cave_Regigigas_S8_Amatista_Texto_44:
	.string "ANDRA: No estás en disposición de…$"

Cave_Regigigas_S8_Amatista_Texto_45:
	.string "Tú…$"

Cave_Regigigas_S8_Amatista_Texto_46:
	.string "TRISTANA: Ya os lo advertí.$"

Cave_Regigigas_S8_Amatista_Texto_47:
	.string "ADM.AMATISTA: Nada está por encima del\n"
	.string "plan, y eso implica contemplar todas las\l"
	.string "posibilidades.$"

Cave_Regigigas_S8_Amatista_Texto_48:
	.string "ANDRA: Qué curioso… no sabía que\n"
	.string "fuéramos tan importantes para\l"
	.string "vosotros.$"

Cave_Regigigas_S8_Amatista_Texto_49:
	.string "TRISTANA: Eres muy atrevida, teniendo\n"
	.string "en cuenta la situación.$"

Cave_Regigigas_S8_Amatista_Texto_50:
	.string "Tu adrenalina ha disminuido tras el\n"
	.string "combate y estás con la guardia baja.\l"
	.string "Eso quiere decir que…$"

Cave_Regigigas_S8_Amatista_Texto_51:
	.string "¡mur!$"

Cave_Regigigas_S8_Amatista_Texto_52:
	.string "ANDRA: ¡Eh! ¡Mis POKÉMON!$"

Cave_Regigigas_S8_Amatista_Texto_53:
	.string "TRISTANA: Tendrás que seguir a FELICIA\n"
	.string "si quieres recuperarlos.$"

Cave_Regigigas_S8_Amatista_Texto_54:
	.string "ANDRA: Maldita… Ya\n"
	.string "ajustaremos cuentas.$"

Cave_Regigigas_S8_Amatista_Texto_55:
	.string "ADM.AMATISTA: Buen trabajo. Después de\n"
	.string "todo, sabes mantener el orden cuando\l"
	.string "de verdad importa.$"

Cave_Regigigas_S8_Amatista_Texto_56:
	.string "Admiro tus cualidades, {PLAYER}.\n"
	.string "Pero tu utilidad acaba aquí.$"

Cave_Regigigas_S8_Amatista_Texto_57:
	.string "Al final del día… sigues sin tener la\n"
	.string "menor idea de cuál es nuestro propósito\l"
	.string "y, a pesar de ello, has aportado a su\l"
	.string "consecución. Felicidades.$"

Cave_Regigigas_S8_Amatista_Texto_58:
	.string "TRISTANA: ¡Eh, tranquilo!$"

Cave_Regigigas_S8_Amatista_Texto_59:
	.string "Ahora quedamos tú y yo, {PLAYER}.\n"
	.string "Ji, ji, ji.$"

Cave_Regigigas_S8_Amatista_Texto_60:
	.string "Esa ANDRA es tan aburrida, siempre\n"
	.string "obsesionada con mejorar. ¿No prefieres\l"
	.string "bailar un poco conmigo?$"

Cave_Regigigas_S8_Amatista_Texto_61:
	.string "… …$"

Cave_Regigigas_S8_Amatista_Texto_62:
	.string "Aún podrías alcanzar a AMATISTA.\n"
	.string "Tendrás que bailar conmigo,\l"
	.string "¡quieras o no!$"

Cave_Regigigas_S8_Amatista_Texto_63:
	.string "¡Bah! ¡Qué aburrido!$"

Cave_Regigigas_S8_Amatista_Texto_64:
	.string "Hmm… enfrentar a POKÉMON tan bien\n"
	.string "cuidados acaba siendo tedioso.$"

Cave_Regigigas_S8_Amatista_Texto_65:
	.string "Sorprende pero… desmotiva.$"

Cave_Regigigas_S8_Amatista_Texto_66:
	.string "Aún mermado has podido con un equipo\n"
	.string "lleno de POKÉMON singulares.$"

Cave_Regigigas_S8_Amatista_Texto_67:
	.string "ANDRA se llena la boca con los males que\n"
	.string "trae el abuso de POKÉMON ARTIFICALES.$"

Cave_Regigigas_S8_Amatista_Texto_68:
	.string "Pero, al final del día, ambos habéis\n"
	.string "llegado a un punto en el que vuestros\l"
	.string "propios estándares son de igual modo\l"
	.string "inalcanzables para el resto de\l"
	.string "'naturales'. ¿No es al final lo mismo?$"

Cave_Regigigas_S8_Amatista_Texto_69:
	.string "Supongo que tendré que volver a hablar\n"
	.string "con el DOCTOR para que actualice mi\l"
	.string "equipo…$"

Cave_Regigigas_S8_Amatista_Texto_70:
	.string "… …$"

Cave_Regigigas_S8_Amatista_Texto_71:
	.string "Yo no he elegido esto, ¿entiendes? Si\n"
	.string "quiero seguir ayudando a HOENN, debo\l"
	.string "adaptarme a los nuevos tiempos.$"

Cave_Regigigas_S8_Amatista_Texto_72:
	.string "En caso contrario… me convertiré en un\n"
	.string "lastre, y solo espero que…$"

Cave_Regigigas_S8_Amatista_Texto_73:
	.string "…no llegue el momento en el que mi\n"
	.string "SALAMENCE también lo acabe siendo.$"

Cave_Regigigas_S8_Amatista_Texto_74:
	.string "La MEGAEVOLUCIÓN de un\n"
	.string "PSEUDOLEGENDARIO… de mi pequeño\l"
	.string "BAGON… fuera del equipo por no estar a\l"
	.string "la altura, ¿puedes imaginártelo?$"

Cave_Regigigas_S8_Amatista_Texto_75:
	.string "Mmm… yo… no.$"

Cave_Regigigas_S8_Amatista_Texto_76:
	.string "ANDRA: ¿Derrotaste a TRISTANA?\n"
	.string "Tenía cara de pocos amigos.$"

Cave_Regigigas_S8_Amatista_Texto_77:
	.string "Mmm… hubiera preferido que ese WHISMUR\n"
	.string "robara tus POKÉMON, solo para ser yo\l"
	.string "quién derrotara a esa lunática.$"

Cave_Regigigas_S8_Amatista_Texto_78:
	.string "Diría que desde el principio todo: la\n"
	.string "posibilidad de que esto ocurriera,\l"
	.string "nuestra intervención y cómo usarla a su\l"
	.string "favor… entraban dentro de sus\l"
	.string "cálculos.$"

Cave_Regigigas_S8_Amatista_Texto_79:
	.string "Aún así, una expedición como esta\n"
	.string "nunca es en vano. Nosotros también nos\l"
	.string "hemos nutrido de ella.$"

Cave_Regigigas_S8_Amatista_Texto_80:
	.string "Muchas cosas rondan mi mente, pero\n"
	.string "recuerda: he cumplido mi parte de la\l"
	.string "promesa. Ahora te toca a ti.$"

Cave_Regigigas_S8_Amatista_Texto_81:
	.string "… …$"

Cave_Regigigas_S8_Amatista_Texto_82:
	.string "Aún conservo una copia de la LLAVE de\n"
	.string "mi Ex-DESPACHO en HOENN. Es un lugar\l"
	.string "perfecto para hablar con tranquilidad.$"

Cave_Regigigas_S8_Amatista_Texto_83:
	.string "Allí te contaré mi parte\n"
	.string "del trato, {PLAYER}.$"

Cave_Regigigas_S8_Amatista_Texto_84:
	.string "Solo espero que… nuestra rivalidad y…\n"
	.string "amistad… signifique para ti tanto o más\l"
	.string "que tu lealtad al TEAM ROCKET.$"

Cave_Regigigas_S8_Amatista_Texto_85:
	.string "Nos vemos allí.$"


