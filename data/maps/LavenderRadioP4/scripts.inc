LavenderRadioP4_MapScripts::
	.byte 0

LavenderRadioP4_1::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_1:
	.string "MEGA EVOLUTION increases a POKÉMON's\n"
	.string "BASE STATS by 100. DEEP BOND increases\l"
	.string "it by 110, along with generally better\l"
	.string "distribution. There are no limits with\l"
	.string "the radio waves modifications; they can\l"
	.string "be increased by less than 100, but we\l"
	.string "might be able to exceed those +110 from\l"
	.string "DEEP BOND.$"




LavenderRadioP4_2::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_2:
	.string "An idea becomes interesting when you're\n"
	.string "afraid to take it to its logical\l"
	.string "conclusion.$"




LavenderRadioP4_3::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_3:
	.string "The distinction between technology and\n"
	.string "slavery is that slaves are completely\l"
	.string "aware that they are not free.$"




LavenderRadioP4_5::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_5:
	.string "I heard we wanted to conduct some\n"
	.string "tests on these waves at LAKE OF RAGE,\l"
	.string "in JOHTO. Is that true?$"



LavenderRadioP4Documento_100::
msgbox LavenderRadioP4Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP4Documento_Text_100:
.string "5th Waves Optimization$"



LavenderRadioP4Documento_101::
msgbox LavenderRadioP4Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP4Documento_Text_101:
	.string "-There are endless variations in every\n"
	.string "generation, all resulting from\l"
	.string "mutations-.$"

LavenderRadioP4_Devon_Combates::
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
removeobject 5
removeobject 2
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 8, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_1 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_4
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_3 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_5
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_4 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_6
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_5 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_6
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 21, LavenderRadioP4_Devon_Combates_Move_7
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_8 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderRadioP4_Devon_Combates_Move_5
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_10 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_8
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_11 MSGBOX_AUTOCLOSE
applymovement 8, LavenderRadioP4_Devon_Combates_Move_9
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_12 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_14 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 22, LavenderRadioP4_Devon_Combates_Move_10
applymovement 20, LavenderRadioP4_Devon_Combates_Move_10
applymovement 11, LavenderRadioP4_Devon_Combates_Move_10
applymovement 23, LavenderRadioP4_Devon_Combates_Move_10
applymovement 24, LavenderRadioP4_Devon_Combates_Move_10
waitmovement 0x0
delay 15
msgbox LavenderRadioP4_Devon_Combates_Texto_14.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_15 MSGBOX_AUTOCLOSE
applymovement 8, LavenderRadioP4_Devon_Combates_Move_11
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_16 MSGBOX_AUTOCLOSE
applymovement 8, LavenderRadioP4_Devon_Combates_Move_12
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_17 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SALAMENCE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 7, LavenderRadioP4_Devon_Combates_Move_10
applymovement 8, LavenderRadioP4_Devon_Combates_Move_10
applymovement 21, LavenderRadioP4_Devon_Combates_Move_10
applymovement 11, LavenderRadioP4_Devon_Combates_Move_10
applymovement 22, LavenderRadioP4_Devon_Combates_Move_10
applymovement 20, LavenderRadioP4_Devon_Combates_Move_10
applymovement 23, LavenderRadioP4_Devon_Combates_Move_10
applymovement 24, LavenderRadioP4_Devon_Combates_Move_10
waitmovement 0x0
delay 20
playbgm 567, FALSE
delay 20
playse SE_M_FLY
addobject 17
applymovement 17, LavenderRadioP4_Devon_Combates_Move_13
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 12
applymovement 12, LavenderRadioP4_Devon_Combates_Move_13
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 13
applymovement 13, LavenderRadioP4_Devon_Combates_Move_13
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 25
waitse
delay 20
playse SE_M_FLY
addobject 14
applymovement 14, LavenderRadioP4_Devon_Combates_Move_14
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 15
applymovement 24, LavenderRadioP4_Devon_Combates_Move_8
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 19
applymovement 22, LavenderRadioP4_Devon_Combates_Move_18
applymovement 19, LavenderRadioP4_Devon_Combates_Move_13
waitmovement 0x0
waitse
delay 40
applymovement 17, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_18 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP4_Devon_Combates_Move_16
applymovement 12, LavenderRadioP4_Devon_Combates_Move_16
applymovement 14, LavenderRadioP4_Devon_Combates_Move_3
applymovement 25, LavenderRadioP4_Devon_Combates_Move_17
waitmovement 0x0
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
playse SE_PIN
applymovement 7, LavenderRadioP4_Devon_Combates_Move_10
applymovement 8, LavenderRadioP4_Devon_Combates_Move_10
applymovement 21, LavenderRadioP4_Devon_Combates_Move_10
applymovement 11, LavenderRadioP4_Devon_Combates_Move_10
applymovement 22, LavenderRadioP4_Devon_Combates_Move_10
applymovement 24, LavenderRadioP4_Devon_Combates_Move_10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_38
waitmovement 0x0
playse SE_M_FLY
addobject 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_8
applymovement 10, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
waitse
delay 20
playse SE_PIN
applymovement 7, LavenderRadioP4_Devon_Combates_Move_10
applymovement 8, LavenderRadioP4_Devon_Combates_Move_10
applymovement 21, LavenderRadioP4_Devon_Combates_Move_10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_10
waitmovement 0x0
delay 20
applymovement 7, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_19 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_19
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_20 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_9
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_21 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_19
applymovement 8, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_22 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_23 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_9
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
waitse
msgbox LavenderRadioP4_Devon_Combates_Texto_25 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderRadioP4_Devon_Combates_Texto_26 MSGBOX_AUTOCLOSE
applymovement 17, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_27 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_37
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
playse SE_M_FLY
addobject 18
applymovement 18, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
waitse
delay 20
playse SE_M_FLY
addobject 26
applymovement 26, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
waitse
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_20
waitmovement 0x0
special RemoveCameraObject
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_28 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP4_Devon_Combates_Texto_29 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_30 MSGBOX_AUTOCLOSE
applymovement 26, LavenderRadioP4_Devon_Combates_Move_22
applymovement 18, LavenderRadioP4_Devon_Combates_Move_23
waitmovement 0x0
applymovement 18, LavenderRadioP4_Devon_Combates_Move_3
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_19
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
msgbox LavenderRadioP4_Devon_Combates_Texto_31 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_14, LavenderRadioP4_Devon_Combates_Texto_32
playbgm 567, FALSE
delay 15
applymovement 26, LavenderRadioP4_Devon_Combates_Move_16
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_12
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_33 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_15, LavenderRadioP4_Devon_Combates_Texto_34
playbgm 567, FALSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_8
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_35 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP4_Devon_Combates_Texto_35.1 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_36 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_37 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_4, LavenderRadioP4_Devon_Combates_Texto_38
playbgm 627, FALSE
delay 10
applymovement 10, LavenderRadioP4_Devon_Combates_Move_24
msgbox LavenderRadioP4_Devon_Combates_Texto_39 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_40 MSGBOX_AUTOCLOSE
delay 20
applymovement 25, LavenderRadioP4_Devon_Combates_Move_25
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_41 MSGBOX_AUTOCLOSE
applymovement 17, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_42 MSGBOX_AUTOCLOSE
applymovement 17, LavenderRadioP4_Devon_Combates_Move_26
applymovement 12, LavenderRadioP4_Devon_Combates_Move_26
applymovement 13, LavenderRadioP4_Devon_Combates_Move_26
applymovement 14, LavenderRadioP4_Devon_Combates_Move_27
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_43 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
msgbox LavenderRadioP4_Devon_Combates_Texto_44 MSGBOX_AUTOCLOSE
waitse
playse SE_PIN
applymovement 17, LavenderRadioP4_Devon_Combates_Move_28
applymovement 13, LavenderRadioP4_Devon_Combates_Move_28
waitmovement 0x0
applymovement 12, LavenderRadioP4_Devon_Combates_Move_29
applymovement 14, LavenderRadioP4_Devon_Combates_Move_29
applymovement 9, LavenderRadioP4_Devon_Combates_Move_29
applymovement 19, LavenderRadioP4_Devon_Combates_Move_29
applymovement 22, LavenderRadioP4_Devon_Combates_Move_29
applymovement 24, LavenderRadioP4_Devon_Combates_Move_29
applymovement 15, LavenderRadioP4_Devon_Combates_Move_29
applymovement 21, LavenderRadioP4_Devon_Combates_Move_29
waitmovement 0x0
applymovement 18, LavenderRadioP4_Devon_Combates_Move_10
applymovement 26, LavenderRadioP4_Devon_Combates_Move_10
applymovement 7, LavenderRadioP4_Devon_Combates_Move_10
applymovement 8, LavenderRadioP4_Devon_Combates_Move_10
waitmovement 0x0
delay 30
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_45 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_29.1
waitmovement 0x0
delay 15
playse SE_PC_ON
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_PIN
applymovement 8, LavenderRadioP4_Devon_Combates_Move_10
waitmovement 0x0
applymovement 8, LavenderRadioP4_Devon_Combates_Move_30
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_46 MSGBOX_AUTOCLOSE
delay 15
playse SE_SELECT
delay 15
msgbox LavenderRadioP4_Devon_Combates_Texto_47 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, LavenderRadioP4_Devon_Combates_Move_31
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_48 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP4_Devon_Combates_Texto_49 MSGBOX_AUTOCLOSE
playse SE_M_CHARGE
delay 60
playse SE_M_THUNDER_WAVE
msgbox LavenderRadioP4_Devon_Combates_Texto_50 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_CHARGE
delay 60
playse SE_M_THUNDER_WAVE
msgbox LavenderRadioP4_Devon_Combates_Texto_51 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
delay 50
applymovement 10, LavenderRadioP4_Devon_Combates_Move_32
waitmovement 0x0
delay 30
msgbox LavenderRadioP4_Devon_Combates_Texto_52 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_33
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_53 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP4_Devon_Combates_Texto_54 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_34
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_9
waitmovement 0x0
playse SE_USE_ITEM
special HealPlayerParty
delay 20
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_8
applymovement 10, LavenderRadioP4_Devon_Combates_Move_33
waitmovement 0x0
waitmoncry
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
playse SE_M_THUNDER_WAVE
delay 50
playse SE_BREAKABLE_DOOR
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_55 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_146, LavenderRadioP4_Devon_Combates_Texto_56
playbgm 627, FALSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_35
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_57 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_35
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_58 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_59 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_60 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_61 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_19
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_62 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_63 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP4_Devon_Combates_Move_15
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_64 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 10, LavenderRadioP4_Devon_Combates_Move_21
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_65 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
fadescreen 1
delay 40
removeobject 14
removeobject 18
removeobject 26
removeobject 10
removeobject 19
removeobject 15
removeobject 12
removeobject 17
removeobject 13
removeobject 25
addobject 8
fadescreen 0
delay 20
playbgm 560, FALSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_2.2
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_19
applymovement 9, LavenderRadioP4_Devon_Combates_Move_19
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_66 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_67 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderRadioP4_Devon_Combates_Move_2.3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_67.1 MSGBOX_AUTOCLOSE
applymovement 8, LavenderRadioP4_Devon_Combates_Move_2.4
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_67.2 MSGBOX_AUTOCLOSE
applymovement 7, LavenderRadioP4_Devon_Combates_Move_2.5
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_67.3 MSGBOX_AUTOCLOSE
applymovement 7, LavenderRadioP4_Devon_Combates_Move_2.3
applymovement 8, LavenderRadioP4_Devon_Combates_Move_2.3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_68 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_68.1 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderRadioP4_Devon_Combates_Texto_69 MSGBOX_AUTOCLOSE
applymovement 21, LavenderRadioP4_Devon_Combates_Move_30
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_70 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_71 MSGBOX_AUTOCLOSE
delay 20
applymovement 8, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_72 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 8
removeobject 21
removeobject 7
removeobject 22
removeobject 24
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_5.1
waitmovement 0x0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP4_Devon_Combates_Move_2.1
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_9
applymovement 9, LavenderRadioP4_Devon_Combates_Move_8
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_73 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_74 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_75 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_18
applymovement 9, LavenderRadioP4_Devon_Combates_Move_5.1
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_76 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_77 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_19
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_78 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_16
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_79 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_18
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_80 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_36
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_81 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_36
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_82 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_18
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_83 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_3
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_84 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_85 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP4_Devon_Combates_Texto_86 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP4_Devon_Combates_Move_8
applymovement 9, LavenderRadioP4_Devon_Combates_Move_36
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_87 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP4_Devon_Combates_Texto_88 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_9
waitmovement 0x0
msgbox LavenderRadioP4_Devon_Combates_Texto_89 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP4_Devon_Combates_Move_34
waitmovement 0x0
delay 40
msgbox LavenderRadioP4_Devon_Combates_Texto_90 MSGBOX_AUTOCLOSE
delay 40
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_FLY
waitse
addobject 4
addobject 2
addobject 5
addobject 1
addobject 3
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40F7, 215
release
end

LavenderRadioP4_Devon_Combates_Move_2.6:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LavenderRadioP4_Devon_Combates_Move_2.5:
walk_in_place_right
step_end

LavenderRadioP4_Devon_Combates_Move_2.4:
face_left
step_end

LavenderRadioP4_Devon_Combates_Move_2.3:
face_right
step_end

LavenderRadioP4_Devon_Combates_Move_2.2:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

LavenderRadioP4_Devon_Combates_Move_38:
walk_down
face_left
step_end



LavenderRadioP4_Devon_Combates_Move_37:
walk_down
walk_down
walk_down
walk_left
step_end

LavenderRadioP4_Devon_Combates_Move_36:
walk_slow_left
step_end

LavenderRadioP4_Devon_Combates_Move_35:
lock_facing_direction
walk_fast_left
unlock_facing_direction
step_end

LavenderRadioP4_Devon_Combates_Move_34:
walk_in_place_left
step_end

LavenderRadioP4_Devon_Combates_Move_33:
walk_right
step_end

LavenderRadioP4_Devon_Combates_Move_32:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

LavenderRadioP4_Devon_Combates_Move_31:
walk_fast_left
walk_fast_left
walk_fast_down
step_end

LavenderRadioP4_Devon_Combates_Move_30:
walk_fast_left
walk_fast_down
step_end

LavenderRadioP4_Devon_Combates_Move_29.1:
walk_up
step_end

LavenderRadioP4_Devon_Combates_Move_29:
emote_exclamation_mark
face_left
step_end

LavenderRadioP4_Devon_Combates_Move_28:
emote_exclamation_mark
face_down
step_end

LavenderRadioP4_Devon_Combates_Move_27:
lock_facing_direction
walk_slow_up
unlock_facing_direction
step_end

LavenderRadioP4_Devon_Combates_Move_26:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

LavenderRadioP4_Devon_Combates_Move_25:
walk_down
walk_right
step_end

LavenderRadioP4_Devon_Combates_Move_24:
lock_facing_direction
walk_slow_left
walk_slow_left
unlock_facing_direction
step_end

LavenderRadioP4_Devon_Combates_Move_23:
walk_right
walk_right
walk_right
face_down
step_end

LavenderRadioP4_Devon_Combates_Move_22:
walk_right
walk_right
walk_right
face_up
step_end

LavenderRadioP4_Devon_Combates_Move_21:
walk_in_place_right
step_end

LavenderRadioP4_Devon_Combates_Move_20:
walk_left
walk_left
step_end

LavenderRadioP4_Devon_Combates_Move_19:
face_up
step_end

LavenderRadioP4_Devon_Combates_Move_18:
face_down
step_end

LavenderRadioP4_Devon_Combates_Move_17:
walk_up
walk_up
walk_left
walk_up
step_end

LavenderRadioP4_Devon_Combates_Move_16:
walk_in_place_up
step_end

LavenderRadioP4_Devon_Combates_Move_15:
walk_right
step_end

LavenderRadioP4_Devon_Combates_Move_14:
walk_right
walk_right
face_down
step_end

LavenderRadioP4_Devon_Combates_Move_13:
walk_up
step_end

LavenderRadioP4_Devon_Combates_Move_12:
face_down
step_end

LavenderRadioP4_Devon_Combates_Move_11:
walk_slow_up
face_left
step_end

LavenderRadioP4_Devon_Combates_Move_10:
emote_exclamation_mark
step_end

LavenderRadioP4_Devon_Combates_Move_9:
face_right
step_end

LavenderRadioP4_Devon_Combates_Move_8:
face_left
step_end

LavenderRadioP4_Devon_Combates_Move_7:
walk_right
walk_right
walk_up
walk_in_place_down
step_end

LavenderRadioP4_Devon_Combates_Move_6:
walk_slow_left
step_end

LavenderRadioP4_Devon_Combates_Move_5.1:
walk_slow_down
walk_slow_down
step_end

LavenderRadioP4_Devon_Combates_Move_5:
walk_slow_down
step_end

LavenderRadioP4_Devon_Combates_Move_4:
face_left
walk_in_place_down
step_end

LavenderRadioP4_Devon_Combates_Move_3:
walk_in_place_down
step_end

LavenderRadioP4_Devon_Combates_Move_2.1:
walk_slow_down
walk_slow_left
walk_slow_left
step_end

LavenderRadioP4_Devon_Combates_Move_2:
walk_slow_up
walk_slow_right
walk_slow_right
step_end

LavenderRadioP4_Devon_Combates_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_up
step_end


LavenderRadioP4_Devon_Combates_Texto_1:
	.string "OAK: Welcome, all guests, to the opening\n"
	.string "of RADIO TOWER, I would have preferred\l"
	.string "to make this celebration more{PAUSE 15}…\l"
	.string "community-oriented. However, as you\l"
	.string "know, the true purposes of this place\l"
	.string "must not be public knowledge. After\l"
	.string "years of disagreements among us, we\l"
	.string "finally have all the resources needed\l"
	.string "to reach the optimum. The construction\l"
	.string "of this place is evidence of that. ELM,\l"
	.string "please.$"

LavenderRadioP4_Devon_Combates_Texto_2:
	.string "ELM: Indeed, OAK. We keep our word,\n"
	.string "tuning in for all of KANTO… on the first\l"
	.string "and second floors.$"

LavenderRadioP4_Devon_Combates_Texto_3:
	.string "The rest of the floors, from the third\n"
	.string "to the seventh, are 100% dedicated to\l"
	.string "increasing a POKÉMON's performance by\l"
	.string "exploiting radio waves.$"

LavenderRadioP4_Devon_Combates_Texto_4:
.string "Indeed! The effects could be quite diverse.$"

LavenderRadioP4_Devon_Combates_Texto_5:
	.string "The vast majority lead to mutations\n"
	.string "that are not of interest for combat.$"

LavenderRadioP4_Devon_Combates_Texto_6:
	.string "Certain frequencies cause a change in\n"
	.string "color in the exposed POKÉMON,\l"
	.string "something that will undoubtedly please\l"
	.string "those POKÉMON enthusiasts who want to\l"
	.string "show off something with no real\l"
	.string "application.$"

LavenderRadioP4_Devon_Combates_Texto_7:
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

LavenderRadioP4_Devon_Combates_Texto_8:
	.string "ELM: Here, of course, we're pursuing\n"
	.string "something useful. We're pursuing that\l"
	.string "tiny percentage of mutations that\l"
	.string "benefit a POKÉMON, that squeeze out\l"
	.string "every possible combination by which its\l"
	.string "potential as a species could reach 100%\l"
	.string "of its capacity.$"

LavenderRadioP4_Devon_Combates_Texto_9:
	.string "In these rooms, we achieve the\n"
	.string "statistically impossible combination\l"
	.string "that nature would have granted over\l"
	.string "thousands of years of evolutionary\l"
	.string "process to a species that had adapted\l"
	.string "in the best possible way to increase its\l"
	.string "raw power. No disruptors, no external\l"
	.string "agents that spoil the efficiency of the\l"
	.string "process.$"

LavenderRadioP4_Devon_Combates_Texto_10:
	.string "OAK: NIDOKING-X, NIDOQUEEN-Y,\n"
	.string "PORYGON3{PAUSE 15}…{PAUSE 15} are examples of what has\l"
	.string "been obtained through processes\l"
	.string "similar to this, although not as\l"
	.string "efficient as those described by ELM\l"
	.string "here.$"

LavenderRadioP4_Devon_Combates_Texto_11:
	.string "ELM: That's correct, now we have the\n"
	.string "means to achieve maximum purity in\l"
	.string "terms of prototypes.$"

LavenderRadioP4_Devon_Combates_Texto_12:
	.string "OAK: MEWTWO represented an increase of\n"
	.string "80 BASE STATS compared to MEW.\l"
	.string "Recently, MEGAS and conventional\l"
	.string "prototypes have led to an increase of\l"
	.string "+100 compared to the base forms. The\l"
	.string "DEEP BOND increases a +110… What can\l"
	.string "we expect from this new technology,\l"
	.string "ELM?$"

LavenderRadioP4_Devon_Combates_Texto_13:
	.string "ELM: It's obvious that we were already\n"
	.string "at a point close to the limit, where any\l"
	.string "significant improvement was\l"
	.string "practically a mirage. Naturally.$"

LavenderRadioP4_Devon_Combates_Texto_14:
	.string "However, due to these processes, we are\n"
	.string "confident that we can increase the\l"
	.string "initial BASE STATS of the target\l"
	.string "POKÉMON by 150.$"

LavenderRadioP4_Devon_Combates_Texto_14.1:
	.string "Furthermore, we'll be able to manipulate\n"
	.string "the HP as well, a statistic previously\l"
	.string "only modified by the DEEP BOND.$"

LavenderRadioP4_Devon_Combates_Texto_15:
	.string "BILL: That's how reserved nature is\n"
	.string "with its best fruits; here, we'll only\l"
	.string "create POKÉMON that could potentially\l"
	.string "exist in the wild, but will never do so\l"
	.string "purely due to probability.$"

LavenderRadioP4_Devon_Combates_Texto_16:
	.string "OAK: Exactly BILL, several miracles\n"
	.string "would be needed to occur for that to\l"
	.string "happen.$"

LavenderRadioP4_Devon_Combates_Texto_17:
	.string "ELM: And that's the end of the\n"
	.string "presentation. Let's showcase its\l"
	.string "functionality briefly; all we need to do\l"
	.string "is activate the computer, and…$"

LavenderRadioP4_Devon_Combates_Texto_18:
	.string "????: Executives, collect all available\n"
	.string "information. Take care of ELM, BILL and\l"
	.string "ANDRA. I'll take care of OAK.$"

LavenderRadioP4_Devon_Combates_Texto_19:
	.string "BILL: You! How do you dare? I rescued\n"
	.string "you when you had nothing, I gave you a\l"
	.string "work opportunity at SILPH, and this is\l"
	.string "how you thank us!$"

LavenderRadioP4_Devon_Combates_Texto_20:
	.string "MIGUEL: And that's what you wanted,\n"
	.string "isn't it, BILL? Me to submit to your\l"
	.string "orders, you thought I was meant to be\l"
	.string "<BILL's aide>, and nothing else. That's\l"
	.string "over.$"

LavenderRadioP4_Devon_Combates_Texto_21:
	.string "All of you have scorned me, you've\n"
	.string "ignored the MEGA STONE of AERODACTYL\l"
	.string "that I created.$"

LavenderRadioP4_Devon_Combates_Texto_22:
	.string "OAK: BLAINE has already harnessed his\n"
	.string "primal power without utilizing a MEGA\l"
	.string "STONE.$"

LavenderRadioP4_Devon_Combates_Texto_23:
	.string "MIGUEL: And what about GENESECT? The\n"
	.string "rest of the FOSSILS? You've overlooked\l"
	.string "all the research that I've done.$"

LavenderRadioP4_Devon_Combates_Texto_24:
	.string "Even you, {PLAYER}, with that\n"
	.string "disdainful glance you gave me during\l"
	.string "the meeting. Do you think I'm not up to\l"
	.string "your level?$"

LavenderRadioP4_Devon_Combates_Texto_25:
	.string "OAK: Enough, what are you seeking for?$"

LavenderRadioP4_Devon_Combates_Texto_26:
	.string "MIGUEL: To turn DEVON into the most\n"
	.string "powerful corporation and watch you all\l"
	.string "fall. You can't imagine the number of\l"
	.string "ancient and ancestral POKÉMON that\l"
	.string "inhabit HOENN. That's where I should\l"
	.string "have been born, not in this disgusting\l"
	.string "corporatism that goes against my\l"
	.string "interests.$"

LavenderRadioP4_Devon_Combates_Texto_27:
	.string "????: You can't stop us from getting\n"
	.string "what we want from here, OAK. Your only\l"
	.string "option is to fight.$"

LavenderRadioP4_Devon_Combates_Texto_28:
	.string "MIGUEL: {PLAYER} is mine. You're going\n"
	.string "to be defeated, I'm going to wear you\l"
	.string "down until you have to kneel to me out\l"
	.string "of sheer probability.$"

LavenderRadioP4_Devon_Combates_Texto_30:
.string "Scientists! To him!$"

LavenderRadioP4_Devon_Combates_Texto_29:
	.string "No more bowing, honor, or other\n"
	.string "nonsense. I will defeat you no matter\l"
	.string "the means or the way. Until now, you\l"
	.string "have always emerged unscathed, but\l"
	.string "spirits and essences, no matter how\l"
	.string "pure, lack something that prevents\l"
	.string "them from achieving victory no matter\l"
	.string "what happens: they don't play dirty.$"

LavenderRadioP4_Devon_Combates_Texto_31:
	.string "So, the famous {PLAYER}. How does it\n"
	.string "feel to fight against you?$"

LavenderRadioP4_Devon_Combates_Texto_32:
	.string "You're just another TRAINER.$"

LavenderRadioP4_Devon_Combates_Texto_33:
	.string "I'll show you that the bond you talk\n"
	.string "about is nothing but nonsense!$"

LavenderRadioP4_Devon_Combates_Texto_34:
.string "So, is that phenomenon real?$"

LavenderRadioP4_Devon_Combates_Texto_35:
	.string "MIGUEL: Expected, but my new\n"
	.string "assistants have worn you down enough.$"

LavenderRadioP4_Devon_Combates_Texto_35.1:
	.string "You're not the only one capable of\n"
	.string "combining technology with deep bonds.$"

LavenderRadioP4_Devon_Combates_Texto_36:
	.string "Just wait until you see the new team\n"
	.string "that my research, my travels, and DEVON\l"
	.string "have provided me.$"

LavenderRadioP4_Devon_Combates_Texto_37:
	.string "I'm going to be the one who finally\n"
	.string "shuts up the grand CHIEF ADMIN.\l"
	.string "{PLAYER}!$"

LavenderRadioP4_Devon_Combates_Texto_38:
.string "Once again!? Why is this still happening?$"

LavenderRadioP4_Devon_Combates_Texto_39:
	.string "????: So this is your level, OAK. Thank\n"
	.string "you, you've provided me with valuable\l"
	.string "information, apart from the radio\l"
	.string "waves.$"

LavenderRadioP4_Devon_Combates_Texto_40:
.string "OAK: {PAUSE 15}…{PAUSE 15}$"

LavenderRadioP4_Devon_Combates_Texto_41:
	.string "EXECUTIVE: We've already transferred\n"
	.string "all your data to DEVON HQ: B12F,\l"
	.string "PRESIDENT.$"

LavenderRadioP4_Devon_Combates_Texto_42:
	.string "????: It's been a pleasure, OAK. Thanks\n"
	.string "for your collaboration.$"

LavenderRadioP4_Devon_Combates_Texto_43:
	.string "????: The operation has been\n"
	.string "successful. It is time for…$"

LavenderRadioP4_Devon_Combates_Texto_44:
.string "S.MIGUEL: NO!$"

LavenderRadioP4_Devon_Combates_Texto_45:
	.string "Nobody's going anywhere until we finish\n"
	.string "this! My battle with {PLAYER} isn't\l"
	.string "over yet!$"

LavenderRadioP4_Devon_Combates_Texto_46:
.string "OAK: Hold up, you're not…$"

LavenderRadioP4_Devon_Combates_Texto_47:
.string "S.MIGUEL: Oh, indeed I am!$"

LavenderRadioP4_Devon_Combates_Texto_48:
	.string "OAK: Are you mad!? It's in early testing!\n"
	.string "It could destroy us all!$"

LavenderRadioP4_Devon_Combates_Texto_49:
	.string "S.MIGUEL: I only need it to destroy\n"
	.string "{PLAYER}.$"

LavenderRadioP4_Devon_Combates_Texto_50:
.string "BZZZZ{PAUSE 25}…{PAUSE 25} X-PROTOTYPE{PAUSE 25}…{PAUSE 25} ACTIVATED.$"

LavenderRadioP4_Devon_Combates_Texto_51:
.string "BZZZZ{PAUSE 25}…{PAUSE 25} BERSERK GEN{PAUSE 25}…{PAUSE 25} ACTIVATED.$"

LavenderRadioP4_Devon_Combates_Texto_52:
	.string "MIGUEL: Yes… The highest possible\n"
	.string "physical potential just on the palm of\l"
	.string "my hand. Just the sheer power needed\l"
	.string "for finishing someone like you. I shall\l"
	.string "humiliate you in front of everyone, the\l"
	.string "seams of your team will finally be\l"
	.string "exposed one and for all.$"

LavenderRadioP4_Devon_Combates_Texto_53:
	.string "It won't take me more than a single\n"
	.string "POKÉMON to delete them.$"

LavenderRadioP4_Devon_Combates_Texto_54:
.string "ANDRA: {PLAYER}! Your team!$"

LavenderRadioP4_Devon_Combates_Texto_55:
.string "S.MIGUEL: MEWTWO!{PAUSE 35} DESTROY!$"

LavenderRadioP4_Devon_Combates_Texto_56:
.string "But… Its ATTACK is over 1000!$"

LavenderRadioP4_Devon_Combates_Texto_57:
.string "S.MIGUEL: Why?$"

LavenderRadioP4_Devon_Combates_Texto_58:
	.string "Why do you never succumb, no matter\n"
	.string "what I do?$"

LavenderRadioP4_Devon_Combates_Texto_59:
.string "{PAUSE 15}…{PAUSE 15}$"

LavenderRadioP4_Devon_Combates_Texto_60:
.string "He{PAUSE 35}…{PAUSE 15} Hehehe…$"

LavenderRadioP4_Devon_Combates_Texto_61:
	.string "Deep down, I must thank you. Although I\n"
	.string "previously said that the means didn't\l"
	.string "matter, the truth is, it wouldn't be the\l"
	.string "same to defeat you like this, resorting\l"
	.string "to that desperate aberration.$"

LavenderRadioP4_Devon_Combates_Texto_62:
	.string "Now I have the same tools as you,\n"
	.string "{PLAYER}. DEVON's technology and the\l"
	.string "bond I needed. My victory will be\l"
	.string "complete when, under equal conditions,\l"
	.string "everyone sees that you're not special.$"


LavenderRadioP4_Devon_Combates_Texto_63:
	.string "MIGUEL: Wait and see, {PLAYER}. This\n"
	.string "is just the beginning of a powerful\l"
	.string "generation of FOSSILS which you will\l"
	.string "eventually succumb to.$"

LavenderRadioP4_Devon_Combates_Texto_64:
	.string "Only you and ANDRA remain as champions\n"
	.string "of what you call tradition. Your beloved\l"
	.string "JOHTO MASTERS have already shown the\l"
	.string "inferiority of their teams against the\l"
	.string "new order.$"

LavenderRadioP4_Devon_Combates_Texto_65:
	.string "Keep in mind my words {PLAYER}! You're\n"
	.string "going to end just as badly as them!$"

LavenderRadioP4_Devon_Combates_Texto_66:
	.string "BILL: Oh damn! But what the hell just\n"
	.string "happened?$"

LavenderRadioP4_Devon_Combates_Texto_67:
	.string "OAK: Your aide has betrayed us, BILL.\n"
	.string "Who knows how long he's been\l"
	.string "associated with DEVON, we should have\l"
	.string "been more vigilant.$"

LavenderRadioP4_Devon_Combates_Texto_67.1:
	.string "BILL: I can't believe this. No matter\n"
	.string "what they offered him, even the chance\l"
	.string "to research new fossils… he would have\l"
	.string "never betrayed us like that. They must\l"
	.string "have offered him something else.$"

LavenderRadioP4_Devon_Combates_Texto_67.2:
.string "OAK: What do you mean, BILL?$"

LavenderRadioP4_Devon_Combates_Texto_67.3:
	.string "BILL: He's been acting somewhat\n"
	.string "strange. Like me, he's always\l"
	.string "disregarded the bond with his POKÉMON,\l"
	.string "even with that AERODACTYL he was so\l"
	.string "excited about. But today, it seemed to\l"
	.string "matter to him more than ever before,\l"
	.string "the same or even more than his\l"
	.string "experiments.$"

LavenderRadioP4_Devon_Combates_Texto_68:
	.string "ELM: He was present at the II GRAND\n"
	.string "MEETING, he knows about practically all\l"
	.string "of our projects, the prototypes,\l"
	.string "MEWTWO… That's what's important, BILL.$"

LavenderRadioP4_Devon_Combates_Texto_68.1:
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

LavenderRadioP4_Devon_Combates_Texto_69:
	.string "OAK: It is, DEVON will be fully aware by\n"
	.string "now. All that's left is to inform\l"
	.string "GIOVANNI about this, I'll take care of\l"
	.string "it.$"

LavenderRadioP4_Devon_Combates_Texto_70:
	.string "ELM: We must act quickly, GIOVANNI is\n"
	.string "an expert at that. You two, ANDRA and\l"
	.string "{PLAYER}, I'm sure you'll play an\l"
	.string "essential role in reacting to DEVON.$"

LavenderRadioP4_Devon_Combates_Texto_71:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

LavenderRadioP4_Devon_Combates_Texto_72:
	.string "OAK: BILL, ELM, this can only serve to\n"
	.string "unite us, as we pursue the biological\l"
	.string "limit that we've just outlined here.$"

LavenderRadioP4_Devon_Combates_Texto_73:
.string "ANDRA: How does this strike you, {PLAYER}?$"

LavenderRadioP4_Devon_Combates_Texto_74:
.string "…$"

LavenderRadioP4_Devon_Combates_Texto_75:
	.string "No{PAUSE 25}…{PAUSE 25} I didn't refer to the DEVON attack,\n"
	.string "I was talking about… all that ELM and\l"
	.string "OAK exposed.$"

LavenderRadioP4_Devon_Combates_Texto_76:
	.string "The truth is{PAUSE 25}…{PAUSE 25} ever since you defeated\n"
	.string "the ESSENCE POKÉMON, and even during\l"
	.string "the I GRAND GATHERING, I've feared all\l"
	.string "of this. But I chose to turn a blind eye.\l"
	.string "Part of me believed that none of this\l"
	.string "could happen, that LAVENDER TOWN TOWER\l"
	.string "would endure, that our teams would keep\l"
	.string "improving in a -natural- way, that our\l"
	.string "steady linear progression would\l"
	.string "continue…$"

LavenderRadioP4_Devon_Combates_Texto_77:
	.string "But everything{PAUSE 35}…{PAUSE 35} everything I was\n"
	.string "afraid of, has become evident in this\l"
	.string "meeting. The current reality of KANTO,\l"
	.string "our own limitations, what's been laid\l"
	.string "out here as the only way to go beyond…$"

LavenderRadioP4_Devon_Combates_Texto_78:
	.string "If I'm honest with you, it goes\n"
	.string "completely against my ideal of how\l"
	.string "things should work in a POKÉMON battle.$"

LavenderRadioP4_Devon_Combates_Texto_79:
	.string "The bond and interactions you've been\n"
	.string "forging with your POKÉMON team should\l"
	.string "be the most important element when\l"
	.string "determining your team's performance,\l"
	.string "however…$"

LavenderRadioP4_Devon_Combates_Texto_80:
	.string "The future drives us towards that\n"
	.string "dictatorship of the mechanical, a\l"
	.string "POKÉMON's performance will be\l"
	.string "programmed in advance, and the worst\l"
	.string "part is that…$"

LavenderRadioP4_Devon_Combates_Texto_81:
	.string "It will completely overshadow any other\n"
	.string "TRAINER, at least in terms of BASE\l"
	.string "STATS potential. It will make them look\l"
	.string "ridiculous in the face of that\l"
	.string "artificially created perfection.$"

LavenderRadioP4_Devon_Combates_Texto_82:
	.string "I guess in the end, we pursue the same\n"
	.string "goal as ZEUS or LANCE, but by using\l"
	.string "technology.$"

LavenderRadioP4_Devon_Combates_Texto_83:
	.string "However, DEEP BOND has proven that a\n"
	.string "POKÉMON's potential, from its deepest\l"
	.string "essence, can be shaped if you believe in\l"
	.string "it. You took that to the extreme in\l"
	.string "RUINS OF ALPH.$"

LavenderRadioP4_Devon_Combates_Texto_84:
	.string "I refuse to think that that potential\n"
	.string "has already shown all it has.\l"
	.string "Furthermore, I refuse to accept that it\l"
	.string "can be processed and mechanized, just\l"
	.string "like they're doing with the LEGENDARY\l"
	.string "BEASTS and the DEEP BOND EEVEE.$"

LavenderRadioP4_Devon_Combates_Texto_85:
.string "{PAUSE 25}…{PAUSE 25}$"

LavenderRadioP4_Devon_Combates_Texto_86:
	.string "Whether there is or isn't a greater\n"
	.string "power, accessible through training and\l"
	.string "overlooked by us, I find it impossible\l"
	.string "to discover amidst this environment.$"

LavenderRadioP4_Devon_Combates_Texto_87:
	.string "That's why I'll disappear for a while and\n"
	.string "focus entirely on that quest.$"

LavenderRadioP4_Devon_Combates_Texto_88:
	.string "I know I might be chasing a ghost, an\n"
	.string "ideal created in my head that doesn't\l"
	.string "even exist. But given this situation, I\l"
	.string "feel obligated to do so.$"

LavenderRadioP4_Devon_Combates_Texto_89:
	.string "Even you, {PLAYER}, have combined\n"
	.string "technology with tradition. Perhaps\l"
	.string "that's your virtue, unlike OAK or BILL,\l"
	.string "unable to see beyond their experiments,\l"
	.string "or myself, at the other extreme.$"

LavenderRadioP4_Devon_Combates_Texto_90:
	.string "Even so{PAUSE 35}…{PAUSE 35} I will remain faithful to my\n"
	.string "ideals.$"

LavenderRadioP4_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP4_Cuarto_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP4_Cuarto_Cientifico_Texto_1:
	.string "By praising someone for their lack of\n"
	.string "flaws, you also imply their lack of\l"
	.string "virtues.$"
