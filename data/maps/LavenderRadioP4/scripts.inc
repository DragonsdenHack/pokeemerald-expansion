LavenderRadioP4_MapScripts::
	.byte 0

LavenderRadioP4_1::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_1:
.string "La MEGAEVOLUCIÓN incrementa en 100 los\n"
.string "STATS BASE de un POKÉMON. El FUERTE\l"
.string "VÍNCULO en 110, además de, por lo\l"
.string "general, un mejor reparto. Con las\l"
.string "modificaciones vía ondas de radio no\l"
.string "hay límite, pueden incrementarse en\l"
.string "menos de 100, pero es posible que\l"
.string "podamos sobrepasar esos +110 del\l"
.string "FUERTE VÍNCULO.$"




LavenderRadioP4_2::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_2:
.string "Una idea empieza a ser interesante\n"
.string "cuando te asusta llevarla a su\l"
.string "conclusión lógica.$"




LavenderRadioP4_3::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_3:
.string "La diferencia entre tecnología y\n"
.string "esclavitud es que los esclavos son\l"
.string "plenamente conscientes de que no son\l"
.string "libres.$"




LavenderRadioP4_5::
lock     
faceplayer     
msgbox LavenderRadioP4_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP4_Text_5:
.string "Oí que queríamos hacer ciertas pruebas\n"
.string "sobre estas ondas en el LAGO DE LA\l"
.string "FURIA, en JOHTO. ¿Será cierto?$"



LavenderRadioP4Documento_100::
msgbox LavenderRadioP4Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP4Documento_Text_100:
.string "5to Optimización Ondas$"



LavenderRadioP4Documento_101::
msgbox LavenderRadioP4Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP4Documento_Text_101:
.string "-Hay infinitas variaciones en cada\n"
	.string "generación, todas creadas por\l"
	.string "mutaciones-.$"

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
.string "OAK: Bienvenidos a todos los invitados\n"
	.string "a la apertura de TORRE RADIO, me\l"
	.string "hubiera gustado hacer de esta\l"
	.string "celebración algo más{PAUSE 25}…{PAUSE 25} del pueblo. Pero,\l"
	.string "como sabéis, los verdaderos propósitos\l"
	.string "de este lugar no son de dominio público.\l"
	.string "Después de años de disputas entre\l"
	.string "nosotros, al fin tenemos todos los\l"
	.string "recursos necesarios para alcanzar lo\l"
	.string "óptimo. La construcción de este lugar\l"
	.string "es prueba de ello. ELM, por favor.$"

LavenderRadioP4_Devon_Combates_Texto_2:
.string "ELM: Así es, OAK. Aquí hacemos lo\n"
	.string "prometido, sintonizamos para toda\l"
	.string "KANTO{PAUSE 25}…{PAUSE 25} en el primer y segundo piso.$"

LavenderRadioP4_Devon_Combates_Texto_3:
.string "El resto de pisos, desde el tercero al\n"
	.string "décimo, están 100% dedicados a\l"
	.string "incrementar el rendimiento de un\l"
	.string "POKÉMON a través de explotar las ondas\l"
	.string "de radio.$"

LavenderRadioP4_Devon_Combates_Texto_4:
.string "Sus efectos pueden ser muy diversos.$"

LavenderRadioP4_Devon_Combates_Texto_5:
.string "La gran mayoría conducen a mutaciones\n"
	.string "que no nos interesan para el combate.$"

LavenderRadioP4_Devon_Combates_Texto_6:
.string "Determinadas frecuencias provocan un\n"
	.string "cambio de color en el POKÉMON\l"
	.string "expuesto, algo que sin duda agradará a\l"
	.string "aquellos POKEMANÍACOS que quieran\l"
	.string "fardar de algo sin ninguna aplicación\l"
	.string "real.$"

LavenderRadioP4_Devon_Combates_Texto_7:
.string "BILL: {PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_8:
.string "ELM: Aquí, por supuesto, vamos tras\n"
	.string "algo más grande. Vamos tras ese\l"
	.string "minúsculo porcentaje de mutaciones\l"
	.string "que benefician a un POKÉMON, que\l"
	.string "exprimen al máximo todas las\l"
	.string "combinaciones posibles por las cuales\l"
	.string "su potencial como especie pudiere\l"
	.string "alcanzar el 100% de su potencial.$"

LavenderRadioP4_Devon_Combates_Texto_9:
.string "En estas salas logramos la combinación\n"
	.string "estadísticamente imposible, que la\l"
	.string "naturaleza habría otorgado durante un\l"
	.string "proceso de evolución de miles de años,\l"
	.string "a una especie que se hubiera adaptado\l"
	.string "de la mejor forma posible para\l"
	.string "incrementar su poder bruto. Sin\l"
	.string "disruptores, sin agentes externos que\l"
	.string "malogren la eficiencia del proceso.$"

LavenderRadioP4_Devon_Combates_Texto_10:
.string "OAK: NIDOKING-X, NIDOQUEEN-Y,\n"
	.string "PORYGON3{PAUSE 25}…{PAUSE 25} son ejemplos de lo obtenido\l"
	.string "por procesos similares a este, aunque\l"
	.string "no tan eficientes como los descritos\l"
	.string "por ELM aquí.$"

LavenderRadioP4_Devon_Combates_Texto_11:
.string "ELM: Así es, ahora disponemos de los\n"
	.string "medios para alcanzar la máxima pureza\l"
	.string "en cuanto prototipos se refiere.$"

LavenderRadioP4_Devon_Combates_Texto_12:
.string "OAK: MEWTWO supuso una mejora de 80\n"
	.string "STATS BASE respecto a MEW.\l"
	.string "Recientemente, las MEGAS y prototipos\l"
	.string "convencionales han supuesto un\l"
	.string "incremento de +100 respecto a los\l"
	.string "originales. El FUERTE VÍNCULO supone\l"
	.string "un +110{PAUSE 25}…{PAUSE 25} ¿Qué podemos esperar de esta\l"
	.string "nueva tecnología, ELM?$"

LavenderRadioP4_Devon_Combates_Texto_13:
.string "ELM: Es obvio que ya nos encontrábamos\n"
	.string "en un punto cercano al límite, en el que\l"
	.string "cualquier mejora significativa era\l"
	.string "prácticamente un espejismo.$"

LavenderRadioP4_Devon_Combates_Texto_14:
.string "Sin embargo, debido a estos procesos,\n"
	.string "estamos convencidos de poder\l"
	.string "incrementar en 150 STATS BASE el\l"
	.string "poder inicial del POKÉMON objetivo.$"

LavenderRadioP4_Devon_Combates_Texto_14.1:
.string "Además, podremos manipular también los\n"
	.string "PS, estadística hasta ahora solo\l"
	.string "modificada por el FUERTE VÍNCULO.$"

LavenderRadioP4_Devon_Combates_Texto_15:
.string "BILL: Así de reservada es la naturaleza\n"
	.string "con sus mejores frutos, aquí solo\l"
	.string "crearemos POKÉMON que potencialmente\l"
	.string "podrían existir en estado salvaje,\l"
	.string "pero nunca lo harán por mera cuestión\l"
	.string "de probabilidad.$"

LavenderRadioP4_Devon_Combates_Texto_16:
.string "OAK: Exacto BILL, deberían de\n"
	.string "sucederse sendos milagros para que\l"
	.string "eso ocurriera.$"

LavenderRadioP4_Devon_Combates_Texto_17:
.string "ELM: Fin de la presentación. Hagamos\n"
	.string "una pequeña demostración de su\l"
	.string "funcionamiento, solo necesitamos\l"
	.string "activar el ordenador, y{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_18:
.string "????: Ejecutivos, recopilad toda\n"
	.string "información disponible. Ocupáos de ELM,\l"
	.string "BILL y ANDRA. Yo me encargaré de OAK.$"

LavenderRadioP4_Devon_Combates_Texto_19:
.string "BILL: ¡Tú! ¿Cómo has podido? ¡Te\n"
	.string "rescaté cuando no tenías nada, te di\l"
	.string "trabajo en SILPH y así nos lo\l"
	.string "agradeces!$"

LavenderRadioP4_Devon_Combates_Texto_20:
.string "MIGUEL: Y eso querías, ¿no BILL? Que me\n"
	.string "sometiese a tus órdenes, creías que\l"
	.string "estaba destinado a ser <el ayudante de\l"
	.string "BILL>, y nada más. Eso se acabó.$"

LavenderRadioP4_Devon_Combates_Texto_21:
.string "Todos vosotros me habéis despreciado,\n"
	.string "habéis ignorado la MEGA PIEDRA de\l"
	.string "AERODACTYL que yo creé.$"

LavenderRadioP4_Devon_Combates_Texto_22:
.string "OAK: BLAINE extrajo ya su poder\n"
	.string "primigenio sin necesidad de MEGA\l"
	.string "PIEDRA.$"

LavenderRadioP4_Devon_Combates_Texto_23:
.string "MIGUEL: ¿Y qué hay de GENESECT? ¿El\n"
	.string "resto de FÓSILES? Habéis pasado por\l"
	.string "alto todas mis investigaciones.$"

LavenderRadioP4_Devon_Combates_Texto_24:
.string "Hasta tú, {PLAYER}, con esa mirada de\n"
	.string "condescendencia que me echaste en la\l"
	.string "reunión. ¿Crees que no estoy a tu\l"
	.string "altura?$"

LavenderRadioP4_Devon_Combates_Texto_25:
.string "OAK: Ya es suficiente, ¿qué es lo que\n"
	.string "quieres?$"

LavenderRadioP4_Devon_Combates_Texto_26:
.string "MIGUEL: Hacer de DEVON la corporación\n"
	.string "más poderosa, y veros caer a todos. No\l"
	.string "os imagináis la de POKÉMON antiguos y\l"
	.string "ancestrales que habitan en HOENN. Es\l"
	.string "allí donde debí haber nacido, no en\l"
	.string "este asqueroso corporativismo que va\l"
	.string "en contra de mis intereses.$"

LavenderRadioP4_Devon_Combates_Texto_27:
.string "????: No puedes evitar que obtengamos\n"
	.string "lo que queremos de aquí, OAK. Solo te\l"
	.string "queda pelear.$"

LavenderRadioP4_Devon_Combates_Texto_28:
.string "MIGUEL: {PLAYER} es mío. Vas a ser\n"
	.string "derrotado, voy a desgastarte hasta\l"
	.string "que debas arrodillarte ante mí por pura\l"
	.string "probabilidad.$"

LavenderRadioP4_Devon_Combates_Texto_30:
.string "¡Científicos! ¡A él!$"

LavenderRadioP4_Devon_Combates_Texto_29:
.string "Se acabaron las reverencias, el honor y\n"
	.string "demás sandeces. Te derrotaré sin\l"
	.string "importar los medios ni la forma. Hasta\l"
	.string "ahora has salido siempre impune, pero\l"
	.string "los espíritus y esencias, por muy puros\l"
	.string "que sean, carecen de algo que les\l"
	.string "impide alcanzar la victoria ocurra lo\l"
	.string "que ocurra: no juegan sucio.$"

LavenderRadioP4_Devon_Combates_Texto_31:
.string "Así que el famoso {PLAYER}. ¿Qué se\n"
	.string "sentirá al pelear contra ti?$"

LavenderRadioP4_Devon_Combates_Texto_32:
.string "Solo eres un ENTRENADOR más.$"

LavenderRadioP4_Devon_Combates_Texto_33:
.string "¡Te mostraré que ese vínculo del que\n"
	.string "habláis no son más que pamplinas!$"

LavenderRadioP4_Devon_Combates_Texto_34:
.string "¿Entonces ese fenómeno es real?$"

LavenderRadioP4_Devon_Combates_Texto_35:
.string "MIGUEL: Esperable, pero mis nuevos\n"
	.string "ayudantes te han desgastado lo\l"
	.string "suficiente.$"

LavenderRadioP4_Devon_Combates_Texto_35.1:
.string "No eres el único capaz de aunar\n"
	.string "tecnología con fuertes lazos.$"

LavenderRadioP4_Devon_Combates_Texto_36:
.string "Solo espera a ver el nuevo equipo que\n"
	.string "mis investigaciones, mis viajes y DEVON,\l"
	.string "me han procurado.$"

LavenderRadioP4_Devon_Combates_Texto_37:
.string "¡Seré yo quién al fin silencie al gran\n"
	.string "ADMIN.JEFE {PLAYER}!$"

LavenderRadioP4_Devon_Combates_Texto_38:
.string "¿¡Otra vez!? ¿Por qué sigue ocurriendo?$"

LavenderRadioP4_Devon_Combates_Texto_39:
.string "????: Entonces este es tu nivel, OAK.\n"
	.string "Gracias, me has proporcionado una\l"
	.string "valiosa información, aparte de las\l"
	.string "ondas de radio.$"

LavenderRadioP4_Devon_Combates_Texto_40:
.string "OAK: {PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_41:
.string "EJECUTIVO: Ya hemos transferido todos\n"
	.string "sus datos a la SEDE DEVON: S12,\l"
	.string "PRESIDENTE.$"

LavenderRadioP4_Devon_Combates_Texto_42:
.string "????: Ha sido un placer, OAK. Gracias\n"
	.string "por vuestra colaboración.$"

LavenderRadioP4_Devon_Combates_Texto_43:
.string "????: La operación ha sido un éxito. Es\n"
	.string "hora de{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_44:
.string "MIGUEL: ¡NO!$"

LavenderRadioP4_Devon_Combates_Texto_45:
.string "¡Nadie irá a ninguna parte hasta que\n"
	.string "acabemos esto! ¡Mi combate con\l"
	.string "{PLAYER} aún no ha acabado!$"

LavenderRadioP4_Devon_Combates_Texto_46:
.string "OAK: ¡Espera! ¿No irás a…?$"

LavenderRadioP4_Devon_Combates_Texto_47:
.string "MIGUEL: ¡Oh, sí!$"

LavenderRadioP4_Devon_Combates_Texto_48:
.string "OAK: ¡¿Te has vuelto loco?! ¡Está en una\n"
	.string "fase muy temprana! ¡Podría\l"
	.string "destruirnos a todos!$"

LavenderRadioP4_Devon_Combates_Texto_49:
.string "MIGUEL: Me basta con que destruya a\n"
	.string "{PLAYER}.$"

LavenderRadioP4_Devon_Combates_Texto_50:
.string "BZZZZ{PAUSE 25}…{PAUSE 25} PROTOTIPO X{PAUSE 25}…{PAUSE 25} ACTIVADO.$"

LavenderRadioP4_Devon_Combates_Texto_51:
.string "BZZZZ{PAUSE 25}…{PAUSE 25} GEN LOCO{PAUSE 25}…{PAUSE 25} ACTIVADO.$"

LavenderRadioP4_Devon_Combates_Texto_52:
.string "MIGUEL: Sí{PAUSE 35}…{PAUSE 35} El mayor potencial físico\n"
	.string "posible, bajo mi control. La clase de\l"
	.string "fuerza bruta necesaria para acabar\l"
	.string "con alguien como tú. Voy a humillarte\l"
	.string "delante de todos, las costuras de tu\l"
	.string "equipo quedarán en evidencia de una\l"
	.string "vez por todas.$"

LavenderRadioP4_Devon_Combates_Texto_53:
.string "No me tomará más que un solo POKÉMON\n"
	.string "para borrarlos a todos.$"

LavenderRadioP4_Devon_Combates_Texto_54:
.string "ANDRA: ¡{PLAYER}! ¡Tu equipo!$"

LavenderRadioP4_Devon_Combates_Texto_55:
.string "MIGUEL: ¡MEWTWO! ¡DESTRUYE!$"

LavenderRadioP4_Devon_Combates_Texto_56:
.string "Pero{PAUSE 25}…{PAUSE 25} ¡Su ATAQUE es superior a 1000!$"

LavenderRadioP4_Devon_Combates_Texto_57:
.string "MIGUEL: ¿Por qué?$"

LavenderRadioP4_Devon_Combates_Texto_58:
.string "¿Por qué no caes, haga lo que haga?$"

LavenderRadioP4_Devon_Combates_Texto_59:
.string "{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_60:
.string "Je{PAUSE 25}…{PAUSE 25} Jejeje{PAUSE 25}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_61:
.string "En el fondo debo darte las gracias. A\n"
	.string "pesar de que antes dije que no\l"
	.string "importaba la forma, lo cierto es que no\l"
	.string "sería lo mismo derrotarte así,\l"
	.string "empleando esa aberración a la\l"
	.string "desesperada.$"

LavenderRadioP4_Devon_Combates_Texto_62:
.string "Ahora dispongo de las mismas\n"
	.string "herramientas que tú, {PLAYER}. La\l"
	.string "tecnología de DEVON y el VÍNCULO que\l"
	.string "necesitaba. Mi victoria será completa\l"
	.string "cuando en igualdad de condiciones,\l"
	.string "todos vean que no eres especial.$"


LavenderRadioP4_Devon_Combates_Texto_63:
.string "MIGUEL: Espera a ver, {PLAYER}. Este\n"
	.string "es solo el inicio de una gran generación\l"
	.string "de FÓSILES ante los que acabarás\l"
	.string "sucumbiendo.$"

LavenderRadioP4_Devon_Combates_Texto_64:
.string "Solo quedáis ANDRA y tú como adalides de\n"
	.string "eso que llamáis tradición. Tus queridos\l"
	.string "MAESTROS de JOHTO ya han mostrado la\l"
	.string "inferioridad de sus equipos frente\l"
	.string "al nuevo orden.$"

LavenderRadioP4_Devon_Combates_Texto_65:
.string "¡Recuerda mis palabras {PLAYER}! ¡Vas\n"
	.string "a acabar tan mal como ellos!$"

LavenderRadioP4_Devon_Combates_Texto_66:
.string "BILL: ¡Maldición! ¿Pero qué ha pasado?$"

LavenderRadioP4_Devon_Combates_Texto_67:
.string "OAK: Que tu ayudante nos ha\n"
	.string "traicionado, BILL. A saber cuánto\l"
	.string "tiempo llevaba asociado con DEVON,\l"
	.string "debimos prestarle más atención.$"

LavenderRadioP4_Devon_Combates_Texto_67.1:
.string "BILL: No puedo creerlo. Por mucho que le\n"
	.string "ofrecieran, incluso investigar nuevos\l"
	.string "fósiles… él jamás se vendería de esa\l"
	.string "forma. Han debido ofrecerle algo más.$"

LavenderRadioP4_Devon_Combates_Texto_67.2:
.string "OAK: ¿Qué quieres decir, BILL?$"

LavenderRadioP4_Devon_Combates_Texto_67.3:
.string "BILL: Se ha comportado de forma un\n"
	.string "tanto extraña. Al igual que yo, siempre\l"
	.string "ha ignorado el vínculo con sus\l"
	.string "POKÉMON, incluso con ese AERODACTYL\l"
	.string "que tanta ilusión le hizo. Pero hoy\l"
	.string "parecía importarle más que nunca, lo\l"
	.string "mismo o más que sus experimentos.$"

LavenderRadioP4_Devon_Combates_Texto_68:
.string "ELM: Él estuvo en la II GRAN REUNIÓN,\n"
	.string "sabe de prácticamente todos nuestros\l"
	.string "proyectos, de los prototipos,MEWTWO…\l"
	.string "Eso es lo importante, BILL.$"

LavenderRadioP4_Devon_Combates_Texto_68.1:
.string "BILL: {PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_69:
.string "OAK: Así es, DEVON estará al tanto de\n"
	.string "todo a estas alturas. Solo nos queda\l"
	.string "informar a GIOVANNI de esto, yo lo\l"
	.string "haré.$"

LavenderRadioP4_Devon_Combates_Texto_70:
.string "ELM: Debemos actuar rápido, GIOVANNI\n"
	.string "es experto en ello. Vosotros dos, ANDRA\l"
	.string "y {PLAYER}, seguro que desempeñaréis\l"
	.string "un papel esencial en la respuesta a\l"
	.string "DEVON.$"

LavenderRadioP4_Devon_Combates_Texto_71:
.string "ANDRA: {PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_72:
.string "OAK: BILL, ELM, esto no puede hacer más\n"
	.string "que unirnos, en la búsqueda del límite\l"
	.string "biológico que acabamos de resaltar\l"
	.string "aquí.$"

LavenderRadioP4_Devon_Combates_Texto_73:
.string "ANDRA: ¿Qué te ha parecido, {PLAYER}?$"

LavenderRadioP4_Devon_Combates_Texto_74:
.string "{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_75:
.string "No{PAUSE 25}…{PAUSE 25} no me refería al ataque de DEVON,\n"
	.string "más bien{PAUSE 25}…{PAUSE 25} a todo lo expuesto por ELM y\l"
	.string "OAK.$"

LavenderRadioP4_Devon_Combates_Texto_76:
.string "Lo cierto es que{PAUSE 25}…{PAUSE 25} desde que derrotaste\n"
	.string "al POKÉMON ESENCIA, y ya en la I GRAN\l"
	.string "REUNIÓN, me temía todo esto. Pero\l"
	.string "quise mirar para otro lado. Una parte de\l"
	.string "mí creía que nada de esto podía pasar,\l"
	.string "que TORRE LAVANDA seguiría, que\l"
	.string "nuestros equipos continuarían\l"
	.string "mejorando de forma -natural-, que\l"
	.string "nuestra progresión lineal y constante\l"
	.string "seguiría{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_77:
.string "Pero todo…todo lo que temía se ha\n"
	.string "hecho evidente en esta reunión. La\l"
	.string "realidad actual de KANTO, nuestros\l"
	.string "propios límites, lo expuesto aquí como\l"
	.string "única salida para llegar más allá{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_78:
.string "Si te digo la verdad, choca\n"
	.string "completamente con mi ideal de cómo\l"
	.string "deberían funcionar las cosas en un\l"
	.string "combate POKÉMON.$"

LavenderRadioP4_Devon_Combates_Texto_79:
.string "El vínculo e interacciones que has ido\n"
	.string "forjando con los tuyos, debería ser el\l"
	.string "elemento más importante a la hora de\l"
	.string "determinar el rendimiento de tu equipo,\l"
	.string "sin embargo{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_80:
.string "El futuro nos impulsa a esa dictadura\n"
	.string "de lo mecánico, el rendimiento de un\l"
	.string "POKÉMON va a estar programado de\l"
	.string "antemano, y lo que es peor{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_81:
.string "Anulará completamente a cualquier otro\n"
	.string "ENTRENADOR, al menos en cuanto\l"
	.string "potencial de STATS BASE. Le hará ver\l"
	.string "ridículo ante esa perfección creada\l"
	.string "artificialmente.$"

LavenderRadioP4_Devon_Combates_Texto_82:
.string "Supongo que al final buscamos lo mismo\n"
	.string "que ZEUS o LANCE, pero haciendo uso de\l"
	.string "la tecnología.$"

LavenderRadioP4_Devon_Combates_Texto_83:
.string "Pero no, el FUERTE VÍNCULO ha\n"
	.string "demostrado que el potencial de un\l"
	.string "POKÉMON, desde su más profunda\l"
	.string "esencia, puede ser moldeable si crees\l"
	.string "en ello. Tú llevaste eso al extremo en\l"
	.string "RUINAS ALFA.$"

LavenderRadioP4_Devon_Combates_Texto_84:
.string "Me niego a pensar que ese potencial ya\n"
	.string "ha mostrado todo lo que tiene. Más aún\l"
	.string "en resignarme a que puede ser\l"
	.string "procesado y mecanizado, tal y cómo\l"
	.string "están haciendo con los PERROS\l"
	.string "LEGENDARIOS y los EEVEE FUERTE\l"
	.string "VÍNCULO.$"

LavenderRadioP4_Devon_Combates_Texto_85:
.string "{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP4_Devon_Combates_Texto_86:
.string "Si existe o no un poder mayor, accesible\n"
	.string "mediante el entrenamiento y que hemos\l"
	.string "pasado por alto, me es imposible\l"
	.string "hallarlo en medio de este ambiente.$"

LavenderRadioP4_Devon_Combates_Texto_87:
.string "Es por ello que desapareceré por una\n"
	.string "temporada, y me centraré\l"
	.string "completamente en esa búsqueda.$"

LavenderRadioP4_Devon_Combates_Texto_88:
.string "Sé que puedo estar yendo tras un\n"
	.string "fantasma, un ideal creado en mi cabeza,\l"
	.string "que ni siquiera existe. Pero ante este\l"
	.string "panorama, siento la obligación de\l"
	.string "hacerlo.$"

LavenderRadioP4_Devon_Combates_Texto_89:
.string "Incluso tú, {PLAYER}, has aunado\n"
	.string "tecnología con tradición. Quizás ahí\l"
	.string "esté tu virtud, no como OAK o BILL,\l"
	.string "incapaces de ver más allá de sus\l"
	.string "experimentos, o yo misma, en el otro\l"
	.string "extremo.$"

LavenderRadioP4_Devon_Combates_Texto_90:
.string "Aún así{PAUSE 45}…{PAUSE 45} me mantendré fiel a mis\n"
	.string "ideales.$"

LavenderRadioP4_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP4_Cuarto_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP4_Cuarto_Cientifico_Texto_1:
.string "Al elogiar a alguien por su falta de\n"
	.string "defectos también insinúas su falta de\l"
	.string "virtudes.$"
